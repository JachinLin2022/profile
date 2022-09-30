import mongo from 'mongodb';
const mongoClient = mongo.MongoClient;
mongoClient.connect('mongodb://localhost:27017', (err, client) => {
  if (err) {
    console.log(err);
    return;
  }
  const db = client.db('financialData');
  const collection = db.collection('scrapy_items');
  const query = {
    
  };
  collection.find(query).toArray((err, res)=>{
    // console.log(err);
    console.log(res);
  });




});