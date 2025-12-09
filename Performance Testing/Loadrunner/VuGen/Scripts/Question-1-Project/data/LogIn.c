LogIn()
{

	lr_start_transaction("Loggin in");

	web_add_auto_header("Accept-Language", 
		"en-GB,en;q=0.9");

	lr_think_time(10);

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
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Account.action;jsessionid=B8AE312074B025B00BA7C7ADA88E372A?signonForm=", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=username", "Value=User1000", ENDITEM, 
		"Name=password", "Value=User@123", ENDITEM, 
		"Name=signon", "Value=Login", ENDITEM, 
		"Name=_sourcePage", "Value=xEdUq-EQ96i-bEwriJzUuo8gGbXhkp271yN-odhrJlYYFeqKBg5y-KA-PsIujfTnzWx0as4gI8ekyvzLfTx1shAqjBq2bY8wOkyL8o2icXw=", ENDITEM, 
		"Name=__fp", "Value=oC8VPbAk0PbCDMoNbxlhUeZrLIwBKf8BI-1s9u64RPbcfzfM4CQbDCaOHJGSwgUl", ENDITEM, 
		LAST);

	lr_end_transaction("Loggin in",LR_AUTO);

	return 0;
}
