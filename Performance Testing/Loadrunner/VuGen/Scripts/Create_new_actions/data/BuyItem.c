BuyItem()
{

	web_add_auto_header("Accept-Language", 
		"en-GB,en;q=0.9");

	web_url("Catalog.action;jsessionid=A8AB2289E0D2231F5ADB5EDF006ECF93", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action;jsessionid=A8AB2289E0D2231F5ADB5EDF006ECF93?viewCategory=&categoryId=FISH", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(4);

	web_url("FI-SW-01", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action?viewProduct=&productId=FI-SW-01", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action;jsessionid=A8AB2289E0D2231F5ADB5EDF006ECF93?viewCategory=&categoryId=FISH", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(5);

	web_url("Add to Cart", 
		"URL=https://petstore.octoperf.com/actions/Cart.action?addItemToCart=&workingItemId=EST-2", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action?viewProduct=&productId=FI-SW-01", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}
