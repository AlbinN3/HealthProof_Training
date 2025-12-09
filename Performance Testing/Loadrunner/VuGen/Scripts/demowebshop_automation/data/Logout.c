Logout()
{

	web_add_auto_header("Accept-Language", 
		"en-GB,en;q=0.9");

	lr_think_time(22);

	web_url("login_4", 
		"URL=https://demowebshop.tricentis.com/login", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://demowebshop.tricentis.com/cart", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(13);

	lr_start_transaction("logout");

	web_url("Log in", 
		"URL=https://demowebshop.tricentis.com/login", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://demowebshop.tricentis.com/login", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}