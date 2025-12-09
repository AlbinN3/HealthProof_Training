Buy_Item()
{

	web_add_auto_header("Accept-Language", 
		"en-GB,en;q=0.9");

	web_custom_request("1", 
		"URL=https://demowebshop.tricentis.com/addproducttocart/catalog/2/1/1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://demowebshop.tricentis.com/", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_url("25-virtual-gift-card", 
		"URL=https://demowebshop.tricentis.com/25-virtual-gift-card", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://demowebshop.tricentis.com/", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Shopping cart (0)", 
		"URL=https://demowebshop.tricentis.com/cart", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://demowebshop.tricentis.com/25-virtual-gift-card", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}
