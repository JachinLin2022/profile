import {Client}  from '@elastic/elasticsearch';
const elasticManager = function ($) {
  this.client = new Client({
    node: 'http://192.168.137.128:9200'
  });

};
elasticManager.prototype.search = async function(query) {
  return await this.client.search(query);
};

export default elasticManager;