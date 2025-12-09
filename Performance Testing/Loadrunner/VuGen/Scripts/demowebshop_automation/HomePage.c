HomePage()
{

	lr_start_transaction("goToLogin");

	web_add_header("Accept-Language", 
		"en-GB,en;q=0.9");

	lr_think_time(7);

	web_url("login", 
		"URL=https://demowebshop.tricentis.com/login", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://demowebshop.tricentis.com/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("goToLogin",LR_AUTO);

	return 0;
}
