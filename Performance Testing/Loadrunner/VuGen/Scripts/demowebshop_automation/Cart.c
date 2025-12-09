Cart()
{

	lr_start_transaction("goToCart");

	web_add_header("Accept-Language", 
		"en-GB,en;q=0.9");

	lr_think_time(22);

	web_url("cart", 
		"URL=https://demowebshop.tricentis.com/cart", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://demowebshop.tricentis.com/build-your-cheap-own-computer", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("goToCart",LR_AUTO);

	lr_start_transaction("logout");

	return 0;
}
