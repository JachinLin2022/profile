/* eslint-disable no-undef */
import fs from 'fs';
import expressManager from './sdk/expressManager.js';
import mongoManager from './sdk/mongoManager.js';
import Logger from './sdk/logger.js';

global.$ = {};
function init() {
  fs.readFile('C:\\Code\\profile\\backend\\config.json', 'utf8', (err, data) => {
    if (err) {
      console.error(err);
      return;
    }
    $._config = JSON.parse(data);
    $._logger = Logger(import.meta.url);
    $._expressManager = new expressManager($);
    $._mongoManager = new mongoManager($);
  });
}
init();

