Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_header("Accept-Language", 
		"en-GB,en;q=0.9");

	web_url("demowebshop.tricentis.com", 
		"URL=https://demowebshop.tricentis.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}