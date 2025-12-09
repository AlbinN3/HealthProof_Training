Checkout()
{

	web_add_header("Accept-Language", 
		"en-GB,en;q=0.9");

	web_url("Order.action", 
		"URL=https://petstore.octoperf.com/actions/Order.action?newOrderForm=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Cart.action?addItemToCart=&workingItemId=EST-2", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}