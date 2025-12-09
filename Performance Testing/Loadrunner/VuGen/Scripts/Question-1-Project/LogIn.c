LogIn()
{

	lr_start_transaction("Logging in");

	web_add_auto_header("Accept-Language", 
		"en-GB,en;q=0.9");

	lr_think_time(10);

/*Correlation comment - Do not change!  Original value='xEdUq-EQ96i-bEwriJzUuo8gGbXhkp271yN-odhrJlYYFeqKBg5y-KA-PsIujfTnzWx0as4gI8ekyvzLfTx1shAqjBq2bY8wOkyL8o2icXw=' Name ='_sourcePage' Type ='ResponseBased'*/
	web_reg_save_param_attrib(
		"ParamName=_sourcePage",
		"TagName=input",
		"Extract=value",
		"Name=_sourcePage",
		"Type=hidden",
		SEARCH_FILTERS,
		"IgnoreRedirections=No",
		LAST);

/*Correlation comment - Do not change!  Original value='oC8VPbAk0PbCDMoNbxlhUeZrLIwBKf8BI-1s9u64RPbcfzfM4CQbDCaOHJGSwgUl' Name ='__fp' Type ='ResponseBased'*/
	web_reg_save_param_attrib(
		"ParamName=__fp",
		"TagName=input",
		"Extract=value",
		"Name=__fp",
		"Type=hidden",
		SEARCH_FILTERS,
		"IgnoreRedirections=No",
		LAST);

	web_url("Account.action;jsessionid=B8AE312074B025B00BA7C7ADA88E372A", 
		"URL=https://petstore.octoperf.com/actions/Account.action;jsessionid=B8AE312074B025B00BA7C7ADA88E372A?signonForm=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(15);

	web_submit_data("Account.action",
		"Action=https://petstore.octoperf.com/actions/Account.action",
		"Method=POST",
		"EncodeAtSign=YES",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://petstore.octoperf.com/actions/Account.action;jsessionid=B8AE312074B025B00BA7C7ADA88E372A?signonForm=",
		"Snapshot=t10.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=username", "Value=User1000", ENDITEM,
		"Name=password", "Value=User@123", ENDITEM,
		"Name=signon", "Value=Login", ENDITEM,
		"Name=_sourcePage", "Value={_sourcePage}", ENDITEM,
		"Name=__fp", "Value={__fp}", ENDITEM,
		LAST);

	lr_end_transaction("Logging in",LR_AUTO);

	return 0;
}
