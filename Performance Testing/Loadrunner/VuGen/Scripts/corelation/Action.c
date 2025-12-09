Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_auto_header("Accept-Language", 
		"en-GB,en;q=0.9");

	web_url("petstore.octoperf.com", 
		"URL=https://petstore.octoperf.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Enter the Store", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);
	
	web_reg_save_param("categoryid",
		"LB=categoryId=",
		"RB=",
		LAST);
	
	web_reg_find("Text={categoryid}",LAST);

	web_url("sm_fish.gif", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action;jsessionid=104E54443A90F45438A1DE8E24A2FC39?viewCategory=&categoryId={categoryId}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);


	return 0;
}