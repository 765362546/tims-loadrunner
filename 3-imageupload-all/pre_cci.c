# 1 "d:\\\323\260\317\361\321\271\262\342\275\305\261\276\\3-imageupload-all\\\\combined_imageupload-all.c"
# 1 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h" 1
 
 












 











# 103 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"








































































	

 


















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 263 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_decrypt (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 502 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 505 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 528 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 562 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 585 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 609 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);
int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);


 
 
 
 
 
 
# 676 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											int * col_name_len);
# 737 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);


 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   int const in_len,
                                   char * * const out_str,
                                   int * const out_len);
# 762 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 774 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 782 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 788 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );

int lr_save_searched_string(char *buffer, long buf_size, unsigned int occurrence,
			    char *search_string, int offset, unsigned int param_val_len, 
			    char *param_name);

 
char *   lr_string (char * str);

 
# 859 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 866 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 888 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 964 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 993 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"


# 1005 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char *sourceString, char *fromEncoding, char *toEncoding, char *paramName);





 
 

















# 1 "d:\\\323\260\317\361\321\271\262\342\275\305\261\276\\3-imageupload-all\\\\combined_imageupload-all.c" 2

# 1 "globals.h" 1



 
 

# 1 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/web_api.h" 1
 







# 1 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/as_web.h" 1
 






















































 




 








 
 
 

  int
	web_add_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_add_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
	
  int
	web_add_auto_header(
		const char *		mpszHeader,
		const char *		mpszValue);

  int
	web_add_header(
		const char *		mpszHeader,
		const char *		mpszValue);
  int
	web_add_cookie(
		const char *		mpszCookie);
  int
	web_cleanup_auto_headers(void);
  int
	web_cleanup_cookies(void);
  int
	web_concurrent_end(
		const char * const	mpszReserved,
										 
		...								 
	);
  int
	web_concurrent_start(
		const char * const	mpszConcurrentGroupName,
										 
										 
		...								 
										 
	);
  int
	web_create_html_param(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim);
  int
	web_create_html_param_ex(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim,
		const char *		mpszNum);
  int
	web_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_disable_keep_alive(void);
  int
	web_enable_keep_alive(void);
  int
	web_find(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_get_int_property(
		const int			miHttpInfoType);
  int
	web_image(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_image_check(
		const char *		mpszName,
		...);
  int
	web_java_check(
		const char *		mpszName,
		...);
  int
	web_link(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

	
  int
	web_global_verification(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_find(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
				
  int
	web_reg_save_param(
		const char *		mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 

  int
	web_convert_param(
		const char * 		mpszParamName, 
										 
		...);							 
										 
										 


										 

										 
  int
	web_remove_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
				
  int
	web_remove_auto_header(
		const char *		mpszHeaderName,
		...);							 
										 



  int
	web_remove_cookie(
		const char *		mpszCookie);

  int
	web_save_header(
		const char *		mpszType,	 
		const char *		mpszName);	 
  int
	web_set_certificate(
		const char *		mpszIndex);
  int
	web_set_certificate_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_set_connections_limit(
		const char *		mpszLimit);
  int
	web_set_max_html_param_len(
		const char *		mpszLen);
  int
	web_set_max_retries(
		const char *		mpszMaxRetries);
  int
	web_set_proxy(
		const char *		mpszProxyHost);
  int
	web_set_proxy_bypass(
		const char *		mpszBypass);
  int
	web_set_secure_proxy(
		const char *		mpszProxyHost);
  int
	web_set_sockets_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue
	);
  int
	web_set_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue,
		...								 
	);
  int
	web_set_timeout(
		const char *		mpszWhat,
		const char *		mpszTimeout);
  int
	web_set_user(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);

  int
	web_sjis_to_euc_param(
		const char *		mpszParamName,
										 
		const char *		mpszParamValSjis);
										 

  int
	web_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_set_proxy_bypass_local(
		const char * mpszNoLocal
		);

  int 
	web_cache_cleanup(void);

  int
	web_create_html_query(
		const char* mpszStartQuery,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_create_radio_button_param(
		const char *NameFiled,
		const char *NameAndVal,
		const char *ParamName
		);

  int
	web_convert_from_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										
  int
	web_convert_to_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_ex(
		const char * mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_xpath(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 










# 596 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/as_web.h"


# 609 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/as_web.h"



























# 647 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/as_web.h"

 
 
 


  int
	FormSubmit(
		const char *		mpszFormName,
		...);
  int
	InitWebVuser(void);
  int
	SetUser(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);
  int
	TerminateWebVuser(void);
  int
	URL(
		const char *		mpszUrlName);
























# 715 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/as_web.h"



 
 
 






# 10 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/web_api.h" 2












 






 











  int
	web_reg_add_cookie(
		const char *		mpszCookie,
		...);							 
										 

  int
	web_report_data_point(
		const char *		mpszEventType,
		const char *		mpszEventName,
		const char *		mpszDataPointName,
		const char *		mpszLAST);	 
										 
										 
										 

  int
	web_text_link(
		const char *		mpszStepName,
		...);

  int
	web_element(
		const char *		mpszStepName,
		...);

  int
	web_image_link(
		const char *		mpszStepName,
		...);

  int
	web_static_image(
		const char *		mpszStepName,
		...);

  int
	web_image_submit(
		const char *		mpszStepName,
		...);

  int
	web_button(
		const char *		mpszStepName,
		...);

  int
	web_edit_field(
		const char *		mpszStepName,
		...);

  int
	web_radio_group(
		const char *		mpszStepName,
		...);

  int
	web_check_box(
		const char *		mpszStepName,
		...);

  int
	web_list(
		const char *		mpszStepName,
		...);

  int
	web_text_area(
		const char *		mpszStepName,
		...);

  int
	web_map_area(
		const char *		mpszStepName,
		...);

  int
	web_eval_java_script(
		const char *		mpszStepName,
		...);

  int
	web_reg_dialog(
		const char *		mpszArg1,
		...);

  int
	web_reg_cross_step_download(
		const char *		mpszArg1,
		...);

  int
	web_browser(
		const char *		mpszStepName,
		...);

  int
	web_control(
		const char *		mpszStepName,
		...);

  int
	web_set_rts_key(
		const char *		mpszArg1,
		...);

  int
	web_save_param_length(
		const char * 		mpszParamName,
		...);

  int
	web_save_timestamp_param(
		const char * 		mpszParamName,
		...);

  int
	web_load_cache(
		const char *		mpszStepName,
		...);							 
										 

  int
	web_dump_cache(
		const char *		mpszStepName,
		...);							 
										 
										 

  int
	web_reg_find_in_log(
		const char *		mpszArg1,
		...);							 
										 
										 

  int
	web_get_sockets_info(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 

  int
	web_add_cookie_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

  int
	web_hook_java_script(
		const char *		mpszArg1,
		...);							 
										 
										 
										 





 
 
 


# 7 "globals.h" 2

# 1 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrw_custom_body.h" 1
 





# 8 "globals.h" 2

# 1 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrs.h" 1
 



 
# 1 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrs_err.h" 1
 






 
























 




 





 

 







 








































 










# 6 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrs.h" 2


































































































 
 




 




 
enum{
	LRS_NO_DELAY
};

 
enum{
	LOCAL_ADDRESS,
	LOCAL_HOSTNAME,
	LOCAL_PORT,
	REMOTE_ADDRESS,
	REMOTE_HOSTNAME,
	REMOTE_PORT
};

 
enum{
	Mismatch,
	EndMarker
};
 
enum{
	MISMATCH_SIZE,
	MISMATCH_CONTENT
};
 
enum{
	EndMarker_None,
	StringTerminator,
	BinaryStringTerminator,
	RecordingSize
};

 
enum{
	RecieveOption_None = 0,
	NoOption = 0,
	OffsetSize = 1,
	LeftRightBoundaries = 2,
	LeftBoundarySize = 3
};


 
int		LrsStartup(int ver_info);
int		LrsCleanup(void);
int		LrsCreateSocket(char *s_desc, char *s_type, ...);
int		LrsAcceptConnection(char *old_s_desc, char *new_s_desc);
int		LrsCloseSocket(char	*s_desc);
int		LrsDisableSocket(char *s_desc, int operation_to_disable);
int		LrsSend(char *s_desc, char *buf_desc, ...);
int		LrsLengthSend(char *s_desc, char	*buf_desc, int send_option, ...);
int		LrsSetSendBuffer(char *s_desc, char *buffer, int size);
int		LrsReceive(char	*s_desc, char *buf_desc, ...);
int		LrsReceiveEx(char *s_desc, char	*buf_desc, ...);
int		LrsLengthReceive(char *s_desc, char	*buf_desc, int receive_option, ...);
int		LrsSetReceiveOption(int option,	int value, ...);
int		LrsGetSocketHandler(char *s_desc);
int		LrsSetSocketHandler(char *s_desc,int s_handler);
int		LrsGetLastReceivedBuffer(char *s_desc, char **actual_buf, int *actual_bytes);
char*	LrsGetReceivedBuffer(char* s_desc, int sub_buf_offset, int	sub_buf_len, char*	encoding);
int		LrsGetLastReceivedBufferSize(char*	s_desc);
int		LrsGetBufferByName(char	*buf_desc, char	**actual_buf, int *actual_bytes);
char*	LrsGetStaticBuffer(char	*s_desc,char* buf_desc,int sub_buf_offset,int sub_buf_len,char* encoding);
int		LrsSaveParam(char* s_desc, char* buf_desc, char* param_name, int offset, int param_len);
int		LrsSaveParamEx(char* s_desc, char* whence, char* buf_desc, int offset, int param_len, char*	encoding, char*	param_name);
int		LrsSaveSearchedString(char*	s_desc,	char* buf_desc, char* param_name, char*	left_boundary, char* right_boundary,int ordinal, int offset, int param_len);
int		LrsFreeBuffer(char*	buffer);
void	LrsSetSendTimeout(long	tv_sec, long tv_usec);
void	LrsSetRecvTimeout(long	tv_sec,long	tv_usec);
void	LrsSetRecvTimeout2(long	tv_sec,long	tv_usec);
void	LrsSetAcceptTimeout(long tv_sec, long tv_usec);
void	LrsSetConnectTimeout(long	tv_sec,long	tv_usec);
char*	LrsEbcdicToAscii(char* s_desc, char* buf, long buf_length);
char*	LrsAsciiToEbcdic(char* s_desc, char* buf, long buf_length);
char*	LrsDecimalToHexString(char*	s_desc,	char* buf, long buf_length);
int		LrsHexStringToInt(char*	buf, long buf_length, int* mpiOutput);
char*	LrsGetUserBuffer(char* s_desc);
long	LrsGetUserBufferSize(char* s_desc);
int		LrsSetSocketOptions(char	*s_desc, int option, char *option_val);
char*	LrsGetSocketAttrib(char *s_desc, int attrib);
int		LrsExcludeSocket(char* s_desc);



# 9 "globals.h" 2


 
 


# 2 "d:\\\323\260\317\361\321\271\262\342\275\305\261\276\\3-imageupload-all\\\\combined_imageupload-all.c" 2

# 1 "vuser_init.c" 1
 







vuser_init()
{
	return 0;
}
# 3 "d:\\\323\260\317\361\321\271\262\342\275\305\261\276\\3-imageupload-all\\\\combined_imageupload-all.c" 2

# 1 "Action.c" 1
Action()
{

	
lr_start_transaction("1-show_scanhtml_and_getActiveConf_and_maxVer");

 

 
	web_reg_save_param_ex(
		"ParamName=JSESSIONID",
		"LB=Set-Cookie: JSESSIONID=",
		"RB=; Path",
		"SEARCH_FILTERS",
		"Scope=All",
		"RequestUrl=*/imageupload.jsp*",
		"LAST");
	web_url("imageupload.jsp",
		"URL=http://172.16.56.112:8199/TIMS-Server/nc-jsp/imageupload.jsp?pk_jkbx={busi_serial_no}&scanType=1&modulename=%25E7%25BD%2591%25E4%25B8%258A%25E6%258A%25A5%25E9%2594%2580&tradtypeName=%25E6%258A%25A5%25E9%2594%2580%25E5%258D%2595&billNo=201512120005&detailInfo=detailInfo&orgNo=0&dept_id=0&billtype=2641&systemCode=NC&saveopt=0&savestep=1&1",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=",
		"Snapshot=t1.inf",
		"Mode=HTML",
		"EXTRARES",
		"URL=../images/tims_look.png", "Referer=http://172.16.56.112:8199/TIMS-Server/nc-jsp/imageupload.jsp?pk_jkbx={busi_serial_no}&scanType=1&modulename=%25E7%25BD%2591%25E4%25B8%258A%25E6%258A%25A5%25E9%2594%2580&tradtypeName=%25E6%258A%25A5%25E9%2594%2580%25E5%258D%2595&billNo=201512120005&detailInfo=detailInfo&orgNo=0&dept_id=0&billtype=2641&systemCode=NC&saveopt=0&savestep=1&1", "ENDITEM",
		"URL=../images/tc_newversion.png", "Referer=http://172.16.56.112:8199/TIMS-Server/nc-jsp/imageupload.jsp?pk_jkbx={busi_serial_no}&scanType=1&modulename=%25E7%25BD%2591%25E4%25B8%258A%25E6%258A%25A5%25E9%2594%2580&tradtypeName=%25E6%258A%25A5%25E9%2594%2580%25E5%258D%2595&billNo=201512120005&detailInfo=detailInfo&orgNo=0&dept_id=0&billtype=2641&systemCode=NC&saveopt=0&savestep=1&1", "ENDITEM",
		"URL=../images/tc_slogen.png", "Referer=http://172.16.56.112:8199/TIMS-Server/nc-jsp/imageupload.jsp?pk_jkbx={busi_serial_no}&scanType=1&modulename=%25E7%25BD%2591%25E4%25B8%258A%25E6%258A%25A5%25E9%2594%2580&tradtypeName=%25E6%258A%25A5%25E9%2594%2580%25E5%258D%2595&billNo=201512120005&detailInfo=detailInfo&orgNo=0&dept_id=0&billtype=2641&systemCode=NC&saveopt=0&savestep=1&1", "ENDITEM",
		"URL=../images/btn_save.png", "Referer=http://172.16.56.112:8199/TIMS-Server/nc-jsp/imageupload.jsp?pk_jkbx={busi_serial_no}&scanType=1&modulename=%25E7%25BD%2591%25E4%25B8%258A%25E6%258A%25A5%25E9%2594%2580&tradtypeName=%25E6%258A%25A5%25E9%2594%2580%25E5%258D%2595&billNo=201512120005&detailInfo=detailInfo&orgNo=0&dept_id=0&billtype=2641&systemCode=NC&saveopt=0&savestep=1&1", "ENDITEM",
		"URL=../images/btn_commit.png", "Referer=http://172.16.56.112:8199/TIMS-Server/nc-jsp/imageupload.jsp?pk_jkbx={busi_serial_no}&scanType=1&modulename=%25E7%25BD%2591%25E4%25B8%258A%25E6%258A%25A5%25E9%2594%2580&tradtypeName=%25E6%258A%25A5%25E9%2594%2580%25E5%258D%2595&billNo=201512120005&detailInfo=detailInfo&orgNo=0&dept_id=0&billtype=2641&systemCode=NC&saveopt=0&savestep=1&1", "ENDITEM",
		"URL=../softController/getMaxSoftVersionBynologin.action?uuid=", "Referer=http://172.16.56.112:8199/TIMS-Server/nc-jsp/imageupload.jsp?pk_jkbx={busi_serial_no}&scanType=1&modulename=%25E7%25BD%2591%25E4%25B8%258A%25E6%258A%25A5%25E9%2594%2580&tradtypeName=%25E6%258A%25A5%25E9%2594%2580%25E5%258D%2595&billNo=201512120005&detailInfo=detailInfo&orgNo=0&dept_id=0&billtype=2641&systemCode=NC&saveopt=0&savestep=1&1", "ENDITEM",
		"URL=../activeParamController/getScanActiveParamFromJSP_bynologin.action?org_id=0&dept_id=0&systemcode=NC", "Referer=http://172.16.56.112:8199/TIMS-Server/nc-jsp/imageupload.jsp?pk_jkbx={busi_serial_no}&scanType=1&modulename=%25E7%25BD%2591%25E4%25B8%258A%25E6%258A%25A5%25E9%2594%2580&tradtypeName=%25E6%258A%25A5%25E9%2594%2580%25E5%258D%2595&billNo=201512120005&detailInfo=detailInfo&orgNo=0&dept_id=0&billtype=2641&systemCode=NC&saveopt=0&savestep=1&1", "ENDITEM",
		"LAST");

lr_end_transaction("1-show_scanhtml_and_getActiveConf_and_maxVer", 2);

 
lr_start_transaction("2-get_OperSuggest");

	web_reg_find("Text=result",
		"Search=Body",
		"LAST");

	web_submit_data("getOperSuggest",
		"Action=http://172.16.56.112:8199/TIMS-Server/imageManagerController/getOperSuggest",
		"Method=POST",
		"RecContentType=text/plain",
		"Referer=http://172.16.56.112:8199/TIMS-Server/nc-jsp/imageupload.jsp?pk_jkbx={busi_serial_no}&scanType=1&modulename=%25E7%25BD%2591%25E4%25B8%258A%25E6%258A%25A5%25E9%2594%2580&tradtypeName=%25E6%258A%25A5%25E9%2594%2580%25E5%258D%2595&billNo=201512120005&detailInfo=detailInfo&orgNo=0&dept_id=0&billtype=2641&systemCode=NC&saveopt=0&savestep=1&1",
		"Snapshot=t2.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=bsn", "Value={busi_serial_no}", "ENDITEM",
		"LAST");
		
lr_end_transaction("2-get_OperSuggest", 2);
		

 
lr_start_transaction("3-Query_before_scan");

	web_custom_request("ContentInfoService",
		"URL=http://172.16.56.112:8199/TIMS-Server/services/ContentInfoService",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=",
		"Snapshot=t3.inf",
		"Mode=HTML",
		"EncType=text/xml; charset=utf-8",
		"Body=<soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\" xmlns:soapenc=\"http://schemas.xmlsoap.org/soap/encoding/\"><soap:Body><CMSave xmlns=\"http://xfire.ws.cm.com\"><in0>&lt;?xml version=\"1.0\" encoding=\"GBK\" ?&gt;&lt;CMDATA&gt;&#x000A;    &lt;TRADETYPE&gt;5&lt;/TRADETYPE&gt;&#x000A;    &lt;CIP&gt;192.168.36.148&lt;/CIP&gt;&#x000A;    &lt;SYSTEM_CODE&gt;&#x7F51;&#x4E0A;&#x62A5;&#x9500;&lt;/SYSTEM_CODE&gt;&#x000A;    &lt;BRANCH_NO&gt;123456&lt;/BRANCH_NO&gt;&#x000A;    &lt;USER_NO&gt;1101111&lt;/USER_NO&gt;&#x000A;    &lt;BUSI_SERIAL_NO&gt;{busi_serial_no}&lt;/BUSI_SERIAL_NO&gt;&#x000A;    &lt;BATCH&gt;&#x000A;        &lt;BATCHID&gt;&lt;/BATCHID&gt;&#x000A;    &lt;/BATCH&gt;&#x000A;&lt;/CMDATA&gt;</in0></CMSave></soap:Body></soap:Envelope>",
		"LAST");
		
lr_end_transaction("3-Query_before_scan", 2);
		

 
lr_start_transaction("4-get_new_batchid");

 
	web_reg_save_param_ex(
		"ParamName=BATCHID",
		"LB=ns1:out>",
		"RB=</ns1:out",
		"SEARCH_FILTERS",
		"Scope=All",
		"RequestUrl=*/ContentInfoService*",
		"LAST");
	web_custom_request("ContentInfoService_2",
		"URL=http://172.16.56.112:8199/TIMS-Server/services/ContentInfoService",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=",
		"Snapshot=t4.inf",
		"Mode=HTML",
		"EncType=text/xml; charset=utf-8",
		"Body=<soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\" xmlns:soapenc=\"http://schemas.xmlsoap.org/soap/encoding/\"><soap:Body><CM_GetID xmlns=\"http://xfire.ws.cm.com\"></CM_GetID></soap:Body></soap:Envelope>",
		"LAST");
lr_end_transaction("4-get_new_batchid", 2);


 
lr_start_transaction("5-upload_img_sock");


	LrsCreateSocket("socket0", "TCP", "LocalHost=0", "RemoteHost=172.16.56.112:28390", "0");

	LrsSend("socket0", "buf0", "0");

	LrsSend("socket0", "buf1", "0");

	LrsCloseSocket("socket0");
	
lr_end_transaction("5-upload_img_sock", 2);
	

 
 

lr_start_transaction("6-post_save_xml");

	web_reg_find("Text=00000",
		"Search=All",
		"LAST");
	web_custom_request("ContentInfoService_3",
		"URL=http://172.16.56.112:8199/TIMS-Server/services/ContentInfoService",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=",
		"Snapshot=t5.inf",
		"Mode=HTML",
		"EncType=text/xml; charset=utf-8",
		"Body=<soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\" xmlns:soapenc=\"http://schemas.xmlsoap.org/soap/encoding/\"><soap:Body><CMSave xmlns=\"http://xfire.ws.cm.com\"><in0>&lt;?xml version=\"1.0\" encoding=\"GBK\" ?&gt;&lt;CMDATA&gt;&#x000A;    &lt;TRADETYPE&gt;0&lt;/TRADETYPE&gt;&#x000A;    &lt;WEBURL&gt;http://172.16.56.112:8199/TIMS-Server/services/ContentInfoService&lt;/WEBURL&gt;&#x000A;    &lt;CIP&gt;192.168.36.148&lt;/CIP&gt;&#x000A;    &lt;SIP&gt;172.16.56.112&lt;/SIP&gt;&#x000A;    &lt;SPORT&gt;28390&lt;/SPORT&gt;&#x000A;    &lt;SYSTEM_CODE&gt;&#x7F51;&#x4E0A;&#x62A5;&#x9500;&lt;/SYSTEM_CODE&gt;&#x000A;    &lt;BRANCH_NO&gt;123456&lt;/BRANCH_NO&gt;&#x000A;    &lt;USER_NO&gt;1101111&lt;/USER_NO&gt;&#x000A;    &lt;BUSI_SERIAL_NO&gt;{busi_serial_no}&lt;/BUSI_SERIAL_NO&gt;&#x000A;    &lt;BATCH&gt;&#x000A;        &lt;BATCHID&gt;{BATCHID}&lt;/BATCHID&gt;&#x000A;        &lt;DOCUMENT"
		"S&gt;&#x000A;            &lt;DOCUMENT&gt;&#x000A;                &lt;DOCNAME&gt;&#x62A5;&#x9500;&#x5355;&lt;/DOCNAME&gt;&#x000A;                &lt;DESC&gt;descripe&lt;/DESC&gt;&#x000A;                &lt;FILES&gt;&#x000A;                    &lt;FILE&gt;&#x000A;                        &lt;FILE_TYPE&gt;1&lt;/FILE_TYPE&gt;&#x000A;                        &lt;FILE_NAME&gt;{imgName}&lt;/FILE_NAME&gt;&#x000A;                        &lt;FILE_FORMAT&gt;0&lt;/FILE_FORMAT&gt;&#x000A;                        &lt;FILE_SIZE&gt;879394&lt;/FILE_SIZE&gt;&#x000A;                        &lt;FILE_MD5&gt;CEE1E93713842D606C9F8CC45EDFE67F&lt;/FILE_MD5&gt;&#x000A;                        &lt;FILE_SEQ&gt;00000000&lt;/FILE_SEQ&gt;&#x000A;                    &lt;/FILE&gt;&#x000A;                &lt;/FILES&gt;&#x000A;            &lt;/DOCUMENT&gt;&#x000A;        &lt;/DOCUMENTS&gt;&#x000A;    &lt;/BATCH&gt;&#x000A;&lt;/CMDATA&gt;</in0></CMSave></soap:Body></soap:Envelope>",
		"LAST");
		
lr_end_transaction("6-post_save_xml", 2);
		

 

lr_start_transaction("7-Query_after_save");

	web_custom_request("ContentInfoService_4",
		"URL=http://172.16.56.112:8199/TIMS-Server/services/ContentInfoService",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=",
		"Snapshot=t6.inf",
		"Mode=HTML",
		"EncType=text/xml; charset=utf-8",
		"Body=<soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\" xmlns:soapenc=\"http://schemas.xmlsoap.org/soap/encoding/\"><soap:Body><CMSave xmlns=\"http://xfire.ws.cm.com\"><in0>&lt;?xml version=\"1.0\" encoding=\"GBK\" ?&gt;&lt;CMDATA&gt;&#x000A;    &lt;TRADETYPE&gt;5&lt;/TRADETYPE&gt;&#x000A;    &lt;CIP&gt;192.168.36.148&lt;/CIP&gt;&#x000A;    &lt;SYSTEM_CODE&gt;&#x7F51;&#x4E0A;&#x62A5;&#x9500;&lt;/SYSTEM_CODE&gt;&#x000A;    &lt;BRANCH_NO&gt;123456&lt;/BRANCH_NO&gt;&#x000A;    &lt;USER_NO&gt;1101111&lt;/USER_NO&gt;&#x000A;    &lt;BUSI_SERIAL_NO&gt;{busi_serial_no}&lt;/BUSI_SERIAL_NO&gt;&#x000A;    &lt;BATCH&gt;&#x000A;        &lt;BATCHID&gt;&lt;/BATCHID&gt;&#x000A;    &lt;/BATCH&gt;&#x000A;&lt;/CMDATA&gt;</in0></CMSave></soap:Body></soap:Envelope>",
		"LAST");

lr_end_transaction("7-Query_after_save", 2);


 

lr_start_transaction("8-require_download_first_xml");


	web_reg_find("Search=All",
		"Text=RSPCODE>30000&lt;/RSPCODE",
		"LAST");
	web_custom_request("ContentInfoService_6",
		"URL=http://172.16.56.112:8199/TIMS-Server/services/ContentInfoService",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=",
		"Snapshot=t8.inf",
		"Mode=HTML",
		"EncType=text/xml; charset=utf-8",
		"Body=<soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\" xmlns:soapenc=\"http://schemas.xmlsoap.org/soap/encoding/\"><soap:Body><CMSave xmlns=\"http://xfire.ws.cm.com\"><in0>&lt;?xml version=\"1.0\" encoding=\"GBK\" ?&gt;&lt;CMDATA&gt;&#x000A;    &lt;TRADETYPE&gt;3&lt;/TRADETYPE&gt;&#x000A;    &lt;CIP&gt;192.168.36.14811908&lt;/CIP&gt;&#x000A;    &lt;SYSTEM_CODE&gt;&#x7F51;&#x4E0A;&#x62A5;&#x9500;&lt;/SYSTEM_CODE&gt;&#x000A;    &lt;BRANCH_NO&gt;123456&lt;/BRANCH_NO&gt;&#x000A;    &lt;USER_NO&gt;1101111&lt;/USER_NO&gt;&#x000A;    &lt;BUSI_SERIAL_NO&gt;{busi_serial_no}&lt;/BUSI_SERIAL_NO&gt;&#x000A;    &lt;BATCH&gt;&#x000A;        &lt;BATCHID&gt;{BATCHID}&lt;/BATCHID&gt;&#x000A;        &lt;DOCUMENTS&gt;&#x000A;            &lt;DOCUMENT&gt;&#x000A;                &lt;DOCNAME&gt;&#x62A5;&#x9500;&#x5355;&lt;/DOCNAME&gt;&#x000A;                &lt;DESC&gt;desc&lt;/DESC&gt;&#x000A;              "
		"  &lt;FILES&gt;&#x000A;                    &lt;FILE&gt;&#x000A;                        &lt;FILE_TYPE&gt;1&lt;/FILE_TYPE&gt;&#x000A;                        &lt;FILE_FORMAT&gt;0&lt;/FILE_FORMAT&gt;&#x000A;                        &lt;FILE_NAME&gt;{imgName}&lt;/FILE_NAME&gt;&#x000A;                        &lt;FILE_SIZE&gt;879394&lt;/FILE_SIZE&gt;&#x000A;                        &lt;FILE_MD5&gt;D41D8CD98F00B204E9800998ECF8427E&lt;/FILE_MD5&gt;&#x000A;                        &lt;FILE_SEQ&gt;00000000&lt;/FILE_SEQ&gt;&#x000A;                    &lt;/FILE&gt;&#x000A;                &lt;/FILES&gt;&#x000A;            &lt;/DOCUMENT&gt;&#x000A;        &lt;/DOCUMENTS&gt;&#x000A;    &lt;/BATCH&gt;&#x000A;&lt;/CMDATA&gt;</in0></CMSave></soap:Body></soap:Envelope>",
		"LAST");
lr_end_transaction("8-require_download_first_xml", 2);
		

 

lr_start_transaction("9-download_first_img_sock");

	LrsCreateSocket("socket1", "TCP", "LocalHost=0", "RemoteHost=172.16.56.112:28390", "0");

	LrsSend("socket1", "buf2", "0");

	LrsReceive("socket1", "buf3", "0");

	LrsReceive("socket1", "buf4", "0");

	LrsCloseSocket("socket1");
	
lr_end_transaction("9-download_first_img_sock", 2);




    lr_output_message("业务流水= %s", lr_eval_string("{busi_serial_no}"));
	lr_output_message("批次号  = %s", lr_eval_string("{BATCHID}"));
	lr_output_message("图像名称= %s", lr_eval_string("{imgName}"));

return 0;
}
# 4 "d:\\\323\260\317\361\321\271\262\342\275\305\261\276\\3-imageupload-all\\\\combined_imageupload-all.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 5 "d:\\\323\260\317\361\321\271\262\342\275\305\261\276\\3-imageupload-all\\\\combined_imageupload-all.c" 2

