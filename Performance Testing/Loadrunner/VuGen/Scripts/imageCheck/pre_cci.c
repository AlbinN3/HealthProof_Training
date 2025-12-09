# 1 "c:\\users\\administrator\\documents\\vugen\\scripts\\imagecheck\\\\combined_imageCheck.c"
# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h" 1
 
 












 











# 103 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"





















































		


		typedef unsigned size_t;
	
	
        
	

















	

 



















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);
int   lr_start_cross_vuser_transaction		(char * transaction_name, char * trans_id_param); 



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);
int   lr_end_cross_vuser_transaction	(char * transaction_name, char * trans_id_param, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 273 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
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
char *   lr_unmask (const char *EncodedString);
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
# 513 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 516 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 540 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

 
 
 
 
 





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
# 574 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 597 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 621 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);



int   lr_set_custom_error_message (const char * param_val, ...);

int   lr_remove_custom_error_message ();


int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);
int   lr_save_timestamp (const char * tmstampParam, ...);
int   lr_save_param_regexp (const char *bufferToScan, unsigned int bufSize, ...);

int   lr_convert_double_to_integer (const char *source_param_name, const char * target_param_name);
int   lr_convert_double_to_double (const char *source_param_name, const char *format_string, const char * target_param_name);

 
 
 
 
 
 
# 700 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											size_t * col_name_len);
# 761 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);

 
 
 
 
# 776 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_zip (const char* param1, const char* param2);
int   lr_unzip (const char* param1, const char* param2);

 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   size_t const in_len,
                                   char * * const out_str,
                                   size_t * const out_len);
# 800 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 812 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 820 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 826 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );







typedef struct _lr_timestamp_param
{
	int iDigits;
}lr_timestamp_param;

extern const lr_timestamp_param default_timestamp_param;

int   lrfnc_save_timestamp (const char * param_name, const lr_timestamp_param* time_param);

int lr_save_searched_string(char * buffer, long buf_size, unsigned int occurrence,
			    char * search_string, int offset, unsigned int param_val_len, 
			    char * param_name);

 
char *   lr_string (char * str);

 
# 929 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 936 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 958 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 1034 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 1063 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


# 1075 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 


typedef int PVCI;






typedef int VTCERR;









