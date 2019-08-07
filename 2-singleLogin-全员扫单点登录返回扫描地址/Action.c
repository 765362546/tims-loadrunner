Action()
{

    
	lr_start_transaction("singlelogin");

	web_service_call( "StepName=singleLogin_101",
		"SOAPMethod=DocumentsService|DocumentsServiceHttpPort|singleLogin",
		"ResponseParam=response",
		"Service=DocumentsService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1539166873.inf",
		BEGIN_ARGUMENTS,
		"in0=<?xml version=\"1.0\" encoding=\"UTF-8\"?>\r\n<DATA><ReqHead><clientcode>NC</clientcode><servicecode>TIMS-Server</servicecode><time>20181010181308738</time><ticket>3ebc9f4d4ea1fb4caa7bb30669c1beef</ticket></ReqHead><BillBody><Bill/><barcode>{PK}</barcode><BillType>D0</BillType><Busi_Serial_No>{PK}</Busi_Serial_No><userid>1001F910000000000BAG</userid><UserNo>ncc2</UserNo><UserName>ncc2</UserName><pk_group>0001F910000000000QVW</pk_group><OrgNo>0001F910000000000QVW</OrgNo><pk_psndoc>1001F910000000000E61</pk_psndoc><pk_base_doc>1001F910000000000E61</pk_base_doc><groupid>0001F910000000000QVW</groupid><datasource>nc65demo</datasource><ScanType>2</ScanType></BillBody></DATA>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		"out=Param_out",
		END_RESULT,
		LAST);

	lr_end_transaction("singlelogin", LR_AUTO);


	lr_think_time(3);

lr_output_message(lr_eval_string("{Param_out}"));
		

	return 0;
}
