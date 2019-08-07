



Action()
{
    
	lr_start_transaction("addScanTask");

	web_service_call( "StepName=addScanTask_101",
		"SOAPMethod=DocumentsService|DocumentsServiceHttpPort|addScanTask",
		"ResponseParam=response",
		"Service=DocumentsService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1539167557.inf",
		BEGIN_ARGUMENTS,
		"in0=<?xml version=\"1.0\" encoding=\"UTF-8\"?>\r\n<DATA><ReqHead><clientcode>NC</clientcode><servicecode>TIMS-Server</servicecode><time>20181010182950894</time><ticket>32838e8ba639fd18947e6c969f3ba2ee</ticket></ReqHead><BillBody><Bill><serviceid>0</serviceid><datasource>nc65</datasource><groupid>0001F910000000000QVW</groupid><DetailInfo>0001F910000000000QVW</DetailInfo><ScanType>2</ScanType><Busi_Serial_No>{pk}</Busi_Serial_No><UserNo>ncc1</UserNo><BillCode>D12018101000000461</BillCode><userid>1001F910000000000BAC</userid><OrgName>北京公司（影像用）</OrgName><OrgNo>0001F910000000009T9Y</OrgNo><UserName>ncc1</UserName><Cash>12.00000000</Cash><BillDate>2018-10-10 18:29:50</BillDate><BillType>D1</BillType><pk_billtype>F1</pk_billtype></Bill></BillBody></DATA>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		"out=Param_out",
		END_RESULT,
		LAST);

	lr_end_transaction("addScanTask", LR_AUTO);

	lr_think_time(3);

//	lr_output_message(lr_eval_string("{Param_out}"));

return 0;
}
