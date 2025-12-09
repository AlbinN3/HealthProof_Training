Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("remote-settings.content-signature.mozilla.org-2025-12-18-09-14-51.chain", 
		"URL=https://content-signature-2.cdn.mozilla.net/g/chains/202402/remote-settings.content-signature.mozilla.org-2025-12-18-09-14-51.chain", 
		"Resource=1", 
		"RecContentType=binary/octet-stream", 
		"Referer=", 
		"Snapshot=t1.inf", 
		LAST);

/*	web_url("canonical.html", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);*/

	web_custom_request("v9o", 
		"URL=http://o.pki.goog/s/wr3/v9o", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0R0P0N0L0J0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x11\\x00\\xBF\\xDA\\x16\\xE1\\xB54\\xDC\\xCB\\x10\\xE0\\x7FRB\\xD3\\xF9\\x9A", 
		LAST);

	web_custom_request("v9o_2", 
		"URL=http://o.pki.goog/s/wr3/v9o", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0R0P0N0L0J0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x11\\x00\\xBF\\xDA\\x16\\xE1\\xB54\\xDC\\xCB\\x10\\xE0\\x7FRB\\xD3\\xF9\\x9A", 
		LAST);

/*	web_url("canonical.html_2", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);*/

	web_custom_request("xvY", 
		"URL=http://o.pki.goog/s/wr3/xvY", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0R0P0N0L0J0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x11\\x00\\xC6\\xF6\\xC8\r\\xE2\\xDF\\x16\\xC1\\x12\\xC6\\xEC\\xC0s\\\\\\xB0T", 
		LAST);

	web_custom_request("ads", 
		"URL=https://ads.mozilla.org/v1/ads", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"context_id\":\"23852afd-307f-4d9f-8e21-aa01fb354cbc\",\"placements\":[{\"placement\":\"newtab_tile_1\",\"count\":1},{\"placement\":\"newtab_tile_2\",\"count\":1},{\"placement\":\"newtab_tile_3\",\"count\":1}],\"blocks\":[\"\"],\"credentials\":\"omit\"}", 
		LAST);
	
	web_reg_find("Text=Choose your departure city:", 
		LAST);

	web_url("blazedemo.com", 
		"URL=https://blazedemo.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://blazemeter.trackinglibrary.prodperfect.com/keen-tracking.min.js", ENDITEM, 
		"Url=/favicon.ico", ENDITEM, 
		LAST);

