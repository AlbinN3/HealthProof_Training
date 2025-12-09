Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.5");

	web_url("petstore.octoperf.com", 
		"URL=https://petstore.octoperf.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);
	web_image_check("web_image_check",
		"Src=../images/logo-topbar.svg",
		LAST);

	web_link("Enter the Store", 
		"Text=Enter the Store", 
		"Snapshot=t2.inf", 
		LAST);

	return 0;
}