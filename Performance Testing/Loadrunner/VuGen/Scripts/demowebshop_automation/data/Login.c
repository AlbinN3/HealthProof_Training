Login()
{

	lr_start_transaction("Login");

	web_add_auto_header("Accept-Language", 
		"en-GB,en;q=0.9");

	lr_think_time(26);

	web_submit_data("login_2", 
		"Action=https://demowebshop.tricentis.com/login", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://demowebshop.tricentis.com/login", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=Email", "Value=albin@gmsil.cc", ENDITEM, 
		"Name=Password", "Value=aaabbb1", ENDITEM, 
		"Name=RememberMe", "Value=false", ENDITEM, 
		LAST);

	web_submit_data("login_3", 
		"Action=https://demowebshop.tricentis.com/login", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://demowebshop.tricentis.com/login", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=Email", "Value=albin@gmail.cc", ENDITEM, 
		"Name=Password", "Value=aaabbb1", ENDITEM, 
		"Name=RememberMe", "Value=false", ENDITEM, 
		LAST);

	lr_end_transaction("Login",LR_AUTO);

	return 0;
}
