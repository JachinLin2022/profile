http://push2.eastmoney.com/api/qt/stock/trends2/get?fields1=f1,f2,f3,f4,f5,f6,f7,f8,f9,f10,f11,f12,f13,f17&fields2=f51,f52,f53,f54,f55,f56,f57,f58&ut=fa5fd1943c7b386f172d6893dbfba10b&ndays=1&iscr=0&iscca=0&wbp2u=|0|0|0|web&secid=1.688091&cb=jQuery1124025536589133107834_1651469558349&_=1651469558350




case "hs_a_board":
            (t = new o(f.ops4)).Bankuai("#table_wrapper", "m:0+t:6,m:0+t:80,m:1+t:2,m:1+t:23,m:0+t:81+s:2048");
            break;
        case "sh_a_board":
            (t = new o(f.ops4)).Bankuai("#table_wrapper", "m:1+t:2,m:1+t:23");
            break;
        case "sz_a_board":
            (t = new o(f.ops4)).Bankuai("#table_wrapper", "m:0+t:6,m:0+t:80");
            break;
        case "bj_a_board":
            (t = new o(f.ops4)).Bankuai("#table_wrapper", "m:0+t:81+s:2048");
            break;
        case "newshares":
            (t = new o(f.opsnewgu)).Bankuai("#table_wrapper", "m:0+f:8,m:1+f:8");
            break;
        case "sme_board":
            (t = new o(f.ops4)).Bankuai("#table_wrapper", "m:0+t:13");
            break;
        case "gem_board":
            (t = new o(f.ops4)).Bankuai("#table_wrapper", "m:0+t:80"),
            t.refreshInit(60);
            break;
        case "gem_board_zcz":
            (t = new o(f.ops4)).Bankuai("#table_wrapper", "m:0+t:80+s:131072"),
            t.refreshInit(60);
            break;
        case "gem_board_hzz":
            (t = new o(f.ops4)).Bankuai("#table_wrapper", "m:0+t:80+s:!131072"),
            t.refreshInit(60);
            break;
        case "kcb_board":
            (t = new o(f.opsKcb)).Bankuai("#table_wrapper", "m:1+t:23"),
            t.refreshInit(60);
            break;
        case "sh_hk_board":
            new o(f.ops5).Bankuai("#table_wrapper", "b:BK0707");
            break;
        case "sz_hk_board":
            new o(f.ops5).Bankuai("#table_wrapper", "b:BK0804");
            break;
        case "b_board":
            (t = new o(f.ops4)).Bankuai("#table_wrapper", "m:0+t:7,m:1+t:3");
            break;
        case "ab_comparison_sh":
            (t = new o(f.abgu)).Bankuai("#table_wrapper", "m:1+b:BK0498");
            break;
        case "ab_comparison_sz":
            (t = new o(f.abgu)).Bankuai("#table_wrapper", "m:0+b:BK0498");
            break;
        case "st_board":
            (t = new o(f.ops4)).Bankuai("#table_wrapper", "m:0+f:4,m:1+f:4");
            break;
        case "st_board_sh":
            (t = new o(f.ops4)).Bankuai("#table_wrapper", "m:1+f:4");
            break;
        case "st_board_sz":
            (t = new o(f.ops4)).Bankuai("#table_wrapper", "m:0+f:4");
            break;
        case "st_board_kcb":
            (t = new o(f.ops4)).Bankuai("#table_wrapper", "m:1+t:23+f:4");
            break;
        case "st_board_cyb":
            var t;
            (t = new o(f.ops4)).Bankuai("#table_wrapper", "m:0+t:80+f:4");
            break;
        case "staq_net_board":
            new o(f.ops6).Bankuai("#table_wrapper", "m:0+s:3");
            break;
        case "index_sh":
            new o(f.ops7).Bankuai("#table_wrapper", "m:1+s:2");
            break;
        case "index_sz":
            new o(f.ops7).Bankuai("#table_wrapper", "m:0+t:5");
            break;
        case "index_components":
            new o(f.ops7).Bankuai("#table_wrapper", "m:1+s:3,m:0+t:5");
            break;
        case "index_zzzs":
            new o(f.ops7).Bankuai("#table_wrapper", "m:2");
            break;
        case "hk_sh_stocks":
            new o(f.hkshstocks).Bankuai("#table_wrapper", "b:MK0144");
            break;
        case "hk_sz_stocks":
            new o(f.hkshstocks).Bankuai("#table_wrapper", "b:MK0146");
            break;
        case "ah_comparison":
        case "hkah_comparison":
            l.default.isDelayCache().then((function(e) {
                var t = "b:MK0101";
                e.re && (t = "b:DLMK0101",
                $(".hkruletip").html(e.message).css({
                    display: "inline-block"
                })),
                new o(f.ahgu2).Bankuai("#table_wrapper", t)
            }
            ));
            break;
        case "neeq_stocks":
            new o(f.ops9).Bankuai("#table_wrapper", "m:0+t:81+s:!2052");
            break;
        case "neeq_selected":
            new o(f.ops9).Bankuai("#table_wrapper", "m:0+t:81+s:2048");
            break;
        case "neeq_innovate":
            new o(f.ops9).Bankuai("#table_wrapper", "m:0+s:512");
            break;
        case "neeq_basic":
            new o(f.ops9).Bankuai("#table_wrapper", "m:0+s:256");
            break;
        case "neeq_agreement":
            new o(f.ops9).Bankuai("#table_wrapper", "m:0+s:64");
            break;
        case "neeq_marketmaking":
            new o(f.ops9).Bankuai("#table_wrapper", "m:0+s:128");
            break;
        case "neeq_bidding":
            new o(f.ops9).Bankuai("#table_wrapper", "m:0+s:32");
            break;
        case "hk_stocks":
            c("m:116+t:3,m:116+t:4,m:116+t:1,m:116+t:2", "m:128+t:3,m:128+t:4,m:128+t:1,m:128+t:2");
            break;
        case "hk_mainboard":
            c("m:116+t:3", "m:128+t:3");
            break;
        case "hk_gem":
            c("m:116+t:4", "m:128+t:4");
            break;
        case "hk_wellknown":
            c("b:MK0106", "b:DLMK0106");
            break;
        case "hk_bluechips":
            c("b:MK0104", "b:DLMK0104");
            break;
        case "hk_redchips":
            c("b:MK0102", "b:DLMK0102");
            break;
        case "hk_redchips_components":
            c("b:MK0111", "b:DLMK0111");
            break;
        case "hk_stateowned":
            c("b:MK0103", "b:DLMK0103");
            break;
        case "hk_stateowned_components":
            c("b:MK0112", "b:DLMK0112");
            break;
        case "hk_components":
            c("b:MK0146,b:MK0144", "b:DLMK0146,b:DLMK0144");
            break;
        case "hsi_large_components":
            c("b:MK0141", "b:DLMK0141");
            break;
        case "hsi_medium_components":
            c("b:MK0142", "b:DLMK0142");
            break;
        case "hk_adr":
            l.default.isDelayCache().then((function(e) {
                var t = new o(f.hkadr);
                e.re ? (t.Bankuai("#table_wrapper", "m:128+s:1"),
                $(".hkruletip").html(e.message).css({
                    display: "inline-block"
                })) : t.Bankuai("#table_wrapper", "m:116+s:1")
            }
            ));
            break;
        case "hk_index":
            new o(f.hkindex).Bankuai("#table_wrapper", "m:124,m:125,m:305");
            break;
        case "hk_warrants":
            l.default.isDelayCache().then((function(e) {
                var t = new o(f.hkindex);
                e.re ? (t.Bankuai("#table_wrapper", "m:128+t:6"),
                $(".hkruletip").html(e.message).css({
                    display: "inline-block"
                })) : t.Bankuai("#table_wrapper", "m:116+t:6")
            }
            ));
            break;
        case "hk_CBBCs":
            l.default.isDelayCache().then((function(e) {
                var t = new o(f.hkindexNXZ);
                e.re ? (t.Bankuai("#table_wrapper", "m:128+t:5"),
                $(".hkruletip").html(e.message).css({
                    display: "inline-block"
                })) : t.Bankuai("#table_wrapper", "m:116+t:5")
            }
            ));
            break;
        case "us_stocks":
            new o(f.usstocks).Bankuai("#table_wrapper", "m:105,m:106,m:107");
            break;
        case "us_chinese":
            new o(f.usstocks).Bankuai("#table_wrapper", "b:MK0201");
            break;
        case "us_index":
            new o(f.usindex).Bankuai("#table_wrapper", "i:100.NDX,i:100.DJIA,i:100.SPX");
            break;
        case "us_pinksheet":
            new o(f.usstocks).Bankuai("#table_wrapper", "m:153");
            break;
        case "us_wellknown":
            new o(f.usstocks).Bankuai("#table_wrapper", "b:MK0001");
            break;
        case "us_technology":
            new o(f.usstocks).Bankuai("#table_wrapper", "b:MK0216");
            break;
        case "us_financial":
            new o(f.usstocks).Bankuai("#table_wrapper", "b:MK0217");
            break;
        case "us_medicine_food":
            new o(f.usstocks).Bankuai("#table_wrapper", "b:MK0218");
            break;
        case "us_media":
            new o(f.usstocks).Bankuai("#table_wrapper", "b:MK0220");
            break;
        case "us_automotive_energy":
            new o(f.usstocks).Bankuai("#table_wrapper", "b:MK0219");
            break;
        case "us_manufacture_retail":
            new o(f.usstocks).Bankuai("#table_wrapper", "b:MK0221");
            break;
        case "us_chinese_internet":
            new o(f.usstocks).Bankuai("#table_wrapper", "b:MK0202");
            break;
        case "global_asia":
            new o(f.globalamerica).Bankuai("#table_wrapper", "i:1.000001,i:0.399001,i:0.399005,i:0.399006,i:1.000300,i:100.HSI,i:100.HSCEI,i:124.HSCCI,i:100.TWII,i:100.N225,i:100.KOSPI200,i:100.KS11,i:100.STI,i:100.SENSEX,i:100.KLSE,i:100.SET,i:100.PSI,i:100.KSE100,i:100.VNINDEX,i:100.JKSE,i:100.CSEALL");
            break;
        case "global_america":
            new o(f.globalamerica).Bankuai("#table_wrapper", "i:100.DJIA,i:100.SPX,i:100.NDX,i:100.TSX,i:100.BVSP,i:100.MXX");
            break;
        case "global_euro":
            new o(f.globalamerica).Bankuai("#table_wrapper", "i:100.SX5E,i:100.FTSE,i:100.MCX,i:100.AXX,i:100.FCHI,i:100.GDAXI,i:100.RTS,i:100.IBEX,i:100.PSI20,i:100.OMXC20,i:100.BFX,i:100.AEX,i:100.WIG,i:100.OMXSPI,i:100.SSMI,i:100.HEX,i:100.OSEBX,i:100.ATX,i:100.MIB,i:100.ASE,i:100.ICEXI,i:100.PX,i:100.ISEQ");
            break;
        case "global_australia":
            new o(f.globalamerica).Bankuai("#table_wrapper", "i:100.AS51,i:100.AORD,i:100.NZ50");
            break;
        case "global_qtzs":
            new o(f.globalamerica).Bankuai("#table_wrapper", "i:100.UDI,i:100.BDI,i:100.CRB");
            break;
        case "futures_cffex":
            var r = {
                type: "zjs",
                order: "zdf",
                url: s.qihuourl + "/list/8"
            };
            new n(r).Qihuo("#table_wrapper");
            break;
        case "futures_cffex-_TS":
            r = {
                type: "zjs",
                order: "zdf",
                url: s.qihuourl + "/list/variety/8/6"
            };
            new n(r).Qihuo("#table_wrapper");
            break;
        case "futures_cffex-_T":
            r = {
                type: "zjs",
                order: "zdf",
                url: s.qihuourl + "/list/variety/8/4"
            };
            new n(r).Qihuo("#table_wrapper");
            break;
        case "futures_cffex-_TF":
            r = {
                type: "zjs",
                order: "zdf",
                url: s.qihuourl + "/list/variety/8/5"
            };
            new n(r).Qihuo("#table_wrapper");
            break;
        case "futures_cffex-_IF":
            r = {
                type: "zjs",
                order: "zdf",
                url: s.qihuourl + "/list/variety/8/2"
            };
            new n(r).Qihuo("#table_wrapper");
            break;
        case "futures_cffex-_IH":
            r = {
                type: "zjs",
                order: "zdf",
                url: s.qihuourl + "/list/variety/8/3"
            };
            new n(r).Qihuo("#table_wrapper");
            break;
        case "futures_cffex-_IC":
            r = {
                type: "zjs",
                order: "zdf",
                url: s.qihuourl + "/list/variety/8/1"
            };
            new n(r).Qihuo("#table_wrapper");
            break;
        case "hk_index_futures":
            r = {
                type: "gjs",
                order: "name",
                orderDur: "1",
                url: s.qihuourl + "/list/HKINDEXF"
            };
            new n(r).Qihuo("#table_wrapper");
            break;
        case "hk_stock_futures":
            r = {
                type: "gjs_gpqh",
                order: "name",
                orderDur: "1",
                url: s.qihuourl + "/list/HKSTOCKF"
            };
            new n(r).Qihuo("#table_wrapper");
            break;
        case "HCF_CUS":
            r = {
                type: "gjs",
                order: "name",
                orderDur: "1",
                url: s.qihuourl + "/list/HKCNYF"
            };
            new n(r).Qihuo("#table_wrapper");
            break;
        case "HMFS_LRP":
            r = {
                type: "gjs",
                order: "name",
                orderDur: "1",
                url: s.qihuourl + "/list/HKMETALFS"
            };
            new n(r).Qihuo("#table_wrapper");
            break;
        case "futures_global":
            r = {
                type: "gjqh",
                order: "zdf",
                url: s.qihuourl + "/list/COMEX,NYMEX,COBOT,SGX,NYBOT,LME,MDEX,TOCOM,IPE"
            };
            new n(r).Qihuo("#table_wrapper");
            break;
        case "futures_global-comex":
            r = {
                type: "gjqh",
                order: "zdf",
                url: s.qihuourl + "/list/COMEX"
            };
            new n(r).Qihuo("#table_wrapper");
            break;
        case "futures_global-nymex":
            r = {
                type: "gjqh",
                order: "zdf",
                url: s.qihuourl + "/list/NYMEX"
            };
            new n(r).Qihuo("#table_wrapper");
            break;
        case "futures_global-cobot":
            r = {
                type: "gjqh",
                order: "zdf",
                url: s.qihuourl + "/list/COBOT"
            };
            new n(r).Qihuo("#table_wrapper");
            break;
        case "futures_global-sgx":
            r = {
                type: "gjqh",
                order: "zdf",
                url: s.qihuourl + "/list/SGX"
            };
            new n(r).Qihuo("#table_wrapper");
            break;
        case "futures_global-nybot":
            r = {
                type: "gjqh",
                order: "zdf",
                url: s.qihuourl + "/list/NYBOT"
            };
            new n(r).Qihuo("#table_wrapper");
            break;
        case "futures_global-lme":
            r = {
                type: "gjqh",
                order: "zdf",
                url: s.qihuourl + "/list/LME"
            };
            new n(r).Qihuo("#table_wrapper");
            break;
        case "futures_global-mdex":
            r = {
                type: "gjqh",
                order: "zdf",
                url: s.qihuourl + "/list/MDEX"
            };
            new n(r).Qihuo("#table_wrapper");
            break;
        case "futures_global-tocom":
            r = {
                type: "gjqh",
                order: "zdf",
                url: s.qihuourl + "/list/TOCOM"
            };
            new n(r).Qihuo("#table_wrapper");
            break;
        case "futures_global-ipe":
            r = {
                type: "gjqh",
                order: "zdf",
                url: s.qihuourl + "/list/IPE"
            };
            new n(r).Qihuo("#table_wrapper");
            break;
        case "futures_finance":
            r = {
                blockName: "financial",
                type: "gjqh",
                order: "zdf",
                url: s.qihuourl + "/list/block"
            };
            new n(r).Qihuo("#table_wrapper"),
            $(".linkToApp").length || $("#table_wrapper-table").after('<a class="linkToApp"  tracker-eventcode="hqzx_jrqh_ckgdjrqh_dj" style="display:block;margin-top:10px;" href="https://zqhd.eastmoney.com/Html/aghd/pc/20170918/html/activity2.html?tz=xxlout_dfcfappweb_random_0001447a" target="_blank">剩余28个国际金融期货，请至东方财富APP内查看 》</a>');
            break;
        case "futures_energy":
            r = {
                blockName: "energy",
                type: "gjqh",
                order: "zdf",
                url: s.qihuourl + "/list/block"
            };
            new n(r).Qihuo("#table_wrapper");
            break;
        case "futures_metal":
            r = {
                blockName: "metal",
                type: "gjqh",
                order: "zdf",
                url: s.qihuourl + "/list/block"
            };
            new n(r).Qihuo("#table_wrapper");
            break;
        case "futures_farmproduce":
            r = {
                blockName: "agricultural",
                type: "gjqh",
                order: "zdf",
                url: s.qihuourl + "/list/block"
            };
            new n(r).Qihuo("#table_wrapper");
            break;
        case "fund_close_end":
            new o(f.fundcloseend).Bankuai("#table_wrapper", "e:19");
            break;
        case "fund_etf":
            new o(f.fundcloseend).Bankuai("#table_wrapper", "b:MK0021,b:MK0022,b:MK0023,b:MK0024");
            break;
        case "fund_lof":
            new o(f.fundcloseend).Bankuai("#table_wrapper", "b:MK0404,b:MK0405,b:MK0406,b:MK0407");
            break;
        case "fund_reits_all":
            new o(f.fundcloseend_reits).Bankuai("#table_wrapper", "m:1+t:9+e:97,m:0+t:10+e:97");
            break;
        case "fund_reits_sh":
            new o(f.fundcloseend_reits).Bankuai("#table_wrapper", "m:1+t:9+e:97");
            break;
        case "fund_reits_sz":
            new o(f.fundcloseend_reits).Bankuai("#table_wrapper", "m:0+t:10+e:97");
            break;
        case "bond_index":
            new o(f.bond).Bankuai("#table_wrapper", "i:1.000012,i:1.000013,i:1.000022,i:1.000061,i:0.395021,i:0.395022,i:0.395031,i:0.395032,i:0.399481");
            break;
        case "bond_sh":
            new o(f.bond).Bankuai("#table_wrapper", "m:1+t:4");
            break;
        case "bond_national_sh":
            new o(f.bondnew).Bankuai("#table_wrapper", "m:1+b:MK0351");
            break;
        case "bond_enterprise_sh":
            new o(f.bondnew).Bankuai("#table_wrapper", "m:1+b:MK0353");
            break;
        case "bond_convertible_sh":
            new o(f.bond).Bankuai("#table_wrapper", "m:1+b:MK0354");
            break;
        case "bond_sz":
            new o(f.bond).Bankuai("#table_wrapper", "m:0+t:8");
            break;
        case "bond_national_sz":
            new o(f.bondnew).Bankuai("#table_wrapper", "m:0+b:MK0351");
            break;
        case "bond_enterprise_sz":
            new o(f.bondnew).Bankuai("#table_wrapper", "m:0+b:MK0353");
            break;
        case "bond_convertible_sz":
            new o(f.bond).Bankuai("#table_wrapper", "m:0+b:MK0354");
            break;
        case "bond_sh_buyback":
            new o(f.bondnew).Bankuai("#table_wrapper", "m:1+b:MK0356");
            break;
        case "bond_sz_buyback":
            new o(f.bondnew).Bankuai("#table_wrapper", "m:0+b:MK0356");
            break;
        case "forex_all":
            new o(f.forex).Bankuai("#table_wrapper", "m:119,m:120,m:121,m:133");
            break;
        case "forex_basic":
            new o(f.forex).Bankuai("#table_wrapper", "b:MK0300");
            break;
        case "forex_cross":
            new o(f.forex).Bankuai("#table_wrapper", "b:MK0301");
            break;
        case "forex_cny":
            new o(f.forex).Bankuai("#table_wrapper", "m:120,m:121+t:!2,m:133");
            break;
        case "forex_cnyc":
            new o(f.forex).Bankuai("#table_wrapper", "m:120");
            break;
        case "forex_cnyi":
            new o(f.forex).Bankuai("#table_wrapper", "m:121+t:1");
            break;
        case "forex_cnyb":
            location.href = "/center/gridlist.html#forex_cny";
            break;
        case "forex_cnh":
            new o(f.forex).Bankuai("#table_wrapper", "m:133");
            break;
        case "forex_exchange_icbc":
            new o(f.whpj).Bankuai("#table_wrapper", "m:162+s:1");
            break;
        case "forex_exchange_abc":
            new o(f.whpj).Bankuai("#table_wrapper", "m:162+s:2");
            break;
        case "forex_exchange_boc":
            new o(f.whpj).Bankuai("#table_wrapper", "m:162+s:4");
            break;
        case "forex_exchange_ccb":
            new o(f.whpj).Bankuai("#table_wrapper", "m:162+s:8");
            break;
        case "forex_exchange_bcm":
            new o(f.whpj).Bankuai("#table_wrapper", "m:162+s:16");
            break;
        case "forex_exchange_cmb":
            new o(f.whpj).Bankuai("#table_wrapper", "m:162+s:32");
            break;
        case "options_sh50etf_all":
            new o(f.qqsc).Bankuai("#table_wrapper", "m:10"),
            u();
            break;
        case "options_sz50etf_txbj":
            new a({
                name: "50ETF",
                type: "1.510050"
            }),
            u();
            break;
        case "options_sz50etf_all":
            new o(f.qqsc).Bankuai("#table_wrapper", "m:10+c:510050"),
            u();
            break;
        case "options_sz50etf_rengou":
            new o(f.qqsc).Bankuai("#table_wrapper", "m:10+c:510050+t:173"),
            u();
            break;
        case "options_sz50etf_rengu":
            new o(f.qqsc).Bankuai("#table_wrapper", "m:10+c:510050+t:174"),
            u();
            break;
        case "options_sahs300etf_txbj":
            new a({
                type: "1.510300",
                name: "300ETF"
            }),
            u();
            break;
        case "options_sahs300etf_all":
            new o(f.qqsc).Bankuai("#table_wrapper", "m:10+c:510300"),
            u();
            break;
        case "options_sahs300etf_rengou":
            new o(f.qqsc).Bankuai("#table_wrapper", "m:10+c:510300+t:173"),
            u();
            break;
        case "options_sahs300etf_rengu":
            new o(f.qqsc).Bankuai("#table_wrapper", "m:10+c:510300+t:174"),
            u();
            break;
        case "options_sehs300etf_txbj":
            new a({
                type: "0.159919",
                name: "300ETF"
            }),
            u();
            break;
        case "options_sehs300etf_all":
            new o(f.qqsc).Bankuai("#table_wrapper", "m:12+c:159919"),
            u();
            break;
        case "options_sehs300etf_rengou":
            new o(f.qqsc).Bankuai("#table_wrapper", "m:12+c:159919+t:178"),
            u();
            break;
        case "options_sehs300etf_rengu":
            new o(f.qqsc).Bankuai("#table_wrapper", "m:12+c:159919+t:179"),
            u();
            break;
        case "options_szetf_all":
            new o(f.qqsc).Bankuai("#table_wrapper", "m:12"),
            u();
            break;
        case "options_sz300etf_all":
            new o(f.qqsc).Bankuai("#table_wrapper", "m:12");
            break;
        case "options_sh50etf_call":
            new o(f.qqsc).Bankuai("#table_wrapper", "m:10+t:173"),
            u();
            break;
        case "options_sh50etf_put":
            new o(f.qqsc).Bankuai("#table_wrapper", "m:10+t:174"),
            u();
            break;
        case "options_shfe_all":
            r = {
                type: "qqsc",
                order: "zdf",
                url: s.qihuourl + "/list/SHFEOPTION"
            };
            new n(r).Qihuo("#table_wrapper");
            break;
        case "options_cu_all":
            r = {
                type: "qqsc",
                order: "zdf",
                url: s.qihuourl + "/list/variety/SHFEOPTION/1"
            };
            new n(r).Qihuo("#table_wrapper");
            break;
        case "options_ru_all":
            r = {
                type: "qqsc",
                order: "zdf",
                url: s.qihuourl + "/list/variety/SHFEOPTION/2"
            };
            new n(r).Qihuo("#table_wrapper");
            break;
        case "options_au_all":
            r = {
                type: "qqsc",
                order: "zdf",
                url: s.qihuourl + "/list/variety/151/3"
            };
            new n(r).Qihuo("#table_wrapper");
            break;
        case "options_dce_all":
            r = {
                type: "qqsc",
                order: "zdf",
                url: s.qihuourl + "/list/DCEOPTION"
            };
            new n(r).Qihuo("#table_wrapper");
            break;
        case "options_beanpulp_all":
            r = {
                type: "qqsc",
                order: "zdf",
                url: s.qihuourl + "/list/variety/DCEOPTION/1"
            };
            new n(r).Qihuo("#table_wrapper");
            break;
        case "options_c_all":
            r = {
                type: "qqsc",
                order: "zdf",
                url: s.qihuourl + "/list/variety/DCEOPTION/2"
            };
            new n(r).Qihuo("#table_wrapper");
            break;
        case "options_t_all":
            r = {
                type: "qqsc",
                order: "zdf",
                url: s.qihuourl + "/list/variety/DCEOPTION/3"
            };
            new n(r).Qihuo("#table_wrapper");
            break;
        case "options_lpg_all":
            r = {
                type: "qqsc",
                order: "zdf",
                url: s.qihuourl + "/list/variety/DCEOPTION/4"
            };
            new n(r).Qihuo("#table_wrapper");
            break;
        case "options_pp_all":
            r = {
                type: "qqsc",
                order: "zdf",
                url: s.qihuourl + "/list/variety/DCEOPTION/5"
            };
            new n(r).Qihuo("#table_wrapper");
            break;
        case "options_pvc_all":
            r = {
                type: "qqsc",
                order: "zdf",
                url: s.qihuourl + "/list/variety/DCEOPTION/6"
            };
            new n(r).Qihuo("#table_wrapper");
            break;
        case "options_pe_all":
            r = {
                type: "qqsc",
                order: "zdf",
                url: s.qihuourl + "/list/variety/DCEOPTION/7"
            };
            new n(r).Qihuo("#table_wrapper");
            break;
        case "options_p_all":
            r = {
                type: "qqsc",
                order: "zdf",
                url: s.qihuourl + "/list/variety/DCEOPTION/8"
            };
            new n(r).Qihuo("#table_wrapper");
            break;
        case "options_sc_all":
            r = {
                type: "qqsc",
                order: "zdf",
                url: s.qihuourl + "/list/variety/INEOPTION/1"
            };
            new n(r).Qihuo("#table_wrapper");
            break;
        case "options_czce_all":
            r = {
                type: "qqsc",
                order: "zdf",
                url: s.qihuourl + "/list/CZCEOPTION"
            };
            new n(r).Qihuo("#table_wrapper");
            break;
        case "options_ine_all":
            r = {
                type: "qqsc",
                order: "zdf",
                url: s.qihuourl + "/list/INEOPTION"
            };
            new n(r).Qihuo("#table_wrapper");
            break;
        case "options_sugar_all":
            r = {
                type: "qqsc",
                order: "zdf",
                url: s.qihuourl + "/list/variety/CZCEOPTION/1"
            };
            new n(r).Qihuo("#table_wrapper");
            break;
        case "options_cf_all":
            r = {
                type: "qqsc",
                order: "zdf",
                url: s.qihuourl + "/list/variety/CZCEOPTION/2"
            };
            new n(r).Qihuo("#table_wrapper");
            break;
        case "options_cf_ta":
            r = {
                type: "qqsc",
                order: "zdf",
                url: s.qihuourl + "/list/variety/CZCEOPTION/4"
            };
            new n(r).Qihuo("#table_wrapper");
            break;
        case "options_cf_ma":
            r = {
                type: "qqsc",
                order: "zdf",
                url: s.qihuourl + "/list/variety/CZCEOPTION/3"
            };
            new n(r).Qihuo("#table_wrapper");
            break;
        case "options_cf_cp":
            r = {
                type: "qqsc",
                order: "zdf",
                url: s.qihuourl + "/list/variety/CZCEOPTION/5"
            };
            new n(r).Qihuo("#table_wrapper");
            break;
        case "options_cffex_all":
            r = {
                type: "qqsc",
                order: "zdf",
                url: s.qihuourl + "/list/option/11",
                sc: 11
            };
            new n(r).Qihuo("#table_wrapper");
            break;
        case "options_cffex_io":
            r = {
                type: "qqsc",
                order: "zdf",
                url: s.qihuourl + "/list/11",
                sc: 11
            };
            new n(r).Qihuo("#table_wrapper");
            break;
        case "options_zjcffex_txbj":
            new i({
                cacheName: "zjstxbj"
            });
            break;
        case "options_zjcffex_all":
            r = {
                type: "qqsc",
                order: "zdf",
                url: s.qihuourl + "/list/option/11?variety=1",
                sc: 11
            };
            new n(r).Qihuo("#table_wrapper");
            break;
        case "options_zjcffex_rengou":
            r = {
                type: "qqsc",
                order: "zdf",
                url: s.qihuourl + "/list/option/11?variety=1&cp=c",
                sc: 11
            };
            new n(r).Qihuo("#table_wrapper");
            break;
        case "options_zjcffex_rengu":
            r = {
                type: "qqsc",
                order: "zdf",
                url: s.qihuourl + "/list/option/11?variety=1&cp=p",
                sc: 11
            };
            new n(r).Qihuo("#table_wrapper");
            break;
        case "options_uscny_all":
            l.default.isDelayCache().then((function(e) {
                var t = {
                    type: "qqsc",
                    order: "zdf",
                    url: s.qihuourl + "/list/HKUSDCNHOP"
                };
                e.re && (t.url = s.qihuourl + "/list/HKUSDCNHOPDL",
                $(".hkruletip").html(e.message).css({
                    display: "inline-block"
                })),
                new n(t).Qihuo("#table_wrapper")
            }
            ));
            break;
        case "gold_sh_spotgoods":
            new o(f.gold).Bankuai("#table_wrapper", "m:118");
            break;
        case "gold_sh_futures":
            new o(f.zjs).Bankuai("#table_wrapper", "m:113+t:5");
            break;
        case "nobalmetal_spotgoods":
            new o(f.gold,"nobalmetal_spotgoods").Bankuai("#table_wrapper", "m:122,m:123");
            break;
        case "nobalmetal_futures":
            new o(f.gold).Bankuai("#table_wrapper", "i:111.JAGC,i:101.QI00Y,i:111.JPAC,i:101.HG00Y,i:111.JAUC,i:111.JPLC,i:102.PL00Y,i:101.QO00Y,i:101.MGC00Y,i:101.GC00Y,i:101.SI00Y,i:102.PA00Y");
            break;
        default:
            window.location.href = "/center/gridlist.html#hs_a_board"
        }