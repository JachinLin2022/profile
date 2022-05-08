import hbase from 'hbase';
import {Client}  from '@elastic/elasticsearch';
process.setMaxListeners(0);
var es =  new Client({
    node: 'http://192.168.137.128:9200'
  });
var client = hbase({ host: '192.168.137.129', port: 8888});
var scanner = client
                .table('news')
                .scan({
                });
var count = 0;
let article = {};
scanner.on('readable', function(){
    var chunk;
    //_results = [];
    while (chunk = scanner.read()) {
        // console.log(chunk);
        if (article.title && article.title !== chunk.key) {
            es.index({
              index: 'financial_data',
              // type: '_doc',
              // id: article.title,
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

        // count ++;
        // if (count===7){
        //     break;
        // }


        // article.content = chunk ? chunk.$ : '';
        // console.log(chunk);
        // chunk = scanner.read();
        // article.title = chunk ? chunk.$ : '';
        // console.log(chunk);
        // chunk = scanner.read();
        // article.url = chunk ? chunk.$ : '';
        // console.log(article);

    }        
    });
scanner.on('error', function(err) {
    console.error(err);
    });
scanner.on('end', function(){
  es.index({
    index: 'financial_data',
    // type: '_doc',
    // id: article.title,
    body: {
      title: article.title,
      content: article.content,
      url: article.url
  }});
    });