PVCI   vtc_connect(char * servername, int portnum, int options);
VTCERR   vtc_disconnect(PVCI pvci);
VTCERR   vtc_get_last_error(PVCI pvci);
VTCERR   vtc_query_column(PVCI pvci, char * columnName, int columnIndex, char * *outvalue);
VTCERR   vtc_query_row(PVCI pvci, int rowIndex, char * **outcolumns, char * **outvalues);
VTCERR   vtc_send_message(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_if_unique(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_row1(PVCI pvci, char * columnNames, char * messages, char * delimiter, unsigned char sendflag, unsigned short *outUpdates);
VTCERR   vtc_search_row(PVCI pvci, char * columnNames, char * messages, char * delimiter, char * **outcolumns, char * **outvalues);
VTCERR   vtc_update_message(PVCI pvci, char * column, int index , char * message, unsigned short *outRc);
VTCERR   vtc_update_message_ifequals(PVCI pvci, char * columnName, int index,	char * message, char * ifmessage, unsigned short 	*outRc);
VTCERR   vtc_update_row1(PVCI pvci, char * columnNames, int index , char * messages, char * delimiter, unsigned short *outUpdates);
VTCERR   vtc_retrieve_message(PVCI pvci, char * column, char * *outvalue);
VTCERR   vtc_retrieve_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues);
VTCERR   vtc_retrieve_row(PVCI pvci, char * **outcolumns, char * **outvalues);
VTCERR   vtc_rotate_message(PVCI pvci, char * column, char * *outvalue, unsigned char sendflag);
VTCERR   vtc_rotate_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_rotate_row(PVCI pvci, char * **outcolumns, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_increment(PVCI pvci, char * column, int index , int incrValue, int *outValue);
VTCERR   vtc_clear_message(PVCI pvci, char * column, int index , unsigned short *outRc);
VTCERR   vtc_clear_column(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_ensure_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_drop_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_clear_row(PVCI pvci, int rowIndex, unsigned short *outRc);
VTCERR   vtc_create_column(PVCI pvci, char * column,unsigned short *outRc);
VTCERR   vtc_column_size(PVCI pvci, char * column, int *size);
void   vtc_free(char * msg);
void   vtc_free_list(char * *msglist);
VTCERR   vtc_update_all_message_ifequals(PVCI pvci, char * columnNames, char * message, char * ifmessage, char * delimiter, unsigned short *outRc);

VTCERR   lrvtc_connect(char * servername, int portnum, int options);
VTCERR   lrvtc_connect_ex(char * vtc_first_param, ...);
VTCERR   lrvtc_connect_ex_no_ellipsis(const char *vtc_first_param, char ** arguments, int argCount);
VTCERR   lrvtc_disconnect();
VTCERR   lrvtc_query_column(char * columnName, int columnIndex);
VTCERR   lrvtc_query_row(int columnIndex);
VTCERR   lrvtc_send_message(char * columnName, char * message);
VTCERR   lrvtc_send_if_unique(char * columnName, char * message);
VTCERR   lrvtc_send_row1(char * columnNames, char * messages, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_search_row(char * columnNames, char * messages, char * delimiter);
VTCERR   lrvtc_update_message(char * columnName, int index , char * message);
VTCERR   lrvtc_update_message_ifequals(char * columnName, int index, char * message, char * ifmessage);
VTCERR   lrvtc_update_row1(char * columnNames, int index , char * messages, char * delimiter);
VTCERR   lrvtc_retrieve_message(char * columnName);
VTCERR   lrvtc_retrieve_messages1(char * columnNames, char * delimiter);
VTCERR   lrvtc_retrieve_row();
VTCERR   lrvtc_rotate_message(char * columnName, unsigned char sendflag);
VTCERR   lrvtc_rotate_messages1(char * columnNames, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_rotate_row(unsigned char sendflag);
VTCERR   lrvtc_increment(char * columnName, int index , int incrValue);
VTCERR   lrvtc_noop();
VTCERR   lrvtc_clear_message(char * columnName, int index);
VTCERR   lrvtc_clear_column(char * columnName); 
VTCERR   lrvtc_ensure_index(char * columnName); 
VTCERR   lrvtc_drop_index(char * columnName); 
VTCERR   lrvtc_clear_row(int rowIndex);
VTCERR   lrvtc_create_column(char * columnName);
VTCERR   lrvtc_column_size(char * columnName);
VTCERR   lrvtc_update_all_message_ifequals(char * columnNames, char * message, char * ifmessage, char * delimiter);



 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char * sourceString, char * fromEncoding, char * toEncoding, char * paramName);
int lr_read_file(const char *filename, const char *outputParam, int continueOnError);

int lr_get_char_count(const char * string);


 
int lr_db_connect (char * pFirstArg, ...);
int lr_db_disconnect (char * pFirstArg,	...);
int lr_db_executeSQLStatement (char * pFirstArg, ...);
int lr_db_dataset_action(char * pFirstArg, ...);
int lr_checkpoint(char * pFirstArg,	...);
int lr_db_getvalue(char * pFirstArg, ...);







 
 



















# 1 "c:\\users\\administrator\\documents\\vugen\\scripts\\imagecheck\\\\combined_imageCheck.c" 2

# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/SharedParameter.h" 1



 
 
 
 
# 100 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/SharedParameter.h"






typedef int PVCI2;






typedef int VTCERR2;


 
 
 

 
extern PVCI2    vtc_connect(char *servername, int portnum, int options);
extern VTCERR2  vtc_disconnect(PVCI2 pvci);
extern VTCERR2  vtc_get_last_error(PVCI2 pvci);

 
extern VTCERR2  vtc_query_column(PVCI2 pvci, char *columnName, int columnIndex, char **outvalue);
extern VTCERR2  vtc_query_row(PVCI2 pvci, int columnIndex, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_send_message(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_if_unique(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_row1(PVCI2 pvci, char *columnNames, char *messages, char *delimiter,  unsigned char sendflag, unsigned short *outUpdates);
extern VTCERR2  vtc_search_row(PVCI2 pvci, char *columnNames, char *messages, char *delimiter, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_update_message(PVCI2 pvci, char *column, int index , char *message, unsigned short *outRc);
extern VTCERR2  vtc_update_message_ifequals(PVCI2 pvci, char	*columnName, int index,	char *message, char	*ifmessage,	unsigned short 	*outRc);
extern VTCERR2  vtc_update_row1(PVCI2 pvci, char *columnNames, int index , char *messages, char *delimiter, unsigned short *outUpdates);
extern VTCERR2  vtc_retrieve_message(PVCI2 pvci, char *column, char **outvalue);
extern VTCERR2  vtc_retrieve_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues);
extern VTCERR2  vtc_retrieve_row(PVCI2 pvci, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_rotate_message(PVCI2 pvci, char *column, char **outvalue, unsigned char sendflag);
extern VTCERR2  vtc_rotate_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues, unsigned char sendflag);
extern VTCERR2  vtc_rotate_row(PVCI2 pvci, char ***outcolumns, char ***outvalues, unsigned char sendflag);
extern VTCERR2	vtc_increment(PVCI2 pvci, char *column, int index , int incrValue, int *outValue);
extern VTCERR2  vtc_clear_message(PVCI2 pvci, char *column, int index , unsigned short *outRc);
extern VTCERR2  vtc_clear_column(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_clear_row(PVCI2 pvci, int rowIndex, unsigned short *outRc);

extern VTCERR2  vtc_create_column(PVCI2 pvci, char *column,unsigned short *outRc);
extern VTCERR2  vtc_column_size(PVCI2 pvci, char *column, int *size);
extern VTCERR2  vtc_ensure_index(PVCI2 pvci, char *column, unsigned short *outRc);
extern VTCERR2  vtc_drop_index(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_noop(PVCI2 pvci);

 
extern void vtc_free(char *msg);
extern void vtc_free_list(char **msglist);

 


 




 




















 




 
 
 

extern VTCERR2  lrvtc_connect(char *servername, int portnum, int options);
 
 
extern VTCERR2  lrvtc_disconnect();
extern VTCERR2  lrvtc_query_column(char *columnName, int columnIndex);
extern VTCERR2  lrvtc_query_row(int columnIndex);
extern VTCERR2  lrvtc_send_message(char *columnName, char *message);
extern VTCERR2  lrvtc_send_if_unique(char *columnName, char *message);
extern VTCERR2  lrvtc_send_row1(char *columnNames, char *messages, char *delimiter,  unsigned char sendflag);
extern VTCERR2  lrvtc_search_row(char *columnNames, char *messages, char *delimiter);
extern VTCERR2  lrvtc_update_message(char *columnName, int index , char *message);
extern VTCERR2  lrvtc_update_message_ifequals(char *columnName, int index, char 	*message, char *ifmessage);
extern VTCERR2  lrvtc_update_row1(char *columnNames, int index , char *messages, char *delimiter);
extern VTCERR2  lrvtc_retrieve_message(char *columnName);
extern VTCERR2  lrvtc_retrieve_messages1(char *columnNames, char *delimiter);
extern VTCERR2  lrvtc_retrieve_row();
extern VTCERR2  lrvtc_rotate_message(char *columnName, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_messages1(char *columnNames, char *delimiter, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_row(unsigned char sendflag);
extern VTCERR2  lrvtc_increment(char *columnName, int index , int incrValue);
extern VTCERR2  lrvtc_clear_message(char *columnName, int index);
extern VTCERR2  lrvtc_clear_column(char *columnName);
extern VTCERR2  lrvtc_clear_row(int rowIndex);
extern VTCERR2  lrvtc_create_column(char *columnName);
extern VTCERR2  lrvtc_column_size(char *columnName);
extern VTCERR2  lrvtc_ensure_index(char *columnName);
extern VTCERR2  lrvtc_drop_index(char *columnName);

extern VTCERR2  lrvtc_noop();

 
 
 

                               


 
 
 





















# 2 "c:\\users\\administrator\\documents\\vugen\\scripts\\imagecheck\\\\combined_imageCheck.c" 2

# 1 "globals.h" 1



 
 

# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/web_api.h" 1







# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h" 1



























































 




 



 











 





















 
 
 

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
	spdy_custom_request(
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
	web_set_pac(
		const char *		mpszPacUrl);
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
	spdy_submit_data(
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
	spdy_url(
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
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_json(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_regexp(
		 const char * mpszParamName,
		 ...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_attrib(
		const char * mpszParamName,
		...);
										 
										 
										 
										 
										 
										 
										 		
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_run(
		const char * mpszCode,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_reset(void);

  int
	web_convert_date_param(
		const char * 		mpszParamName,
		...);










# 789 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"


# 802 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"



























# 840 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"

 
 
 


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
























# 908 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"


  int
	web_rest(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 

  int
web_stream_open(
	const char *		mpszArg1,
	...
);
  int
	web_stream_wait(
		const char *		mpszArg1,
		...
	);

  int
	web_stream_close(
		const char *		mpszArg1,
		...
	);

  int
web_stream_play(
	const char *		mpszArg1,
	...
	);

  int
web_stream_pause(
	const char *		mpszArg1,
	...
	);

  int
web_stream_seek(
	const char *		mpszArg1,
	...
	);

  int
web_stream_get_param_int(
	const char*			mpszStreamID,
	const int			miStateType
	);

  double
web_stream_get_param_double(
	const char*			mpszStreamID,
	const int			miStateType
	);

  int
web_stream_get_param_string(
	const char*			mpszStreamID,
	const int			miStateType,
	const char*			mpszParameterName
	);

  int
web_stream_set_param_int(
	const char*			mpszStreamID,
	const int			miStateType,
	const int			miStateValue
	);

  int
web_stream_set_param_double(
	const char*			mpszStreamID,
	const int			miStateType,
	const double		mdfStateValue
	);

  int
web_stream_set_custom_mpd(
	const char*			mpszStreamID,
	const char*			aMpdBuf
	);

 
 
 






# 9 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/web_api.h" 2

















 







 















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
										 
										 
										 

 
 
 
 
 
 
 
 
 
 
 
 
  int
	web_reg_async_attributes(
		const char *		mpszArg,
		...
	);

 
 
 
 
 
 
  int
	web_sync(
		 const char *		mpszArg1,
		 ...
	);

 
 
 
 
  int
	web_stop_async(
		const char *		mpszArg1,
		...
	);

 
 
 
 
 

 
 
 

typedef enum WEB_ASYNC_CB_RC_ENUM_T
{
	WEB_ASYNC_CB_RC_OK,				 

	WEB_ASYNC_CB_RC_ABORT_ASYNC_NOT_ERROR,
	WEB_ASYNC_CB_RC_ABORT_ASYNC_ERROR,
										 
										 
										 
										 
	WEB_ASYNC_CB_RC_ENUM_COUNT
} WEB_ASYNC_CB_RC_ENUM;

 
 
 

typedef enum WEB_CONVERS_CB_CALL_REASON_ENUM_T
{
	WEB_CONVERS_CB_CALL_REASON_BUFFER_RECEIVED,
	WEB_CONVERS_CB_CALL_REASON_END_OF_TASK,

	WEB_CONVERS_CB_CALL_REASON_ENUM_COUNT
} WEB_CONVERS_CB_CALL_REASON_ENUM;

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

typedef
int														 
	(*RequestCB_t)();

typedef
int														 
	(*ResponseBodyBufferCB_t)(
		  const char *		aLastBufferStr,
		  int				aLastBufferLen,
		  const char *		aAccumulatedStr,
		  int				aAccumulatedLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseCB_t)(
		  const char *		aResponseHeadersStr,
		  int				aResponseHeadersLen,
		  const char *		aResponseBodyStr,
		  int				aResponseBodyLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseHeadersCB_t)(
		  int				aHttpStatusCode,
		  const char *		aAccumulatedHeadersStr,
		  int				aAccumulatedHeadersLen);



 
 
 

typedef enum WEB_CONVERS_UTIL_RC_ENUM_T
{
	WEB_CONVERS_UTIL_RC_OK,
	WEB_CONVERS_UTIL_RC_CONVERS_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_TASK_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_UNAVIALABLE,
	WEB_CONVERS_UTIL_RC_INVALID_ARGUMENT,

	WEB_CONVERS_UTIL_RC_ENUM_COUNT
} WEB_CONVERS_UTIL_RC_ENUM;

 
 
 

  int					 
	web_util_set_request_url(
		  const char *		aUrlStr);

  int					 
	web_util_set_request_body(
		  const char *		aRequestBodyStr);

  int					 
	web_util_set_formatted_request_body(
		  const char *		aRequestBodyStr);

  int					 
web_util_set_request_header(
	  const char *		aRequestHeaderNameStr,
	  const char *		aRequestHeaderValueStr);

 
 
 
 
 

 
 
 
 
 

 
 
 
 
 
 
 
 

 
 
  int
web_websocket_connect(
		 const char *	mpszArg1,
		 ...
		 );


 
 
 
 
 																						
  int
web_websocket_send(
	   const char *		mpszArg1,
		...
	   );

 
 
 
 
 
 
  int
web_websocket_close(
		const char *	mpszArg1,
		...
		);

 
typedef
void														
(*OnOpen_t)(
			  const char* connectionID,  
			  const char * responseHeader,  
			  int length  
);

typedef
void														
(*OnMessage_t)(
	  const char* connectionID,  
	  int isbinary,  
	  const char * data,  
	  int length  
	);

typedef
void														
(*OnError_t)(
	  const char* connectionID,  
	  const char * message,  
	  int length  
	);

typedef
void														
(*OnClose_t)(
	  const char* connectionID,  
	  int isClosedByClient,  
	  int code,  
	  const char* reason,  
	  int length  
	 );
 
 
 
 
 





# 7 "globals.h" 2

# 1 "lrw_custom_body.h" 1
 




# 8 "globals.h" 2

# 1 "WebSocketCB.c" 1
void OnOpenCB0 (const char* connectionID,
				  const char * AccumulatedHeadersStr,
				  int AccumulatedHeadersLen)
{
	
 
 
 
 
 
 
 
 

}

void OnMessageCB0 (const char* connectionID,
				  int isbinary,
				  const char * data,
				  int length)
{
	
 
 
 
 
 
 
}

void OnErrorCB0 (const char* connectionID,
				  const char * message,
				  int length)
{
	
 
}

void OnCloseCB0 (const char* connectionID,
				  int isClosedByClient,
				  int code,
				  const char* reason,
				  int length)
{
	
 
}

# 9 "globals.h" 2

# 1 "WebSocketBuffer.h" 1



 

char WebSocketReceive0[] = "{\"messageType\":\"hello\",\"uaid\":\"b85fdeeb2b2a4db9840b536de730adbb\",\"statu"
                        "s\":200,\"use_webpush\":true,\"broadcasts\":{}}";
long WebSocketReceiveLen0   = sizeof(WebSocketReceive0) - 1;	 


# 10 "globals.h" 2




 
 




# 3 "c:\\users\\administrator\\documents\\vugen\\scripts\\imagecheck\\\\combined_imageCheck.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 4 "c:\\users\\administrator\\documents\\vugen\\scripts\\imagecheck\\\\combined_imageCheck.c" 2

# 1 "Action.c" 1
Action()
{

 








	web_custom_request("ocsp.digicert.com", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x0B+\\x84S\\x81\\x9D\\x06\\xA0G\\xD5\\xB0\\xA9$\\xAEr\\xD5", 
		"LAST");

	web_set_sockets_option("SSL_VERSION", "AUTO");

 








	web_custom_request("xvY", 
		"URL=http://o.pki.goog/s/wr3/xvY", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0R0P0N0L0J0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x11\\x00\\xC6\\xF6\\xC8\r\\xE2\\xDF\\x16\\xC1\\x12\\xC6\\xEC\\xC0s\\\\\\xB0T", 
		"LAST");

	web_custom_request("ads", 
		"URL=https://ads.mozilla.org/v1/ads", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"context_id\":\"23852afd-307f-4d9f-8e21-aa01fb354cbc\",\"placements\":[{\"placement\":\"newtab_tile_1\",\"count\":1},{\"placement\":\"newtab_tile_2\",\"count\":1},{\"placement\":\"newtab_tile_3\",\"count\":1}],\"blocks\":[\"\"],\"credentials\":\"omit\"}", 
		"LAST");

 
# 69 "Action.c"

	web_websocket_send("ID=0", 
		"Buffer={\"messageType\":\"hello\",\"broadcasts\":{\"remote-settings/monitor_changes\":\"\\\"1764832778936\\\"\"},\"use_webpush\":true}", 
		"IsBinary=0", 
		"LAST");
 

	

	web_url("demowebshop.tricentis.com", 
		"URL=https://demowebshop.tricentis.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		"LAST");
		
		web_image_check("web_image_check",
		"Src=/Themes/DefaultClean/Content/images/logo.png",
		"LAST");

	 

 
# 103 "Action.c"

	web_custom_request("ocsp.digicert.com_2", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x02\\xF1\\x84\\xDA\\xF8\\x12Sy\\xE1\\x18\\x08\\xA7\\x04<\\xF6\\xF4", 
		"LAST");

	web_custom_request("767b4cb6-edd8-4d11-b9cd-2b646cbd1f11", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/events/1/767b4cb6-edd8-4d11-b9cd-2b646cbd1f11", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t51.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":31,\"start_time\":\"2025-12-04T13:13:31.000+05:30\",\"end_time\":\"2025-12-04T13:14:45.332+05:30\",\"reason\":\"startup\",\"experiments\":{\"desktop-address-autofill-india-release-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"improved-mailto-handling-with-os-integration-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":"
		"{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\"treatment-fast-udp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\"next-sign-up-modal-cta\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"temp-new-tab-mobile-qr-code-campaign-row\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":"
		"\"nimbus-rollout\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\"treatment-a-callout-badge\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"deprecate-ipaddrany-rollout-for-release\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-credit-card-autofill-global-enablement-rollout-release\":{\"branch\":\"creditcard-enable\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"treatment-a\",\"extra\""
		":{\"type\":\"nimbus-nimbus\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-10-eos-sync-and-reminder-messaging-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"new-tab-147020251114194929-to-release\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-credit-cards-treatment-c-rollout\":{\"branch\":\"treatment-c\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\""
		"enforce\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\"rollout-branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-tab-groups-rollout-beta\":{\"branch\":\"smart-tab-groups\",\""
		"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-shortcuts-v3-sticky\":{\"branch\":\"sticky-frozen-thom\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"account-adoption-callout-passwords-global-rollout\":{\"branch\":\"treatment-e\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"acct-adoption-callout-addresses-rollout-with-pxi-required\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-search-rollout\":{\"branch\":\"google-lens-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"65.2.3\",\"app_channel\":\"release\",\"app_display_version\":\"145.0.2\",\"architecture\":\"x86_64\",\"os\":\"Windows\",\"os_version\":\"10.0\",\"locale\":\"en-US\",\"app_build\":\"20251124145406\",\"windows_build_number\""
		":19045,\"first_run_date\":\"2022-10-16+05:30\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"client_id\":\"90571d99-40b9-4f10-9a9a-227b856f2593\",\"attribution\":{\"source\":\"www.bing.com\",\"content\":\"%2528not%2Bset%2529\",\"medium\":\"referral\",\"campaign\":\"%2528not%2Bset%2529\"}},\"metrics\":{\"string\":{\"search.engine.private.load_path\":\"\",\"search.engine.default.partner_code\":\"firefox-b-d\",\"search.engine.default.load_path\":\"[app]google\",\"region.home_region\":\"IN\",\""
		"search.engine.default.provider_id\":\"google\",\"search.engine.private.partner_code\":\"\",\"search.engine.private.provider_id\":\"\",\"search.engine.private.display_name\":\"\",\"search.engine.default.display_name\":\"Google\"},\"url\":{\"search.engine.private.submission_url\":\"blank:\",\"search.engine.default.submission_url\":\"https://www.google.com/search?client=firefox-b-d&q=\"},\"counter\":{\"browser.engagement.active_ticks\":2,\"browser.engagement.uri_count\":1},\"uuid\":{\""
		"legacy.telemetry.profile_group_id\":\"f6637294-d75f-4350-be24-43ca2fcded9d\",\"legacy.telemetry.client_id\":\"f6637294-d75f-4350-be24-43ca2fcded9d\"},\"boolean\":{\"search.engine.default.overridden_by_third_party\":false,\"urlbar.pref_suggest_nonsponsored\":false,\"urlbar.pref_suggest_sponsored\":false,\"urlbar.pref_suggest_topsites\":true,\"search.engine.private.overridden_by_third_party\":false,\"usage.is_default_browser\":false,\"policies.is_enterprise\":false,\""
		"urlbar.pref_suggest_data_collection\":false},\"quantity\":{\"browser.engagement.max_concurrent_tab_count\":1,\"urlbar.pref_max_results\":10}},\"events\":[{\"timestamp\":0,\"category\":\"session_restore\",\"name\":\"backup_can_be_loaded_session_file\",\"extra\":{\"path_key\":\"clean\",\"loadfail_reason\":\"N/A\",\"can_load\":\"true\",\"glean_timestamp\":\"1764834208556\"}},{\"timestamp\":0,\"category\":\"session_restore\",\"name\":\"backup_can_be_loaded_session_file\",\"extra\":{\"loadfail_reason\""
		":\"N/A\",\"glean_timestamp\":\"1764834208557\",\"can_load\":\"true\",\"path_key\":\"clean\"}},{\"timestamp\":0,\"category\":\"session_restore\",\"name\":\"shutdown_success_session_startup\",\"extra\":{\"glean_timestamp\":\"1764834208557\",\"shutdown_reason\":\"N/A\",\"shutdown_ok\":\"false\"}},{\"timestamp\":694,\"category\":\"webcompatreporting\",\"name\":\"reason_dropdown\",\"extra\":{\"glean_timestamp\":\"1764834209250\",\"setting\":\"required\"}},{\"timestamp\":1306,\"category\":\""
		"nimbus_events\",\"name\":\"startup_database_consistency\",\"extra\":{\"glean_timestamp\":\"1764834209863\",\"total_db_count\":\"48\",\"db_active_count\":\"37\",\"total_store_count\":\"48\",\"trigger\":\"startup\",\"store_active_count\":\"37\",\"primary\":\"database\"}},{\"timestamp\":1383,\"category\":\"jsonfile\",\"name\":\"load_autofillprofiles\",\"extra\":{\"glean_timestamp\":\"1764834209940\",\"value\":\"error_notfounderror\"}},{\"timestamp\":1407,\"category\":\"doh\",\"name\":\""
		"state_rollback\",\"extra\":{\"value\":\"null\",\"glean_timestamp\":\"1764834209963\"}},{\"timestamp\":1434,\"category\":\"containers\",\"name\":\"container_profile_loaded\",\"extra\":{\"containers\":\"4\",\"glean_timestamp\":\"1764834209990\"}},{\"timestamp\":2040,\"category\":\"normandy\",\"name\":\"enroll_failed_nimbus_experiment\",\"extra\":{\"value\":\"account-spotlight-modal-global-rollout-v3\",\"reason\":\"feature-conflict\",\"glean_timestamp\":\"1764834210596\"}},{\"timestamp\":2040,\""
		"category\":\"nimbus_events\",\"name\":\"enroll_failed\",\"extra\":{\"experiment\":\"account-spotlight-modal-global-rollout-v3\",\"glean_timestamp\":\"1764834210596\",\"reason\":\"feature-conflict\"}},{\"timestamp\":2200,\"category\":\"jsonfile\",\"name\":\"load_logins\",\"extra\":{\"value\":\"error_notfounderror\",\"glean_timestamp\":\"1764834210756\"}},{\"timestamp\":2201,\"category\":\"nimbus_events\",\"name\":\"is_ready\",\"extra\":{\"glean_timestamp\":\"1764834210758\"}},{\"timestamp\":2211,\""
		"category\":\"upgrade_dialog\",\"name\":\"trigger_reason\",\"extra\":{\"value\":\"not-major\",\"glean_timestamp\":\"1764834210768\"}},{\"timestamp\":4571,\"category\":\"nimbus_events\",\"name\":\"exposure\",\"extra\":{\"branch\":\"control\",\"experiment\":\"private-window-visual-refresh-rollout\",\"feature_id\":\"feltPrivacy\",\"glean_timestamp\":\"1764834270527\"}},{\"timestamp\":4571,\"category\":\"normandy\",\"name\":\"expose_nimbus_experiment\",\"extra\":{\"featureId\":\"feltPrivacy\",\"value\""
		":\"private-window-visual-refresh-rollout\",\"branchSlug\":\"control\",\"glean_timestamp\":\"1764834270527\"}},{\"timestamp\":5925,\"category\":\"normandy\",\"name\":\"expose_nimbus_experiment\",\"extra\":{\"featureId\":\"newtabTrainhopAddon\",\"glean_timestamp\":\"1764834214481\",\"value\":\"new-tab-147020251114194929-to-release\",\"branchSlug\":\"rollout\"}},{\"timestamp\":5925,\"category\":\"nimbus_events\",\"name\":\"exposure\",\"extra\":{\"branch\":\"rollout\",\"feature_id\":\""
		"newtabTrainhopAddon\",\"experiment\":\"new-tab-147020251114194929-to-release\",\"glean_timestamp\":\"1764834214481\"}},{\"timestamp\":61961,\"category\":\"doh\",\"name\":\"state_shutdown\",\"extra\":{\"glean_timestamp\":\"1764834270518\",\"value\":\"null\"}}]}", 
		"EXTRARES", 
		"Url=https://demowebshop.tricentis.com/Themes/DefaultClean/Content/images/top-menu-divider.png", "Referer=https://demowebshop.tricentis.com/Themes/DefaultClean/Content/styles.css", "ENDITEM", 
		"Url=https://demowebshop.tricentis.com/Plugins/Widgets.NivoSlider/Content/nivoslider/themes/default/loading.gif", "Referer=https://demowebshop.tricentis.com/Plugins/Widgets.NivoSlider/Content/nivoslider/themes/default/default.css", "ENDITEM", 
		"Url=https://demowebshop.tricentis.com/Themes/DefaultClean/Content/images/bullet-right.gif", "Referer=https://demowebshop.tricentis.com/Themes/DefaultClean/Content/styles.css", "ENDITEM", 
		"Url=https://demowebshop.tricentis.com/Themes/DefaultClean/Content/images/star-x-inactive.png", "Referer=https://demowebshop.tricentis.com/Themes/DefaultClean/Content/styles.css", "ENDITEM", 
		"Url=https://demowebshop.tricentis.com/Themes/DefaultClean/Content/images/star-x-active.png", "Referer=https://demowebshop.tricentis.com/Themes/DefaultClean/Content/styles.css", "ENDITEM", 
		"Url=https://demowebshop.tricentis.com/Content/jquery-ui-themes/smoothness/images/ui-bg_flat_75_ffffff_40x100.png", "Referer=https://demowebshop.tricentis.com/Content/jquery-ui-themes/smoothness/jquery-ui-1.10.3.custom.min.css", "ENDITEM", 
		"Url=https://prod.ohttp-gateway.prod.webservices.mozgcp.net/ohttp-configs", "Referer=", "ENDITEM", 
		"Url=https://demowebshop.tricentis.com/Plugins/Widgets.NivoSlider/Content/nivoslider/themes/default/arrows.png", "Referer=https://demowebshop.tricentis.com/Plugins/Widgets.NivoSlider/Content/nivoslider/themes/default/default.css", "ENDITEM", 
		"Url=https://demowebshop.tricentis.com/Plugins/Widgets.NivoSlider/Content/nivoslider/themes/default/bullets.png", "Referer=https://demowebshop.tricentis.com/Plugins/Widgets.NivoSlider/Content/nivoslider/themes/default/default.css", "ENDITEM", 
		"LAST");

 
# 169 "Action.c"

	web_custom_request("f167fda8-5c4b-424a-b24e-afd8f89df0d3", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/use-counters/1/f167fda8-5c4b-424a-b24e-afd8f89df0d3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t53.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":23,\"start_time\":\"2025-12-04T13:13:22.000+05:30\",\"end_time\":\"2025-12-04T13:14:30.467+05:30\",\"reason\":\"app_shutdown_confirmed\",\"experiments\":{\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"desktop-credit-card-autofill-global-enablement-rollout-release\":{\"branch\":\"creditcard-enable\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"deprecate-ipaddrany-rollout-for-release\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\"treatment-fast-udp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"new-tab-147020251114194929-to-release\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"acct-adoption-callout-addresses-rollout-with-pxi-required\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-search-rollout\":{\"branch\":\"google-lens-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-credit-cards-treatment-c-rollout\":{\"branch\":\"treatment-c\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"improved-mailto-handling-with-os-integration-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"smart-shortcuts-v3-sticky\":{\"branch\":\"sticky-frozen-thom\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\""
		"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-passwords-global-rollout\":{\"branch\":\"treatment-e\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-card-updates\":{\"branch\":\"updated\","
		"\"extra\":{\"type\":\"nimbus-rollout\"}},\"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"temp-new-tab-mobile-qr-code-campaign-row\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}"
		"},\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-10-eos-sync-and-reminder-messaging-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\"rollout-branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\""
		"branch\":\"treatment-a-callout-badge\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-tab-groups-rollout-beta\":{\"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\""
		"next-sign-up-modal-cta\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-address-autofill-india-release-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"65.2.3\",\"architecture\":\"x86_64\",\"locale\":\"en-US\",\"os_version\":\"10.0\",\"app_build\":\"20251124145406\",\"app_channel\":\"release\",\""
		"app_display_version\":\"145.0.2\",\"os\":\"Windows\",\"first_run_date\":\"2022-10-16+05:30\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"windows_build_number\":19045,\"client_id\":\"90571d99-40b9-4f10-9a9a-227b856f2593\",\"attribution\":{\"source\":\"www.bing.com\",\"campaign\":\"%2528not%2Bset%2529\",\"medium\":\"referral\",\"content\":\"%2528not%2Bset%2529\"}},\"metrics\":{\"counter\":{\"use.counter.css.doc.css_background_color\":1,\"use.counter.css.page.css_border_radius\":1,\""
		"use.counter.css.doc.css_moz_user_select\":1,\"use.counter.css.page.css_margin_bottom\":1,\"use.counter.css.page.css_transition\":1,\"use.counter.css.page.css_webkit_border_radius\":1,\"use.counter.css.doc.css_border_top_right_radius\":1,\"use.counter.css.page.css_word_wrap\":1,\"use.counter.css.doc.css_text_overflow\":1,\"use.counter.css.page.css_text_shadow\":1,\"use.counter.css.doc.css_text_shadow\":1,\"use.counter.css.doc.css_background_repeat\":1,\"use.counter.css.doc.css_min_width\":1,\""
		"use.counter.css.doc.css_margin_bottom\":1,\"use.counter.css.doc.css_opacity\":1,\"use.counter.css.doc.css_border_left_width\":1,\"use.counter.css.doc.css_content\":1,\"use.counter.css.doc.css_text_transform\":1,\"use.counter.css.doc.css_float\":1,\"use.counter.css.doc.css_visibility\":1,\"use.counter.css.doc.css_margin_right\":1,\"use.counter.css.doc.css_display\":1,\"use.counter.css.doc.css_height\":1,\"use.counter.css.page.css_box_sizing\":1,\"use.counter.css.page.css_moz_box_sizing\":1,\""
		"use.counter.css.page.css_border_color\":1,\"use.counter.css.doc.css_bottom\":1,\"use.counter.css.page.css_cursor\":1,\"use.counter.css.page.css_display\":1,\"use.counter.css.page.css_min_height\":1,\"use.counter.css.page.css_moz_user_select\":1,\"use.counter.css.page.css_background\":1,\"use.counter.css.page.css_opacity\":1,\"use.counter.css.page.css_visibility\":1,\"use.counter.css.page.css_webkit_user_select\":1,\"use.counter.css.page.css_list_style_type\":1,\""
		"use.counter.css.doc.css_webkit_border_radius\":1,\"use.counter.css.page.css_padding_left\":1,\"use.counter.css.doc.css_z_index\":1,\"use.counter.css.doc.css_moz_box_sizing\":1,\"use.counter.css.doc.css_user_select\":1,\"use.counter.css.page.css_background_position\":1,\"use.counter.css.page.css_border_top_left_radius\":1,\"use.counter.css.doc.css_border_top\":1,\"use.counter.css.page.css_border_bottom_left_radius\":1,\"use.counter.css.page.css_text_overflow\":1,\""
		"use.counter.css.page.css_text_align\":1,\"use.counter.css.page.css_border_bottom\":1,\"use.counter.css.doc.css_font_style\":1,\"use.counter.css.doc.css_border_top_left_radius\":1,\"use.counter.css.doc.css_padding\":1,\"use.counter.css.doc.css_padding_left\":1,\"use.counter.css.page.css_letter_spacing\":1,\"use.counter.css.page.css_border_right\":1,\"use.counter.css.page.css_box_shadow\":1,\"use.counter.css.page.css_margin_right\":1,\"use.counter.css.doc.css_border_style\":1,\""
		"use.counter.css.doc.css_clear\":1,\"use.counter.css.page.css_height\":1,\"use.counter.css.page.css_outline\":1,\"use.counter.css.page.css_padding\":1,\"use.counter.css.page.css_text_transform\":1,\"use.counter.css.page.css_padding_bottom\":1,\"use.counter.css.doc.css_margin_left\":1,\"use.counter.css.doc.css_padding_bottom\":1,\"use.counter.css.page.css_float\":1,\"use.counter.css.doc.css_font_size\":1,\"use.counter.css.doc.css_border_bottom_width\":1,\"use.counter.css.doc.css_position\":1,\""
		"use.counter.css.doc.css_webkit_box_shadow\":1,\"use.counter.css.page.css_margin_top\":1,\"use.counter.css.page.css_webkit_box_shadow\":1,\"use.counter.css.page.css_background_image\":1,\"use.counter.css.doc.css_border_bottom_right_radius\":1,\"use.counter.css.doc.css_font_family\":1,\"use.counter.css.doc.css_white_space\":1,\"use.counter.css.doc.css_letter_spacing\":1,\"use.counter.css.doc.css_font\":1,\"use.counter.css.doc.css_direction\":1,\"use.counter.css.doc.css_line_height\":1,\""
		"use.counter.css.doc.css_zoom\":1,\"use.counter.css.page.css_border_bottom_width\":1,\"use.counter.css.page.css_border_top\":1,\"use.counter.css.page.css_position\":1,\"use.counter.css.page.css_right\":1,\"use.counter.css.page.css_overflow\":1,\"use.counter.css.page.css_bottom\":1,\"use.counter.css.page.css_border\":1,\"use.counter.css.page.css_font\":1,\"use.counter.css.page.css_text_decoration\":1,\"use.counter.css.page.css_vertical_align\":1,\"use.counter.css.page.css_webkit_transition\":1,\""
		"use.counter.css.doc.css_border\":1,\"use.counter.css.page.css_border_right_width\":1,\"use.counter.css.page.css_font_style\":1,\"use.counter.css.page.css_zoom\":1,\"use.counter.css.doc.css_text_indent\":1,\"use.counter.css.page.css_z_index\":1,\"use.counter.css.page.css_filter\":1,\"use.counter.top_level_content_documents_destroyed\":1,\"use.counter.css.page.css_webkit_box_sizing\":1,\"use.counter.css.doc.css_border_color\":1,\"use.counter.css.doc.css_font_size_adjust\":1,\""
		"use.counter.css.doc.css_empty_cells\":1,\"use.counter.css.doc.css_max_width\":1,\"use.counter.css.doc.css_right\":1,\"use.counter.css.page.css_margin\":1,\"use.counter.css.page.css_clear\":1,\"use.counter.css.page.css_padding_top\":1,\"use.counter.css.doc.css_max_height\":1,\"use.counter.css.page.css_border_spacing\":1,\"use.counter.css.page.css_word_break\":1,\"use.counter.css.doc.css_border_width\":1,\"use.counter.css.doc.css_font_stretch\":1,\"use.counter.css.doc.css_background_image\":1,\""
		"use.counter.css.doc.css_border_bottom\":1,\"use.counter.css.page.css_font_size\":1,\"use.counter.css.page.css_background_repeat\":1,\"use.counter.css.page.css_list_style_image\":1,\"use.counter.css.page.css_color\":1,\"use.counter.css.page.css_max_height\":1,\"use.counter.css.page.css_min_width\":1,\"use.counter.css.page.css_moz_transition\":1,\"use.counter.doc.mixed_content_not_upgraded_image_success\":1,\"use.counter.css.doc.css_background_position\":1,\""
		"use.counter.css.doc.css_border_right_width\":1,\"use.counter.css.doc.css_box_sizing\":1,\"use.counter.css.doc.css_margin\":1,\"use.counter.page.mixed_content_not_upgraded_image_success\":1,\"use.counter.css.doc.css_transition\":1,\"use.counter.css.doc.css_border_bottom_left_radius\":1,\"use.counter.css.doc.css_background\":1,\"use.counter.css.doc.css_vertical_align\":1,\"use.counter.css.page.css_font_family\":1,\"use.counter.css.doc.css_list_style_image\":1,\"use.counter.css.doc.css_filter\":1,\""
		"use.counter.css.page.css_border_collapse\":1,\"use.counter.css.doc.css_clip\":1,\"use.counter.css.doc.css_box_shadow\":1,\"use.counter.css.doc.css_min_height\":1,\"use.counter.css.doc.css_list_style\":1,\"use.counter.css.page.css_font_weight\":1,\"use.counter.css.doc.css_quotes\":1,\"use.counter.css.page.css_clip\":1,\"use.counter.css.doc.css_border_radius\":1,\"use.counter.css.page.css_user_select\":1,\"use.counter.css.doc.css_moz_transition\":1,\"use.counter.css.doc.css_cursor\":1,\""
		"use.counter.css.doc.css_padding_top\":1,\"use.counter.css.page.css_font_stretch\":1,\"use.counter.css.page.css_line_height\":1,\"use.counter.css.page.css_width\":1,\"use.counter.css.page.css_text_indent\":1,\"use.counter.css.doc.css_border_spacing\":1,\"use.counter.css.doc.css_color\":1,\"use.counter.css.doc.css_font_weight\":1,\"use.counter.css.doc.css_padding_right\":1,\"use.counter.css.page.css_background_color\":1,\"use.counter.css.doc.css_margin_top\":1,\"use.counter.css.page.css_empty_cells"
		"\":1,\"use.counter.css.page.css_list_style\":1,\"use.counter.css.page.css_white_space\":1,\"use.counter.css.doc.css_text_decoration\":1,\"use.counter.css.page.css_border_top_right_radius\":1,\"use.counter.css.doc.css_webkit_user_select\":1,\"use.counter.css.doc.css_webkit_box_sizing\":1,\"use.counter.css.page.css_content\":1,\"use.counter.css.page.css_font_variant\":1,\"use.counter.css.page.css_border_left\":1,\"use.counter.css.page.css_border_width\":1,\"use.counter.css.page.css_padding_right\":1"
		",\"use.counter.css.doc.css_font_variant\":1,\"use.counter.css.page.css_quotes\":1,\"use.counter.css.page.css_top\":1,\"use.counter.css.doc.css_list_style_type\":1,\"use.counter.css.page.css_left\":1,\"use.counter.css.page.css_font_size_adjust\":1,\"use.counter.css.page.css_margin_left\":1,\"use.counter.content_documents_destroyed\":1,\"use.counter.css.page.css_border_left_width\":1,\"use.counter.css.doc.css_border_collapse\":1,\"use.counter.css.doc.css_left\":1,\"use.counter.css.doc.css_outline\""
		":1,\"use.counter.css.doc.css_text_align\":1,\"use.counter.css.doc.css_top\":1,\"use.counter.css.doc.css_word_break\":1,\"use.counter.css.page.css_max_width\":1,\"use.counter.css.page.css_border_style\":1,\"use.counter.css.page.css_direction\":1,\"use.counter.css.doc.css_overflow\":1,\"use.counter.css.doc.css_webkit_transition\":1,\"use.counter.css.doc.css_width\":1,\"use.counter.css.doc.css_word_wrap\":1,\"use.counter.css.page.css_border_bottom_right_radius\":1,\""
		"use.counter.css.doc.css_border_right\":1,\"use.counter.css.doc.css_border_left\":1}}}", 
		"LAST");

	web_custom_request("8b4bf2c1-f007-4eff-87ad-a02ddf62dac6", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/newtab/1/8b4bf2c1-f007-4eff-87ad-a02ddf62dac6", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t54.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":59,\"start_time\":\"2025-12-04T13:13:31.000+05:30\",\"end_time\":\"2025-12-04T13:14:45.593+05:30\",\"reason\":\"component_init\"},\"client_info\":{\"telemetry_sdk_build\":\"65.2.3\",\"client_id\":\"90571d99-40b9-4f10-9a9a-227b856f2593\",\"app_channel\":\"release\",\"architecture\":\"x86_64\",\"os_version\":\"10.0\",\"locale\":\"en-US\",\"os\":\"Windows\",\"app_display_version\":\"145.0.2\",\"app_build\":\"20251124145406\",\"first_run_date\":\"2022-10-16+05:30\",\""
		"build_date\":\"1970-01-01T00:00:00+00:00\",\"windows_build_number\":19045,\"attribution\":{\"source\":\"www.bing.com\",\"content\":\"%2528not%2Bset%2529\",\"medium\":\"referral\",\"campaign\":\"%2528not%2Bset%2529\"}},\"metrics\":{\"string_list\":{\"newtab.blocked_sponsors\":[]},\"string\":{\"newtab.homepage_category\":\"enabled\",\"newtab.locale\":\"en-US\",\"newtab.newtab_category\":\"enabled\"}}}", 
		"LAST");

	web_custom_request("b7b740f6-2c15-4a7f-857e-527e0375b248", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/nimbus-targeting-context/1/b7b740f6-2c15-4a7f-857e-527e0375b248", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t55.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":22,\"start_time\":\"2025-12-04T13:13:31.000+05:30\",\"end_time\":\"2025-12-04T13:14:45.799+05:30\",\"experiments\":{\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-credit-card-autofill-global-enablement-rollout-release\":{\"branch\":\"creditcard-enable\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-passwords-global-rollout\":{\"branch\":\"treatment-e\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\"next-sign-up-modal-cta\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-shortcuts-v3-sticky\":{\"branch\":\"sticky-frozen-thom\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"smart-tab-groups-rollout-beta\":{\"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\""
		"type\":\"nimbus-rollout\"}},\"desktop-address-autofill-india-release-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\"rollout-branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"acct-adoption-callout-addresses-rollout-with-pxi-required\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\""
		"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\"treatment-fast-udp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"temp-new-tab-mobile-qr-code-campaign-row\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-credit-cards-treatment-c-rollout\":{\"branch\":\"treatment-c\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-search-rollout\":{\"branch\":\"google-lens-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-10-eos-sync-and-reminder-messaging-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\""
		"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"deprecate-ipaddrany-rollout-for-release\":{\"branch\":\"control\",\"extra\":{\""
		"type\":\"nimbus-rollout\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\"treatment-a-callout-badge\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"new-tab-147020251114194929-to-release\":{\"branch\":\"rollout\",\"extra\":{\""
		"type\":\"nimbus-rollout\"}},\"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"improved-mailto-handling-with-os-integration-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"65.2.3\",\"architecture\":\"x86_64\",\"locale\":\"en-US\",\"os_version\":\"10.0\",\"app_build\":\"20251124145406\",\"app_display_version\":\"145.0.2\",\"os\":\"Windows\",\""
		"app_channel\":\"release\",\"windows_build_number\":19045,\"client_id\":\"90571d99-40b9-4f10-9a9a-227b856f2593\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2022-10-16+05:30\",\"attribution\":{\"content\":\"%2528not%2Bset%2529\",\"medium\":\"referral\",\"source\":\"www.bing.com\",\"campaign\":\"%2528not%2Bset%2529\"}},\"metrics\":{\"object\":{\"nimbus_targeting_context.addons_info\":{\"addons\":[\"addons-search-detection@mozilla.com\",\"data-leak-blocker@mozilla.com\",\""
		"formautofill@mozilla.org\",\"ipp-activator@mozilla.com\",\"newtab@mozilla.org\",\"pictureinpicture@mozilla.org\",\"webcompat@mozilla.org\"],\"hasInstalledAddons\":true},\"nimbus_targeting_context.is_default_handler\":{\"html\":false,\"pdf\":false},\"nimbus_targeting_context.active_rollouts\":[\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\",\"account-adoption-callout-credit-cards-treatment-c-rollout\",\"account-adoption-callout-passwords-global-rollout\",\""
		"account-adoption-pxi-menu-rollout-v2\",\"acct-adoption-callout-addresses-rollout-with-pxi-required\",\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\",\"backgroundupdate-enable-unelevated-installations-rollout-3-release\",\"context-id-rotation-every-3-days\",\"deprecate-ipaddrany-rollout-for-release\",\"desktop-address-autofill-india-release-rollout\",\"desktop-credit-card-autofill-global-enablement-rollout-release\",\""
		"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\",\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\",\"downsample-uptakeremotecontent-events\",\"enable-nimbus-unenrollment-synchronization\",\"encrypted-client-hello-fallback-mechanism\",\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\",\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\",\"fox-doodle-multi-action-cta-2025-rollout\",\"fx-accounts-ping-release-rollout-2\",\""
		"improved-mailto-handling-with-os-integration-treatment-a-rollout\",\"new-tab-147020251114194929-to-release\",\"pdf-annotations-highlight-treatment-b-rollout\",\"pin-frequently-used-websites-143-promo-rollout-all-locales\",\"private-window-visual-refresh-rollout\",\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\",\"smart-tab-groups-rollout-beta\",\"taskbar-tabs-discovery-global-rollout\",\"temp-new-tab-mobile-qr-code-campaign-row\",\""
		"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\",\"visual-card-updates\",\"visual-search-rollout\",\"windows-10-eos-sync-and-reminder-messaging-rollout\",\"windows-ui-automation-release-rollout\"],\"nimbus_targeting_context.active_experiments\":[\"long-term-holdback-2025h1-growth-desktop\",\"mozilla-foundation-donation-promotion-moments-page\",\"smart-shortcuts-v3-sticky\"],\"nimbus_targeting_context.os\":{\"isLinux\":false,\"isMac\":false,\"windowsBuildNumber\":19045,\""
		"windowsVersion\":10},\"nimbus_targeting_context.enrollments_map\":[{\"experimentSlug\":\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\",\"branchSlug\":\"treatment-a-tab-switching-copy\"},{\"experimentSlug\":\"account-adoption-callout-credit-cards-treatment-c-rollout\",\"branchSlug\":\"treatment-c\"},{\"experimentSlug\":\"account-adoption-callout-passwords-global-rollout\",\"branchSlug\":\"treatment-e\"},{\"experimentSlug\":\"account-adoption-pxi-menu-rollout-v2\","
		"\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"account-spotlight-modal-english-rollout-v2\",\"branchSlug\":\"rollout\"},{\"experimentSlug\":\"acct-adoption-callout-addresses-rollout-with-pxi-required\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\",\"branchSlug\":\"treatment-a-callout-badge\"},{\"experimentSlug\":\"backgroundupdate-enable-unelevated-installations-rollout-3-release\",\"branchSlug\":\"enabled\"},"
		"{\"experimentSlug\":\"consolidated-search-configuration-row-desktop-relaunch\",\"branchSlug\":\"rollout\"},{\"experimentSlug\":\"context-id-rotation-every-3-days\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"context-id-rotation-every-7-days\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"custom-wallpapers-no-message-rollout-release\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"deprecate-ipaddrany-rollout-for-release\",\"branchSlug\":\"control\"},{\"experimentSlug\":\""
		"desktop-address-autofill-india-release-rollout\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"desktop-credit-card-autofill-global-enablement-rollout-release\",\"branchSlug\":\"creditcard-enable\"},{\"experimentSlug\":\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\",\"branchSlug\":\"next-sign-up-modal-cta\"},{\"experimentSlug\":\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\",\"branchSlug\":\"control\"},{\"experimentSlug\":\""
		"downsample-uptakeremotecontent-events\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"enable-nimbus-unenrollment-synchronization\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"encrypted-client-hello-fallback-mechanism\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\",\"branchSlug\":\"enforce\"},{\"experimentSlug\":\"etp-strict-message-release\",\"branchSlug\":\"control\"},{\"experimentSlug\":\""
		"fast-udp-for-firefox-treatment-fast-udp-release-rollout\",\"branchSlug\":\"treatment-fast-udp\"},{\"experimentSlug\":\"fox-doodle-multi-action-cta-2025-rollout\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"fx-accounts-ping-release-rollout-2\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"fx-view-discoverability-rollout\",\"branchSlug\":\"treatment-b\"},{\"experimentSlug\":\"improved-mailto-handling-with-os-integration-treatment-a-rollout\",\"branchSlug\":\"treatment-a\"},{\""
		"experimentSlug\":\"long-term-holdback-2024-h2-velocity-desktop\",\"branchSlug\":\"delivery\"},{\"experimentSlug\":\"long-term-holdback-2025h1-growth-desktop\",\"branchSlug\":\"delivery\"},{\"experimentSlug\":\"mozilla-foundation-donation-promotion-moments-page\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"new-tab-145120251009134757-to-release\",\"branchSlug\":\"rollout\"},{\"experimentSlug\":\"new-tab-147020251114194929-to-release\",\"branchSlug\":\"rollout\"},{\"experimentSlug\":\""
		"one-click-sponsored-settings\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"pdf-annotations-highlight-treatment-b-rollout\",\"branchSlug\":\"treatment-b\"},{\"experimentSlug\":\"pin-frequently-used-websites-143-promo-rollout-all-locales\",\"branchSlug\":\"rollout-branch\"},{\"experimentSlug\":\"private-window-visual-refresh-rollout\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\",\"branchSlug\":\"sign-in-with-call-out\"},{"
		"\"experimentSlug\":\"smart-shortcuts-v3-sticky\",\"branchSlug\":\"sticky-frozen-thom\"},{\"experimentSlug\":\"smart-tab-groups-rollout-beta\",\"branchSlug\":\"smart-tab-groups\"},{\"experimentSlug\":\"storage-access-heuristic-restriction-rollout\",\"branchSlug\":\"treatment-branch\"},{\"experimentSlug\":\"taskbar-tabs-discovery-global-rollout\",\"branchSlug\":\"delivery\"},{\"experimentSlug\":\"temp-new-tab-mobile-qr-code-campaign-row\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\""
		"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"visual-card-updates\",\"branchSlug\":\"updated\"},{\"experimentSlug\":\"visual-search-rollout\",\"branchSlug\":\"google-lens-rollout\"},{\"experimentSlug\":\"windows-10-eos-sync-and-reminder-messaging-rollout\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"windows-10-eos-sync-messaging-rollout-2\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\""
		"windows-ui-automation-release-rollout\",\"branchSlug\":\"rollout\"}],\"nimbus_targeting_context.primary_resolution\":{\"height\":760,\"width\":1280},\"nimbus_targeting_context.default_pdf_handler\":{\"knownBrowser\":true,\"registered\":true},\"nimbus_targeting_context.browser_settings\":{\"update\":{\"channel\":\"release\"}},\"nimbus_targeting_context.home_page_settings\":{\"isCustomUrl\":false,\"isDefault\":true,\"isLocked\":false,\"isWebExt\":false},\"nimbus_targeting_environment.pref_values\":"
		"{\"browser__newtabpage__activity_stream__asrouter__userprefs__cfr__addons\":true,\"browser__newtabpage__activity_stream__asrouter__userprefs__cfr__features\":true,\"browser__newtabpage__activity_stream__feeds__section__highlights\":false,\"browser__newtabpage__activity_stream__feeds__section__topstories\":true,\"browser__newtabpage__activity_stream__feeds__topsites\":true,\"browser__newtabpage__activity_stream__showSearch\":true,\"browser__newtabpage__activity_stream__showSponsoredTopSites\":true,"
		"\"browser__newtabpage__enabled\":true,\"browser__startup__page\":1,\"browser__toolbars__bookmarks__visibility\":\"newtab\",\"browser__urlbar__lastUrlbarSearchSeconds\":0,\"browser__urlbar__quicksuggest__dataCollection__enabled\":false,\"browser__urlbar__showSearchSuggestionsFirst\":true,\"browser__urlbar__suggest__quicksuggest__sponsored\":false,\"media__videocontrols__picture_in_picture__enabled\":true,\"media__videocontrols__picture_in_picture__video_toggle__enabled\":true,\""
		"media__videocontrols__picture_in_picture__video_toggle__has_used\":false,\"network__trr__mode\":0,\"security__sandbox__content__level\":8,\"trailhead__firstrun__didSeeAboutWelcome\":true,\"nimbus__qa__pref_1\":\"default\",\"nimbus__qa__pref_2\":\"default\"},\"nimbus_targeting_environment.user_set_prefs\":[\"nimbus.profilesdatastoreservice.read.enabled\",\"nimbus.profilesdatastoreservice.sync.enabled\",\"browser.search.separatePrivateDefault.urlbarResult.enabled\",\""
		"browser.newtabpage.activity-stream.mobileDownloadModal.enabled\",\"browser.newtabpage.activity-stream.mobileDownloadModal.variant-a\",\"browser.newtabpage.trainhopAddon.version\",\"signon.firefoxRelay.showToAllBrowsers\",\"browser.contextual-services.contextId.rotation-in-days\"],\"nimbus_targeting_context.attribution_data\":{\"medium\":\"referral\",\"source\":\"www.bing.com\",\"ua\":\"edge\"},\"nimbus_targeting_context.user_monthly_activity\":[{\"numberOfURLsVisited\":3,\"date\":\"2025-11-20\"},"
		"{\"numberOfURLsVisited\":1,\"date\":\"2025-12-03\"}]},\"quantity\":{\"nimbus_targeting_context.build_id\":1,\"nimbus_targeting_context.total_bookmarks_count\":5,\"nimbus_targeting_context.memory_mb\":16382,\"nimbus_targeting_context.addresses_saved\":0,\"nimbus_targeting_context.profile_age_created\":1665919558706,\"nimbus_targeting_context.profile_group_profile_count\":0,\"nimbus_targeting_context.firefox_version\":145,\"nimbus_targeting_context.arch_bits\":64},\"string\":{\""
		"nimbus_targeting_context.version\":\"145.0.2\",\"nimbus_targeting_context.distribution_id\":\"\",\"nimbus_targeting_context.current_date\":\"Thu, 04 Dec 2025 07:44:44 GMT\",\"nimbus_targeting_context.locale\":\"en-US\",\"nimbus_targeting_context.region\":\"IN\"},\"uuid\":{\"legacy.telemetry.client_id\":\"f6637294-d75f-4350-be24-43ca2fcded9d\",\"legacy.telemetry.profile_group_id\":\"f6637294-d75f-4350-be24-43ca2fcded9d\"},\"boolean\":{\"nimbus_targeting_context.has_active_enterprise_policies\""
		":false,\"nimbus_targeting_context.is_msix\":false,\"nimbus_targeting_context.user_prefers_reduced_motion\":true,\"nimbus_targeting_context.does_app_need_pin\":false,\"nimbus_targeting_context.has_pinned_tabs\":false,\"nimbus_targeting_context.is_fx_a_enabled\":true,\"nimbus_targeting_context.is_fx_a_signed_in\":false,\"nimbus_targeting_context.is_first_startup\":false,\"nimbus_targeting_context.is_default_browser\":false,\"nimbus_targeting_context.uses_firefox_sync\":false}}}", 
		"LAST");

	web_custom_request("d965e19e-c673-4ed4-bf34-07c05d9dab20", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/baseline/1/d965e19e-c673-4ed4-bf34-07c05d9dab20", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t56.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":39,\"start_time\":\"2025-12-04T13:13:31.000+05:30\",\"end_time\":\"2025-12-04T13:14:45.901+05:30\",\"reason\":\"active\",\"experiments\":{\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\"next-sign-up-modal-cta\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-shortcuts-v3-sticky\":{\"branch\":\"sticky-frozen-thom\",\""
		"extra\":{\"type\":\"nimbus-nimbus\"}},\"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"smart-tab-groups-rollout-beta\":{\"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\"treatment-a-callout-badge\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"temp-new-tab-mobile-qr-code-campaign-row\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"windows-10-eos-sync-and-reminder-messaging-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"deprecate-ipaddrany-rollout-for-release\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-credit-card-autofill-global-enablement-rollout-release\":{\"branch\":\"creditcard-enable\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-credit-cards-treatment-c-rollout\":{\"branch\":\"treatment-c\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"new-tab-147020251114194929-to-release\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\"rollout-branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-passwords-global-rollout\":{\"branch\":\"treatment-e\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-address-autofill-india-release-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"acct-adoption-callout-addresses-rollout-with-pxi-required\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-search-rollout\":{\"branch\":\"google-lens-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"improved-mailto-handling-with-os-integration-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\"treatment-fast-udp\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"65.2.3\",\"first_run_date\":\"2022-10-16+05:30\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"windows_build_number\":19045,\"client_id\":\"90571d99-40b9-4f10-9a9a-227b856f2593\",\""
		"app_channel\":\"release\",\"architecture\":\"x86_64\",\"app_build\":\"20251124145406\",\"os\":\"Windows\",\"os_version\":\"10.0\",\"app_display_version\":\"145.0.2\",\"locale\":\"en-US\",\"attribution\":{\"campaign\":\"%2528not%2Bset%2529\",\"source\":\"www.bing.com\",\"medium\":\"referral\",\"content\":\"%2528not%2Bset%2529\"}},\"metrics\":{\"labeled_counter\":{\"glean.validation.pings_submitted\":{\"baseline\":1,\"events\":1}},\"datetime\":{\"glean.validation.first_run_hour\":\"2022-10-16T16+05"
		":30\"},\"uuid\":{\"legacy.telemetry.client_id\":\"f6637294-d75f-4350-be24-43ca2fcded9d\",\"legacy.telemetry.profile_group_id\":\"f6637294-d75f-4350-be24-43ca2fcded9d\"},\"counter\":{\"browser.engagement.active_ticks\":2},\"string\":{\"startup.profile_selection_reason\":\"default\",\"usage.distribution_id\":\"default\"},\"boolean\":{\"usage.is_default_browser\":false}}}", 
		"LAST");

	web_custom_request("f8518058-7f66-47e1-ab67-3dd939562656", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/usage-reporting/1/f8518058-7f66-47e1-ab67-3dd939562656", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t57.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"metrics\":{\"datetime\":{\"usage.first_run_date\":\"2022-10-16+05:30\"},\"counter\":{\"browser.engagement.active_ticks\":2},\"uuid\":{\"usage.profile_group_id\":\"9285e5cf-d171-4f29-a5b8-d53d109d51a8\",\"usage.profile_id\":\"5ae6e87b-e670-4529-b684-10268475dcce\"},\"string\":{\"usage.os_version\":\"10.0\",\"usage.distribution_id\":\"default\",\"usage.app_display_version\":\"145.0.2\",\"usage.app_build\":\"20251124145406\",\"usage.app_channel\":\"release\",\"usage.os\":\"WINNT\"},\""
		"quantity\":{\"usage.windows_build_number\":19045,\"usage.windows_user_profile_age_in_days\":1145},\"boolean\":{\"usage.windows_backup_enabled\":false,\"usage.is_default_browser\":false}}}", 
		"LAST");

	web_custom_request("dbe10ae3-b822-4701-a6c5-315ab614a078", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/health/1/dbe10ae3-b822-4701-a6c5-315ab614a078", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t58.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":40,\"start_time\":\"2025-12-04T13:13:31.000+05:30\",\"end_time\":\"2025-12-04T13:14:45.929+05:30\",\"reason\":\"pre_init\",\"experiments\":{\"smart-tab-groups-rollout-beta\":{\"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":"
		"{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\"treatment-a-callout-badge\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"temp-new-tab-mobile-qr-code-campaign-row\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-credit-cards-treatment-c-rollout\":{\"branch\":\"treatment-c\""
		",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\"next-sign-up-modal-cta\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"acct-adoption-callout-addresses-rollout-with-pxi-required\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"windows-10-eos-sync-and-reminder-messaging-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-address-autofill-india-release-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"desktop-credit-card-autofill-global-enablement-rollout-release\":{\"branch\":\"creditcard-enable\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\""
		"rollout-branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\"treatment-fast-udp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-pxi-menu-rollout-v2\":{\""
		"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-shortcuts-v3-sticky\":{\"branch\":\"sticky-frozen-thom\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"new-tab-147020251114194929-to-release\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"improved-mailto-handling-with-os-integration-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"deprecate-ipaddrany-rollout-for-release\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-passwords-global-rollout\":{\"branch\":\"treatment-e\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-search-rollout\":{\"branch\":\""
		"google-lens-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"65.2.3\",\"windows_build_number\":19045,\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2022-10-16+05:30\",\"client_id\":\"90571d99-40b9-4f10-9a9a-227b856f2593\""
		",\"architecture\":\"x86_64\",\"app_build\":\"20251124145406\",\"os\":\"Windows\",\"app_display_version\":\"145.0.2\",\"app_channel\":\"release\",\"locale\":\"en-US\",\"os_version\":\"10.0\",\"attribution\":{\"content\":\"%2528not%2Bset%2529\",\"source\":\"www.bing.com\",\"medium\":\"referral\",\"campaign\":\"%2528not%2Bset%2529\"}},\"metrics\":{\"labeled_counter\":{\"glean.upload.ping_upload_failure\":{\"recoverable\":4},\"glean.validation.pings_submitted\":{\"baseline\":1,\"events\":1}},\""
		"memory_distribution\":{\"glean.database.size\":{\"values\":{\"251029\":1},\"sum\":254915},\"glean.upload.pending_pings_directory_size\":{\"values\":{\"13193\":1},\"sum\":13312}},\"counter\":{\"glean.health.init_count\":21,\"glean.upload.pending_pings\":2},\"object\":{\"glean.health.data_directory_info\":[{\"dir_name\":\"db\",\"dir_exists\":true,\"dir_created\":1665919583,\"dir_modified\":1764834270,\"file_count\":1,\"files\":[{\"file_name\":\"data.safe.bin\",\"file_created\":1764834268,\""
		"file_modified\":1764834270,\"file_size\":254915}]},{\"dir_name\":\"events\",\"dir_exists\":true,\"dir_created\":1665919583,\"dir_modified\":1764834211,\"file_count\":2,\"files\":[{\"file_name\":\"events\",\"file_created\":1733465245,\"file_modified\":1764834270,\"file_size\":3181},{\"file_name\":\"prototype-no-code-events\",\"file_created\":1733395015,\"file_modified\":1762144555,\"file_size\":645}]},{\"dir_name\":\"pending_pings\",\"dir_exists\":true,\"dir_created\":1665919583,\"dir_modified\""
		":1764834270,\"file_count\":2,\"files\":[{\"file_name\":\"09f654cb-0bf5-4a13-ae82-273df63d00a2\",\"file_created\":1764757770,\"file_modified\":1764757770,\"file_size\":368},{\"file_name\":\"f167fda8-5c4b-424a-b24e-afd8f89df0d3\",\"file_created\":1764834270,\"file_modified\":1764834270,\"file_size\":13015}]}],\"glean.database.load_sizes\":{\"new\":254915,\"open\":254915,\"post_open\":254915,\"post_open_user\":254915,\"post_load_ping_lifetime_data\":254915,\"user_records\":64,\"ping_records\":1031,\""
		"application_records\":301,\"ping_memory_records\":1031}},\"uuid\":{\"legacy.telemetry.profile_group_id\":\"f6637294-d75f-4350-be24-43ca2fcded9d\",\"legacy.telemetry.client_id\":\"f6637294-d75f-4350-be24-43ca2fcded9d\"},\"timing_distribution\":{\"glean.upload.send_success\":{\"values\":{\"2553802833\":1,\"379625062\":1,\"348117717\":1,\"319225354\":3,\"292730940\":2},\"sum\":5102187300},\"glean.upload.send_failure\":{\"values\":{\"159612677\":1,\"1170923761\":1,\"39903169\":1,\"94906265\":1},\"sum"
		"\":1509720800},\"glean.validation.shutdown_dispatcher_wait\":{\"values\":{\"1617125\":1},\"sum\":1646100},\"glean.validation.shutdown_wait\":{\"values\":{\"2097152\":1},\"sum\":2246700}}}}", 
		"LAST");

	web_custom_request("a5b12c2e-47e7-4bfd-a489-a66a8337c880", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/health/1/a5b12c2e-47e7-4bfd-a489-a66a8337c880", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t59.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":41,\"start_time\":\"2025-12-04T13:14:45.000+05:30\",\"end_time\":\"2025-12-04T13:14:45.941+05:30\",\"reason\":\"post_init\",\"experiments\":{\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-search-rollout\":{\"branch\":\"google-lens-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\"treatment-a-callout-badge\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\"next-sign-up-modal-cta\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-address-autofill-india-release-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"deprecate-ipaddrany-rollout-for-release\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\"treatment-fast-udp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\""
		"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"new-tab-147020251114194929-to-release\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\""
		"rollout-branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-tab-groups-rollout-beta\":{\"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-credit-cards-treatment-c-rollout\":{\"branch\":\"treatment-c\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"acct-adoption-callout-addresses-rollout-with-pxi-required\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-shortcuts-v3-sticky\":{\"branch\":\"sticky-frozen-thom\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"account-adoption-callout-passwords-global-rollout\":{\"branch\":\"treatment-e\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fx-accounts-ping-release-rollout-2\""
		":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"temp-new-tab-mobile-qr-code-campaign-row\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-10-eos-sync-and-reminder-messaging-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\""
		":\"nimbus-rollout\"}},\"desktop-credit-card-autofill-global-enablement-rollout-release\":{\"branch\":\"creditcard-enable\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"improved-mailto-handling-with-os-integration-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"65.2.3\",\"client_id\":\"90571d99-40b9-4f10-9a9a-227b856f2593\",\"locale\":\"en-US\",\"app_display_version\":\"145.0.2\",\"app_channel\":\"release\",\""
		"architecture\":\"x86_64\",\"app_build\":\"20251124145406\",\"os_version\":\"10.0\",\"os\":\"Windows\",\"windows_build_number\":19045,\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2022-10-16+05:30\",\"attribution\":{\"content\":\"%2528not%2Bset%2529\",\"source\":\"www.bing.com\",\"medium\":\"referral\",\"campaign\":\"%2528not%2Bset%2529\"}},\"metrics\":{\"uuid\":{\"legacy.telemetry.client_id\":\"f6637294-d75f-4350-be24-43ca2fcded9d\",\"legacy.telemetry.profile_group_id\":\""
		"f6637294-d75f-4350-be24-43ca2fcded9d\"},\"object\":{\"glean.health.data_directory_info\":[{\"dir_name\":\"db\",\"dir_exists\":true,\"dir_created\":1665919583,\"dir_modified\":1764834285,\"file_count\":1,\"files\":[{\"file_name\":\"data.safe.bin\",\"file_created\":1764834268,\"file_modified\":1764834285,\"file_size\":252870}]},{\"dir_name\":\"events\",\"dir_exists\":true,\"dir_created\":1665919583,\"dir_modified\":1764834285,\"file_count\":2,\"files\":[{\"file_name\":\"events\",\"file_created\""
		":1733465245,\"file_modified\":1764834285,\"file_size\":0},{\"file_name\":\"prototype-no-code-events\",\"file_created\":1733395015,\"file_modified\":1762144555,\"file_size\":645}]},{\"dir_name\":\"pending_pings\",\"dir_exists\":true,\"dir_created\":1665919583,\"dir_modified\":1764834285,\"file_count\":8,\"files\":[{\"file_name\":\"09f654cb-0bf5-4a13-ae82-273df63d00a2\",\"file_created\":1764757770,\"file_modified\":1764757770,\"file_size\":368},{\"file_name\":\"767b4cb6-edd8-4d11-b9cd-2b646cbd1f11\""
		",\"file_created\":1764834285,\"file_modified\":1764834285,\"file_size\":9244},{\"file_name\":\"8b4bf2c1-f007-4eff-87ad-a02ddf62dac6\",\"file_created\":1764834285,\"file_modified\":1764834285,\"file_size\":955},{\"file_name\":\"b7b740f6-2c15-4a7f-857e-527e0375b248\",\"file_created\":1764834285,\"file_modified\":1764834285,\"file_size\":15578},{\"file_name\":\"d965e19e-c673-4ed4-bf34-07c05d9dab20\",\"file_created\":1764834285,\"file_modified\":1764834285,\"file_size\":5383},{\"file_name\":\""
		"dbe10ae3-b822-4701-a6c5-315ab614a078\",\"file_created\":1764834285,\"file_modified\":1764834285,\"file_size\":7016},{\"file_name\":\"f167fda8-5c4b-424a-b24e-afd8f89df0d3\",\"file_created\":1764834270,\"file_modified\":1764834270,\"file_size\":13015},{\"file_name\":\"f8518058-7f66-47e1-ab67-3dd939562656\",\"file_created\":1764834285,\"file_modified\":1764834285,\"file_size\":798}]}]},\"counter\":{\"glean.health.init_count\":21}}}", 
		"LAST");

 
# 374 "Action.c"

 
# 385 "Action.c"

	return 0;
}
# 5 "c:\\users\\administrator\\documents\\vugen\\scripts\\imagecheck\\\\combined_imageCheck.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 6 "c:\\users\\administrator\\documents\\vugen\\scripts\\imagecheck\\\\combined_imageCheck.c" 2

