LaunchApp()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_header("Accept-Language", 
		"en-GB,en;q=0.9");

	
	
	web_image_check("web_image_check",
		"Src=/Themes/DefaultClean/Content/images/logo.png",
		LAST);

	web_url("demowebshop.tricentis.com", 
		"URL=https://demowebshop.tricentis.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}
