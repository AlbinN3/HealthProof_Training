Cart()
{

	web_add_header("Accept-Language", 
		"en-GB,en;q=0.9");

	web_submit_data("cart_2", 
		"Action=https://demowebshop.tricentis.com/cart", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://demowebshop.tricentis.com/cart", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=removefromcart", "Value=6032260", ENDITEM, 
		"Name=itemquantity6032260", "Value=1", ENDITEM, 
		"Name=discountcouponcode", "Value=", ENDITEM, 
		"Name=giftcardcouponcode", "Value=", ENDITEM, 
		"Name=CountryId", "Value=0", ENDITEM, 
		"Name=StateProvinceId", "Value=0", ENDITEM, 
		"Name=ZipPostalCode", "Value=", ENDITEM, 
		"Name=termsofservice", "Value=on", ENDITEM, 
		"Name=checkout", "Value=checkout", ENDITEM, 
		LAST);

	return 0;
}