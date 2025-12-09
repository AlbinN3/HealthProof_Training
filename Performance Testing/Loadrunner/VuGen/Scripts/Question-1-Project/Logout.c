Logout()
{

	lr_start_transaction("Logging out");

	web_add_header("Accept-Language", 
		"en-GB,en;q=0.9");

	web_url("Account.action_3", 
		"URL=https://petstore.octoperf.com/actions/Account.action?signoff=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Logging out",LR_AUTO);

	return 0;
}