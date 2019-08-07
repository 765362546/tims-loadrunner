Action()
{

//nc调用，获取影像查看地址


	lr_start_transaction("getImageShowUrl");

	web_reg_find("Text=0000",
		"Fail=NotFound",
		"Search=Body",
		LAST);


	web_service_call( "StepName=getImageShowUrl_101",
		"SOAPMethod=DocumentsService|DocumentsServiceHttpPort|getImageShowUrl",
		"ResponseParam=response",
		"Service=DocumentsService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1539227270.inf",
		BEGIN_ARGUMENTS,
		"in0=<?xml version=\"1.0\" encoding=\"UTF-8\"?>\r\n<DATA><ReqHead><clientcode>NC</clientcode><servicecode>TIMS-Server</servicecode><time>20181011103139120</time><ticket>9a55b00b0fcba576c971b1c07ac8e199</ticket></ReqHead><BillBody><Bill/><barcode>{PK}</barcode><Busi_Serial_No>{PK}</Busi_Serial_No><UserNo>ncc3</UserNo><UserName>ncc3</UserName><BillType>D1</BillType><userid>>1001F910000000000BAK</userid>><IsEdit>1</IsEdit><systype>localhost:80</systype></BillBody></DATA>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		"out=Param_out",
		END_RESULT,
		LAST);


	lr_end_transaction("getImageShowUrl", LR_AUTO);


	lr_output_message(lr_eval_string("getImageShowUrl方法请求报文：{Param_out}"));
lr_think_time(3);

//获取目录树

    
	lr_start_transaction("getimagetree");

	web_reg_find("Text=children",
		"Fail=NotFound",
		"Search=Body",
		LAST);

	web_url("getImagesByPKlogin.action",
		"URL=http://172.16.56.112:8199/TIMS-Server/ncRequestController/getImagesByPKlogin.action?pk={PK}&_=1539225962466",
		"Resource=1",
		"RecContentType=application/json",
		"Referer=",
		LAST);
    
	lr_end_transaction("getimagetree", LR_AUTO);


	lr_think_time(3);
//下载图片

    
	lr_start_transaction("downloadimage");


	web_url("getImageByNologin.action",
		"URL=http://172.16.56.112:8199/TIMS-Server/cMImageController/getImageByNologin.action?file_id={FILEID}",
		"Resource=1",
		"RecContentType=appliaction/jepg",
		"Referer=",
		LAST);


	lr_end_transaction("downloadimage", LR_AUTO);


return 0;
}
