Action()
{

	web_url("imageupload.jsp", 
		"URL=http://192.168.36.124:8199/TIMS-Server/nc-jsp/imageupload.jsp?pk_jkbx=TCHZT000&scanType=1&modulename=%25E7%25BD%2591%25E4%25B8%258A%25E6%258A%25A5%25E9%2594%2580&tradtypeName=%25E6%258A%25A5%25E9%2594%2580%25E5%258D%2595&billNo=201512120005&detailInfo=detailInfo&orgNo=0&dept_id=0&billtype=2641&systemCode=NC&saveopt=0&savestep=1&1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../images/tims_look.png", "Referer=http://192.168.36.124:8199/TIMS-Server/nc-jsp/imageupload.jsp?pk_jkbx=TCHZT000&scanType=1&modulename=%25E7%25BD%2591%25E4%25B8%258A%25E6%258A%25A5%25E9%2594%2580&tradtypeName=%25E6%258A%25A5%25E9%2594%2580%25E5%258D%2595&billNo=201512120005&detailInfo=detailInfo&orgNo=0&dept_id=0&billtype=2641&systemCode=NC&saveopt=0&savestep=1&1", ENDITEM, 
		"Url=../images/tc_newversion.png", "Referer=http://192.168.36.124:8199/TIMS-Server/nc-jsp/imageupload.jsp?pk_jkbx=TCHZT000&scanType=1&modulename=%25E7%25BD%2591%25E4%25B8%258A%25E6%258A%25A5%25E9%2594%2580&tradtypeName=%25E6%258A%25A5%25E9%2594%2580%25E5%258D%2595&billNo=201512120005&detailInfo=detailInfo&orgNo=0&dept_id=0&billtype=2641&systemCode=NC&saveopt=0&savestep=1&1", ENDITEM, 
		"Url=../images/tc_slogen.png", "Referer=http://192.168.36.124:8199/TIMS-Server/nc-jsp/imageupload.jsp?pk_jkbx=TCHZT000&scanType=1&modulename=%25E7%25BD%2591%25E4%25B8%258A%25E6%258A%25A5%25E9%2594%2580&tradtypeName=%25E6%258A%25A5%25E9%2594%2580%25E5%258D%2595&billNo=201512120005&detailInfo=detailInfo&orgNo=0&dept_id=0&billtype=2641&systemCode=NC&saveopt=0&savestep=1&1", ENDITEM, 
		"Url=../images/btn_save.png", "Referer=http://192.168.36.124:8199/TIMS-Server/nc-jsp/imageupload.jsp?pk_jkbx=TCHZT000&scanType=1&modulename=%25E7%25BD%2591%25E4%25B8%258A%25E6%258A%25A5%25E9%2594%2580&tradtypeName=%25E6%258A%25A5%25E9%2594%2580%25E5%258D%2595&billNo=201512120005&detailInfo=detailInfo&orgNo=0&dept_id=0&billtype=2641&systemCode=NC&saveopt=0&savestep=1&1", ENDITEM, 
		"Url=../images/btn_commit.png", "Referer=http://192.168.36.124:8199/TIMS-Server/nc-jsp/imageupload.jsp?pk_jkbx=TCHZT000&scanType=1&modulename=%25E7%25BD%2591%25E4%25B8%258A%25E6%258A%25A5%25E9%2594%2580&tradtypeName=%25E6%258A%25A5%25E9%2594%2580%25E5%258D%2595&billNo=201512120005&detailInfo=detailInfo&orgNo=0&dept_id=0&billtype=2641&systemCode=NC&saveopt=0&savestep=1&1", ENDITEM, 
		"Url=../softController/getMaxSoftVersionBynologin.action?uuid=", "Referer=http://192.168.36.124:8199/TIMS-Server/nc-jsp/imageupload.jsp?pk_jkbx=TCHZT000&scanType=1&modulename=%25E7%25BD%2591%25E4%25B8%258A%25E6%258A%25A5%25E9%2594%2580&tradtypeName=%25E6%258A%25A5%25E9%2594%2580%25E5%258D%2595&billNo=201512120005&detailInfo=detailInfo&orgNo=0&dept_id=0&billtype=2641&systemCode=NC&saveopt=0&savestep=1&1", ENDITEM, 
		"Url=../activeParamController/getScanActiveParamFromJSP_bynologin.action?org_id=0&dept_id=0&systemcode=NC", "Referer=http://192.168.36.124:8199/TIMS-Server/nc-jsp/imageupload.jsp?pk_jkbx=TCHZT000&scanType=1&modulename=%25E7%25BD%2591%25E4%25B8%258A%25E6%258A%25A5%25E9%2594%2580&tradtypeName=%25E6%258A%25A5%25E9%2594%2580%25E5%258D%2595&billNo=201512120005&detailInfo=detailInfo&orgNo=0&dept_id=0&billtype=2641&systemCode=NC&saveopt=0&savestep=1&1", ENDITEM, 
		LAST);

	web_submit_data("getOperSuggest", 
		"Action=http://192.168.36.124:8199/TIMS-Server/imageManagerController/getOperSuggest", 
		"Method=POST", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.36.124:8199/TIMS-Server/nc-jsp/imageupload.jsp?pk_jkbx=TCHZT000&scanType=1&modulename=%25E7%25BD%2591%25E4%25B8%258A%25E6%258A%25A5%25E9%2594%2580&tradtypeName=%25E6%258A%25A5%25E9%2594%2580%25E5%258D%2595&billNo=201512120005&detailInfo=detailInfo&orgNo=0&dept_id=0&billtype=2641&systemCode=NC&saveopt=0&savestep=1&1", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=bsn", "Value=TCHZT000", ENDITEM, 
		LAST);

	web_custom_request("ContentInfoService", 
		"URL=http://192.168.36.124:8199/TIMS-Server/services/ContentInfoService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=utf-8", 
		"Body=<soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\" xmlns:soapenc=\"http://schemas.xmlsoap.org/soap/encoding/\"><soap:Body><CMSave xmlns=\"http://xfire.ws.cm.com\"><in0>&lt;?xml version=\"1.0\" encoding=\"GBK\" ?&gt;&lt;CMDATA&gt;&#x000A;    &lt;TRADETYPE&gt;5&lt;/TRADETYPE&gt;&#x000A;    &lt;CIP&gt;192.168.36.148&lt;/CIP&gt;&#x000A;    &lt;SYSTEM_CODE&gt;&#x7F51;&#x4E0A;"
		"&#x62A5;&#x9500;&lt;/SYSTEM_CODE&gt;&#x000A;    &lt;BRANCH_NO&gt;123456&lt;/BRANCH_NO&gt;&#x000A;    &lt;USER_NO&gt;1101111&lt;/USER_NO&gt;&#x000A;    &lt;BUSI_SERIAL_NO&gt;TCHZT000&lt;/BUSI_SERIAL_NO&gt;&#x000A;    &lt;BATCH&gt;&#x000A;        &lt;BATCHID&gt;&lt;/BATCHID&gt;&#x000A;    &lt;/BATCH&gt;&#x000A;&lt;/CMDATA&gt;</in0></CMSave></soap:Body></soap:Envelope>", 
		LAST);

	lr_think_time(12);

	web_custom_request("ContentInfoService_2", 
		"URL=http://192.168.36.124:8199/TIMS-Server/services/ContentInfoService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=utf-8", 
		"Body=<soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\" xmlns:soapenc=\"http://schemas.xmlsoap.org/soap/encoding/\"><soap:Body><CM_GetID xmlns=\"http://xfire.ws.cm.com\"></CM_GetID></soap:Body></soap:Envelope>", 
		LAST);

	lrs_create_socket("socket0", "TCP", "LocalHost=0", "RemoteHost=WIN-OBPKSIS6UTS:28390", LrsLastArg);

	lrs_send("socket0", "buf0", LrsLastArg);

	lrs_send("socket0", "buf1", LrsLastArg);

	lrs_close_socket("socket0");

	web_custom_request("ContentInfoService_3", 
		"URL=http://192.168.36.124:8199/TIMS-Server/services/ContentInfoService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=utf-8", 
		"Body=<soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\" xmlns:soapenc=\"http://schemas.xmlsoap.org/soap/encoding/\"><soap:Body><CMSave xmlns=\"http://xfire.ws.cm.com\"><in0>&lt;?xml version=\"1.0\" encoding=\"GBK\" ?&gt;&lt;CMDATA&gt;&#x000A;    &lt;TRADETYPE&gt;0&lt;/TRADETYPE&gt;&#x000A;    &lt;WEBURL&gt;http://192.168.36.124:8199/TIMS-Server/services/ContentInfoService&lt;"
		"/WEBURL&gt;&#x000A;    &lt;CIP&gt;192.168.36.148&lt;/CIP&gt;&#x000A;    &lt;SIP&gt;192.168.36.124&lt;/SIP&gt;&#x000A;    &lt;SPORT&gt;28390&lt;/SPORT&gt;&#x000A;    &lt;SYSTEM_CODE&gt;&#x7F51;&#x4E0A;&#x62A5;&#x9500;&lt;/SYSTEM_CODE&gt;&#x000A;    &lt;BRANCH_NO&gt;123456&lt;/BRANCH_NO&gt;&#x000A;    &lt;USER_NO&gt;1101111&lt;/USER_NO&gt;&#x000A;    &lt;BUSI_SERIAL_NO&gt;TCHZT000&lt;/BUSI_SERIAL_NO&gt;&#x000A;    &lt;BATCH&gt;&#x000A;        &lt;BATCHID&gt;80401201803300000000032804000032&lt;/"
		"BATCHID&gt;&#x000A;        &lt;DOCUMENTS&gt;&#x000A;            &lt;DOCUMENT&gt;&#x000A;                &lt;DOCNAME&gt;&#x62A5;&#x9500;&#x5355;&lt;/DOCNAME&gt;&#x000A;                &lt;DESC&gt;descripe&lt;/DESC&gt;&#x000A;                &lt;FILES&gt;&#x000A;                    &lt;FILE&gt;&#x000A;                        &lt;FILE_TYPE&gt;1&lt;/FILE_TYPE&gt;&#x000A;                        &lt;FILE_NAME&gt;Chrysanthemum.jpg&lt;/FILE_NAME&gt;&#x000A;                        &lt;FILE_FORMAT&gt;0&lt;/"
		"FILE_FORMAT&gt;&#x000A;                        &lt;FILE_SIZE&gt;879394&lt;/FILE_SIZE&gt;&#x000A;                        &lt;FILE_MD5&gt;CEE1E93713842D606C9F8CC45EDFE67F&lt;/FILE_MD5&gt;&#x000A;                        &lt;FILE_SEQ&gt;00000000&lt;/FILE_SEQ&gt;&#x000A;                    &lt;/FILE&gt;&#x000A;                &lt;/FILES&gt;&#x000A;            &lt;/DOCUMENT&gt;&#x000A;        &lt;/DOCUMENTS&gt;&#x000A;    &lt;/BATCH&gt;&#x000A;&lt;/CMDATA&gt;</in0></CMSave></soap:Body></soap:Envelope>", 
		LAST);

	web_custom_request("ContentInfoService_4", 
		"URL=http://192.168.36.124:8199/TIMS-Server/services/ContentInfoService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=utf-8", 
		"Body=<soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\" xmlns:soapenc=\"http://schemas.xmlsoap.org/soap/encoding/\"><soap:Body><CMSave xmlns=\"http://xfire.ws.cm.com\"><in0>&lt;?xml version=\"1.0\" encoding=\"GBK\" ?&gt;&lt;CMDATA&gt;&#x000A;    &lt;TRADETYPE&gt;5&lt;/TRADETYPE&gt;&#x000A;    &lt;CIP&gt;192.168.36.148&lt;/CIP&gt;&#x000A;    &lt;SYSTEM_CODE&gt;&#x7F51;&#x4E0A;"
		"&#x62A5;&#x9500;&lt;/SYSTEM_CODE&gt;&#x000A;    &lt;BRANCH_NO&gt;123456&lt;/BRANCH_NO&gt;&#x000A;    &lt;USER_NO&gt;1101111&lt;/USER_NO&gt;&#x000A;    &lt;BUSI_SERIAL_NO&gt;TCHZT000&lt;/BUSI_SERIAL_NO&gt;&#x000A;    &lt;BATCH&gt;&#x000A;        &lt;BATCHID&gt;&lt;/BATCHID&gt;&#x000A;    &lt;/BATCH&gt;&#x000A;&lt;/CMDATA&gt;</in0></CMSave></soap:Body></soap:Envelope>", 
		LAST);

	web_custom_request("ContentInfoService_5", 
		"URL=http://192.168.36.124:8199/TIMS-Server/services/ContentInfoService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=utf-8", 
		"Body=<soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\" xmlns:soapenc=\"http://schemas.xmlsoap.org/soap/encoding/\"><soap:Body><CMSave xmlns=\"http://xfire.ws.cm.com\"><in0>&lt;?xml version=\"1.0\" encoding=\"GBK\" ?&gt;&lt;CMDATA&gt;&#x000A;    &lt;TRADETYPE&gt;5&lt;/TRADETYPE&gt;&#x000A;    &lt;CIP&gt;192.168.36.148&lt;/CIP&gt;&#x000A;    &lt;SYSTEM_CODE&gt;&#x7F51;&#x4E0A;"
		"&#x62A5;&#x9500;&lt;/SYSTEM_CODE&gt;&#x000A;    &lt;BRANCH_NO&gt;123456&lt;/BRANCH_NO&gt;&#x000A;    &lt;USER_NO&gt;1101111&lt;/USER_NO&gt;&#x000A;    &lt;BUSI_SERIAL_NO&gt;TCHZT000&lt;/BUSI_SERIAL_NO&gt;&#x000A;    &lt;BATCH&gt;&#x000A;        &lt;BATCHID&gt;80401201803300000000032804000032&lt;/BATCHID&gt;&#x000A;    &lt;/BATCH&gt;&#x000A;&lt;/CMDATA&gt;</in0></CMSave></soap:Body></soap:Envelope>", 
		LAST);

	web_custom_request("ContentInfoService_6", 
		"URL=http://192.168.36.124:8199/TIMS-Server/services/ContentInfoService", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=utf-8", 
		"Body=<soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\" xmlns:soapenc=\"http://schemas.xmlsoap.org/soap/encoding/\"><soap:Body><CMSave xmlns=\"http://xfire.ws.cm.com\"><in0>&lt;?xml version=\"1.0\" encoding=\"GBK\" ?&gt;&lt;CMDATA&gt;&#x000A;    &lt;TRADETYPE&gt;3&lt;/TRADETYPE&gt;&#x000A;    &lt;CIP&gt;192.168.36.14811908&lt;/CIP&gt;&#x000A;    &lt;SYSTEM_CODE&gt;&#x7F51;&"
		"#x4E0A;&#x62A5;&#x9500;&lt;/SYSTEM_CODE&gt;&#x000A;    &lt;BRANCH_NO&gt;123456&lt;/BRANCH_NO&gt;&#x000A;    &lt;USER_NO&gt;1101111&lt;/USER_NO&gt;&#x000A;    &lt;BUSI_SERIAL_NO&gt;TCHZT000&lt;/BUSI_SERIAL_NO&gt;&#x000A;    &lt;BATCH&gt;&#x000A;        &lt;BATCHID&gt;80401201803300000000032804000032&lt;/BATCHID&gt;&#x000A;        &lt;DOCUMENTS&gt;&#x000A;            &lt;DOCUMENT&gt;&#x000A;                &lt;DOCNAME&gt;&#x62A5;&#x9500;&#x5355;&lt;/DOCNAME&gt;&#x000A;                &lt;DESC&gt;"
		"desc&lt;/DESC&gt;&#x000A;                &lt;FILES&gt;&#x000A;                    &lt;FILE&gt;&#x000A;                        &lt;FILE_TYPE&gt;1&lt;/FILE_TYPE&gt;&#x000A;                        &lt;FILE_FORMAT&gt;0&lt;/FILE_FORMAT&gt;&#x000A;                        &lt;FILE_NAME&gt;Chrysanthemum.jpg&lt;/FILE_NAME&gt;&#x000A;                        &lt;FILE_SIZE&gt;879394&lt;/FILE_SIZE&gt;&#x000A;                        &lt;FILE_MD5&gt;D41D8CD98F00B204E9800998ECF8427E&lt;/FILE_MD5&gt;&#x000A;      "
		"                  &lt;FILE_SEQ&gt;00000000&lt;/FILE_SEQ&gt;&#x000A;                    &lt;/FILE&gt;&#x000A;                &lt;/FILES&gt;&#x000A;            &lt;/DOCUMENT&gt;&#x000A;        &lt;/DOCUMENTS&gt;&#x000A;    &lt;/BATCH&gt;&#x000A;&lt;/CMDATA&gt;</in0></CMSave></soap:Body></soap:Envelope>", 
		LAST);

	lrs_create_socket("socket1", "TCP", "LocalHost=0", "RemoteHost=WIN-OBPKSIS6UTS:28390", LrsLastArg);

	lrs_send("socket1", "buf2", LrsLastArg);

	lrs_receive("socket1", "buf3", LrsLastArg);

	lrs_receive("socket1", "buf4", LrsLastArg);

	lrs_close_socket("socket1");

	return 0;
}