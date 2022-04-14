import mongo from 'mongodb';
const mongoManager = function ($) {
  const mongoClient = mongo.MongoClient;
  this.db = '';
  this.collection = '';
  mongoClient.connect($._config.mongourl, (err, client) => {
    if (err) {
      console.log(err);
      return;
    }
    $._logger.debug("Collection created!");
    this.db = client.db($._config.db);
    this.collection = this.db.collection($._config.collection);
  });
};
mongoManager.prototype.findOne = function (query, callback) {
  this.collection.findOne(query, callback);
};

mongoManager.prototype.findLimit = async function (query, limit) {
  return await this.collection.find(query).limit(limit);
};

mongoManager.prototype.aggre = async function (pipeline) {
  return await this.collection.aggregate(pipeline);
};
export default mongoManager;