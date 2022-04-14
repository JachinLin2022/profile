import express from 'express';
import cors from 'cors';
import { ObjectId } from 'mongodb';


const expressManager = function ($) {
  const app = express();
  const port = $._config.httpPort;
  $._logger.debug('start expressManager');

  app.use(express.urlencoded({ extended: true }));
  app.use(cors());

  app.get('/', (req, res) => {
    res.send('start');
  });

  app.listen(port, () => {
    $._logger.debug(`express listening on port ${port}`);
  });

  app.post('/get_article', async (req, res) => {
    $._logger.debug(`req body: ${JSON.stringify(req.body)}`);
    if (!req.body.id) {
      res.send('id required');
    }
    $._mongoManager.findOne({'_id': ObjectId(req.body.id)}, (err, result)=>{
      res.send(result);
    });
  });

  app.post('/get_random_article', async (req, res) => {
    $._logger.debug(`req body: ${JSON.stringify(req.body)}`);
    if (!req.body.limit) {
      res.send('limit required');
    }
    const limit = parseInt(req.body.limit) > 10 ? 10 : parseInt(req.body.limit);
    const pipeline = [
      { $sample: { size: limit } }
    ];
    const cursor = await $._mongoManager.aggre(pipeline);
    const data = [];
    await cursor.forEach(t => {
      t.content = t.content.substring(0, 70);
      data.push(t);
    });
    res.send(data);
  });

};

export default expressManager;
