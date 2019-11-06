Action()
{

	web_add_cookie("timeZone=420; DOMAIN=programreports.qa.client.com");

	web_add_cookie("usrsvr=12211452.604DDA72BA8B0944F874133643ACAACCC041E500090DEE8BB9B09B4F5A35F4F8F63797CA50A689479477671BFF6BA5C6; DOMAIN=programreports.qa.client.com");

	web_add_cookie("TBG_USER_PROFILE=; DOMAIN=programreports.qa.client.com");

	web_add_auto_header("Accept-Language", 
		"en-us,ja;q=0.5");

	web_url("programreports.qa.client.com", 
		"URL=http://programreports.qa.client.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("TBG_USER_PROFILE=; DOMAIN=els-stage.client.com");

	web_reg_find("Text=TBG Login", 
		LAST);

	web_url("index.jsp", 
		"URL=http://programreports.qa.client.com/workspace/index.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_url("logout.do", 
		"URL=https://els-stage.client.com/els3/logout.do?action=clearCookies", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://els-stage.client.com/els3/login.do?TYPE=33554433&REALMOID=06-000492cd-3ac5-1a28-86b6-839ca5210cb3&GUID=&SMAUTHREASON=0&METHOD=GET&SMAGENTNAME=uX31M6Qvg7fBRwz5yhlEXHQ7nIGqS3hfhMlCbtKnmMHmFoT8euGdmnf6fFKfEZ9O&TARGET=$SM$http%3a%2f%2fprogramreports%2eqa%2eclient%2ecom%2fworkspace%2findex%2ejsp", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("ELS_TARGET_URL=TARGET%3D%24SM%24http%253a%252f%252fprogramreports%252eqa%252eclient%252ecom%252fworkspace%252findex%252ejsp; DOMAIN=programreports.qa.client.com");

	web_reg_find("Text=Hyperion® Workspace", 
		LAST);

	web_add_cookie("SMSESSION=81edErfYL2dKop88FAdvyfsECwKvkZAZtoCfjRDv1BxknMOSK+XSrV3qhmjOgyt8bZkuCyItDmn2JZU1XJdWD5eLplyucQBnRIMKO0eS9+Dmrb+Bca0NcLR10bWnioNdjbGAUWOWPU9b3+aOr78kqw1RNUhDl94718DpP/+rbyp1SPGtCHJcRR07qi1L7dENl8Dpz7FWL9BuFkVwCyRrWBXzrCfz1xm668CKVoesKIkfGHOvlJs5JEVg8PMNBfmovTtluqFqXZlUSfzZSb5ZbWHJPHEqPsJdMGAW3ZOEYa6imm1Ej4SxsXKanLZiXaDMQzL7b39hbcG7Y3p731n/vCp72n8BdJa07l8jbik1dcVEnzwhJW+NIy9EucIWWnJ+7fswvtoa3eo7Kv/Nbv4F2Puuz0l93aVW/RttLeRyDdFzNisidBhrYE//tMGrKR/txGv+LY1+Au791rOunw2Fk/3cotG/"
		"9Um8BR1i8nqY9vP8OYgJhdlZKMufTn0bf31gfqTSoeRflq6VXypMz+0Oh46JuHECOmz7/hMSAvfMEw2370mAmStULIgUAwRCJG/vQtUnxMCQh16Gmy8lUZw2mvfl0yUZ2SIHCcVf7QAsCKktEoeUIROXkII+ElnPEH085aAzFIjAqlE/6IpMlkAsJwoj7DhiOFvwqy838M5+lB2c1M1GMq7TdGY/HMqOvk4eO0x+JA73KCjl7QgGM64VRArZoa65Cql52iqZr3M3thRtUMf/bj728lKYo3uKCI5rFcXnoZDP5M4PqSyJqQ+MSEKwMH0SAkd0n7RwkM9froraoJerUD372vENoJwzbGidrhdh26zLTmbdzXshoTFIf9VH0l2ePrSNXpdOh3CInVcyKjK07uHRJJHWdJ7DpAefQ/T1SYkPW0Gkw8b2kLIQFmuGkig435F+VZN52cIAL6G6ExBbGct0BpuWsSLlZHLnQGQTiJ6K+chEe+"
		"2LMYj22zRrX3PbzXvCihpctePapLcucPZPFisvsbm+ysVyjtk4WcG2cvHEoCGa8/yfisLGTw==; DOMAIN=programreports.qa.client.com");

	web_add_cookie("ORA_IR_zeroadminstate_9.3.1.0.0.24826=true; DOMAIN=programreports.qa.client.com");

	web_submit_data("els.fcc", 
		"Action=https://els-stage.client.com/els.fcc", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userBodyId", "Value=TMS Users", ENDITEM, 
		"Name=contextId", "Value=", ENDITEM, 
		"Name=USERID", "Value=tm_atduser", ENDITEM, 
		"Name=password", "Value=client123", ENDITEM, 
		"Name=TARGET", "Value=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		EXTRARES, 
		"Url=http://programreports.qa.client.com/workspace/thirdparty/bindows/html/themes/Default/theme.js", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/thirdparty/bindows/html/themes/BpmTadpole/theme.js", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/thirdparty/bindows/html/themes/Default/theme.css", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/thirdparty/bindows/html/themes/BpmTadpole/theme.css", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/thirdparty/bindows/html/js/core.js", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/thirdparty/bindows/html/js/gui1.js", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/thirdparty/bindows/html/js/gui2.ie.js", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/thirdparty/bindows/html/js/gui3.js", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/thirdparty/bindows/html/js/xmlrpc.js", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/thirdparty/bindows/html/js/grids.js", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/js/Js.js", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/thirdparty/bindows/html/js/treeview.js", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/thirdparty/bindows/html/images/move.gif", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/thirdparty/bindows/html/images/copy.gif", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/thirdparty/bindows/html/images/nodrop.gif", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/thirdparty/bindows/html/images/alias.gif", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/js/com/hyperion/bpm/web/common/Common.js", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/js/com/hyperion/bpm/web/prefs/Prefs.js", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/resources/bpm_en.js", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/themes/theme_tadpole/images_global/logo_min.gif", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/js/com/hyperion/tools/cds/lang/Lang.js", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/js/com/hyperion/tools/cds/util/Util.js", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/js/com/hyperion/tools/cds/data/Data.js", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/js/com/hyperion/tools/cds/bindows/Bindows.js", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/js/com/hyperion/tools/cds/repository/Repository.js", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/resources/cds_en.js", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/js/com/hyperion/tools/cds/Cds.js", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/themes/theme_tadpole/images_global/logon_panel.gif", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/thirdparty/bindows/html/themes/BpmTadpole/images/toolbar_handle_min.gif", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/thirdparty/bindows/html/images/blank.gif", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/thirdparty/bindows/html/themes/BpmTadpole/images/processBar_bg.gif", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/thirdparty/bindows/html/themes/BpmTadpole/images/group-box-top-left.gif", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/js/com/hyperion/bpmex/web/common/Common.js", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/thirdparty/bindows/html/themes/BpmTadpole/images/navigate_left_blank.gif", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/thirdparty/bindows/html/themes/BpmTadpole/images/navigate_right_blank.gif", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/images/com/hyperion/tools/cds/repository/bpm/CT_ApplicationsMode.gif", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/thirdparty/bindows/html/themes/BpmTadpole/images/navigate_center.gif", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/images/com/hyperion/tools/cds/repository/bpm/CT_ExploreMode.gif", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/images/com/hyperion/tools/cds/repository/bpm/TB_Administer.gif", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/images/com/hyperion/tools/cds/repository/bpm/CT_ViewerMode.gif", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/images/com/hyperion/tools/cds/repository/bpm/TB_Open.gif", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/images/com/hyperion/tools/cds/repository/bpm/TB_Home.gif", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/images/com/hyperion/tools/cds/repository/bpm/TB_Explore.gif", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/thirdparty/bindows/html/themes/BpmTadpole/images/horizontal-splitter-thumb-arrow-left-hover.gif", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/thirdparty/bindows/html/themes/BpmTadpole/images/horizontal-splitter-thumb-arrow-left.gif", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/thirdparty/bindows/html/themes/BpmTadpole/images/horizontal-splitter-thumb-arrow-right-hover.gif", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/thirdparty/bindows/html/themes/BpmTadpole/images/horizontal-splitter-thumb-arrow-right.gif", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/thirdparty/bindows/html/themes/Default/images/next.gif", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/thirdparty/bindows/html/themes/Default/images/previous.gif", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/themes/theme_tadpole/images_global/PB_previous_active.gif", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/themes/theme_tadpole/images_global/PB_next_active.gif", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/themes/theme_tadpole/images_global/PB_hide_active.gif", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/modules/com/hyperion/tools/cds/repository/bpm/explorer/folderactions/Module.js", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/images/com/hyperion/tools/cds/repository/bpm/CT_HPApps.gif", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/images/com/hyperion/tools/cds/repository/bpm/CT_HFMApps.gif", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/images/com/hyperion/tools/cds/repository/bpm/CT_AdministerModeUserManagement.gif", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/themes/theme_tadpole/images_global/PB_close_active.gif", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/images/com/hyperion/tools/cds/repository/bpm/PN_Actions.gif", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/modules/com/hyperion/tools/cds/repository/bpm/explorer/Module.js", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/themes/theme_tadpole/images_global/tb_logout_active.gif", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/themes/theme_tadpole/images_global/tb_help_active.gif", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/thirdparty/bindows/html/themes/BpmTadpole/images/toolbar_sep.gif", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/js/com/hyperion/bpmex/web/tree/Tree.js", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/thirdparty/bindows/html/themes/BpmTadpole/images/navigate_left.gif", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/thirdparty/bindows/html/themes/BpmTadpole/images/navigate_right.gif", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/images/com/hyperion/tools/cds/repository/bpm/TB_FolderUp.gif", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/images/com/hyperion/tools/cds/repository/bpm/TB_Refresh.gif", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/images/com/hyperion/tools/cds/repository/bpm/TB_Search.gif", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/images/com/hyperion/tools/cds/repository/bpm/PN_Folder.gif", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/images/com/hyperion/tools/cds/repository/bpm/CT_OpenFolder.gif", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/thirdparty/bindows/html/themes/BpmTadpole/images/GroupHeaderMiddleUnselected.gif", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/thirdparty/bindows/html/themes/BpmTadpole/images/GroupHeaderLeftUnselected.gif", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/thirdparty/bindows/html/themes/BpmTadpole/images/GroupHeaderExpandedUnselected.gif", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/thirdparty/bindows/html/themes/BpmTadpole/images/horizontal-splitter-thumb-tile.gif", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/thirdparty/bindows/html/themes/BpmTadpole/images/task_bottom_tabs_left_sel.gif", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/thirdparty/bindows/html/themes/BpmTadpole/images/task_bottom_tabs_right_sel.gif", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/thirdparty/bindows/html/themes/BpmTadpole/images/radiobuttonbackground.gif", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/thirdparty/bindows/html/themes/BpmTadpole/images/tree-view-minus.gif", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/media/mt/mt_folder.gif", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/thirdparty/bindows/html/themes/BpmTadpole/images/tree-view-plus.gif", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/thirdparty/bindows/html/themes/BpmTadpole/images/tree-header.gif", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/images/com/hyperion/tools/cds/repository/UrgentHeader.gif", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/images/com/hyperion/tools/cds/repository/ExceptionHeader.gif", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/thirdparty/bindows/html/themes/BpmTadpole/images/sortarrow-ascending.gif", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/thirdparty/bindows/html/themes/Default/images/blank.gif", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/media/mt/ObjBqe.gif", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/modules/com/hyperion/tools/cds/repository/bpm/explorer/bqyactions/Module.js", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/workspace/dataaccess/BQYActionHelper", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		"Url=http://programreports.qa.client.com/InsightInstaller/versions.xml?nocache=12457146582360.5058490957700727", "Referer=http://programreports.qa.client.com/workspace/index.jsp", ENDITEM, 
		LAST);

	web_url("BpmLauncher.jsp", 
		"URL=http://programreports.qa.client.com/workspace/BpmLauncher.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://programreports.qa.client.com/workspace/index.jsp", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("Adf.jsp", 
		"Action=http://programreports.qa.client.com/workspace/modules/com/hyperion/bpm/web/desktop/Adf.jsp", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/xml", 
		"Referer=http://programreports.qa.client.com/workspace/index.jsp", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=instance", "Value=0", ENDITEM, 
		"Name=LOCALE_LANGUAGE", "Value=en", ENDITEM, 
		LAST);

	web_url("CDSConfig.jsp", 
		"URL=http://programreports.qa.client.com/workspace/conf/CDSConfig.jsp?LOCALE_LANGUAGE=en", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://programreports.qa.client.com/workspace/index.jsp", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("loadLoginADF", 
		"Action=http://programreports.qa.client.com/workspace/browse/loadLoginADF", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/xml", 
		"Referer=http://programreports.qa.client.com/workspace/index.jsp", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=instance", "Value=1", ENDITEM, 
		"Name=LOCALE_LANGUAGE", "Value=en", ENDITEM, 
		LAST);

	web_submit_data("logon", 
		"Action=http://programreports.qa.client.com/workspace/browse/logon", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/xml", 
		"Referer=http://programreports.qa.client.com/workspace/index.jsp", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=sso_username", "Value=", ENDITEM, 
		"Name=sso_password", "Value=", ENDITEM, 
		"Name=action", "Value=returnXML", ENDITEM, 
		"Name=LOCALE_LANGUAGE", "Value=en", ENDITEM, 
		LAST);

	web_custom_request("dyn", 
		"URL=http://programreports.qa.client.com/workspace/browse/dyn", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://programreports.qa.client.com/workspace/index.jsp", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded;charset=UTF-8", 
		"Body=page=/modules/com/hyperion/tools/cds/repository/bpm/mode/Adf.jsp&instance=2&serverName=Workspace&intelligenceClientInstallerRelativeUri=%2Fdataaccess%2FInstallInsight%3Fzeroadmcab%3D1%26closewindow%3D1&smartViewInstallerRelativeUri=%2FSmartView%2FSmartView.exe&smartSpaceInstallerRelativeUri=%2FSmartSpace%2Fxxx&IRServiceCheckInterval=2&IncludeJavaClientItems=true&resizeContentInterval=2000&EnableNativeUserPasswordChange=true&LOCALE_LANGUAGE=en&sso_token="
		"YhwTHkhrrUFJtt2AwItqLggBO10BJE3%2FlfMFP2ITkFaiucNa30bbv377Gw9ysfhVbwShoyHi%2FtPe%0AiZtGNehI3ljxjpAKtFy86X%2BAy%2FsWJccaaL3W%2FzSodC%2F0jHdglRiOMZStnslCcnZzMKhkhn5%2FLED0%0AhdceIB2TpKH8F2jMYmsMJg2O%2BF3OsRPGRYIcNIpEKfImMhiuZd%2FE%2F8N1cHLjDJYftyFSXuNF", 
		LAST);

	web_submit_data("explorer", 
		"Action=http://programreports.qa.client.com/workspace/browse/explorer", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/x-json", 
		"Referer=http://programreports.qa.client.com/workspace/index.jsp", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=plusIcon", "Value=http://programreports.qa.client.com/workspace/thirdparty/bindows/html/themes/BpmTadpole/images/tree-view-plus.gif", ENDITEM, 
		"Name=minusIcon", "Value=http://programreports.qa.client.com/workspace/thirdparty/bindows/html/themes/BpmTadpole/images/tree-view-minus.gif", ENDITEM, 
		"Name=blankIcon", "Value=http://programreports.qa.client.com/workspace/thirdparty/bindows/html/themes/Default/images/blank.gif", ENDITEM, 
		"Name=ascendingIcon", "Value=http://programreports.qa.client.com/workspace/thirdparty/bindows/html/themes/BpmTadpole/images/sortarrow-ascending.gif", ENDITEM, 
		"Name=descendingIcon", "Value=http://programreports.qa.client.com/workspace/thirdparty/bindows/html/themes/BpmTadpole/images/sortarrow-descending.gif", ENDITEM, 
		"Name=getRepository", "Value=true", ENDITEM, 
		"Name=bpm.contentwidth", "Value=1064", ENDITEM, 
		"Name=bpm.contentheight", "Value=785", ENDITEM, 
		"Name=bpm.objectpaletteheight", "Value=784", ENDITEM, 
		"Name=bpm.objectpalettewidth", "Value=207", ENDITEM, 
		"Name=class", "Value=com.hyperion.tools.cds.explorer.ExplorerView", ENDITEM, 
		"Name=id", "Value=EV1245714640359", ENDITEM, 
		LAST);

	lr_think_time(5);

	web_submit_data("explorer_2", 
		"Action=http://programreports.qa.client.com/workspace/browse/explorer", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/x-json", 
		"Referer=http://programreports.qa.client.com/workspace/index.jsp", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=action", "Value=openFolder", ENDITEM, 
		"Name=uuid", "Value=00000121a2586851-0000-a944-0a3f07c1", ENDITEM, 
		"Name=class", "Value=com.hyperion.tools.cds.explorer.ExplorerView", ENDITEM, 
		"Name=id", "Value=EV1245714640359", ENDITEM, 
		"Name=selectedGridRow", "Value=1", ENDITEM, 
		"Name=selectedGridAnchorRow", "Value=1", ENDITEM, 
		"Name=selectedGridLeadRow", "Value=1", ENDITEM, 
		LAST);

	web_submit_data("explorer_3", 
		"Action=http://programreports.qa.client.com/workspace/browse/explorer", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/x-json", 
		"Referer=http://programreports.qa.client.com/workspace/index.jsp", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=action", "Value=openFolder", ENDITEM, 
		"Name=uuid", "Value=00000121a25bc320-0000-a944-0a3f07c1", ENDITEM, 
		"Name=class", "Value=com.hyperion.tools.cds.explorer.ExplorerView", ENDITEM, 
		"Name=id", "Value=EV1245714640359", ENDITEM, 
		"Name=selectedGridRow", "Value=1", ENDITEM, 
		"Name=selectedGridAnchorRow", "Value=1", ENDITEM, 
		"Name=selectedGridLeadRow", "Value=1", ENDITEM, 
		EXTRARES, 
		"Url=../dataaccess/Browse?REQUEST_TYPE=GET_DOCUMENT&DOC_UUID=00000121a25de186-0000-a944-0a3f07c1&DOC_VERSION=0&JScript=enable&repository_name=eDestination%20POI%20Report.bqy&repository_uuid=00000121a25de186-0000-a944-0a3f07c1&repository_path=%2Fprogram%2FeDestination%20POI%20Report%2FeDestination%20POI%20Report.bqy&repository_token="
		"81f6f0e08d9e522b26b2a8bffb272db05470b329410bcaa7afa715ec501513298a55807a50e0b72a6e67895a391648a6e2955b0539cbf98f609104e147a5b2d896300594996720391b093ca93821cc6e686d90a5ccf60bb16190376610b22fdff00f41bd04ecfbd07f43fa5ae247ada6aec55bd3c6b24baf734e5c624ac9ecee079fd630695a1f224b881ab726c5bb81ecaec97d16371485bddbb0e45ee0ae202db472d9187d61235fbe5b2f6531da6dc1d3abe770b7307346228b3dfa30200f3c0a78f85caea734b7e85791380de86cb1bfe702105f81cbfe45c73be18a686a47e0d7f98d7e135232b89839f48d49f193ecab688bdf0f0fc8c0cf"
		"0f581f749cbdab9f81e831f3f5fbae75392acd6540430ec1d237027e8ebd73a7f45fd7aff9&repository_node_type_uuid=ID29&repository_mime_type=application%2Fx-brioquery&sso_token=YhwTHkhrrUFJtt2AwItqLggBO10BJE3%2FlfMFP2ITkFaiucNa30bbv377Gw9ysfhVbwShoyHi%2FtPe%0AiZtGNehI3ljxjpAKtFy86X%2BAy%2FsWJccaaL3W%2FzSodC%2F0jHdglRiOMZStnslCcnZzMKhkhn5%2FLED0%0AhdceIB2TpKH8F2jMYmsMJg2O%2BF3OsRPGRYIcNIpEKfImMhiuZd%2FE%2F8N1cHLjDJYftyFSXuNF", "Referer=", ENDITEM, 
		LAST);

	web_revert_auto_header("Accept-Language");

	lr_think_time(4);

	web_add_auto_header("User-Agent", "BI WebClient[x]/9.3.1.248");
	web_add_auto_header("Content-Type", "application/octet-stream");

	web_custom_request("Browse", 
		"URL=http://programreports.qa.client.com/workspace/dataaccess/Browse", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"Body=URL_PARAM_LENGTH=347\nREQUEST_TYPE=getSectionOCEInfo&DOC_NAME=eDestination+POI+Report.bqy&DOC_UUID=00000121a25de186-0000-a944-0a3f07c1&DOC_VERSION=1&MODIFICATION_DATE=06%2F18%2F2009+00%3A14%3A48&MULTI_PART=0&IS_NEW_QUERY=0&CURRENT_REQUEST_ID=000001220a616046-0000-c485-0a3f07c11&ORIG_URL=http%3A%2F%2Fprogramreports.qa.client.com%2Fworkspace%2Fdataaccess%2FBrowse%3F", 
		LAST);

	lr_think_time(4);

	web_custom_request("Browse_2", 
		"URL=http://programreports.qa.client.com/workspace/dataaccess/Browse", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"BodyBinary=URL_PARAM_LENGTH=480\nREQUEST_TYPE=validateDBUser&DOC_NAME=eDestination+POI+Report.bqy&DOC_UUID=00000121a25de186-0000-a944-0a3f07c1&DOC_VERSION=1&API_CODE=API_CODE_ODBC&SERVER_CODE=SVR_CODE_ORA8&OCE_NAME=NGTA_ODBC.oce&OCE_UUID=00000121a24f2b3a-0000-a944-0a3f07c1&DB_HOST_NAME=NGTA&IS_DB_CREDENTIAL_FROM_OM=0&DB_USER_NAME=biuser&MULTI_PART=0&IS_NEW_QUERY=0&CURRENT_REQUEST_ID=000001220a616046-0000-c485-0a3f07c12&ORIG_URL="
		"http%3A%2F%2Fprogramreports.qa.client.com%2Fworkspace%2Fdataaccess%2FBrowse%3FREQ_LENGTH=110\n\\x00\\x00\\x00\\x80x\\x9CSv\n\\xF2tSp\\xF2\\xF4300d\\x00\\x023 f\\x07b\\xD7\\xBC\\xF4\\x9C\\xCC\\xE2\\x0Ce \\xD3\\x00\\x04\\x0C\\x8D\\x0C\\x13\\x8DLSR\r-\\xCCtA|\\xDDDK\\x13\\x13]\\x83D\\xE34\\x03\\xF3d\\xB0N& \\xE6\\x02\\xE2PO\\x9F\\xC4\\xBC\\xF4\\xD2\\xC4\\xF4TF \\x8F\\x15\\x88Y\\x80\\x98\\x03\\x88]\\xFC\\x9D\\xE3CC=]`\\xE2\\xFC@\\x0C\\x00\\xC7\\x15\\x14~SECNAME_LENGTH=11\nPOI Metrics", 
		LAST);

	web_custom_request("Browse_3", 
		"URL=http://programreports.qa.client.com/workspace/dataaccess/Browse", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"BodyBinary=URL_PARAM_LENGTH=474\nREQUEST_TYPE=53805091&DOC_NAME=eDestination+POI+Report.bqy&DOC_UUID=00000121a25de186-0000-a944-0a3f07c1&DOC_VERSION=1&API_CODE=API_CODE_ODBC&SERVER_CODE=SVR_CODE_ORA8&OCE_NAME=NGTA_ODBC.oce&OCE_UUID=00000121a24f2b3a-0000-a944-0a3f07c1&DB_HOST_NAME=NGTA&IS_DB_CREDENTIAL_FROM_OM=0&DB_USER_NAME=biuser&MULTI_PART=0&IS_NEW_QUERY=0&CURRENT_REQUEST_ID=000001220a616046-0000-c485-0a3f07c13&ORIG_URL="
		"http%3A%2F%2Fprogramreports.qa.client.com%2Fworkspace%2Fdataaccess%2FBrowse%3FREQ_LENGTH=110\n\\x00\\x00\\x00\\x80x\\x9CSv\n\\xF2tSp\\xF2\\xF4300d\\x00\\x023 f\\x07b\\xD7\\xBC\\xF4\\x9C\\xCC\\xE2\\x0Ce \\xD3\\x00\\x04\\x0C\\x8D\\x0C\\x13\\x8DLSR\r-\\xCCtA|\\xDDDK\\x13\\x13]\\x83D\\xE34\\x03\\xF3d\\xB0N& \\xE6\\x02\\xE2PO\\x9F\\xC4\\xBC\\xF4\\xD2\\xC4\\xF4TF \\x8F\\x15\\x88Y\\x80\\x98\\x03\\x88]\\xFC\\x9D\\xE3CC=]`\\xE2\\xFC@\\x0C\\x00\\xC7\\x15\\x14~SECNAME_LENGTH=11\nPOI Metrics", 
		LAST);

	web_custom_request("Browse_4", 
		"URL=http://programreports.qa.client.com/workspace/dataaccess/Browse", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"BodyBinary=URL_PARAM_LENGTH=474\nREQUEST_TYPE=53805057&DOC_NAME=eDestination+POI+Report.bqy&DOC_UUID=00000121a25de186-0000-a944-0a3f07c1&DOC_VERSION=1&API_CODE=API_CODE_ODBC&SERVER_CODE=SVR_CODE_ORA8&OCE_NAME=NGTA_ODBC.oce&OCE_UUID=00000121a24f2b3a-0000-a944-0a3f07c1&DB_HOST_NAME=NGTA&IS_DB_CREDENTIAL_FROM_OM=0&DB_USER_NAME=biuser&MULTI_PART=1&IS_NEW_QUERY=0&CURRENT_REQUEST_ID=000001220a616046-0000-c485-0a3f07c14&ORIG_URL="
		"http%3A%2F%2Fprogramreports.qa.client.com%2Fworkspace%2Fdataaccess%2FBrowse%3FREQ_LENGTH=1525\n\\x00\\x00\\x07Ox\\x9CSv\n\\xF2tSp\\xF2\\xF4300d\\x00\\x02KV\\x06\\x06v \\xED\\x9A\\x97\\x9E\\x93Y\\x9C\\x01\\x12bd@\\x90\\x0C\\x0C,P\\xB6\\x10\\x10s\\x01qPAI|@jQf~\nL\\x95(\\x10;\\xFB\\xFB\\xC4\\xFB9\\xFA\\xBA\\xC6;\\x06\\x059F\\x06\\x97\\x14e\\xE6\\xA5\\x1B\\x80$Y\\xA1F\\xF0@\\x15\\xB3B\\x8De\\x82\\xB2\\x9D\\xF3K\\xF3J@\\x12\\xCCHv\\x85\\xC1\\x048\\x90t\\x82eI\\xD2\t\\x16\\xFE\\x01\\xE4E\\x1C="
		"s2\\xDCk\\xCA\\x1C\\xF1\\xFF\\xBB'\\x1D\\xF0\\xF3W\\xEDg\\xB6\\xFCt\"&|~\\x81\\xEB\\xDD\\xE6\\xCB\\xA9\\xB7\\x9B\\xD4\\x0E]\\xE6\\xEF\\xF9\\xBB\\xEA\\x81\\xEF\\x19\\xE1\\x05\\x95\\xF57\\xEE\\xEA\\x17LkK\\x7F\\xA0\\xF9\\xD1\\xB9\\xE2\\xE2\\xCF)\\x9DS&ds\\x1BN\\xAF\\xDF\\xBC\\x9CS^*\\x9A\\xBD\\xFAv(\\xC3\\x81\\xC4/\\x8B*\\xA2+\\x8F4\\xEDK\\x11t\\xFD\\x12\\xDF\\xF4$&"
		"\\xD4\\x9B7\\xA6\\xE4\\x8C\\x9D\\xB0\\xD0\\x13\\xA3\\xFC\\x14K\\xA3\\xDB\\xEEJ%\\xC5\\x93M\\x1F\\xFC\\xD9\\x9Bae\\xBB\\xA0\\xFF\\xBA\\x8C\\xEE)\\xF5\\x90z\\xC6\\x95\\x0F\\xE6\\x083\\x15\\xA6.\\xB5\\xEF\\xF9v\\xAC\\xBD\\xA6\\xA3\\xAF\\xCF\\xE4\\xC2-_\\xDB\t\\xC1\\x7F\\x1F7\\xE6\\xF6\\xB5=6v<\"\\xD6\\xF0\\xED\\xCB\\xC9,\\x01\\xAFk\\xAD\\xCC?\\xBEL\\xE3S\\x9A\\xF3lB\\xC8\\xCE\\xB4u\\xFB\\xF4\\xC4'L4cz\\xC3\\x19\\xD5\\xDD\\x1B\\x16\\xB9}\\xFE\\xDA/2\\xF9l/\\x03\\xEC'^"
		"\\xB8t\\xAE\\xD8LQ\\xE2\\xC4\\xCD\\xB8N\\x8F\\x96\\x13\\x0C\\x1BB\\xA3\\xBE=\\x99\\x11\\xF15p\\xDF\\x93\\xFCxq\\xBE\\x9E\\x82\\xEA\\x03m\\xF5o\\xB9\\xC3\\x1C\\xEC\\x17~\\xFBSu\\xE1\\xF3\\xB4\\x80\\x13\\xCF\\xE3NhL\\xBC,\\xB3uN\\x0B#\\xFB\\xD7\\xCA\\xF0\\xDF\\xF3Nx\\xDF\\xC9\\x8C\\x9E]\\x18\\x9E0S\\x91E#\\xE3\\xF5\\xD5}vw\\xB6\\xC8\\x15\\xBC\\xFA^=G?\\xC3\\x91\\xA7\\xC7\\xEA\\xB6\\xCA\\xAA\\xC92\\xC9\\x17ym\\xDE\\xDD\t\\xF0\\x9C\\x96+"
		"\\x15\\x10\\xB6\\xE1\\xAE\\xA4\\xEB\\xFA\\xF4\\xAEx\\xB3\\xC7uGr\\xF2\\x1FI\\x7F\\xAC\\xE9\\xCBK\\xD1y\\xB9~\\xD3\\xB3\\x10\\xE6\\x0FQ\\\\\\xE7\\x04t\\xFB\\xDE{-W\\x9B\\xC91S-\\x83\\xA5\\xB1\\xD7c\\x85\\xF9\\xE1\\xAA\\xB7G5\\x1A\\x18\\xEAb\\xBF\\x1D\\xDAg\\xFF\\x88\\xB1_\\xDF\\xEC\\xB7\\xA2\\x9C\\x84e\\xCF\\xF1\\xCA6\\x0E\\xB3\\xDD\\xFE^V|\\xA1\\x91\\xFD\\xC7\\xEF\\xF7\\xEBE\\xC66\\xF4/Ph\\xA99\\xA7\\xC2us\\xCF\\xDDF\\x8B\\xB2\\xB7\\x17.\\xCF?\\xA7\\xB1]\\xDD\\xBAZ\\xA7/"
		"rM\\xB0\\xFD$\\xAE\\xEF\\xEB\\x84\\x0E\\xCD\\xFA\\xBBLU\\\\,\\xAD\\xDE6\\xF6\\xF2a\\xF3\\xBF\\xFE\\x913\\x94c\\xBE\\x97n\\xEA9\\xB6\\xE6lj0[\\xD9\\xBEMR9\\xCE\\x89\\x1AnK\\xEC\\xA2s=\\xC4\\xC4\\xCD\\\\\\xEE\\xEF\\x08/\\xE5z\\x12%\\xF9\\xB4\\xF4GV\\x87 \\x87~\\xBA\\xF6\\xAF\\x9BL}\\xB3\\xE5d?\\x9F\\x7F\\xB2\\xF4\\xEC#\\xE7\\xE7j\\xD1\\xF7\\xEA\\x83\\xC4\\xB7\\x9D\\x0E7\\x177\\xBB\\x1E{(\\xF9\\xCB\\xE4 1o\\xD7\\xCDG\\xE5\\xD2\\xAF%|\\xFC\\x7F8gB\\xE2\\xAC\\x0F\\xAB\\x9C"
		"[\\xE26\\xC8j_6j\\xFC\\x19\\xE9#?\\xB9\\xB7\\xE5\\x11\\xBB\\xD6\\xD2\\xF5\\xBF\\x9C\\xA27\\xD6\\xBC\\x9F\\xE41\\xD3\\xF0oVd\\xFC\\xFF\\x8A7Q\\xBB\\xA3\n#e\\x8FO{\\x96&\\xC9_g\\xB9\\xA8\\xB7c\\xF6\r\\x8B\\xDFw^\\xAA\\xEC;\\x11\\xC9he`\\x9C\\xFBk\\xDFb\\x91\\x07\\x0C\\x07\\xD8\\x14_\\xBD\\xFF\\xC0\\xF7\\xFAym\\xCD\\xCC+\\x96\\xFF\\xD9\\x8F+\\x87\\xAE{\\xB1\\xCA\\x957\\xAEk\\xE5\\xD6\\xD7[\\xD2\\xE5\\xF4\\xEAjf\\x97e\\x1D\\xCE\\xD4\\xDD\""
		"\\xF8\\xCB\\xE6\\xFA\\x13N\\xD5\\xC9W\\xC5\\x7F\\xEE\\x93\\x9Fuc\\xE6\\xFA7_\\x0Fv\\x96x\\xBFw\\xB8\\xB2=\\xBC\\xFE\\xD5\\x8C\\xA3\\x9B\\xFF\\xD8\\xBD\\xB98a\\xFA\\xA4\r\\x1E\\x9FV\\xBFy\\xFB\\x92-\\xBE:j\\xB9\\x7F'\\x1F\\xCF\\xB1\\xB4eu\\xB7|~\\x1D\\xCD\\x9F\\xAEYh\\xF2\\xA1\\xB5t\\x9F\\xE2\\xC1\\x95Q\\x05Io?\\xDC[\\xC6pk\\xCF\\xFE=[f\\xC7n2\\x9D)=_44\\xE5\\xB8\\xF3\\xFD\\xF7\\x1B\\xB5\\xF6p\\xA5x\\xAF\\xBC43c\\xF5\\x8C\\x135\\x1F\\xAF%&Jg\\x05v\\x9Dl\\xB8\"/"
		"c\\x14\\xB4\\xAC\\xDC\\xDB\\xEFJo\\x96e\\xEF\\x01>+ku\\xF94\\xA9D\\xB3\\xF4\\xBB\\\\\\x1E\\xD3\\xDF9\\xCA\\x1E\\xE9\\xAB\\x948]\\xAD\\xBFd\\x1B\\xDB\\x89u\\x11u\\xFF\\xFFe=\\xCD48\\xBEG\\xA1\\xF4of\\x01c\\xA1\\xFD\\xD3\\x92Ju\\xDD\\xD3\t\\xBC/\\xB2/\\xBCw\\xFE%\\xD4\\xAB\\xB2\\xAF\\xE4\\xEE\\xE1\\xFF/L>\\xAE{\\xA7\\x9B\\xCBh\\xFF\\xC4\\xF9\\xD9\\x81#\\x93\\xAE\\xD4y\\xE5\\\\\\x9E\\x1A\\x10\\xBF\\xA8z\\xEAl!\\xA67\\x8D\\xDF\\xD6=)\\xFA\\xAD\\xFA\\xE0\\xFEl'7F\\xAE\\xE7\\xAD\\xD2\\xA6^\\xAEJY\\xCB/"
		"\\xCDX\\x7F\\xF3^\\x80f\\xF2\\xC7\\xBB\\x7F\\x94g\\xE6\\xFA\\x07\\x17uZKT\\xB1\\xBF\\xEA\\xBC.\\xFCk\\x82q\\xE6}\\xCF\\xA4\\x9DI\\xAB%\\xBF\\x1AE\\x9Dv9\\x1F3\\xA9\\xEEs\\xAF\\x84cy'\\xAC\\x84\\xE2\\x03\\xE2\\xE0@\\x9F\\xF8\\xE0\\x90 O?\\xF7xW?g\\x90(;\\xB4\\xDC\\xE0\\x06\\xE2\\x00\\x7FO\\x05\\xDFT`\\xB1\\x95\\\\\\xAC\\x0C\\xE4\\x1A\\x80\\x80\\xA1\\x91a\\xA2\\x91iJ\\xAA\\xA1\\x85\\x99.\\x88\\xAF\\x9Bhib\\xA2k\\x90h\\x9Cf`\\x9El\\x08\\xD2\\xA9\\x8C\\xAD\\xE4s,*\\xD2C\\x15\\x04Y\\xA6\t"
		"\\xC4b@\\xEC\\x93\\x9F\\x97\\x0ES\\x11\\x12\\x19\\x80\\xA4\\x02T\\xF6\\x8A\\xA3\\xA9\\x08\\xF7t\t\\xF1@(Y\\x04\\xC4\\xD2\\x18~q\\xCA\\xC9O\\xD2\\x0B\\xCA\\xCF/\\x011@\\xCA\\xEEBKMPq\\x1D\\xEA\\xE9\\x93\\x98\\x97^\\x9A\\x98\\x9E\\x8A\\\\\\x1A\\x83\\x02\\xC494(\\xC8\\xD5/\\xC4\\xC5\t\\xECR\\x98,?\\x10\\x0B\\x03\\xB1gp|\\xB0\\x87\\x7Fx|\\x98\\xA3O\\xA8kp\\xBC\\xAF\\xBF\\x0BX\t#TZ\\x00\\x88C<\\x81\\x1E\\xF4\\xF1\\xF4\\xF5\\x0C\\x89w\\x8D\\xF0\\x0C\\x0E\\x81\\xC9\\x8B@\\xADF\\xC8\\xC3\n"
		"eQ\\xA8\\xC3\\x80^\\x0B\\xF5\\xF5\\x8Bw\\xF6\\x0F\\xF5\\x83\\xCBI\\x021/\\x10\\xFB:F\\xC4\\x07\\xF9\\x87\\x07\\xC7\\xFB\\xF8;\\xBA\\xC0$e\\xA1\\xD1\\xE4\\x18\\xEA\\x02\\xB2-\\xCC\\x15\\xA1O\\x11\\xAA\\x17[\r\\x84RE\\xA8B-\\x00\\xFA\\xCC\\xD37\\xC0?($\\x1E\\x18\\x8C07\\xDF\\x81\\xBA,\\xD8\\xD59\\xC4\\xD3\\xDF\\x0F%H\\x98Y!\\xD5\\x89\\x8B\\xBFs|h\\xA8\\xA7\\x0BL\\\\\\x08H\\x00\\x00\\xC0\\xCB\\x80\\xA7SECNAME_LENGTH=11\nPOI Metrics", 
		LAST);

	lr_think_time(6);

	web_custom_request("Browse_5", 
		"URL=http://programreports.qa.client.com/workspace/dataaccess/Browse", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"BodyBinary=URL_PARAM_LENGTH=474\nREQUEST_TYPE=53805057&DOC_NAME=eDestination+POI+Report.bqy&DOC_UUID=00000121a25de186-0000-a944-0a3f07c1&DOC_VERSION=1&API_CODE=API_CODE_ODBC&SERVER_CODE=SVR_CODE_ORA8&OCE_NAME=NGTA_ODBC.oce&OCE_UUID=00000121a24f2b3a-0000-a944-0a3f07c1&DB_HOST_NAME=NGTA&IS_DB_CREDENTIAL_FROM_OM=0&DB_USER_NAME=biuser&MULTI_PART=1&IS_NEW_QUERY=0&CURRENT_REQUEST_ID=000001220a616046-0000-c485-0a3f07c15&ORIG_URL="
		"http%3A%2F%2Fprogramreports.qa.client.com%2Fworkspace%2Fdataaccess%2FBrowse%3FREQ_LENGTH=1773\n\\x00\\x00\\x08\\xF3x\\x9C\\x8D\\x95\tT\\x13g\\x10\\xC7!\\x12\\xC3!\\x82\\x80\\xA0 \\x02rX@4\\xE1\\x92P\\xB1\\x84$@x\\xB9\\x0F\\x0Ei]\\x02I05\\xC9j\\x12\\x14QPPD(*\\x05\\x0F\\x08\\xCF\\x0BD\\x01\\xB9\\x8C`\\x00\\x0B\\x16\\x90CikQ@\\x04)\n\\xE5lQ\\xC4\\xFB\\xA0t\\xD3&\\x1E\\xD5\\xA7\\xFD\\xDE\\xFB\\xEF~;"
		"\\xF3\\xDBovf\\xDF\\x9B\\xB1\\xF5\\xA3\\x13\\xFC\\xAD\\xFD\\x08d$\\x12\\xA5\\x01\\xAD\\xFE\\xB9\\x1A\\x1A\\x08\\xE8\\x8E\\x17E\\x0B\\xF8\\x92\r\\x1Ao\\x96\\x96\\xEA>G\\xB5/\\x87d\\x0B\\x89\tJ\\xD9\\x02\\x80J!H\\x00\\x06W$\\x05\\xA4 \\x10\\x15#\\x91\\x82B\\xAE\\x18\\xD8\\xC2\\xDD\\xC0\\x8F\\x12p\\x1D\\xDF`\\xEB\\xD8\\xD1l\\xE9\\xFB0V\r\\x07\\xBF\\x85\\xC91\\xC2H\\xC8\\x02\\xF2\\x00\\xBC\\x88\\x07\\x8A\\x85@\\x8C\\x84+\\x96@W\\xBE(\\x1A\\xE0\\xE2\\xB8\\x12)"
		"_\\xC4\\x96\\xF2A\\x91\\xC3\\xE7\\xE07\\x01\\xD5),\\x84\\x84\\xA5\\x10\\x012\\x86\\x84\\x070t:&\\x8C!\\x15C$R\\x13r\\xC0?\\x03\\xA1\\xD4\\x90\\xF3' W5\\x14\\xFA\t\\xC8M\r%CZ\\xA4\n\\xFB_)\\x17L\\xC5a\\xC1\\x18\\x91T\\xF3\\x9D\\xFA+\\xF7\\xC1Z*\\x83\\xF6;\\xA7|\\xEC\\x98\\xFF\\x7F\\x8A\\xC6.\\xE8)\\x16R\t\\xDAz~\\xCF2\\xA7dg\\xDD\\x0E\\xF4\\xC5}\\xD5K\\xEE\\x1Bj\\x9E\\xB1\\x7FA\\xD5\\xCF`\\xB0\\xCEz&V4\\xBC\\x98\\x9E\\xDA\\xD2\\xD2@\\xEC\\x9E\\xD4\\xF6k\\xD2H\\xBBw\\xB1MN,\\xAE\\xB6>\\x9C\\xED+"
		"\\xB3Jn\\xD4\\x8A\\xF4!'\\xA4Z=\\xB3\\x1C\\xC4\\xF3f\\x15\\xF2\\x939\\xA4\\xF40\\x9C\\x80\\xA8p\\xF8a\\xC1p\\x1C\\xFA'+\\xE7:\\x80\\xE2Ls\\xBB\\xD2^\\xB6\\x9C\\x84B\\x18xM\\xE8\\x11\\x12\\xEFG\\x8EE|g_i(N\\x9C\\xBD\\xBE\\xC1\\xAF\\xC8 \\xEBq\\xF2\\x83\\x1Ap\\xA5q\\xA8\\xF1\\xC0\\xB3>P\\xD7\\xE4\\xB4\\xBCb_\\xF0\r\\x83\\xA0\\xA6\\xCB\\xAF\\xB6\\xAD\\xF9=\\xFEi\\x80\\xBC\\xB7\\xC8p\\x8F\\xAC\\xA0\\x8D\\x98\\xD6\\x9F\\xCD2\\xE6\\xED\\xF4\\xEC\\xCEAh\\xBB\\x17\\x04\\x8FrR\\x1D\\x0F\\xFE\\xB1c\\xA76="
		">Z\\xC0|\\x80>\\xBD\\xC7\\\\\\xDE\\xDC\\x07\\xEB\\x8E\\xB2\\xBB\\x85\\xFD\\xED\\x9BH\\xBE1;\\xF0\\xE5\\x8D_\\xEF\\x8D7\\xF78n\\xCE\\xB5\\xEF\\xB5\\x1C\\xD7O\\xE4|It+\\xD6\\x02r;\\x9D\\xF2\\xF6=\\xF5\\x84Yfm\\x9B<\\x94\\x1E \\x87U\\xD0\\xDB5[\\xC7\\xBB\\xFC3\\x10\\xAB\\xC3Z\\x1F\\xE6_\\xDA${r\\xE5\\\\\\xE3=\\xE9W\\x95#Q\\xAB\\xF2\\xC3\\x9F\\x0B\\x14\\xE92\\xDB\\xB5O\\xC0c\\x93qM\\xF3\\xC5\\xE0\\xDA\\xCC\\x08\\x83!'\\xDC\\xB1\\x11\\xCCi\\x98\\xB9\\xD9b\\xBB_\\xE0\\x0Bbd\\x92c\\x9B\\xCC\\x1D\\xBE\r"
		"\\xAA*\\xDDznG\\xD3\\xD2e\\x93\\xCF\\x1B\\x15F\\xDE\\xB4q\\xE6n\\x17_\n\\xE7\\xFC\\x88\\xDB\\x9F\\xAB3\\xEC\\xD6\\xA7\\x1F\\x90\\x14\\xC4\\x16\\xC07>\\x0F\\x1B\\xCB\\x8D\\xA8\\x08\\xB2\\x96]\\xBB\\xF9u}\\xC9\\x91\\xFAU\\xFE\\xFC\\x11z\\xD2\\xF5QX\\x97\\xE4\\x10\\xCC7n\\xD8\\xA8\\xEF&V\\xA7\\xD7\\xB7\\xF0AX\\xC3\\x11\\xB0,\\xFD\\xF1tu\\xFB\\xB8\\x1EC\\xD8\\xB6d\\xBA/\\xD8\\xE8\\x87\\x86\\x03\\xEC\ti\\xC7\\x17ES\\x03\\xE7\\x1B\\x07\\x07i^\\xF5\\x11#"
		"[\\xBD_\\xF8o\\xB2\\xAA6\\x1F\\x9B\\xD9OEo\\xD7I\\x83/|\\xE0F-/M;\\xB5\\xFB\\xCFG\\xAB\\x83h\\x97\\x06\\x96\\xEDa\\xA3\\xCF\\xAEm\\xAA\\x0B\\xA8\r8\\xB5]a2\\x14t\\x82M\\xD9V\\x0B\\xEB\\xC36\\xA6d\\x0B\\xE0\\xE7\\x8B\\xE7t\\x1Et\\xBD\\x13w\\xAAf\\xCA\\xEAZa\\xE6p\\x8B\\xFD\\x85\\x9BcE\\xDD\\xB9\\xD3\\xAD\\x89@c\\xEA\\x90\\xF0\\xB5\\xD7\\xED\\xD2[\\xF7\\xF5\\xCF0\\xF5\\x86w=\\x99\\xC9\\x9E\\xB0\\xB0F\\xC0\\x9BJ\\xAF\\xC8M\\x86\\xCD^"
		"\\x9A\\x96\\xF9$\\xEDud-\\x9C\\x18\\x9D\\xBC\\x13v\\xCE\\xBB0\\xEF\\xE1\\xB9F\\xBD\\xFA\\x86\\x84\\xA7\\x0F\\xFFh\\xF2\\x18p\\x8FC\\x8E\"\\xCC\\x9E\\xBA\\x9Fa\\xD2\\x88\\xD7\\xF2\\xBE$\\xA7\\x1E\\xCABO\\xC9\\xBA\\x8E4\\x1DB\\xF3P\\xBF\\x9Dr\\xDFx\\xF8\\xA8\\x81\\xA5G\\xA9bR\\xC6i\\xC6\\xBEvX1P\\x1B\\x7F\\xAB=\\xA3\\xE1/\\\\nR@\\xA0Q!b\\x9D\\xCD\\xE4\\xAB\\xD84A\\xA6\\xEEUX\\xCA\\xE2\\xCAG+\\x02aE\\xAD\\\\\\xFC`g\\xE8\\xA2\\x8A\\xBE\\x06\\x9F2\\x9F/\\xAC\\x07\\xAF,"
		"\\xB2Y\\x93B\\xC1\\x97V\\x95w\\xF9\\x00\\x89\\xAE\\xD7;,\n\\xBB3\\xF3\\xE8\tv\\x1Ep\\x9B\\x1E\\xB1\\xC5Wu\\xD2~\\xB8Y\\xF8\\x12\\xAFU\\xCE3\\xBA\\xC2,[\\xDD\\xA5\\xCD\\xB5w\\xEF\\xF6\\xCE\\x86\\xBB\\x1A\\x95W\\x9D\\xF5\\x13\\x06\\xDD\\xAE\\xF2\\\\U,LF\\xDE\\xCF\\x1A\\xEE\\xB2\\xA7s\\x1EV\\xEA\\x9C>(\\xE2\\xED\\x7F\\xBDy\\xFFN\\xA3n\\xD3\\xE9\\x0B5q0\\xCD\\x0E[GS\\xC3\\x94\\xA3\\xE4\\xD4\\xBA\\x0E\\xDAqj\\xF6\\xF3\\xBC\\xACR\\x11N?\\xC3X\\xE7D\\xE4\\xCB2\\xCC(\\xA5\\xC5\\xC1i]"
		"\\xDA\\x86@\\x8F\\xDB\\x05\\xF0WyW\\xB5Iu\\xD6\\xFE\\xE0k\\xF7\\x8C#\\xA1.h;ib\\x8F\\xDDR\\xBF\\x10\\x9A`z\\xD0'\\xE7\\xE5\\xF4\\xAC\\xBB\\xBD|\\xAF\\xCD\\xAB\\xDA\\xD8y\\xB4\\xEB\\xB9[6\\x96D\\x9C(\\xE4\\x95\\xC7\\xDFl{\\xC2\\xCED\\x8C\\xAC\\x11\\xEE\\x95G\\\\\\x90ir\\xA2L9\\xC5 ?\\x7F\\xC8\\x83\\xFE\\xFD\\xF6\\xFE\\xCD]\\xCFj\\xC0\\x04pA\\x06q\\xE6XHg\\xC8X\\xF3\\x9D\\xF9\\xE5V\t%\\x1D}vITZ`\\xD4\\xA3\\xEF\\x0B*r\\xB6\\xA2\\x8E"
		"{\\x03\\xD2\\xD8\\xCE\\xCB\\xB9\\xA6_s\\xB7\\x9F4\\xDEA\\xB2\\xAAUX\\xAD\\x07;S\\xC4\\xEBK\\xEE\\xC4W\\x9A\\x0C^05\nmY\\x9Co3\\x9D^\\xAB\\xB0w\\x99}\\xC4s\\xCD\\x19\\x1F\\xD2\\xAA\\xA9>\\x8ER\\x88\\xE1\\xF2z\\x8F\\x9F\\x07\\xDAt.%q\\x96\\x9F\\xE0Pu\\xB9\\xFC\\x08\\x8B\\x98\\xDD\\xFD\t\\xFE\\xF1s\\xFE*\r\\xBA\\xDC\\x19\\xEF\\xFD\\x1D,3\\xEFF\\x9C\\xF9\\xF1_\\xAA\\x8A1;\\xC2\\xC1x\\x9F\\xB9?\\xC2Z\\x9CF\\xCD\\xE4\\x01\\xCE\\x92\\xC3cN\\x9Bz\\xA5\\x8C\\xFC\\xF2\\x9E\\x89\\xDD\\xBE>n\\xB9#:9\\xDFN]"
		"\\x1D\n_\\xFE8\\xF3.\\xBF}\\xC5\\x8Cq\\xEB\\xB5}\\xB0\\x03\\xD5\\xAC:doU$0\\xBA\\xF9\\xE7\\xE6y\\x1A\\xAA\\xAE4\\x1F\\x12\\x83F\\x04\\x18L:\\x81\\x1C\\x00\\xE0\\xC9X\\xA5\\x15\\xA1\\xEA[z\\x90\\xA0\\xAEnM\\xE2B\\xED4J\\xA2\\x1CDH\\xE5B\\xB9\\xA2\\xD8\\xAE\\x1E\\x1C.\\xCA\\xCB\\xD3E\\xF9\\xEC\\xC2F\\xBB\\xBB\\xBB \\xD9n<\\xE4\\xEA(\\x94\\x96jf}\\xD0\\x911b\\xF1\\xCA\\xF7\\x8D\\xCA`\\xCAQd\n\\x89\\x08\\x8A\\xA2\\xD5\\x043\\x8C\\xFA\\x0E\\xA1\\xEC\\xA5f\\xFF!B\\x088f\\xE0[\\xA4\\x16\\xBAX|"
		"\\x90\\x8B\\x9F\\x00\\x8C\\\\I\\x07A\\xA9r\\xA3\\xC44\\xA1\\x16\\xAD\\xCC]\\x17\\x12\\x8B@d\\x8B\\xA2c\\xD8\\xD1\\xDCw\\x87\\x92\\xB2 X\\x16\\x9D\\x8E'3q~\\xFF|\\xA9\\xDAk\\x00\\xC9\\x18\\x12\\x81\\x010\\x02)!@0\\x86\\xC8\\xC23\\x00\\x12\\x05\\xF7\\x0F\\xA2\\xA9r\\x1B*\\xC70\\x01J\\x90H \\x11\\x98\\x00>\\x94\\xC0`\\xAA\\xFD&\\xAA\\xD0o\\xFD\\xEA)\\xA1\\x9C`\\xF3\\xFE\\xAD\\x19\\x8BD\\x06\\xB0\\x14\\x16\\xF9\\x8Do1$}H$L(@\\xA7\\x840\\x00\"\\x05\\x83S;-U\\xBF\t\\xC3\\xC2)"
		"\\xA3\\x05\\xE3\\xDF\\xBEg\\xA3z\\xF7c\\x93\\xF1\\xBD\\x11e\\xAF\n\\x00eF Q)t&\\x00\\x95Q\\xFD\\xCD\\x1A\\xAA\\x921\\xF0X&\\x81B~\\xAF$g\\xE7\\xFE;\\xCEp\\x14,\\xC0b\\x11pj\\xFBE\\xC8\\xFE7\\x10\\x8B\\x14|SECNAME_LENGTH=11\nPOI Metrics", 
		LAST);

	return 0;
}