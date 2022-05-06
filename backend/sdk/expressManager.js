import express from 'express';
import cors from 'cors';
import { ObjectId } from 'mongodb';
import hbase from 'hbase';

const expressManager = function ($) {
  const app = express();
  const port = $._config.httpPort;
  $._logger.debug('start expressManager');
  const stockTable = hbase({ host: '192.168.137.128', port: 8888}).table('stock');
  app.use(express.urlencoded({ extended: true }));
  app.use(cors());

  app.get('/', (req, res) => {
    res.send('start');
  });

  app.listen(port, () => {
    $._logger.debug(`express listening on port ${port}`);
  });

  // app.post('/get_article', async (req, res) => {
  //   $._logger.debug(`req url: ${req.url}, req body: ${JSON.stringify(req.body)}`);
  //   if (!req.body.id) {
  //     res.send('id required');
  //     return;
  //   }
  //   $._mongoManager.findOne({'_id': ObjectId(req.body.id)}, (err, result)=>{
  //     res.send(result);
  //   });
  // });

  // app.post('/get_random_article', async (req, res) => {
  //   $._logger.debug(`req url: ${req.url}, req body: ${JSON.stringify(req.body)}`);
  //   if (!req.body.limit) {
  //     res.send('limit required');
  //     return;
  //   }
  //   const limit = parseInt(req.body.limit) > 10 ? 10 : parseInt(req.body.limit);
  //   const pipeline = [
  //     { $sample: { size: limit } }
  //   ];
  //   const cursor = await $._mongoManager.aggre(pipeline);
  //   const data = [];
  //   await cursor.forEach(t => {
  //     t.content = t.content.substring(0, 70);
  //     data.push(t);
  //   });
  //   res.send(data);
  // });

  // app.post('/search_article', async (req, res) => {
  //   $._logger.debug(`req url: ${req.url}, req body: ${JSON.stringify(req.body)}`);
  //   if (!req.body.keyword) {
  //     res.send('keyword required');
  //     return;
  //   }
  //   const query = { $text: { $search: req.body.keyword } };
  //   const cursor = await $._mongoManager.find(query);
  //   const data = [];
  //   await cursor.forEach(t => {
  //     t.content = t.content.substring(0, 70);
  //     data.push(t);
  //   });
  //   res.send(data);
  // });
  app.post('/search_article', async (req, res) => {
    $._logger.debug(`req url: ${req.url}, req body: ${JSON.stringify(req.body)}`);
    if (!req.body.keyword) {
      res.send('keyword required');
      return;
    }
    const query = {
      "query": {
        "match": {
          "title": req.body.keyword,
        }
      }
    };
    
    const result = await $._elasticManager.search(query);
    const data = [];
    result.hits.hits.forEach(e => {
      data.push(e._source);
    });
    // console.log(data);
    res.send(data);
  });

  app.post('/get_article', async (req, res) => {
    $._logger.debug(`req url: ${req.url}, req body: ${JSON.stringify(req.body)}`);
    if (!req.body.title) {
      res.send('keyword required');
      return;
    }
    const rsp = await $._hbaseManager.getNews(req.body.title);
    const formatRes = {};
    if (rsp) {
      rsp.forEach((e)=>{
        if (e.column === 'article:content') {
          formatRes.content = e.$;
        }
        if (e.column === 'article:title') {
          formatRes.title = e.$;
        }
        if (e.column === 'article:url') {
          formatRes.url = e.$;
        }
      });
    }
    res.send(formatRes);
  });

  app.post('/get_stock_board', async (req, res) => {
    $._logger.debug(`req url: ${req.url}, req body: ${JSON.stringify(req.body)}`);
    if (!req.body.stockNo) {
      res.send('stockNo required');
      return;
    }
    const rsp = await $._hbaseManager.getStockBoard(req.body.stockNo, req.body.limit, req.body.start);
    const format = [];
    if (!rsp){
      res.send('err');
      return;
    }
    rsp.forEach((e)=>{
      if (e.$) {
        format.push(JSON.parse(e.$));
      }
    });
    res.send(format);
  });

  app.post('/get_stock_trend', async (req, res) => {
    $._logger.debug(`req url: ${req.url}, req body: ${JSON.stringify(req.body)}`);
    if (!req.body.stockNo) {
      res.send('stockNo required');
      return;
    }
    const rsp = await $._hbaseManager.getStockTrend(req.body.stockNo);
    res.send(rsp[0].$.split(';'));
  });

  app.post('/get_stock_kline', async (req, res) => {
    $._logger.debug(`req url: ${req.url}, req body: ${JSON.stringify(req.body)}`);
    if (!req.body.stockNo) {
      res.send('stockNo required');
      return;
    }
    const rsp = await $._hbaseManager.getStockKline(req.body.stockNo);
    res.send(rsp[0].$.split(';').slice(60));
  });

  app.post('/scan_stock_board', async (req, res) => {
    $._logger.debug(`req url: ${req.url}, req body: ${JSON.stringify(req.body)}`);
    if (!req.body.start) {
      res.send('start required');
      return;
    }
    const result = await $._hbaseManager.scanStockBoard(req.body.start);
    const formatRsp = [];
    result.forEach((e)=>{
      if(e.column === 'info:board' && e.$) {
        formatRsp.push(JSON.parse(e.$));
      } 
    });
    res.send(formatRsp);
  });
};

export default expressManager;
