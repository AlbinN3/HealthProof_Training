BuyComputers()
{

	web_add_auto_header("Accept-Language", 
		"en-GB,en;q=0.9");

	web_url("notebooks", 
		"URL=https://demowebshop.tricentis.com/notebooks", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://demowebshop.tricentis.com/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_url("14.1-inch Laptop", 
		"URL=https://demowebshop.tricentis.com/141-inch-laptop", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://demowebshop.tricentis.com/notebooks", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("1", 
		"Action=https://demowebshop.tricentis.com/addproducttocart/details/31/1", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://demowebshop.tricentis.com/141-inch-laptop", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=addtocart_31.EnteredQuantity", "Value=1", ENDITEM, 
		LAST);

	web_url("cart", 
		"URL=https://demowebshop.tricentis.com/cart", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://demowebshop.tricentis.com/141-inch-laptop", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}
