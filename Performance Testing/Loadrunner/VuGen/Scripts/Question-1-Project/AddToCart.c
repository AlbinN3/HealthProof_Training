AddToCart()
{

	web_add_auto_header("Accept-Language", 
		"en-GB,en;q=0.9");

	lr_think_time(8);

/*Correlation comment - Do not change!  Original value='FI-SW-01' Name ='productId' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=productId",
		"RegExp=productId=(.*?)\">FI-SW-01",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

	web_url("Catalog.action", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action?viewCategory=&categoryId=FISH", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Account.action", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	lr_start_transaction("Adding to cart");

/*Correlation comment - Do not change!  Original value='EST-2' Name ='workingItemId' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=workingItemId",
		"RegExp=itemId=(.*?)\">EST-2",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

	web_url("FI-SW-01",
		"URL=https://petstore.octoperf.com/actions/Catalog.action?viewProduct=&productId={productId}",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://petstore.octoperf.com/actions/Catalog.action?viewCategory=&categoryId=FISH",
		"Snapshot=t12.inf",
		"Mode=HTML",
		LAST);

	web_url("Add to Cart",
		"URL=https://petstore.octoperf.com/actions/Cart.action?addItemToCart=&workingItemId={workingItemId}",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://petstore.octoperf.com/actions/Catalog.action?viewProduct=&productId={productId}",
		"Snapshot=t13.inf",
		"Mode=HTML",
		LAST);

	lr_end_transaction("Adding to cart",LR_AUTO);

	return 0;
}
