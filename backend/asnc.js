import hbase from 'hbase';
import {Client}  from '@elastic/elasticsearch';
process.setMaxListeners(0);
var es =  new Client({
    node: 'http://192.168.137.128:9200'
  });
var client = hbase({ host: '192.168.137.128', port: 8888});
var scanner = client
                .table('news')
                .scan({
                });
let count = 0;
let article = {};
const index = 'test';
const limit = 800000;
const start = new Date().getTime();
//扫描Hbase表
scanner.on('readable', function(){
    var chunk;
    while (chunk = scanner.read()) {
      // 列式存储，判断某一行的结束
        if (article.title && article.title !== chunk.key) {
            count ++;
            if(count===limit){
              const end = new Date().getTime();
              console.log(end-start);
              break;
            }
            // 写入ElasticSearch，content截取正文50个字符
            es.index({
              index: index,
              body: {
                title: article.title,
                content: article.content.substr(0, 50),
                url: article.url
            }
          });
          article = {};
        }
        article.title = chunk.key;
        if (chunk.column === 'article:url') {
          article.url = chunk.$;
        } else if(chunk.column === 'article:content') {
          article.content = chunk.$;
        }
    }        
    });
scanner.on('error', function(err) {
    console.error(err);
    });
scanner.on('end', function(){
  const end = new Date().getTime();
  console.log(end-start);
  es.index({
    index: index,
    // type: '_doc',
    // id: article.title,
    body: {
      title: article.title,
      content: article.content,
      url: article.url
  }});
    });