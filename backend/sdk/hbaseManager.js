import hbase from 'hbase';
const hbaseManager = function ($) {
  this.$ = $;
  this.client = hbase({ host: '192.168.137.128', port: 8888});
  this.newsTable = this.client.table('news');
  this.stockTable = this.client.table('stock');
  // this.stockScanner = this.stockTable.scan({
  //   startRow: '000001',
  //   endRow:'000004'
  // });
  // this.newsTable.schema((error, schema)=>{
  //   console.log(schema);
  // });
};
hbaseManager.prototype.getNews = async function(rowKey) {
  return new Promise((resolve,reject)=>{
    this.newsTable.row(rowKey).get((err, res)=>{
      if (err) {
        this.$._logger.debug(err);
        return resolve('');
      }
      if (res) {
        return resolve(res);
      }
    });
  });
};

hbaseManager.prototype.getStockBoard = async function(rowKey, limit, start) {
  return new Promise((resolve, reject)=>{
    this.stockTable.row(rowKey).get('info:board', (err, res)=>{
      if (err) {
        this.$._logger.debug(err);
      return resolve('');
      }
      if (res) {
        // console.log(res);
        return resolve(res);
      }
    }, limit, start);
  });
};

hbaseManager.prototype.getStockTrend = async function(rowKey) {
  return new Promise((resolve, reject)=>{
    this.stockTable.row(rowKey).get('info:trend', (err, res)=>{
      if (err) {
        this.$._logger.debug(err);
      return resolve('');
      }
      if (res) {
        return resolve(res);
      }
    });
  });
};

hbaseManager.prototype.scanStockBoard = async function(start) {
  return new Promise((resolve, reject)=>{
    this.stockTable.scan({
      startRow: String(start).padStart(6, '0'),
      endRow: String(Number(start) + 10).padStart(6, '0'),
      column: 'info:board',
    }, (err, rows)=>{
      if (err) {
        this.$._logger.debug(err);
        return resolve('');
      }
      // console.log(rows);
      return resolve(rows);
    });
  });
};

export default hbaseManager;