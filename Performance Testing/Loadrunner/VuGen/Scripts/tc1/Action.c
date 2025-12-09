Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_cookie("__utma=78382081.1054723828.1764995006.1764995006.1764995006.1; DOMAIN=demowebshop.tricentis.com");

	web_add_cookie("__utmc=78382081; DOMAIN=demowebshop.tricentis.com");

	web_add_cookie("__utmz=78382081.1764995006.1.1.utmcsr=(direct)|utmccn=(direct)|utmcmd=(none); DOMAIN=demowebshop.tricentis.com");

	web_add_cookie("__utmt=1; DOMAIN=demowebshop.tricentis.com");

	web_add_cookie("__utmb=78382081.1.10.1764995006; DOMAIN=demowebshop.tricentis.com");

	web_add_auto_header("Accept-Language", 
		"en-GB,en;q=0.9");

	web_url("demowebshop.tricentis.com", 
		"URL=https://demowebshop.tricentis.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/content/images/thumbs/0000240.png", ENDITEM, 
		"Url=/Themes/DefaultClean/Content/images/top-menu-divider.png", "Referer=https://demowebshop.tricentis.com/Themes/DefaultClean/Content/styles.css", ENDITEM, 
		"Url=/Themes/DefaultClean/Content/images/star-x-inactive.png", "Referer=https://demowebshop.tricentis.com/Themes/DefaultClean/Content/styles.css", ENDITEM, 
		"Url=/Themes/DefaultClean/Content/images/bullet-right.gif", "Referer=https://demowebshop.tricentis.com/Themes/DefaultClean/Content/styles.css", ENDITEM, 
		"Url=/Themes/DefaultClean/Content/images/star-x-active.png", "Referer=https://demowebshop.tricentis.com/Themes/DefaultClean/Content/styles.css", ENDITEM, 
		"Url=/Plugins/Widgets.NivoSlider/Content/nivoslider/themes/default/loading.gif", "Referer=https://demowebshop.tricentis.com/Plugins/Widgets.NivoSlider/Content/nivoslider/themes/default/default.css", ENDITEM, 
		"Url=/Content/jquery-ui-themes/smoothness/images/ui-bg_flat_75_ffffff_40x100.png", "Referer=https://demowebshop.tricentis.com/Content/jquery-ui-themes/smoothness/jquery-ui-1.10.3.custom.min.css", ENDITEM, 
		"Url=/Plugins/Widgets.NivoSlider/Content/nivoslider/themes/default/arrows.png", "Referer=https://demowebshop.tricentis.com/Plugins/Widgets.NivoSlider/Content/nivoslider/themes/default/default.css", ENDITEM, 
		"Url=/Plugins/Widgets.NivoSlider/Content/nivoslider/themes/default/bullets.png", "Referer=https://demowebshop.tricentis.com/Plugins/Widgets.NivoSlider/Content/nivoslider/themes/default/default.css", ENDITEM, 
		LAST);

	web_link("Register", 
		"Text=Register", 
		"Snapshot=t4.inf", 
		LAST);

	return 0;
}