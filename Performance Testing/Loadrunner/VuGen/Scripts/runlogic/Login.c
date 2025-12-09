Login()
{
	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_auto_header("Accept-Language", 
		"en-GB,en;q=0.9");

	web_url("demowebshop.tricentis.com", 
		"URL=https://demowebshop.tricentis.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Log in", 
		"URL=https://demowebshop.tricentis.com/login", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://demowebshop.tricentis.com/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);


	web_add_header("Accept-Language", 
		"en-GB,en;q=0.9");
	
	lr_think_time(5);
	
	web_submit_data("login", 
		"Action=https://demowebshop.tricentis.com/login", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://demowebshop.tricentis.com/login", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=Email", "Value=aaa@gmail.cc", ENDITEM, 
		"Name=Password", "Value=aaabbb1", ENDITEM, 
		"Name=RememberMe", "Value=false", ENDITEM, 
		LAST);

	return 0;
}
