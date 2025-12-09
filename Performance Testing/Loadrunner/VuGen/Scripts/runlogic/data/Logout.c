Logout()
{

	web_add_header("Accept-Language", 
		"en-GB,en;q=0.9");

	web_url("logout", 
		"URL=https://demowebshop.tricentis.com/logout", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://demowebshop.tricentis.com/cart", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}