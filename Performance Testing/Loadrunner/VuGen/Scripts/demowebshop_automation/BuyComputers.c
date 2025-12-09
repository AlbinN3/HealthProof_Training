BuyComputers()
{

	lr_start_transaction("BuyDesktop");

	web_add_auto_header("Accept-Language", 
		"en-GB,en;q=0.9");

	lr_think_time(6);

	web_url("desktops", 
		"URL=https://demowebshop.tricentis.com/desktops", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://demowebshop.tricentis.com/login", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("BuyDesktop",LR_AUTO);

	lr_think_time(15);

	lr_start_transaction("select item");

	web_url("Build your own cheap computer", 
		"URL=https://demowebshop.tricentis.com/build-your-cheap-own-computer", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://demowebshop.tricentis.com/desktops", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("select item",LR_AUTO);

	lr_start_transaction("addToCart");

	web_submit_data("1", 
		"Action=https://demowebshop.tricentis.com/addproducttocart/details/72/1", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://demowebshop.tricentis.com/build-your-cheap-own-computer", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=product_attribute_72_5_18", "Value=53", ENDITEM, 
		"Name=product_attribute_72_6_19", "Value=54", ENDITEM, 
		"Name=product_attribute_72_3_20", "Value=57", ENDITEM, 
		"Name=addtocart_72.EnteredQuantity", "Value=1", ENDITEM, 
		LAST);

	lr_end_transaction("addToCart",LR_AUTO);

	return 0;
}
