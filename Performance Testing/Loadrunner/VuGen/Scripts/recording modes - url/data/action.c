Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_auto_header("Accept-Language", 
		"en-GB,en;q=0.9");

	web_url("petstore.octoperf.com", 
		"URL=https://petstore.octoperf.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("jpetstore.css", 
		"URL=https://petstore.octoperf.com/css/jpetstore.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://petstore.octoperf.com/", 
		"Snapshot=t2.inf", 
		LAST);

	web_url("Enter the Store", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/", 
		"Snapshot=t3.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("logo-topbar.svg", 
		"URL=https://petstore.octoperf.com/images/logo-topbar.svg", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t4.inf", 
		LAST);

	web_url("cart.gif", 
		"URL=https://petstore.octoperf.com/images/cart.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t5.inf", 
		LAST);

	web_url("sm_cats.gif", 
		"URL=https://petstore.octoperf.com/images/sm_cats.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t6.inf", 
		LAST);

	web_url("splash.gif", 
		"URL=https://petstore.octoperf.com/images/splash.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t7.inf", 
		LAST);

	web_url("birds_icon.gif", 
		"URL=https://petstore.octoperf.com/images/birds_icon.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t8.inf", 
		LAST);

	web_url("cats_icon.gif", 
		"URL=https://petstore.octoperf.com/images/cats_icon.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t9.inf", 
		LAST);

	web_url("dogs_icon.gif", 
		"URL=https://petstore.octoperf.com/images/dogs_icon.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t10.inf", 
		LAST);

	web_url("reptiles_icon.gif", 
		"URL=https://petstore.octoperf.com/images/reptiles_icon.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t11.inf", 
		LAST);

	web_url("fish_icon.gif", 
		"URL=https://petstore.octoperf.com/images/fish_icon.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t12.inf", 
		LAST);

	web_url("sm_birds.gif", 
		"URL=https://petstore.octoperf.com/images/sm_birds.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t13.inf", 
		LAST);

	web_url("separator.gif", 
		"URL=https://petstore.octoperf.com/images/separator.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t14.inf", 
		LAST);

	web_url("sm_fish.gif", 
		"URL=https://petstore.octoperf.com/images/sm_fish.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t15.inf", 
		LAST);

	web_url("sm_dogs.gif", 
		"URL=https://petstore.octoperf.com/images/sm_dogs.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t16.inf", 
		LAST);

	web_url("sm_reptiles.gif", 
		"URL=https://petstore.octoperf.com/images/sm_reptiles.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t17.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_set_sockets_option("TLS_SNI", "0");

	web_set_sockets_option("TLS_SNI", "1");

	web_url("sm_fish.gif_2", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action;jsessionid=9DBE642C7F5A967F984DD43E5294F34A?viewCategory=&categoryId=FISH", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t18.inf", 
		"Mode=HTTP", 
		LAST);

	return 0;
}