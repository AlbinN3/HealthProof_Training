BuyItem()
{

	lr_start_transaction("Buying an item");

	web_add_auto_header("Accept-Language", 
		"en-GB,en;q=0.9");

/*Correlation comment - Do not change!  Original value='WH8UbhTAhIDE5jjb3xolPnqofWzRUkIGFfh9JqjcWcwyRNFJe7-BtPUmHaqyMuCAl2OHLqELDO7FBmV3hteqK56u4J3iW168MQdqRiEIOjY=' Name ='_sourcePage_1' Type ='ResponseBased'*/
	web_reg_save_param_attrib(
		"ParamName=_sourcePage_1",
		"TagName=input",
		"Extract=value",
		"Name=_sourcePage",
		"Type=hidden",
		SEARCH_FILTERS,
		"IgnoreRedirections=No",
		LAST);

/*Correlation comment - Do not change!  Original value='Rfz7yOuvn_aZxeGrLEn-zdWsZBSXWKVevcGOOyO2C0-_AxlbJ2dbluJgSBDbU_iH' Name ='__fp_1' Type ='ResponseBased'*/
	web_reg_save_param_attrib(
		"ParamName=__fp_1",
		"TagName=input",
		"Extract=value",
		"Name=__fp",
		"Type=hidden",
		SEARCH_FILTERS,
		"IgnoreRedirections=No",
		LAST);

	web_url("Order.action",
		"URL=https://petstore.octoperf.com/actions/Order.action?newOrderForm=",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://petstore.octoperf.com/actions/Cart.action?addItemToCart=&workingItemId={workingItemId}",
		"Snapshot=t14.inf",
		"Mode=HTML",
		LAST);

	web_submit_data("Account.action_2",
		"Action=https://petstore.octoperf.com/actions/Account.action",
		"Method=POST",
		"EncodeAtSign=YES",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://petstore.octoperf.com/actions/Order.action?newOrderForm=",
		"Snapshot=t15.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=username", "Value=user1000", ENDITEM,
		"Name=password", "Value=User@123", ENDITEM,
		"Name=signon", "Value=Login", ENDITEM,
		"Name=_sourcePage", "Value={_sourcePage_1}", ENDITEM,
		"Name=__fp", "Value={__fp_1}", ENDITEM,
		LAST);

	lr_end_transaction("Buying an item",LR_AUTO);

	return 0;
}
