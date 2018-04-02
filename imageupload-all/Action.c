Action()
{

	
lr_start_transaction("1-show_scanhtml_and_getActiveConf_and_maxVer");

//////调用影像扫描界面，关联JSESSIONID，后边的jsessionid待完善，因为有的页面不需要jsessionid

//Correlation comment - Do not change!Original value='C4A0867B4716C44271E45107D0390DDB' Name ='CorrelationParameter_1'
	web_reg_save_param_ex(
		"ParamName=JSESSIONID",
		"LB=Set-Cookie: JSESSIONID=",
		"RB=; Path",
		SEARCH_FILTERS,
		"Scope=All",
		"RequestUrl=*/imageupload.jsp*",
		LAST);
	web_url("imageupload.jsp",
		"URL=http://192.168.36.124:8199/TIMS-Server/nc-jsp/imageupload.jsp?pk_jkbx={busi_serial_no}&scanType=1&modulename=%25E7%25BD%2591%25E4%25B8%258A%25E6%258A%25A5%25E9%2594%2580&tradtypeName=%25E6%258A%25A5%25E9%2594%2580%25E5%258D%2595&billNo=201512120005&detailInfo=detailInfo&orgNo=0&dept_id=0&billtype=2641&systemCode=NC&saveopt=0&savestep=1&1",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=",
		"Snapshot=t1.inf",
		"Mode=HTML",
		EXTRARES,
		"URL=../images/tims_look.png", "Referer=http://192.168.36.124:8199/TIMS-Server/nc-jsp/imageupload.jsp?pk_jkbx={busi_serial_no}&scanType=1&modulename=%25E7%25BD%2591%25E4%25B8%258A%25E6%258A%25A5%25E9%2594%2580&tradtypeName=%25E6%258A%25A5%25E9%2594%2580%25E5%258D%2595&billNo=201512120005&detailInfo=detailInfo&orgNo=0&dept_id=0&billtype=2641&systemCode=NC&saveopt=0&savestep=1&1", ENDITEM,
		"URL=../images/tc_newversion.png", "Referer=http://192.168.36.124:8199/TIMS-Server/nc-jsp/imageupload.jsp?pk_jkbx={busi_serial_no}&scanType=1&modulename=%25E7%25BD%2591%25E4%25B8%258A%25E6%258A%25A5%25E9%2594%2580&tradtypeName=%25E6%258A%25A5%25E9%2594%2580%25E5%258D%2595&billNo=201512120005&detailInfo=detailInfo&orgNo=0&dept_id=0&billtype=2641&systemCode=NC&saveopt=0&savestep=1&1", ENDITEM,
		"URL=../images/tc_slogen.png", "Referer=http://192.168.36.124:8199/TIMS-Server/nc-jsp/imageupload.jsp?pk_jkbx={busi_serial_no}&scanType=1&modulename=%25E7%25BD%2591%25E4%25B8%258A%25E6%258A%25A5%25E9%2594%2580&tradtypeName=%25E6%258A%25A5%25E9%2594%2580%25E5%258D%2595&billNo=201512120005&detailInfo=detailInfo&orgNo=0&dept_id=0&billtype=2641&systemCode=NC&saveopt=0&savestep=1&1", ENDITEM,
		"URL=../images/btn_save.png", "Referer=http://192.168.36.124:8199/TIMS-Server/nc-jsp/imageupload.jsp?pk_jkbx={busi_serial_no}&scanType=1&modulename=%25E7%25BD%2591%25E4%25B8%258A%25E6%258A%25A5%25E9%2594%2580&tradtypeName=%25E6%258A%25A5%25E9%2594%2580%25E5%258D%2595&billNo=201512120005&detailInfo=detailInfo&orgNo=0&dept_id=0&billtype=2641&systemCode=NC&saveopt=0&savestep=1&1", ENDITEM,
		"URL=../images/btn_commit.png", "Referer=http://192.168.36.124:8199/TIMS-Server/nc-jsp/imageupload.jsp?pk_jkbx={busi_serial_no}&scanType=1&modulename=%25E7%25BD%2591%25E4%25B8%258A%25E6%258A%25A5%25E9%2594%2580&tradtypeName=%25E6%258A%25A5%25E9%2594%2580%25E5%258D%2595&billNo=201512120005&detailInfo=detailInfo&orgNo=0&dept_id=0&billtype=2641&systemCode=NC&saveopt=0&savestep=1&1", ENDITEM,
		"URL=../softController/getMaxSoftVersionBynologin.action?uuid=", "Referer=http://192.168.36.124:8199/TIMS-Server/nc-jsp/imageupload.jsp?pk_jkbx={busi_serial_no}&scanType=1&modulename=%25E7%25BD%2591%25E4%25B8%258A%25E6%258A%25A5%25E9%2594%2580&tradtypeName=%25E6%258A%25A5%25E9%2594%2580%25E5%258D%2595&billNo=201512120005&detailInfo=detailInfo&orgNo=0&dept_id=0&billtype=2641&systemCode=NC&saveopt=0&savestep=1&1", ENDITEM,
		"URL=../activeParamController/getScanActiveParamFromJSP_bynologin.action?org_id=0&dept_id=0&systemcode=NC", "Referer=http://192.168.36.124:8199/TIMS-Server/nc-jsp/imageupload.jsp?pk_jkbx={busi_serial_no}&scanType=1&modulename=%25E7%25BD%2591%25E4%25B8%258A%25E6%258A%25A5%25E9%2594%2580&tradtypeName=%25E6%258A%25A5%25E9%2594%2580%25E5%258D%2595&billNo=201512120005&detailInfo=detailInfo&orgNo=0&dept_id=0&billtype=2641&systemCode=NC&saveopt=0&savestep=1&1", ENDITEM,
		LAST);

lr_end_transaction("1-show_scanhtml_and_getActiveConf_and_maxVer", LR_AUTO);

/////////////////////获取驳回信息
lr_start_transaction("2-get_OperSuggest");

	web_reg_find("Text=result",
		"Search=Body",
		LAST);

	web_submit_data("getOperSuggest",
		"Action=http://192.168.36.124:8199/TIMS-Server/imageManagerController/getOperSuggest",
		"Method=POST",
		"RecContentType=text/plain",
		"Referer=http://192.168.36.124:8199/TIMS-Server/nc-jsp/imageupload.jsp?pk_jkbx={busi_serial_no}&scanType=1&modulename=%25E7%25BD%2591%25E4%25B8%258A%25E6%258A%25A5%25E9%2594%2580&tradtypeName=%25E6%258A%25A5%25E9%2594%2580%25E5%258D%2595&billNo=201512120005&detailInfo=detailInfo&orgNo=0&dept_id=0&billtype=2641&systemCode=NC&saveopt=0&savestep=1&1",
		"Snapshot=t2.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=bsn", "Value={busi_serial_no}", ENDITEM,
		LAST);
		
lr_end_transaction("2-get_OperSuggest", LR_AUTO);
		

//先调用以下查询，看看有没有图，该方法属于CMSave里的，TRADETYPE=5
lr_start_transaction("3-Query_before_scan");

	web_custom_request("ContentInfoService",
		"URL=http://192.168.36.124:8199/TIMS-Server/services/ContentInfoService",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=",
		"Snapshot=t3.inf",
		"Mode=HTML",
		"EncType=text/xml; charset=utf-8",
		"Body=<soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\" xmlns:soapenc=\"http://schemas.xmlsoap.org/soap/encoding/\"><soap:Body><CMSave xmlns=\"http://xfire.ws.cm.com\"><in0>&lt;?xml version=\"1.0\" encoding=\"GBK\" ?&gt;&lt;CMDATA&gt;&#x000A;    &lt;TRADETYPE&gt;5&lt;/TRADETYPE&gt;&#x000A;    &lt;CIP&gt;192.168.36.148&lt;/CIP&gt;&#x000A;    &lt;SYSTEM_CODE&gt;&#x7F51;&#x4E0A;&#x62A5;&#x9500;&lt;/SYSTEM_CODE&gt;&#x000A;    &lt;BRANCH_NO&gt;123456&lt;/BRANCH_NO&gt;&#x000A;    &lt;USER_NO&gt;1101111&lt;/USER_NO&gt;&#x000A;    &lt;BUSI_SERIAL_NO&gt;{busi_serial_no}&lt;/BUSI_SERIAL_NO&gt;&#x000A;    &lt;BATCH&gt;&#x000A;        &lt;BATCHID&gt;&lt;/BATCHID&gt;&#x000A;    &lt;/BATCH&gt;&#x000A;&lt;/CMDATA&gt;</in0></CMSave></soap:Body></soap:Envelope>",
		LAST);
		
lr_end_transaction("3-Query_before_scan", LR_AUTO);
		

///获取批次号
lr_start_transaction("4-get_new_batchid");

//Correlation comment - Do not change!Original value='80401201803300000000032804000032' Name ='CorrelationParameter_1'
	web_reg_save_param_ex(
		"ParamName=BATCHID",
		"LB=ns1:out>",
		"RB=</ns1:out",
		SEARCH_FILTERS,
		"Scope=All",
		"RequestUrl=*/ContentInfoService*",
		LAST);
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
lr_end_transaction("4-get_new_batchid", LR_AUTO);


////////上传图像  变量 {imgName} 是上传的文件名，后边下载的时候，需要从xml报文里获取
lr_start_transaction("5-upload_img_sock");


	lrs_create_socket("socket0", "TCP", "LocalHost=0", "RemoteHost=192.168.36.124:28390", LrsLastArg);

	lrs_send("socket0", "buf0", LrsLastArg);

	lrs_send("socket0", "buf1", LrsLastArg);

	lrs_close_socket("socket0");
	
lr_end_transaction("5-upload_img_sock", LR_AUTO);
	

//////传输完成
//////调用保存报文

lr_start_transaction("6-post_save_xml");

	web_reg_find("Text=RSPCODE>00000&lt;/RSPCODE",
		"Search=All",
		LAST);
	web_custom_request("ContentInfoService_3",
		"URL=http://192.168.36.124:8199/TIMS-Server/services/ContentInfoService",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=",
		"Snapshot=t5.inf",
		"Mode=HTML",
		"EncType=text/xml; charset=utf-8",
		"Body=<soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\" xmlns:soapenc=\"http://schemas.xmlsoap.org/soap/encoding/\"><soap:Body><CMSave xmlns=\"http://xfire.ws.cm.com\"><in0>&lt;?xml version=\"1.0\" encoding=\"GBK\" ?&gt;&lt;CMDATA&gt;&#x000A;    &lt;TRADETYPE&gt;0&lt;/TRADETYPE&gt;&#x000A;    &lt;WEBURL&gt;http://192.168.36.124:8199/TIMS-Server/services/ContentInfoService&lt;/WEBURL&gt;&#x000A;    &lt;CIP&gt;192.168.36.148&lt;/CIP&gt;&#x000A;    &lt;SIP&gt;192.168.36.124&lt;/SIP&gt;&#x000A;    &lt;SPORT&gt;28390&lt;/SPORT&gt;&#x000A;    &lt;SYSTEM_CODE&gt;&#x7F51;&#x4E0A;&#x62A5;&#x9500;&lt;/SYSTEM_CODE&gt;&#x000A;    &lt;BRANCH_NO&gt;123456&lt;/BRANCH_NO&gt;&#x000A;    &lt;USER_NO&gt;1101111&lt;/USER_NO&gt;&#x000A;    &lt;BUSI_SERIAL_NO&gt;{busi_serial_no}&lt;/BUSI_SERIAL_NO&gt;&#x000A;    &lt;BATCH&gt;&#x000A;        &lt;BATCHID&gt;{BATCHID}&lt;/BATCHID&gt;&#x000A;        &lt;DOCUMENT"
		"S&gt;&#x000A;            &lt;DOCUMENT&gt;&#x000A;                &lt;DOCNAME&gt;&#x62A5;&#x9500;&#x5355;&lt;/DOCNAME&gt;&#x000A;                &lt;DESC&gt;descripe&lt;/DESC&gt;&#x000A;                &lt;FILES&gt;&#x000A;                    &lt;FILE&gt;&#x000A;                        &lt;FILE_TYPE&gt;1&lt;/FILE_TYPE&gt;&#x000A;                        &lt;FILE_NAME&gt;{imgName}&lt;/FILE_NAME&gt;&#x000A;                        &lt;FILE_FORMAT&gt;0&lt;/FILE_FORMAT&gt;&#x000A;                        &lt;FILE_SIZE&gt;879394&lt;/FILE_SIZE&gt;&#x000A;                        &lt;FILE_MD5&gt;CEE1E93713842D606C9F8CC45EDFE67F&lt;/FILE_MD5&gt;&#x000A;                        &lt;FILE_SEQ&gt;00000000&lt;/FILE_SEQ&gt;&#x000A;                    &lt;/FILE&gt;&#x000A;                &lt;/FILES&gt;&#x000A;            &lt;/DOCUMENT&gt;&#x000A;        &lt;/DOCUMENTS&gt;&#x000A;    &lt;/BATCH&gt;&#x000A;&lt;/CMDATA&gt;</in0></CMSave></soap:Body></soap:Envelope>",
		LAST);
		
lr_end_transaction("6-post_save_xml", LR_AUTO);
		

/////保存成功后，再次查询

lr_start_transaction("7-Query_after_save");

	web_custom_request("ContentInfoService_4",
		"URL=http://192.168.36.124:8199/TIMS-Server/services/ContentInfoService",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=",
		"Snapshot=t6.inf",
		"Mode=HTML",
		"EncType=text/xml; charset=utf-8",
		"Body=<soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\" xmlns:soapenc=\"http://schemas.xmlsoap.org/soap/encoding/\"><soap:Body><CMSave xmlns=\"http://xfire.ws.cm.com\"><in0>&lt;?xml version=\"1.0\" encoding=\"GBK\" ?&gt;&lt;CMDATA&gt;&#x000A;    &lt;TRADETYPE&gt;5&lt;/TRADETYPE&gt;&#x000A;    &lt;CIP&gt;192.168.36.148&lt;/CIP&gt;&#x000A;    &lt;SYSTEM_CODE&gt;&#x7F51;&#x4E0A;&#x62A5;&#x9500;&lt;/SYSTEM_CODE&gt;&#x000A;    &lt;BRANCH_NO&gt;123456&lt;/BRANCH_NO&gt;&#x000A;    &lt;USER_NO&gt;1101111&lt;/USER_NO&gt;&#x000A;    &lt;BUSI_SERIAL_NO&gt;{busi_serial_no}&lt;/BUSI_SERIAL_NO&gt;&#x000A;    &lt;BATCH&gt;&#x000A;        &lt;BATCHID&gt;&lt;/BATCHID&gt;&#x000A;    &lt;/BATCH&gt;&#x000A;&lt;/CMDATA&gt;</in0></CMSave></soap:Body></soap:Envelope>",
		LAST);

lr_end_transaction("7-Query_after_save", LR_AUTO);


////下载第一张

lr_start_transaction("8-require_download_first_xml");


	web_reg_find("Search=All",
		"Text=RSPCODE>30000&lt;/RSPCODE",
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
		"Body=<soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\" xmlns:soapenc=\"http://schemas.xmlsoap.org/soap/encoding/\"><soap:Body><CMSave xmlns=\"http://xfire.ws.cm.com\"><in0>&lt;?xml version=\"1.0\" encoding=\"GBK\" ?&gt;&lt;CMDATA&gt;&#x000A;    &lt;TRADETYPE&gt;3&lt;/TRADETYPE&gt;&#x000A;    &lt;CIP&gt;192.168.36.14811908&lt;/CIP&gt;&#x000A;    &lt;SYSTEM_CODE&gt;&#x7F51;&#x4E0A;&#x62A5;&#x9500;&lt;/SYSTEM_CODE&gt;&#x000A;    &lt;BRANCH_NO&gt;123456&lt;/BRANCH_NO&gt;&#x000A;    &lt;USER_NO&gt;1101111&lt;/USER_NO&gt;&#x000A;    &lt;BUSI_SERIAL_NO&gt;{busi_serial_no}&lt;/BUSI_SERIAL_NO&gt;&#x000A;    &lt;BATCH&gt;&#x000A;        &lt;BATCHID&gt;{BATCHID}&lt;/BATCHID&gt;&#x000A;        &lt;DOCUMENTS&gt;&#x000A;            &lt;DOCUMENT&gt;&#x000A;                &lt;DOCNAME&gt;&#x62A5;&#x9500;&#x5355;&lt;/DOCNAME&gt;&#x000A;                &lt;DESC&gt;desc&lt;/DESC&gt;&#x000A;              "
		"  &lt;FILES&gt;&#x000A;                    &lt;FILE&gt;&#x000A;                        &lt;FILE_TYPE&gt;1&lt;/FILE_TYPE&gt;&#x000A;                        &lt;FILE_FORMAT&gt;0&lt;/FILE_FORMAT&gt;&#x000A;                        &lt;FILE_NAME&gt;{imgName}&lt;/FILE_NAME&gt;&#x000A;                        &lt;FILE_SIZE&gt;879394&lt;/FILE_SIZE&gt;&#x000A;                        &lt;FILE_MD5&gt;D41D8CD98F00B204E9800998ECF8427E&lt;/FILE_MD5&gt;&#x000A;                        &lt;FILE_SEQ&gt;00000000&lt;/FILE_SEQ&gt;&#x000A;                    &lt;/FILE&gt;&#x000A;                &lt;/FILES&gt;&#x000A;            &lt;/DOCUMENT&gt;&#x000A;        &lt;/DOCUMENTS&gt;&#x000A;    &lt;/BATCH&gt;&#x000A;&lt;/CMDATA&gt;</in0></CMSave></soap:Body></soap:Envelope>",
		LAST);
lr_end_transaction("8-require_download_first_xml", LR_AUTO);
		

////下图

lr_start_transaction("9-download_first_img_sock");

	lrs_create_socket("socket1", "TCP", "LocalHost=0", "RemoteHost=192.168.36.124:28390", LrsLastArg);

	lrs_send("socket1", "buf2", LrsLastArg);

	lrs_receive("socket1", "buf3", LrsLastArg);

	lrs_receive("socket1", "buf4", LrsLastArg);

	lrs_close_socket("socket1");
	
lr_end_transaction("9-download_first_img_sock", LR_AUTO);




    lr_output_message("业务流水= %s", lr_eval_string("{busi_serial_no}"));
	lr_output_message("批次号  = %s", lr_eval_string("{BATCHID}"));
	lr_output_message("图像名称= %s", lr_eval_string("{imgName}"));

return 0;
}
