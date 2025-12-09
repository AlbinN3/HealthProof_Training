BuyItem()
{

	lr_start_transaction("Buying an item");

	web_add_auto_header("Accept-Language", 
		"en-GB,en;q=0.9");

	web_url("Order.action", 
		"URL=https://petstore.octoperf.com/actions/Order.action?newOrderForm=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Cart.action?addItemToCart=&workingItemId=EST-2", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("Account.action_2", 
		"Action=https://petstore.octoperf.com/actions/Account.action", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Order.action?newOrderForm=", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=username", "Value=user1000", ENDITEM, 
		"Name=password", "Value=User@123", ENDITEM, 
		"Name=signon", "Value=Login", ENDITEM, 
		"Name=_sourcePage", "Value=WH8UbhTAhIDE5jjb3xolPnqofWzRUkIGFfh9JqjcWcwyRNFJe7-BtPUmHaqyMuCAl2OHLqELDO7FBmV3hteqK56u4J3iW168MQdqRiEIOjY=", ENDITEM, 
		"Name=__fp", "Value=Rfz7yOuvn_aZxeGrLEn-zdWsZBSXWKVevcGOOyO2C0-_AxlbJ2dbluJgSBDbU_iH", ENDITEM, 
		LAST);

	lr_end_transaction("Buying an item",LR_AUTO);

	return 0;
}