/*	web_websocket_connect("ID=0", 
		"URI=wss://push.services.mozilla.com/", 
		"Origin=wss://push.services.mozilla.com/", 
		"SecWebSocketExtensions=permessage-deflate", 
		"OnOpenCB=OnOpenCB0", 
		"OnMessageCB=OnMessageCB0", 
		"OnErrorCB=OnErrorCB0", 
		"OnCloseCB=OnCloseCB0", 
		LAST);*/

	web_websocket_send("ID=0", 
		"Buffer={\"messageType\":\"hello\",\"broadcasts\":{\"remote-settings/monitor_changes\":\"\\\"1764830190557\\\"\"},\"use_webpush\":true}", 
		"IsBinary=0", 
		LAST);

	web_custom_request("cfr-v1-en-US", 
		"URL=https://firefox.settings.services.mozilla.com/v1/buckets/main/collections/ms-language-packs/records/cfr-v1-en-US", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

/*	web_url("canonical.html_3", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);*/

	/*Connection ID 0 received buffer WebSocketReceive0*/

	web_custom_request("ocsp.digicert.com", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x02\\xF1\\x84\\xDA\\xF8\\x12Sy\\xE1\\x18\\x08\\xA7\\x04<\\xF6\\xF4", 
		EXTRARES, 
		"Url=http://detectportal.firefox.com/success.txt?ipv4", "Referer=", ENDITEM, 
		LAST);

	web_custom_request("ocsp.r2m04.amazontrust.com", 
		"URL=http://ocsp.r2m04.amazontrust.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\n\\xF9\\xFA\n\\xC2\\xD8\\xC024d\\xE9a\\xC6%\\xAA\\x10", 
		LAST);

	web_custom_request("b137a53c-8ec3-4335-93e0-13ef607973e3", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/events/1/b137a53c-8ec3-4335-93e0-13ef607973e3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t14.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":25,\"start_time\":\"2025-12-04T11:10:59.000+05:30\",\"end_time\":\"2025-12-04T11:33:43.096+05:30\",\"reason\":\"startup\",\"experiments\":{\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"new-tab-147020251114194929-to-release\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\","
		"\"extra\":{\"type\":\"nimbus-rollout\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\"rollout-branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-address-autofill-india-release-rollout\":{\"branch\":\"treatment-a\",\""
		"extra\":{\"type\":\"nimbus-rollout\"}},\"temp-new-tab-mobile-qr-code-campaign-row\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"desktop-credit-card-autofill-global-enablement-rollout-release\":{\"branch\":\"creditcard-enable\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-tab-groups-rollout-beta\":{\"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}}"
		",\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-10-eos-sync-and-reminder-messaging-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"improved-mailto-handling-with-os-integration-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"account-adoption-callout-credit-cards-treatment-c-rollout\":{\"branch\":\"treatment-c\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-passwords-global-rollout\":{\"branch\":\"treatment-e\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\""
		"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"deprecate-ipaddrany-rollout-for-release\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-shortcuts-v3-sticky\":{\"branch\":\"sticky-frozen-thom\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"visual-search-rollout\":{\"branch\":\"google-lens-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"acct-adoption-callout-addresses-rollout-with-pxi-required\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\"treatment-fast-udp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\"treatment-a-callout-badge\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\"next-sign-up-modal-cta\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\""
		"type\":\"nimbus-rollout\"}},\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"65.2.3\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2022-10-16+05:30\",\""
		"architecture\":\"x86_64\",\"os\":\"Windows\",\"app_display_version\":\"145.0.2\",\"app_build\":\"20251124145406\",\"locale\":\"en-US\",\"os_version\":\"10.0\",\"app_channel\":\"release\",\"windows_build_number\":19045,\"client_id\":\"90571d99-40b9-4f10-9a9a-227b856f2593\",\"attribution\":{\"campaign\":\"%2528not%2Bset%2529\",\"medium\":\"referral\",\"content\":\"%2528not%2Bset%2529\",\"source\":\"www.bing.com\"}},\"metrics\":{\"uuid\":{\"legacy.telemetry.client_id\":\""
		"f6637294-d75f-4350-be24-43ca2fcded9d\",\"legacy.telemetry.profile_group_id\":\"f6637294-d75f-4350-be24-43ca2fcded9d\"},\"counter\":{\"browser.engagement.uri_count\":2,\"browser.engagement.active_ticks\":7},\"quantity\":{\"browser.engagement.max_concurrent_tab_count\":1,\"urlbar.pref_max_results\":10},\"string\":{\"search.engine.private.partner_code\":\"\",\"search.engine.private.provider_id\":\"\",\"search.engine.default.provider_id\":\"google\",\"search.engine.default.load_path\":\"[app]google\","
		"\"search.engine.private.display_name\":\"\",\"search.engine.private.load_path\":\"\",\"region.home_region\":\"IN\",\"search.engine.default.display_name\":\"Google\",\"search.engine.default.partner_code\":\"firefox-b-d\"},\"url\":{\"search.engine.private.submission_url\":\"blank:\",\"search.engine.default.submission_url\":\"https://www.google.com/search?client=firefox-b-d&q=\"},\"boolean\":{\"policies.is_enterprise\":false,\"search.engine.default.overridden_by_third_party\":false,\""
		"urlbar.pref_suggest_topsites\":true,\"urlbar.pref_suggest_nonsponsored\":false,\"urlbar.pref_suggest_sponsored\":false,\"usage.is_default_browser\":false,\"urlbar.pref_suggest_data_collection\":false,\"search.engine.private.overridden_by_third_party\":false}},\"events\":[{\"timestamp\":0,\"category\":\"session_restore\",\"name\":\"backup_can_be_loaded_session_file\",\"extra\":{\"loadfail_reason\":\"N/A\",\"can_load\":\"true\",\"glean_timestamp\":\"1764826857816\",\"path_key\":\"clean\"}},{\""
		"timestamp\":0,\"category\":\"session_restore\",\"name\":\"backup_can_be_loaded_session_file\",\"extra\":{\"can_load\":\"true\",\"path_key\":\"clean\",\"loadfail_reason\":\"N/A\",\"glean_timestamp\":\"1764826857816\"}},{\"timestamp\":0,\"category\":\"session_restore\",\"name\":\"shutdown_success_session_startup\",\"extra\":{\"glean_timestamp\":\"1764826857817\",\"shutdown_ok\":\"false\",\"shutdown_reason\":\"N/A\"}},{\"timestamp\":664,\"category\":\"webcompatreporting\",\"name\":\"reason_dropdown\""
		",\"extra\":{\"setting\":\"required\",\"glean_timestamp\":\"1764826858480\"}},{\"timestamp\":1303,\"category\":\"nimbus_events\",\"name\":\"startup_database_consistency\",\"extra\":{\"db_active_count\":\"37\",\"store_active_count\":\"37\",\"total_store_count\":\"48\",\"glean_timestamp\":\"1764826859119\",\"primary\":\"database\",\"trigger\":\"startup\",\"total_db_count\":\"48\"}},{\"timestamp\":1390,\"category\":\"jsonfile\",\"name\":\"load_autofillprofiles\",\"extra\":{\"glean_timestamp\":\""
		"1764826859206\",\"value\":\"error_notfounderror\"}},{\"timestamp\":1405,\"category\":\"doh\",\"name\":\"state_rollback\",\"extra\":{\"glean_timestamp\":\"1764826859221\",\"value\":\"null\"}},{\"timestamp\":1422,\"category\":\"containers\",\"name\":\"container_profile_loaded\",\"extra\":{\"containers\":\"4\",\"glean_timestamp\":\"1764826859239\"}},{\"timestamp\":1445,\"category\":\"jsonfile\",\"name\":\"load_logins\",\"extra\":{\"glean_timestamp\":\"1764826859261\",\"value\":\"error_notfounderror\""
		"}},{\"timestamp\":1447,\"category\":\"upgrade_dialog\",\"name\":\"trigger_reason\",\"extra\":{\"value\":\"not-major\",\"glean_timestamp\":\"1764826859263\"}},{\"timestamp\":3502,\"category\":\"normandy\",\"name\":\"enroll_failed_nimbus_experiment\",\"extra\":{\"reason\":\"feature-conflict\",\"glean_timestamp\":\"1764826861318\",\"value\":\"account-spotlight-modal-global-rollout-v3\"}},{\"timestamp\":3502,\"category\":\"nimbus_events\",\"name\":\"enroll_failed\",\"extra\":{\"experiment\":\""
		"account-spotlight-modal-global-rollout-v3\",\"reason\":\"feature-conflict\",\"glean_timestamp\":\"1764826861318\"}},{\"timestamp\":3685,\"category\":\"nimbus_events\",\"name\":\"is_ready\",\"extra\":{\"glean_timestamp\":\"1764826861501\"}},{\"timestamp\":3851,\"category\":\"normandy\",\"name\":\"expose_nimbus_experiment\",\"extra\":{\"featureId\":\"feltPrivacy\",\"value\":\"private-window-visual-refresh-rollout\",\"glean_timestamp\":\"1764826863042\",\"branchSlug\":\"control\"}},{\"timestamp\""
		":3851,\"category\":\"nimbus_events\",\"name\":\"exposure\",\"extra\":{\"experiment\":\"private-window-visual-refresh-rollout\",\"branch\":\"control\",\"feature_id\":\"feltPrivacy\",\"glean_timestamp\":\"1764826863042\"}},{\"timestamp\":5743,\"category\":\"normandy\",\"name\":\"expose_nimbus_experiment\",\"extra\":{\"glean_timestamp\":\"1764826863559\",\"branchSlug\":\"rollout\",\"value\":\"new-tab-147020251114194929-to-release\",\"featureId\":\"newtabTrainhopAddon\"}},{\"timestamp\":5743,\""
		"category\":\"nimbus_events\",\"name\":\"exposure\",\"extra\":{\"experiment\":\"new-tab-147020251114194929-to-release\",\"glean_timestamp\":\"1764826863559\",\"feature_id\":\"newtabTrainhopAddon\",\"branch\":\"rollout\"}},{\"timestamp\":1358924,\"category\":\"doh\",\"name\":\"state_shutdown\",\"extra\":{\"value\":\"null\",\"glean_timestamp\":\"1764828216740\"}}]}", 
		EXTRARES, 
		"Url=https://prod.ohttp-gateway.prod.webservices.mozgcp.net/ohttp-configs", "Referer=", ENDITEM, 
		LAST);

	web_custom_request("ocsp.r2m01.amazontrust.com", 
		"URL=http://ocsp.r2m01.amazontrust.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\t\\x88\\xC4\\x8F\\x8C/d\\xA6+\\xCE\\x08\"I\\xC3\\xB5{", 
		LAST);

	web_custom_request("pageviews", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/pageviews?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"7db6b950-a980-440e-bf4f-651921e702d1\",\"iso_time_full\":\"2025-12-04T06:03:45.429Z\",\"local_time_full\":\"Thu Dec 04 2025 11:33:45 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"cbc7f6e1-d4d4-461b-90ca-258f4219b3d3\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"ac40c5f8-34e9-483b-b34b-8a9d63c2c73b\",\"tracker_loaded_at\":\"2025-12-04T06:03:45.428Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"dba7e2a5-01b9-4417-abf7-c51eb05a2c5e\"},\"page\":{\"title\":\"BlazeDemo\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":675,\"pixel_max\":675,\"ratio\":1,\"ratio_max\":1},\"time_on_page\":0,\"time_on_page_ms\":1},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\":true,\"platform\""
		":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":675,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/\",\"info\":{}},\"referrer\":{\"full\":\"\""
		",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T06:03:45.429Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\"time.utc\"},{\""
		"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]}}", 
		LAST);

/*	web_url("canonical.html_4", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);*/

	web_custom_request("6bc47a62-3faa-435f-9299-8b3ca5c4c5dd", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/use-counters/1/6bc47a62-3faa-435f-9299-8b3ca5c4c5dd", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t18.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":17,\"start_time\":\"2025-12-04T10:33:11.000+05:30\",\"end_time\":\"2025-12-04T11:33:36.669+05:30\",\"reason\":\"app_shutdown_confirmed\",\"experiments\":{\"desktop-credit-card-autofill-global-enablement-rollout-release\":{\"branch\":\"creditcard-enable\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":"
		"\"enforce\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"deprecate-ipaddrany-rollout-for-release\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\"treatment-fast-udp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"treatment-a\",\"extra\":{\""
		"type\":\"nimbus-nimbus\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\"rollout-branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\""
		"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-tab-groups-rollout-beta\":{\"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-shortcuts-v3-sticky\":{\"branch\":\"sticky-frozen-thom\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\"next-sign-up-modal-cta\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\""
		"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-10-eos-sync-and-reminder-messaging-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-address-autofill-india-release-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"acct-adoption-callout-addresses-rollout-with-pxi-required\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"temp-new-tab-mobile-qr-code-campaign-row\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\"treatment-a-callout-badge\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\""
		"type\":\"nimbus-rollout\"}},\"account-adoption-callout-credit-cards-treatment-c-rollout\":{\"branch\":\"treatment-c\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-passwords-global-rollout\":{\"branch\":\"treatment-e\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"new-tab-147020251114194929-to-release\":{\"branch\":\"rollout\",\"extra\":{\"type"
		"\":\"nimbus-rollout\"}},\"visual-search-rollout\":{\"branch\":\"google-lens-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"improved-mailto-handling-with-os-integration-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"65.2.3\",\"windows_build_number\":19045,\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2022-10-16+05:30\",\"client_id\":\"90571d99-40b9-4f10-9a9a-227b856f2593\",\"app_channel\":\"release\",\""
		"app_display_version\":\"145.0.2\",\"app_build\":\"20251124145406\",\"architecture\":\"x86_64\",\"os\":\"Windows\",\"locale\":\"en-US\",\"os_version\":\"10.0\",\"attribution\":{\"source\":\"www.bing.com\",\"medium\":\"referral\",\"campaign\":\"%2528not%2Bset%2529\",\"content\":\"%2528not%2Bset%2529\"}},\"metrics\":{\"counter\":{\"use.counter.css.doc.css_text_shadow\":4,\"use.counter.css.doc.css_font\":4,\"use.counter.css.doc.css_margin_right\":4,\"use.counter.css.doc.css_text_indent\":4,\""
		"use.counter.css.doc.css_text_transform\":4,\"use.counter.css.page.css_font_style\":2,\"use.counter.css.page.css_moz_box_sizing\":2,\"use.counter.css.page.css_text_indent\":2,\"use.counter.css.doc.css_letter_spacing\":4,\"use.counter.css.page.css_background_color\":2,\"use.counter.css.page.css_border_radius\":2,\"use.counter.css.doc.css_bottom\":4,\"use.counter.css.doc.css_margin_left\":4,\"use.counter.css.doc.css_text_overflow\":4,\"use.counter.css.doc.css_overflow\":4,\""
		"use.counter.css.doc.css_border_spacing\":4,\"use.counter.css.doc.css_padding_right\":4,\"use.counter.css.doc.css_word_wrap\":4,\"use.counter.css.page.css_background\":2,\"use.counter.css.page.css_border_right_color\":2,\"use.counter.css.page.css_padding_left\":2,\"use.counter.css.doc.css_webkit_animation\":4,\"use.counter.css.page.css_background_repeat\":2,\"use.counter.css.doc.css_border_top\":4,\"use.counter.css.doc.css_content\":4,\"use.counter.css.page.css_animation\":2,\""
		"use.counter.css.page.css_border_top_color\":2,\"use.counter.css.page.css_font\":2,\"use.counter.css.doc.css_vertical_align\":4,\"use.counter.css.page.css_list_style\":2,\"use.counter.css.doc.css_word_break\":4,\"use.counter.css.page.css_margin\":2,\"use.counter.css.doc.css_left\":4,\"use.counter.css.page.css_border_left_color\":2,\"use.counter.css.page.css_border_spacing\":2,\"use.counter.css.page.css_margin_right\":2,\"use.counter.css.doc.css_list_style\":4,\"use.counter.css.doc.css_border_width"
		"\":4,\"use.counter.css.doc.css_color\":4,\"use.counter.css.doc.css_zoom\":4,\"use.counter.css.page.css_border_bottom_right_radius\":2,\"use.counter.css.page.css_letter_spacing\":2,\"use.counter.css.doc.orphans\":4,\"use.counter.css.page.css_padding_right\":2,\"use.counter.css.page.css_position\":2,\"use.counter.css.doc.css_border_left_width\":4,\"use.counter.css.page.css_text_transform\":2,\"use.counter.css.doc.css_font_size\":4,\"use.counter.css.doc.css_cursor\":4,\""
		"use.counter.css.doc.css_background_position\":4,\"use.counter.css.doc.css_page_break_after\":4,\"use.counter.css.page.css_content\":2,\"use.counter.css.page.css_margin_bottom\":2,\"use.counter.css.page.css_margin_top\":2,\"use.counter.css.page.css_padding\":2,\"use.counter.css.doc.css_pointer_events\":4,\"use.counter.css.page.css_webkit_appearance\":2,\"use.counter.css.page.css_cursor\":2,\"use.counter.css.page.css_webkit_background_size\":2,\""
		"use.counter.css.page.css_webkit_border_bottom_right_radius\":2,\"use.counter.css.page.css_white_space\":2,\"use.counter.css.doc.css_border_top_width\":4,\"use.counter.css.doc.css_height\":4,\"use.counter.css.doc.css_text_decoration\":4,\"use.counter.css.doc.css_border_color\":4,\"use.counter.css.doc.css_border_right_color\":4,\"use.counter.css.doc.css_margin_bottom\":4,\"use.counter.css.doc.css_box_sizing\":4,\"use.counter.css.doc.css_outline_offset\":4,\""
		"use.counter.css.doc.css_webkit_border_top_right_radius\":4,\"use.counter.css.doc.css_white_space\":4,\"use.counter.css.page.css_line_height\":2,\"use.counter.css.page.css_min_height\":2,\"use.counter.css.page.css_moz_transition\":2,\"use.counter.css.page.css_border\":2,\"use.counter.css.doc.css_background_repeat\":4,\"use.counter.css.doc.css_z_index\":4,\"use.counter.css.doc.css_margin\":4,\"use.counter.css.page.css_background_position\":2,\"use.counter.css.page.css_webkit_border_top_right_radius"
		"\":2,\"use.counter.css.page.css_webkit_transform\":2,\"use.counter.css.page.css_border_left_width\":2,\"use.counter.css.doc.css_border_collapse\":4,\"use.counter.css.page.css_background_image\":2,\"use.counter.css.doc.css_webkit_appearance\":4,\"use.counter.css.page.css_right\":2,\"use.counter.css.page.css_border_bottom_color\":2,\"use.counter.css.page.css_width\":2,\"use.counter.css.page.css_padding_top\":2,\"use.counter.css.page.css_z_index\":2,\"use.counter.css.page.css_word_wrap\":2,\""
		"use.counter.css.page.webkit_margin_top_collapse\":2,\"use.counter.css.page.css_border_style\":2,\"use.counter.css.page.widows\":2,\"use.counter.css.doc.css_border_right\":4,\"use.counter.css.doc.css_border_bottom_right_radius\":4,\"use.counter.css.doc.css_background_clip\":4,\"use.counter.css.page.css_moz_animation\":2,\"use.counter.css.page.css_background_clip\":2,\"use.counter.css.page.css_visibility\":2,\"use.counter.css.doc.css_background_size\":4,\"use.counter.css.doc.css_opacity\":4,\""
		"use.counter.css.doc.widows\":4,\"use.counter.css.page.css_background_size\":2,\"use.counter.css.doc.css_text_align\":4,\"use.counter.top_level_content_documents_destroyed\":2,\"use.counter.css.page.css_min_width\":2,\"use.counter.css.page.css_bottom\":2,\"use.counter.css.page.css_border_top_width\":2,\"use.counter.css.doc.css_border_bottom_width\":4,\"use.counter.css.doc.css_background_color\":4,\"use.counter.css.doc.css_border_bottom\":4,\"use.counter.css.doc.css_padding_bottom\":4,\""
		"use.counter.css.page.css_webkit_background_clip\":2,\"use.counter.css.doc.css_display\":4,\"use.counter.css.doc.css_border_right_width\":4,\"use.counter.css.doc.css_border\":4,\"use.counter.css.page.orphans\":2,\"use.counter.css.doc.css_border_top_right_radius\":4,\"use.counter.css.doc.css_clear\":4,\"use.counter.css.page.css_text_shadow\":2,\"use.counter.css.page.css_webkit_box_sizing\":2,\"use.counter.css.doc.css_border_bottom_left_radius\":4,\"use.counter.css.doc.css_moz_animation\":4,\""
		"use.counter.css.page.css_outline\":2,\"use.counter.css.page.css_text_decoration\":2,\"use.counter.css.page.css_border_bottom_left_radius\":2,\"use.counter.css.page.css_border_top\":2,\"use.counter.css.page.css_webkit_transition\":2,\"use.counter.css.doc.css_transition\":4,\"use.counter.css.page.css_word_break\":2,\"use.counter.css.doc.css_top\":4,\"use.counter.css.page.css_opacity\":2,\"use.counter.css.doc.css_border_bottom_color\":4,\"use.counter.css.doc.css_border_radius\":4,\""
		"use.counter.css.doc.css_box_shadow\":4,\"use.counter.css.page.css_border_bottom_width\":2,\"use.counter.css.page.css_border_left\":2,\"use.counter.css.page.css_border_width\":2,\"use.counter.css.doc.css_webkit_box_shadow\":4,\"use.counter.css.doc.css_webkit_box_sizing\":4,\"use.counter.css.page.css_margin_left\":2,\"use.counter.css.page.css_outline_offset\":2,\"use.counter.css.page.css_overflow_y\":2,\"use.counter.css.page.css_text_overflow\":2,\"use.counter.css.page.css_vertical_align\":2,\""
		"use.counter.css.doc.css_overflow_x\":4,\"use.counter.css.doc.css_text_rendering\":4,\"use.counter.css.doc.css_visibility\":4,\"use.counter.css.doc.css_webkit_background_size\":4,\"use.counter.css.page.css_height\":2,\"use.counter.css.doc.css_webkit_border_radius\":4,\"use.counter.css.page.css_border_top_right_radius\":2,\"use.counter.css.doc.css_padding_top\":4,\"use.counter.css.page.css_display\":2,\"use.counter.css.doc.css_webkit_background_clip\":4,\"use.counter.css.page.css_float\":2,\""
		"use.counter.css.doc.css_border_top_left_radius\":4,\"use.counter.css.doc.css_float\":4,\"use.counter.css.doc.css_border_top_color\":4,\"use.counter.css.doc.css_webkit_transform\":4,\"use.counter.css.page.css_border_bottom\":2,\"use.counter.css.page.css_font_family\":2,\"use.counter.css.doc.css_background_image\":4,\"use.counter.css.doc.css_page_break_inside\":4,\"use.counter.css.doc.css_font_family\":4,\"use.counter.css.doc.css_webkit_border_bottom_right_radius\":4,\""
		"use.counter.css.doc.css_webkit_transition\":4,\"use.counter.css.page.css_left\":2,\"use.counter.css.doc.css_max_width\":4,\"use.counter.css.page.css_padding_bottom\":2,\"use.counter.css.page.css_transition\":2,\"use.counter.content_documents_destroyed\":4,\"use.counter.css.doc.css_webkit_border_bottom_left_radius\":4,\"use.counter.css.doc.css_font_style\":4,\"use.counter.css.page.css_font_weight\":2,\"use.counter.css.page.css_box_sizing\":2,\"use.counter.css.doc.css_border_style\":4,\""
		"use.counter.css.page.css_webkit_border_top_left_radius\":2,\"use.counter.css.doc.css_moz_box_sizing\":4,\"use.counter.css.page.css_webkit_border_bottom_left_radius\":2,\"use.counter.css.page.css_font_size\":2,\"use.counter.css.doc.css_webkit_border_top_left_radius\":4,\"use.counter.css.doc.css_min_height\":4,\"use.counter.css.page.css_border_top_left_radius\":2,\"use.counter.css.doc.css_margin_top\":4,\"use.counter.css.page.css_max_width\":2,\"use.counter.css.page.css_webkit_box_shadow\":2,\""
		"use.counter.css.page.css_zoom\":2,\"use.counter.css.page.css_border_right\":2,\"use.counter.css.doc.css_border_left\":4,\"use.counter.css.doc.webkit_margin_top_collapse\":4,\"use.counter.css.page.css_overflow\":2,\"use.counter.css.page.css_border_collapse\":2,\"use.counter.css.doc.css_background\":4,\"use.counter.css.doc.css_width\":4,\"use.counter.css.doc.css_position\":4,\"use.counter.css.page.css_page_break_after\":2,\"use.counter.css.page.css_page_break_inside\":2,\""
		"use.counter.css.page.css_text_align\":2,\"use.counter.css.page.css_text_rendering\":2,\"use.counter.css.doc.css_min_width\":4,\"use.counter.css.page.css_top\":2,\"use.counter.css.doc.css_animation\":4,\"use.counter.css.page.css_border_color\":2,\"use.counter.css.page.css_webkit_border_radius\":2,\"use.counter.css.page.css_clear\":2,\"use.counter.css.page.css_color\":2,\"use.counter.css.doc.css_font_weight\":4,\"use.counter.css.page.css_overflow_x\":2,\"use.counter.css.doc.css_moz_transition\":4,\""
		"use.counter.css.doc.css_outline\":4,\"use.counter.css.doc.css_overflow_y\":4,\"use.counter.css.page.css_border_right_width\":2,\"use.counter.css.page.css_pointer_events\":2,\"use.counter.css.doc.css_border_left_color\":4,\"use.counter.css.doc.css_line_height\":4,\"use.counter.css.doc.css_padding\":4,\"use.counter.css.page.css_box_shadow\":2,\"use.counter.css.page.css_webkit_animation\":2,\"use.counter.css.doc.css_right\":4,\"use.counter.css.doc.css_padding_left\":4,\""
		"use.counter.css.page.css_max_height\":2,\"use.counter.css.doc.css_max_height\":4}}}", 
		EXTRARES, 
		"Url=http://detectportal.firefox.com/success.txt?ipv4", "Referer=", ENDITEM, 
		LAST);

	web_custom_request("27529dc1-7260-4561-bb48-c948af1e4927", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/newtab/1/27529dc1-7260-4561-bb48-c948af1e4927", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t19.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":53,\"start_time\":\"2025-12-04T11:11:00.000+05:30\",\"end_time\":\"2025-12-04T11:33:43.339+05:30\",\"reason\":\"component_init\"},\"client_info\":{\"telemetry_sdk_build\":\"65.2.3\",\"client_id\":\"90571d99-40b9-4f10-9a9a-227b856f2593\",\"first_run_date\":\"2022-10-16+05:30\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"windows_build_number\":19045,\"app_channel\":\"release\",\"app_build\":\"20251124145406\",\"architecture\":\"x86_64\",\"os_version\":\"10.0\",\""
		"locale\":\"en-US\",\"os\":\"Windows\",\"app_display_version\":\"145.0.2\",\"attribution\":{\"source\":\"www.bing.com\",\"campaign\":\"%2528not%2Bset%2529\",\"content\":\"%2528not%2Bset%2529\",\"medium\":\"referral\"}},\"metrics\":{\"string\":{\"newtab.locale\":\"en-US\",\"newtab.newtab_category\":\"enabled\",\"newtab.homepage_category\":\"enabled\"},\"string_list\":{\"newtab.blocked_sponsors\":[]}}}", 
		LAST);

	web_custom_request("7be1dcff-3c27-466b-8672-3d3c16f1c7d7", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/nimbus-targeting-context/1/7be1dcff-3c27-466b-8672-3d3c16f1c7d7", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t20.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":16,\"start_time\":\"2025-12-04T11:11:00.000+05:30\",\"end_time\":\"2025-12-04T11:33:43.557+05:30\",\"experiments\":{\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\"rollout-branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-address-autofill-india-release-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\""
		"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\"next-sign-up-modal-cta\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"account-adoption-callout-credit-cards-treatment-c-rollout\":{\"branch\":\"treatment-c\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\"treatment-a-callout-badge\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-passwords-global-rollout\":{\"branch\":\"treatment-e\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"acct-adoption-callout-addresses-rollout-with-pxi-required\":{\"branch\":\"treatment-a\",\""
		"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-shortcuts-v3-sticky\":{\"branch\":\"sticky-frozen-thom\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"visual-search-rollout\":{\"branch\":\"google-lens-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\""
		"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"smart-tab-groups-rollout-beta\":{\"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\"treatment-fast-udp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"temp-new-tab-mobile-qr-code-campaign-row"
		"\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-10-eos-sync-and-reminder-messaging-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"new-tab-147020251114194929-to-release\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"deprecate-ipaddrany-rollout-for-release\":{\""
		"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-credit-card-autofill-global-enablement-rollout-release\":{\"branch\":\"creditcard-enable\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"improved-mailto-handling-with-os-integration-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"65.2.3\",\"first_run_date\":\"2022-10-16+05:30\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"client_id\":\"90571d99-40b9-4f10-9a9a-227b856f2593\",\"app_build\":\""
		"20251124145406\",\"locale\":\"en-US\",\"app_display_version\":\"145.0.2\",\"architecture\":\"x86_64\",\"app_channel\":\"release\",\"os\":\"Windows\",\"os_version\":\"10.0\",\"windows_build_number\":19045,\"attribution\":{\"content\":\"%2528not%2Bset%2529\",\"medium\":\"referral\",\"source\":\"www.bing.com\",\"campaign\":\"%2528not%2Bset%2529\"}},\"metrics\":{\"quantity\":{\"nimbus_targeting_context.firefox_version\":145,\"nimbus_targeting_context.addresses_saved\":0,\""
		"nimbus_targeting_context.memory_mb\":16382,\"nimbus_targeting_context.profile_age_created\":1665919558706,\"nimbus_targeting_context.total_bookmarks_count\":5,\"nimbus_targeting_context.build_id\":1,\"nimbus_targeting_context.arch_bits\":64,\"nimbus_targeting_context.profile_group_profile_count\":0},\"string\":{\"nimbus_targeting_context.version\":\"145.0.2\",\"nimbus_targeting_context.distribution_id\":\"\",\"nimbus_targeting_context.locale\":\"en-US\",\"nimbus_targeting_context.region\":\"IN\","
		"\"nimbus_targeting_context.current_date\":\"Thu, 04 Dec 2025 06:03:41 GMT\"},\"boolean\":{\"nimbus_targeting_context.is_fx_a_signed_in\":false,\"nimbus_targeting_context.has_active_enterprise_policies\":false,\"nimbus_targeting_context.has_pinned_tabs\":false,\"nimbus_targeting_context.is_msix\":false,\"nimbus_targeting_context.does_app_need_pin\":false,\"nimbus_targeting_context.is_default_browser\":false,\"nimbus_targeting_context.user_prefers_reduced_motion\":true,\""
		"nimbus_targeting_context.uses_firefox_sync\":false,\"nimbus_targeting_context.is_first_startup\":false,\"nimbus_targeting_context.is_fx_a_enabled\":true},\"uuid\":{\"legacy.telemetry.client_id\":\"f6637294-d75f-4350-be24-43ca2fcded9d\",\"legacy.telemetry.profile_group_id\":\"f6637294-d75f-4350-be24-43ca2fcded9d\"},\"object\":{\"nimbus_targeting_context.is_default_handler\":{\"html\":false,\"pdf\":false},\"nimbus_targeting_context.os\":{\"isLinux\":false,\"isMac\":false,\"windowsBuildNumber\":19045"
		",\"windowsVersion\":10},\"nimbus_targeting_context.primary_resolution\":{\"height\":760,\"width\":1280},\"nimbus_targeting_context.user_monthly_activity\":[{\"numberOfURLsVisited\":3,\"date\":\"2025-11-20\"},{\"numberOfURLsVisited\":1,\"date\":\"2025-12-03\"}],\"nimbus_targeting_context.active_experiments\":[\"long-term-holdback-2025h1-growth-desktop\",\"mozilla-foundation-donation-promotion-moments-page\",\"smart-shortcuts-v3-sticky\"],\"nimbus_targeting_environment.pref_values\":{\""
		"browser__newtabpage__activity_stream__asrouter__userprefs__cfr__addons\":true,\"browser__newtabpage__activity_stream__asrouter__userprefs__cfr__features\":true,\"browser__newtabpage__activity_stream__feeds__section__highlights\":false,\"browser__newtabpage__activity_stream__feeds__section__topstories\":true,\"browser__newtabpage__activity_stream__feeds__topsites\":true,\"browser__newtabpage__activity_stream__showSearch\":true,\"browser__newtabpage__activity_stream__showSponsoredTopSites\":true,\""
		"browser__newtabpage__enabled\":true,\"browser__startup__page\":1,\"browser__toolbars__bookmarks__visibility\":\"newtab\",\"browser__urlbar__lastUrlbarSearchSeconds\":0,\"browser__urlbar__quicksuggest__dataCollection__enabled\":false,\"browser__urlbar__showSearchSuggestionsFirst\":true,\"browser__urlbar__suggest__quicksuggest__sponsored\":false,\"media__videocontrols__picture_in_picture__enabled\":true,\"media__videocontrols__picture_in_picture__video_toggle__enabled\":true,\""
		"media__videocontrols__picture_in_picture__video_toggle__has_used\":false,\"network__trr__mode\":0,\"security__sandbox__content__level\":8,\"trailhead__firstrun__didSeeAboutWelcome\":true,\"nimbus__qa__pref_1\":\"default\",\"nimbus__qa__pref_2\":\"default\"},\"nimbus_targeting_context.browser_settings\":{\"update\":{\"channel\":\"release\"}},\"nimbus_targeting_environment.user_set_prefs\":[\"nimbus.profilesdatastoreservice.read.enabled\",\"nimbus.profilesdatastoreservice.sync.enabled\",\""
		"browser.search.separatePrivateDefault.urlbarResult.enabled\",\"browser.newtabpage.activity-stream.mobileDownloadModal.enabled\",\"browser.newtabpage.activity-stream.mobileDownloadModal.variant-a\",\"browser.newtabpage.trainhopAddon.version\",\"signon.firefoxRelay.showToAllBrowsers\",\"browser.contextual-services.contextId.rotation-in-days\"],\"nimbus_targeting_context.enrollments_map\":[{\"experimentSlug\":\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\",\""
		"branchSlug\":\"treatment-a-tab-switching-copy\"},{\"experimentSlug\":\"account-adoption-callout-credit-cards-treatment-c-rollout\",\"branchSlug\":\"treatment-c\"},{\"experimentSlug\":\"account-adoption-callout-passwords-global-rollout\",\"branchSlug\":\"treatment-e\"},{\"experimentSlug\":\"account-adoption-pxi-menu-rollout-v2\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"account-spotlight-modal-english-rollout-v2\",\"branchSlug\":\"rollout\"},{\"experimentSlug\":\""
		"acct-adoption-callout-addresses-rollout-with-pxi-required\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\",\"branchSlug\":\"treatment-a-callout-badge\"},{\"experimentSlug\":\"backgroundupdate-enable-unelevated-installations-rollout-3-release\",\"branchSlug\":\"enabled\"},{\"experimentSlug\":\"consolidated-search-configuration-row-desktop-relaunch\",\"branchSlug\":\"rollout\"},{\"experimentSlug\":\""
		"context-id-rotation-every-3-days\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"context-id-rotation-every-7-days\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"custom-wallpapers-no-message-rollout-release\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"deprecate-ipaddrany-rollout-for-release\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"desktop-address-autofill-india-release-rollout\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\""
		"desktop-credit-card-autofill-global-enablement-rollout-release\",\"branchSlug\":\"creditcard-enable\"},{\"experimentSlug\":\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\",\"branchSlug\":\"next-sign-up-modal-cta\"},{\"experimentSlug\":\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"downsample-uptakeremotecontent-events\",\"branchSlug\":\"control\"},{\"experimentSlug\":\""
		"enable-nimbus-unenrollment-synchronization\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"encrypted-client-hello-fallback-mechanism\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\",\"branchSlug\":\"enforce\"},{\"experimentSlug\":\"etp-strict-message-release\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\",\"branchSlug\":\"treatment-fast-udp\"},{\"experimentSlug\":\""
		"fox-doodle-multi-action-cta-2025-rollout\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"fx-accounts-ping-release-rollout-2\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"fx-view-discoverability-rollout\",\"branchSlug\":\"treatment-b\"},{\"experimentSlug\":\"improved-mailto-handling-with-os-integration-treatment-a-rollout\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"long-term-holdback-2024-h2-velocity-desktop\",\"branchSlug\":\"delivery\"},{\"experimentSlug\":\""
		"long-term-holdback-2025h1-growth-desktop\",\"branchSlug\":\"delivery\"},{\"experimentSlug\":\"mozilla-foundation-donation-promotion-moments-page\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"new-tab-145120251009134757-to-release\",\"branchSlug\":\"rollout\"},{\"experimentSlug\":\"new-tab-147020251114194929-to-release\",\"branchSlug\":\"rollout\"},{\"experimentSlug\":\"one-click-sponsored-settings\",\"branchSlug\":\"control\"},{\"experimentSlug\":\""
		"pdf-annotations-highlight-treatment-b-rollout\",\"branchSlug\":\"treatment-b\"},{\"experimentSlug\":\"pin-frequently-used-websites-143-promo-rollout-all-locales\",\"branchSlug\":\"rollout-branch\"},{\"experimentSlug\":\"private-window-visual-refresh-rollout\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\",\"branchSlug\":\"sign-in-with-call-out\"},{\"experimentSlug\":\"smart-shortcuts-v3-sticky\",\"branchSlug\":\""
		"sticky-frozen-thom\"},{\"experimentSlug\":\"smart-tab-groups-rollout-beta\",\"branchSlug\":\"smart-tab-groups\"},{\"experimentSlug\":\"storage-access-heuristic-restriction-rollout\",\"branchSlug\":\"treatment-branch\"},{\"experimentSlug\":\"taskbar-tabs-discovery-global-rollout\",\"branchSlug\":\"delivery\"},{\"experimentSlug\":\"temp-new-tab-mobile-qr-code-campaign-row\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\","
		"\"branchSlug\":\"control\"},{\"experimentSlug\":\"visual-card-updates\",\"branchSlug\":\"updated\"},{\"experimentSlug\":\"visual-search-rollout\",\"branchSlug\":\"google-lens-rollout\"},{\"experimentSlug\":\"windows-10-eos-sync-and-reminder-messaging-rollout\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"windows-10-eos-sync-messaging-rollout-2\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"windows-ui-automation-release-rollout\",\"branchSlug\":\"rollout\"}],\""
		"nimbus_targeting_context.home_page_settings\":{\"isCustomUrl\":false,\"isDefault\":true,\"isLocked\":false,\"isWebExt\":false},\"nimbus_targeting_context.attribution_data\":{\"medium\":\"referral\",\"source\":\"www.bing.com\",\"ua\":\"edge\"},\"nimbus_targeting_context.default_pdf_handler\":{\"knownBrowser\":true,\"registered\":true},\"nimbus_targeting_context.addons_info\":{\"addons\":[\"addons-search-detection@mozilla.com\",\"data-leak-blocker@mozilla.com\",\"formautofill@mozilla.org\",\""
		"ipp-activator@mozilla.com\",\"newtab@mozilla.org\",\"pictureinpicture@mozilla.org\",\"webcompat@mozilla.org\"],\"hasInstalledAddons\":true},\"nimbus_targeting_context.active_rollouts\":[\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\",\"account-adoption-callout-credit-cards-treatment-c-rollout\",\"account-adoption-callout-passwords-global-rollout\",\"account-adoption-pxi-menu-rollout-v2\",\"acct-adoption-callout-addresses-rollout-with-pxi-required\",\""
		"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\",\"backgroundupdate-enable-unelevated-installations-rollout-3-release\",\"context-id-rotation-every-3-days\",\"deprecate-ipaddrany-rollout-for-release\",\"desktop-address-autofill-india-release-rollout\",\"desktop-credit-card-autofill-global-enablement-rollout-release\",\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\",\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\","
		"\"downsample-uptakeremotecontent-events\",\"enable-nimbus-unenrollment-synchronization\",\"encrypted-client-hello-fallback-mechanism\",\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\",\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\",\"fox-doodle-multi-action-cta-2025-rollout\",\"fx-accounts-ping-release-rollout-2\",\"improved-mailto-handling-with-os-integration-treatment-a-rollout\",\"new-tab-147020251114194929-to-release\",\"pdf-annotations-highlight-treatment-b-rollout\",\""
		"pin-frequently-used-websites-143-promo-rollout-all-locales\",\"private-window-visual-refresh-rollout\",\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\",\"smart-tab-groups-rollout-beta\",\"taskbar-tabs-discovery-global-rollout\",\"temp-new-tab-mobile-qr-code-campaign-row\",\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\",\"visual-card-updates\",\"visual-search-rollout\",\"windows-10-eos-sync-and-reminder-messaging-rollout\",\""
		"windows-ui-automation-release-rollout\"]}}}", 
		LAST);

	web_custom_request("57b3f921-3ad4-460c-afc5-3ad6ef21c888", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/baseline/1/57b3f921-3ad4-460c-afc5-3ad6ef21c888", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t21.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":33,\"start_time\":\"2025-12-04T11:11:00.000+05:30\",\"end_time\":\"2025-12-04T11:33:43.643+05:30\",\"reason\":\"active\",\"experiments\":{\"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\"treatment-fast-udp\",\"extra\":{\"type\""
		":\"nimbus-rollout\"}},\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-address-autofill-india-release-rollout\":"
		"{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"temp-new-tab-mobile-qr-code-campaign-row\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"acct-adoption-callout-addresses-rollout-with-pxi-required\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-passwords-global-rollout\":{\"branch\":\"treatment-e\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-10-eos-sync-and-reminder-messaging-rollout\":{\"branch"
		"\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"new-tab-147020251114194929-to-release\":{\"branch\":\"rollout\",\""
		"extra\":{\"type\":\"nimbus-rollout\"}},\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-credit-cards-treatment-c-rollout\":{\"branch\":\"treatment-c\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"deprecate-ipaddrany-rollout-for-release\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"improved-mailto-handling-with-os-integration-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-credit-card-autofill-global-enablement-rollout-release\":{\"branch\":\"creditcard-enable\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-shortcuts-v3-sticky\":{\"branch\":\"sticky-frozen-thom\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\""
		"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\"treatment-a-callout-badge\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\"next-sign-up-modal-cta\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\"rollout-branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-tab-groups-rollout-beta\":{\"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-search-rollout\":{\"branch\":\"google-lens-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"65.2.3\",\"client_id\":\"90571d99-40b9-4f10-9a9a-227b856f2593\",\"os\":\"Windows\",\"architecture\":\"x86_64\",\"os_version\":\"10.0\",\"app_channel\":\"release\",\""
		"locale\":\"en-US\",\"app_display_version\":\"145.0.2\",\"app_build\":\"20251124145406\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2022-10-16+05:30\",\"windows_build_number\":19045,\"attribution\":{\"source\":\"www.bing.com\",\"content\":\"%2528not%2Bset%2529\",\"medium\":\"referral\",\"campaign\":\"%2528not%2Bset%2529\"}},\"metrics\":{\"labeled_counter\":{\"glean.validation.pings_submitted\":{\"baseline\":1,\"events\":1}},\"string\":{\"startup.profile_selection_reason\":\""
		"default\",\"usage.distribution_id\":\"default\"},\"uuid\":{\"legacy.telemetry.client_id\":\"f6637294-d75f-4350-be24-43ca2fcded9d\",\"legacy.telemetry.profile_group_id\":\"f6637294-d75f-4350-be24-43ca2fcded9d\"},\"datetime\":{\"glean.validation.first_run_hour\":\"2022-10-16T16+05:30\"},\"counter\":{\"browser.engagement.active_ticks\":8,\"browser.engagement.uri_count\":3},\"boolean\":{\"usage.is_default_browser\":false}}}", 
		LAST);

	web_custom_request("2a192672-a43c-4936-b572-afcd9db9fc2b", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/usage-reporting/1/2a192672-a43c-4936-b572-afcd9db9fc2b", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t22.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"metrics\":{\"datetime\":{\"usage.first_run_date\":\"2022-10-16+05:30\"},\"boolean\":{\"usage.is_default_browser\":false,\"usage.windows_backup_enabled\":false},\"uuid\":{\"usage.profile_group_id\":\"9285e5cf-d171-4f29-a5b8-d53d109d51a8\",\"usage.profile_id\":\"5ae6e87b-e670-4529-b684-10268475dcce\"},\"counter\":{\"browser.engagement.uri_count\":3,\"browser.engagement.active_ticks\":8},\"quantity\":{\"usage.windows_user_profile_age_in_days\":1145,\"usage.windows_build_number\":19045},\""
		"string\":{\"usage.app_display_version\":\"145.0.2\",\"usage.os\":\"WINNT\",\"usage.os_version\":\"10.0\",\"usage.app_build\":\"20251124145406\",\"usage.distribution_id\":\"default\",\"usage.app_channel\":\"release\"}}}", 
		LAST);

	web_custom_request("6eb02150-87dc-4a72-ad2e-6f9d4949af6a", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/health/1/6eb02150-87dc-4a72-ad2e-6f9d4949af6a", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t23.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":28,\"start_time\":\"2025-12-04T11:11:00.000+05:30\",\"end_time\":\"2025-12-04T11:33:43.679+05:30\",\"reason\":\"pre_init\",\"experiments\":{\"desktop-address-autofill-india-release-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\""
		":\"nimbus-nimbus\"}},\"smart-shortcuts-v3-sticky\":{\"branch\":\"sticky-frozen-thom\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\"rollout-branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-credit-card-autofill-global-enablement-rollout-release\":{\"branch\":\"creditcard-enable\",\"extra\":{\"type\":\"nimbus-rollout\""
		"}},\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"deprecate-ipaddrany-rollout-for-release\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra"
		"\":{\"type\":\"nimbus-rollout\"}},\"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-10-eos-sync-and-reminder-messaging-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-passwords-global-rollout\":{\"branch\":\"treatment-e\",\"extra\":{\""
		"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-search-rollout\":{\"branch\":\"google-lens-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\""
		"branch\":\"next-sign-up-modal-cta\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"acct-adoption-callout-addresses-rollout-with-pxi-required\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\""
		":\"nimbus-rollout\"}},\"improved-mailto-handling-with-os-integration-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\"treatment-fast-udp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\""
		"branch\":\"treatment-a-callout-badge\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"new-tab-147020251114194929-to-release\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"temp-new-tab-mobile-qr-code-campaign-row\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-tab-groups-rollout-beta\":{\""
		"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-credit-cards-treatment-c-rollout\":{\"branch\":\"treatment-c\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"65.2.3\",\"app_display_version\":\"145.0.2\",\"os_version\":\"10.0\",\"app_build\":\"20251124145406\",\"app_channel\":\"release\",\"locale\":\"en-US\",\"os\":\"Windows\",\"architecture\":\"x86_64\",\"windows_build_number\":19045,\"client_id\":\""
		"90571d99-40b9-4f10-9a9a-227b856f2593\",\"first_run_date\":\"2022-10-16+05:30\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"attribution\":{\"content\":\"%2528not%2Bset%2529\",\"medium\":\"referral\",\"source\":\"www.bing.com\",\"campaign\":\"%2528not%2Bset%2529\"}},\"metrics\":{\"object\":{\"glean.health.data_directory_info\":[{\"dir_name\":\"db\",\"dir_exists\":true,\"dir_created\":1665919583,\"dir_modified\":1764828216,\"file_count\":1,\"files\":[{\"file_name\":\"data.safe.bin\",\""
		"file_created\":1764828208,\"file_modified\":1764828216,\"file_size\":233398}]},{\"dir_name\":\"events\",\"dir_exists\":true,\"dir_created\":1665919583,\"dir_modified\":1764826860,\"file_count\":2,\"files\":[{\"file_name\":\"events\",\"file_created\":1733465245,\"file_modified\":1764828216,\"file_size\":3182},{\"file_name\":\"prototype-no-code-events\",\"file_created\":1733395015,\"file_modified\":1762144555,\"file_size\":645}]},{\"dir_name\":\"pending_pings\",\"dir_exists\":true,\"dir_created\""
		":1665919583,\"dir_modified\":1764828216,\"file_count\":2,\"files\":[{\"file_name\":\"09f654cb-0bf5-4a13-ae82-273df63d00a2\",\"file_created\":1764757770,\"file_modified\":1764757770,\"file_size\":368},{\"file_name\":\"6bc47a62-3faa-435f-9299-8b3ca5c4c5dd\",\"file_created\":1764828216,\"file_modified\":1764828216,\"file_size\":14429}]}],\"glean.database.load_sizes\":{\"new\":233398,\"open\":233398,\"post_open\":233398,\"post_open_user\":233398,\"post_load_ping_lifetime_data\":233398,\"user_records\""
		":64,\"ping_records\":1009,\"application_records\":308,\"ping_memory_records\":1009}},\"labeled_counter\":{\"glean.upload.ping_upload_failure\":{\"recoverable\":7},\"glean.validation.pings_submitted\":{\"baseline\":1,\"events\":1}},\"timing_distribution\":{\"glean.validation.shutdown_wait\":{\"values\":{\"1923096\":1},\"sum\":1926100},\"glean.upload.send_success\":{\"values\":{\"1805811301\":1,\"319225354\":4,\"379625062\":1,\"348117717\":2,\"451452825\":1},\"sum\":4819735500},\""
		"glean.upload.send_failure\":{\"values\":{\"103496016\":1,\"585461880\":1,\"159612677\":1,\"379625062\":1,\"94906265\":1,\"123078199\":1,\"79806338\":1},\"sum\":1593777000},\"glean.validation.shutdown_dispatcher_wait\":{\"values\":{\"1617125\":1},\"sum\":1743600}},\"uuid\":{\"legacy.telemetry.client_id\":\"f6637294-d75f-4350-be24-43ca2fcded9d\",\"legacy.telemetry.profile_group_id\":\"f6637294-d75f-4350-be24-43ca2fcded9d\"},\"counter\":{\"glean.health.init_count\":15,\"glean.upload.pending_pings\":2"
		"},\"memory_distribution\":{\"glean.upload.pending_pings_directory_size\":{\"values\":{\"13777\":1},\"sum\":14336},\"glean.database.size\":{\"values\":{\"230195\":1},\"sum\":233398}}}}", 
		LAST);

	web_custom_request("clicks", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/clicks?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"ae0bcece-2c2a-4154-9846-043b05e927fa\",\"iso_time_full\":\"2025-12-04T06:03:47.642Z\",\"local_time_full\":\"Thu Dec 04 2025 11:33:47 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"cbc7f6e1-d4d4-461b-90ca-258f4219b3d3\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"ac40c5f8-34e9-483b-b34b-8a9d63c2c73b\",\"tracker_loaded_at\":\"2025-12-04T06:03:45.428Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"dba7e2a5-01b9-4417-abf7-c51eb05a2c5e\"},\"page\":{\"title\":\"BlazeDemo\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":675,\"pixel_max\":675,\"ratio\":1,\"ratio_max\":1},\"time_on_page\":2,\"time_on_page_ms\":2214},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\":true,\""
		"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":675,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/\",\"info\":{}},\"referrer\":{\""
		"full\":\"\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T06:03:47.642Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\""
		"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]},\"element\":{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"body > :nth-child(3) > :nth-child(1)\"},\"node_name\":\"H2\",\"tag_name\":\"H2\",\"text\":null,\"title\":null,\"type\":null,\"n_parents\":[{\"class\":\"container"
		"\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"container\",\"unique_selector\":\"body > :nth-child(3)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":1},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"body\"},\"node_name\":\"BODY\",\"tag_name\":\"BODY\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":2},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\""
		"all_attrs\":{\"lang\":\"en\",\"unique_selector\":\"html\"},\"node_name\":\"HTML\",\"tag_name\":\"HTML\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":3},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{},\"node_name\":\"#document\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":4}],\"selector\":\"body > div:eq(2) > h2\",\"text_content\":\"---REDACTED---\",\"cursor\":\"auto\",\"x_position\":55,\"y_position\":192}}", 
		LAST);

	web_custom_request("970d0e2a-3fef-4176-88ea-91a6cbd2ffdb", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/health/1/970d0e2a-3fef-4176-88ea-91a6cbd2ffdb", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t25.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":29,\"start_time\":\"2025-12-04T11:33:43.000+05:30\",\"end_time\":\"2025-12-04T11:33:43.688+05:30\",\"reason\":\"post_init\",\"experiments\":{\"improved-mailto-handling-with-os-integration-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-tab-groups-rollout-beta\":{\"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\""
		"type\":\"nimbus-nimbus\"}},\"windows-10-eos-sync-and-reminder-messaging-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\"treatment-fast-udp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-shortcuts-v3-sticky\":{\"branch\":\"sticky-frozen-thom\",\"extra\":{\"type\":\"nimbus-nimbus\"}},"
		"\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"deprecate-ipaddrany-rollout-for-release\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra\":{\"type\":\"nimbus-rollout\""
		"}},\"desktop-address-autofill-india-release-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\"next-sign-up-modal-cta\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"new-tab-147020251114194929-to-release\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-credit-card-autofill-global-enablement-rollout-release\":{\"branch\":\"creditcard-enable\",\"extra\":{\""
		"type\":\"nimbus-rollout\"}},\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\""
		"}},\"visual-search-rollout\":{\"branch\":\"google-lens-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"acct-adoption-callout-addresses-rollout-with-pxi-required\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"account-adoption-callout-credit-cards-treatment-c-rollout\":{\"branch\":\"treatment-c\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\"treatment-a-callout-badge\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"account-adoption-callout-passwords-global-rollout\":{\"branch\":\"treatment-e\",\"extra\":"
		"{\"type\":\"nimbus-rollout\"}},\"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\"rollout-branch\",\""
		"extra\":{\"type\":\"nimbus-rollout\"}},\"temp-new-tab-mobile-qr-code-campaign-row\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"65.2.3\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2022-10-16+05:30\",\"client_id\":\"90571d99-40b9-4f10-9a9a-227b856f2593\",\"windows_build_number\":19045,\"app_build\":\""
		"20251124145406\",\"os_version\":\"10.0\",\"locale\":\"en-US\",\"architecture\":\"x86_64\",\"app_channel\":\"release\",\"os\":\"Windows\",\"app_display_version\":\"145.0.2\",\"attribution\":{\"medium\":\"referral\",\"campaign\":\"%2528not%2Bset%2529\",\"content\":\"%2528not%2Bset%2529\",\"source\":\"www.bing.com\"}},\"metrics\":{\"object\":{\"glean.health.data_directory_info\":[{\"dir_name\":\"db\",\"dir_exists\":true,\"dir_created\":1665919583,\"dir_modified\":1764828223,\"file_count\":1,\"files\""
		":[{\"file_name\":\"data.safe.bin\",\"file_created\":1764828208,\"file_modified\":1764828223,\"file_size\":230441}]},{\"dir_name\":\"events\",\"dir_exists\":true,\"dir_created\":1665919583,\"dir_modified\":1764828223,\"file_count\":2,\"files\":[{\"file_name\":\"events\",\"file_created\":1733465245,\"file_modified\":1764828223,\"file_size\":0},{\"file_name\":\"prototype-no-code-events\",\"file_created\":1733395015,\"file_modified\":1762144555,\"file_size\":645}]},{\"dir_name\":\"pending_pings\",\""
		"dir_exists\":true,\"dir_created\":1665919583,\"dir_modified\":1764828223,\"file_count\":8,\"files\":[{\"file_name\":\"09f654cb-0bf5-4a13-ae82-273df63d00a2\",\"file_created\":1764757770,\"file_modified\":1764757770,\"file_size\":368},{\"file_name\":\"27529dc1-7260-4561-bb48-c948af1e4927\",\"file_created\":1764828223,\"file_modified\":1764828223,\"file_size\":955},{\"file_name\":\"2a192672-a43c-4936-b572-afcd9db9fc2b\",\"file_created\":1764828223,\"file_modified\":1764828223,\"file_size\":831},{\""
		"file_name\":\"57b3f921-3ad4-460c-afc5-3ad6ef21c888\",\"file_created\":1764828223,\"file_modified\":1764828223,\"file_size\":5416},{\"file_name\":\"6bc47a62-3faa-435f-9299-8b3ca5c4c5dd\",\"file_created\":1764828216,\"file_modified\":1764828216,\"file_size\":14429},{\"file_name\":\"6eb02150-87dc-4a72-ad2e-6f9d4949af6a\",\"file_created\":1764828223,\"file_modified\":1764828223,\"file_size\":7057},{\"file_name\":\"7be1dcff-3c27-466b-8672-3d3c16f1c7d7\",\"file_created\":1764828223,\"file_modified\""
		":1764828223,\"file_size\":15578},{\"file_name\":\"b137a53c-8ec3-4335-93e0-13ef607973e3\",\"file_created\":1764828223,\"file_modified\":1764828223,\"file_size\":9246}]}]},\"uuid\":{\"legacy.telemetry.profile_group_id\":\"f6637294-d75f-4350-be24-43ca2fcded9d\",\"legacy.telemetry.client_id\":\"f6637294-d75f-4350-be24-43ca2fcded9d\"},\"counter\":{\"glean.health.init_count\":15}}}", 
		LAST);

/*	web_url("canonical.html_5", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/success.txt?ipv4", "Referer=", ENDITEM, 
		LAST);*/

	

/*	web_url("canonical.html_6", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/success.txt?ipv4", "Referer=", ENDITEM, 
		LAST);*/

	return 0;
}