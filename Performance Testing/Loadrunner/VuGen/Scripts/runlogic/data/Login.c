Login()
{

	web_add_header("Accept-Language", 
		"en-GB,en;q=0.9");

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
