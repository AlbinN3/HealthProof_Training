Action()
{

	web_url("canonical.html", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTTP", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_custom_request("v9o", 
		"URL=http://o.pki.goog/s/wr3/v9o", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTTP", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0R0P0N0L0J0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x11\\x00\\xBF\\xDA\\x16\\xE1\\xB54\\xDC\\xCB\\x10\\xE0\\x7FRB\\xD3\\xF9\\x9A", 
		LAST);

	web_custom_request("xvY", 
		"URL=http://o.pki.goog/s/wr3/xvY", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTTP", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0R0P0N0L0J0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x11\\x00\\xC6\\xF6\\xC8\r\\xE2\\xDF\\x16\\xC1\\x12\\xC6\\xEC\\xC0s\\\\\\xB0T", 
		LAST);

	web_url("canonical.html_2", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("v9o_2", 
		"URL=http://o.pki.goog/s/wr3/v9o", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTTP", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0R0P0N0L0J0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x11\\x00\\xBF\\xDA\\x16\\xE1\\xB54\\xDC\\xCB\\x10\\xE0\\x7FRB\\xD3\\xF9\\x9A", 
		LAST);

	web_custom_request("ads", 
		"URL=https://ads.mozilla.org/v1/ads", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"context_id\":\"23852afd-307f-4d9f-8e21-aa01fb354cbc\",\"placements\":[{\"placement\":\"newtab_tile_1\",\"count\":1},{\"placement\":\"newtab_tile_2\",\"count\":1},{\"placement\":\"newtab_tile_3\",\"count\":1}],\"blocks\":[\"\"],\"credentials\":\"omit\"}", 
		LAST);

	web_url("blazedemo.com", 
		"URL=https://blazedemo.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("bootstrap.min.js", 
		"URL=https://blazedemo.com/assets/bootstrap.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t8.inf", 
		LAST);

	web_url("bootstrap-table.js", 
		"URL=https://blazedemo.com/assets/bootstrap-table.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t9.inf", 
		LAST);

	web_url("bootstrap-table.css", 
		"URL=https://blazedemo.com/assets/bootstrap-table.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t10.inf", 
		LAST);

	web_url("bootstrap.min.css", 
		"URL=https://blazedemo.com/assets/bootstrap.min.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t11.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_custom_request("cfr-v1-en-US", 
		"URL=https://firefox.settings.services.mozilla.com/v1/buckets/main/collections/ms-language-packs/records/cfr-v1-en-US", 
		"Method=GET", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t12.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("canonical.html_3", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t13.inf", 
		"Mode=HTTP", 
		LAST);

	web_websocket_connect("ID=0", 
		"URI=wss://push.services.mozilla.com/", 
		"Origin=wss://push.services.mozilla.com/", 
		"SecWebSocketExtensions=permessage-deflate", 
		"OnOpenCB=OnOpenCB0", 
		"OnMessageCB=OnMessageCB0", 
		"OnErrorCB=OnErrorCB0", 
		"OnCloseCB=OnCloseCB0", 
		LAST);

	web_websocket_send("ID=0", 
		"Buffer={\"messageType\":\"hello\",\"broadcasts\":{\"remote-settings/monitor_changes\":\"\\\"1764820630686\\\"\"},\"use_webpush\":true}", 
		"IsBinary=0", 
		LAST);

	web_custom_request("ocsp.digicert.com", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t15.inf", 
		"Mode=HTTP", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x02\\xF1\\x84\\xDA\\xF8\\x12Sy\\xE1\\x18\\x08\\xA7\\x04<\\xF6\\xF4", 
		LAST);

	/*Connection ID 0 received buffer WebSocketReceive0*/

	web_url("success.txt", 
		"URL=http://detectportal.firefox.com/success.txt?ipv4", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t16.inf", 
		LAST);

	web_custom_request("06567e4a-c9bc-489c-a58d-45856cb79c8b", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/events/1/06567e4a-c9bc-489c-a58d-45856cb79c8b", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t17.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTTP", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":23,\"start_time\":\"2025-12-04T10:11:03.000+05:30\",\"end_time\":\"2025-12-04T10:32:44.552+05:30\",\"reason\":\"startup\",\"experiments\":{\"deprecate-ipaddrany-rollout-for-release\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\"treatment-fast-udp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-passwords-global-rollout\":{\"branch\":\"treatment-e\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\"next-sign-up-modal-cta\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-credit-cards-treatment-c-rollout\":{\"branch\":\"treatment-c"
		"\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"temp-new-tab-mobile-qr-code-campaign-row\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-10-eos-sync-and-reminder-messaging-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\""
		"treatment-a-callout-badge\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-credit-card-autofill-global-enablement-rollout-release\":{\"branch\":\"creditcard-enable\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"downsample-uptakeremotecontent-events\":{\"branch\""
		":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"new-tab-147020251114194929-to-release\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\"extra\":"
		"{\"type\":\"nimbus-rollout\"}},\"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"acct-adoption-callout-addresses-rollout-with-pxi-required\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\""
		"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"improved-mailto-handling-with-os-integration-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-shortcuts-v3-sticky\":{\"branch\":\"sticky-frozen-thom\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"visual-search-rollout\":{\"branch\":\"google-lens-rollout\","
		"\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-address-autofill-india-release-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\"rollout-branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\""
		"nimbus-nimbus\"}},\"smart-tab-groups-rollout-beta\":{\"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"65.2.3\",\"app_build\":\"20251124145406\",\"app_display_version\":\"145.0.2\",\"app_channel\":\"release\",\"architecture\":\"x86_64\",\"os_version\":\"10.0\",\"os\":\"Windows\",\"locale\":\"en-US\",\"client_id\":\""
		"90571d99-40b9-4f10-9a9a-227b856f2593\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2022-10-16+05:30\",\"windows_build_number\":19045,\"attribution\":{\"campaign\":\"%2528not%2Bset%2529\",\"medium\":\"referral\",\"source\":\"www.bing.com\",\"content\":\"%2528not%2Bset%2529\"}},\"metrics\":{\"string\":{\"search.engine.private.partner_code\":\"\",\"search.engine.private.load_path\":\"\",\"search.engine.default.load_path\":\"[app]google\",\"search.engine.default.provider_id\":\""
		"google\",\"region.home_region\":\"IN\",\"search.engine.default.display_name\":\"Google\",\"search.engine.private.display_name\":\"\",\"search.engine.private.provider_id\":\"\",\"search.engine.default.partner_code\":\"firefox-b-d\"},\"uuid\":{\"legacy.telemetry.client_id\":\"f6637294-d75f-4350-be24-43ca2fcded9d\",\"legacy.telemetry.profile_group_id\":\"f6637294-d75f-4350-be24-43ca2fcded9d\"},\"boolean\":{\"urlbar.pref_suggest_data_collection\":false,\"usage.is_default_browser\":false,\""
		"policies.is_enterprise\":false,\"urlbar.pref_suggest_sponsored\":false,\"urlbar.pref_suggest_nonsponsored\":false,\"urlbar.pref_suggest_topsites\":true,\"search.engine.private.overridden_by_third_party\":false,\"search.engine.default.overridden_by_third_party\":false},\"counter\":{\"browser.engagement.uri_count\":1,\"browser.engagement.active_ticks\":7},\"url\":{\"search.engine.default.submission_url\":\"https://www.google.com/search?client=firefox-b-d&q=\",\"search.engine.private.submission_url\""
		":\"blank:\"},\"quantity\":{\"urlbar.pref_max_results\":10,\"browser.engagement.max_concurrent_tab_count\":1}},\"events\":[{\"timestamp\":0,\"category\":\"session_restore\",\"name\":\"backup_can_be_loaded_session_file\",\"extra\":{\"loadfail_reason\":\"N/A\",\"can_load\":\"true\",\"glean_timestamp\":\"1764823260606\",\"path_key\":\"clean\"}},{\"timestamp\":0,\"category\":\"session_restore\",\"name\":\"backup_can_be_loaded_session_file\",\"extra\":{\"path_key\":\"clean\",\"loadfail_reason\":\"N/A\","
		"\"can_load\":\"true\",\"glean_timestamp\":\"1764823260606\"}},{\"timestamp\":1,\"category\":\"session_restore\",\"name\":\"shutdown_success_session_startup\",\"extra\":{\"shutdown_reason\":\"N/A\",\"glean_timestamp\":\"1764823260607\",\"shutdown_ok\":\"false\"}},{\"timestamp\":651,\"category\":\"webcompatreporting\",\"name\":\"reason_dropdown\",\"extra\":{\"glean_timestamp\":\"1764823261257\",\"setting\":\"required\"}},{\"timestamp\":1306,\"category\":\"nimbus_events\",\"name\":\""
		"startup_database_consistency\",\"extra\":{\"glean_timestamp\":\"1764823261912\",\"total_store_count\":\"48\",\"trigger\":\"startup\",\"db_active_count\":\"37\",\"primary\":\"database\",\"total_db_count\":\"48\",\"store_active_count\":\"37\"}},{\"timestamp\":1449,\"category\":\"jsonfile\",\"name\":\"load_autofillprofiles\",\"extra\":{\"glean_timestamp\":\"1764823262055\",\"value\":\"error_notfounderror\"}},{\"timestamp\":1484,\"category\":\"doh\",\"name\":\"state_rollback\",\"extra\":{\"value\":\""
		"null\",\"glean_timestamp\":\"1764823262090\"}},{\"timestamp\":1808,\"category\":\"containers\",\"name\":\"container_profile_loaded\",\"extra\":{\"containers\":\"4\",\"glean_timestamp\":\"1764823262413\"}},{\"timestamp\":1917,\"category\":\"jsonfile\",\"name\":\"load_logins\",\"extra\":{\"value\":\"error_notfounderror\",\"glean_timestamp\":\"1764823262523\"}},{\"timestamp\":2131,\"category\":\"normandy\",\"name\":\"enroll_failed_nimbus_experiment\",\"extra\":{\"reason\":\"feature-conflict\",\""
		"value\":\"account-spotlight-modal-global-rollout-v3\",\"glean_timestamp\":\"1764823262736\"}},{\"timestamp\":2131,\"category\":\"nimbus_events\",\"name\":\"enroll_failed\",\"extra\":{\"glean_timestamp\":\"1764823262736\",\"reason\":\"feature-conflict\",\"experiment\":\"account-spotlight-modal-global-rollout-v3\"}},{\"timestamp\":2257,\"category\":\"nimbus_events\",\"name\":\"is_ready\",\"extra\":{\"glean_timestamp\":\"1764823262863\"}},{\"timestamp\":2285,\"category\":\"upgrade_dialog\",\"name\":"
		"\"trigger_reason\",\"extra\":{\"glean_timestamp\":\"1764823262890\",\"value\":\"not-major\"}},{\"timestamp\":4035,\"category\":\"normandy\",\"name\":\"expose_nimbus_experiment\",\"extra\":{\"featureId\":\"feltPrivacy\",\"branchSlug\":\"control\",\"glean_timestamp\":\"1764823301132\",\"value\":\"private-window-visual-refresh-rollout\"}},{\"timestamp\":4035,\"category\":\"nimbus_events\",\"name\":\"exposure\",\"extra\":{\"experiment\":\"private-window-visual-refresh-rollout\",\"branch\":\"control\","
		"\"glean_timestamp\":\"1764823301132\",\"feature_id\":\"feltPrivacy\"}},{\"timestamp\":5830,\"category\":\"normandy\",\"name\":\"expose_nimbus_experiment\",\"extra\":{\"value\":\"new-tab-147020251114194929-to-release\",\"branchSlug\":\"rollout\",\"glean_timestamp\":\"1764823266436\",\"featureId\":\"newtabTrainhopAddon\"}},{\"timestamp\":5830,\"category\":\"nimbus_events\",\"name\":\"exposure\",\"extra\":{\"glean_timestamp\":\"1764823266436\",\"branch\":\"rollout\",\"experiment\":\""
		"new-tab-147020251114194929-to-release\",\"feature_id\":\"newtabTrainhopAddon\"}},{\"timestamp\":563194,\"category\":\"doh\",\"name\":\"state_shutdown\",\"extra\":{\"value\":\"null\",\"glean_timestamp\":\"1764823823800\"}}]}", 
		LAST);

	web_custom_request("ocsp.r2m04.amazontrust.com", 
		"URL=http://ocsp.r2m04.amazontrust.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t18.inf", 
		"Mode=HTTP", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\n\\xF9\\xFA\n\\xC2\\xD8\\xC024d\\xE9a\\xC6%\\xAA\\x10", 
		LAST);

	web_concurrent_start(NULL);

	web_url("keen-tracking.min.js", 
		"URL=https://blazemeter.trackinglibrary.prodperfect.com/keen-tracking.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t19.inf", 
		LAST);

	web_url("favicon.ico", 
		"URL=https://blazedemo.com/favicon.ico", 
		"Resource=1", 
		"RecContentType=image/vnd.microsoft.icon", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t20.inf", 
		LAST);

	web_url("ohttp-configs", 
		"URL=https://prod.ohttp-gateway.prod.webservices.mozgcp.net/ohttp-configs", 
		"Resource=1", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t21.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_custom_request("ocsp.r2m01.amazontrust.com", 
		"URL=http://ocsp.r2m01.amazontrust.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t22.inf", 
		"Mode=HTTP", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\t\\x88\\xC4\\x8F\\x8C/d\\xA6+\\xCE\\x08\"I\\xC3\\xB5{", 
		LAST);

	web_url("canonical.html_4", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t23.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("success.txt_2", 
		"URL=http://detectportal.firefox.com/success.txt?ipv4", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t24.inf", 
		LAST);

	web_custom_request("pageviews", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/pageviews?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t25.inf", 
		"Mode=HTTP", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"39e77eb1-2570-4bbe-80d7-fa93f35b3b57\",\"iso_time_full\":\"2025-12-04T05:02:48.551Z\",\"local_time_full\":\"Thu Dec 04 2025 10:32:48 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"f01d9b86-f2d9-43a7-aa18-9503441bf9ee\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"d73a1ddd-55a0-43a1-a421-649b790622ab\",\"tracker_loaded_at\":\"2025-12-04T05:02:48.547Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"b72be2c7-0557-4e48-8f35-ae3e214b731b\"},\"page\":{\"title\":\"BlazeDemo\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":675,\"pixel_max\":675,\"ratio\":1,\"ratio_max\":1},\"time_on_page\":0,\"time_on_page_ms\":5},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\":true,\"platform\""
		":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":675,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/\",\"info\":{}},\"referrer\":{\"full\":\"\""
		",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T05:02:48.552Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\"time.utc\"},{\""
		"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]}}", 
		LAST);

	web_custom_request("e2b7912c-9878-4d57-ac2e-8245983de039", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/use-counters/1/e2b7912c-9878-4d57-ac2e-8245983de039", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t26.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTTP", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":15,\"start_time\":\"2025-12-04T10:10:56.000+05:30\",\"end_time\":\"2025-12-04T10:20:23.756+05:30\",\"reason\":\"app_shutdown_confirmed\",\"experiments\":{\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\""
		"treatment-a-callout-badge\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-shortcuts-v3-sticky\":{\"branch\":\"sticky-frozen-thom\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"smart-tab-groups-rollout-beta\":{\"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"new-tab-147020251114194929-to-release\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-search-rollout\":{\"branch\":\"google-lens-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-10-eos-sync-and-reminder-messaging-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-pxi-menu-rollout-v2\":{\""
		"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-passwords-global-rollout\":{\"branch\":\"treatment-e\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"deprecate-ipaddrany-rollout-for-release\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\""
		"type\":\"nimbus-rollout\"}},\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout"
		"\"}},\"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"temp-new-tab-mobile-qr-code-campaign-row\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-credit-card-autofill-global-enablement-rollout-release\":{\"branch\":\"creditcard-enable\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}}"
		",\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\"rollout-branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\"next-sign-up-modal-cta\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\"treatment-fast-udp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"acct-adoption-callout-addresses-rollout-with-pxi-required\":{\"branch\":\""
		"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-credit-cards-treatment-c-rollout\":{\"branch\":\"treatment-c\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"improved-mailto-handling-with-os-integration-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\""
		"type\":\"nimbus-rollout\"}},\"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-address-autofill-india-release-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"65.2.3\",\"windows_build_number\":19045,\"first_run_date\":\"2022-10-16+05:30\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"client_id\":\"90571d99-40b9-4f10-9a9a-227b856f2593\",\"app_display_version"
		"\":\"145.0.2\",\"locale\":\"en-US\",\"app_build\":\"20251124145406\",\"app_channel\":\"release\",\"architecture\":\"x86_64\",\"os\":\"Windows\",\"os_version\":\"10.0\",\"attribution\":{\"medium\":\"referral\",\"source\":\"www.bing.com\",\"campaign\":\"%2528not%2Bset%2529\",\"content\":\"%2528not%2Bset%2529\"}},\"metrics\":{\"counter\":{\"use.counter.css.doc.css_border_top\":4,\"use.counter.css.doc.css_border_top_left_radius\":4,\"use.counter.css.doc.css_vertical_align\":4,\""
		"use.counter.css.doc.css_webkit_transform\":4,\"use.counter.css.doc.css_moz_box_sizing\":4,\"use.counter.css.doc.css_max_height\":4,\"use.counter.css.doc.css_overflow\":4,\"use.counter.css.doc.css_font_weight\":6,\"use.counter.css.doc.css_display\":4,\"use.counter.css.doc.css_cursor\":4,\"use.counter.css.doc.css_text_overflow\":4,\"use.counter.css.doc.css_box_shadow\":4,\"use.counter.css.doc.css_webkit_border_bottom_right_radius\":4,\"use.counter.css.doc.css_left\":4,\""
		"use.counter.css.doc.css_padding_right\":4,\"use.counter.css.doc.css_border\":4,\"use.counter.css.doc.css_background_position\":4,\"use.counter.css.doc.css_border_width\":4,\"use.counter.css.doc.css_margin_top\":4,\"use.counter.css.doc.css_border_style\":4,\"use.counter.css.doc.css_moz_transition\":4,\"use.counter.css.page.css_font_family\":1,\"use.counter.css.doc.css_border_top_color\":4,\"use.counter.css.doc.css_webkit_background_size\":4,\"use.counter.css.doc.css_border_radius\":4,\""
		"use.counter.css.doc.css_overflow_y\":4,\"use.counter.css.doc.css_border_bottom_left_radius\":4,\"use.counter.css.doc.css_border_bottom\":4,\"use.counter.css.doc.css_margin\":4,\"use.counter.css.doc.css_text_rendering\":4,\"use.counter.css.doc.css_text_shadow\":4,\"use.counter.css.doc.css_page_break_after\":4,\"use.counter.css.doc.widows\":4,\"use.counter.css.doc.css_min_width\":4,\"use.counter.css.doc.css_padding_bottom\":4,\"use.counter.css.doc.css_padding_left\":4,\""
		"use.counter.css.doc.css_text_decoration\":6,\"use.counter.css.doc.css_background\":4,\"use.counter.css.doc.css_border_color\":4,\"use.counter.css.doc.css_top\":4,\"use.counter.css.doc.css_border_left_width\":4,\"use.counter.css.doc.css_clear\":4,\"use.counter.css.doc.css_font_style\":4,\"use.counter.css.doc.css_webkit_border_radius\":4,\"use.counter.css.doc.css_transition\":4,\"use.counter.css.doc.css_white_space\":4,\"use.counter.css.doc.css_webkit_border_top_right_radius\":4,\""
		"use.counter.css.doc.css_min_height\":4,\"use.counter.css.doc.css_padding\":4,\"use.counter.css.doc.css_letter_spacing\":4,\"use.counter.css.doc.css_moz_animation\":4,\"use.counter.css.doc.css_width\":4,\"use.counter.css.doc.css_page_break_inside\":4,\"use.counter.css.doc.css_text_align\":4,\"use.counter.css.doc.css_webkit_animation\":4,\"use.counter.css.doc.css_background_image\":4,\"use.counter.css.doc.css_background_repeat\":4,\"use.counter.css.doc.css_opacity\":4,\""
		"use.counter.css.doc.css_text_transform\":4,\"use.counter.css.doc.css_text_indent\":4,\"use.counter.css.doc.css_margin_right\":4,\"use.counter.css.doc.css_color\":8,\"use.counter.css.doc.css_padding_top\":4,\"use.counter.css.doc.css_border_right\":4,\"use.counter.css.doc.css_border_collapse\":4,\"use.counter.css.doc.css_box_sizing\":4,\"use.counter.css.doc.css_content\":4,\"use.counter.css.doc.css_margin_left\":4,\"use.counter.css.doc.css_visibility\":4,\""
		"use.counter.top_level_content_documents_destroyed\":1,\"use.counter.css.doc.css_border_spacing\":4,\"use.counter.css.doc.css_word_break\":4,\"use.counter.content_documents_destroyed\":18,\"use.counter.css.doc.css_background_size\":4,\"use.counter.css.doc.css_webkit_transition\":4,\"use.counter.css.doc.css_overflow_x\":4,\"use.counter.css.doc.css_background_color\":4,\"use.counter.css.doc.css_border_right_width\":4,\"use.counter.css.doc.css_border_top_width\":4,\"use.counter.css.doc.css_list_style"
		"\":4,\"use.counter.css.doc.css_border_left_color\":4,\"use.counter.css.doc.css_bottom\":4,\"use.counter.css.doc.css_right\":4,\"use.counter.css.doc.css_webkit_border_bottom_left_radius\":4,\"use.counter.css.doc.css_background_clip\":4,\"use.counter.css.doc.css_float\":4,\"use.counter.css.doc.webkit_margin_top_collapse\":4,\"use.counter.css.doc.css_zoom\":4,\"use.counter.css.doc.css_border_bottom_color\":4,\"use.counter.css.doc.css_max_width\":4,\"use.counter.css.page.css_color\":1,\""
		"use.counter.css.doc.css_height\":4,\"use.counter.css.doc.css_font\":4,\"use.counter.css.doc.css_font_size\":8,\"use.counter.css.doc.css_webkit_border_top_left_radius\":4,\"use.counter.css.doc.css_line_height\":4,\"use.counter.css.doc.css_outline\":4,\"use.counter.css.doc.css_position\":4,\"use.counter.css.doc.css_webkit_box_shadow\":4,\"use.counter.css.doc.css_webkit_box_sizing\":4,\"use.counter.css.doc.css_border_bottom_right_radius\":4,\"use.counter.css.doc.css_webkit_background_clip\":4,\""
		"use.counter.css.doc.css_word_wrap\":4,\"use.counter.css.doc.css_border_right_color\":4,\"use.counter.css.page.css_font_size\":1,\"use.counter.css.doc.css_pointer_events\":4,\"use.counter.css.doc.css_border_bottom_width\":4,\"use.counter.css.doc.css_animation\":4,\"use.counter.css.doc.css_border_left\":4,\"use.counter.css.doc.css_border_top_right_radius\":4,\"use.counter.css.doc.css_webkit_appearance\":4,\"use.counter.css.doc.css_font_family\":8,\"use.counter.css.doc.css_margin_bottom\":4,\""
		"use.counter.css.page.css_text_decoration\":1,\"use.counter.css.doc.css_outline_offset\":4,\"use.counter.css.doc.orphans\":4,\"use.counter.css.doc.css_z_index\":4,\"use.counter.css.page.css_font_weight\":1}}}", 
		LAST);

	web_custom_request("clicks", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/clicks?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t27.inf", 
		"Mode=HTTP", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"970aa39f-25a3-49ed-9b11-e55c2e8e10bf\",\"iso_time_full\":\"2025-12-04T05:02:49.347Z\",\"local_time_full\":\"Thu Dec 04 2025 10:32:49 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"f01d9b86-f2d9-43a7-aa18-9503441bf9ee\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"d73a1ddd-55a0-43a1-a421-649b790622ab\",\"tracker_loaded_at\":\"2025-12-04T05:02:48.547Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"b72be2c7-0557-4e48-8f35-ae3e214b731b\"},\"page\":{\"title\":\"BlazeDemo\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":675,\"pixel_max\":675,\"ratio\":1,\"ratio_max\":1},\"time_on_page\":1,\"time_on_page_ms\":801},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\":true,\"platform"
		"\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":675,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/\",\"info\":{}},\"referrer\":{\"full\":\""
		"\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T05:02:49.348Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\"time.utc\"},{\""
		"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]},\"element\":{\"class\":\"form-inline\",\"href\":null,\"id\":null,\"name\":\"fromPort\",\"all_attrs\":{\"name\":\"fromPort\",\"class\":\"form-inline\",\"unique_selector\":\"form > :nth-child(1)\"},\"node_name\":\"SELECT\",\"tag_name\":\"SELECT\",\"text\":null,\"title\":null,\"type\""
		":null,\"n_parents\":[{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"action\":\"reserve.php\",\"method\":\"post\",\"unique_selector\":\"form\"},\"node_name\":\"FORM\",\"tag_name\":\"FORM\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":1},{\"class\":\"container\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"container\",\"unique_selector\":\"body > :nth-child(3)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\""
		"type\":null,\"nth_parent\":2},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"body\"},\"node_name\":\"BODY\",\"tag_name\":\"BODY\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":3},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"lang\":\"en\",\"unique_selector\":\"html\"},\"node_name\":\"HTML\",\"tag_name\":\"HTML\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":4},{\"class\":null,\"href\":null,\"id\":null,"
		"\"name\":null,\"all_attrs\":{},\"node_name\":\"#document\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":5}],\"selector\":\"body > div:eq(2) > form > select:eq(0)\",\"text_content\":\"---REDACTED---\",\"cursor\":\"pointer\",\"x_position\":55,\"y_position\":242}}", 
		LAST);

	web_custom_request("d5fb4081-21e5-486e-8630-fecbde3bc60f", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/newtab/1/d5fb4081-21e5-486e-8630-fecbde3bc60f", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t28.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTTP", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":51,\"start_time\":\"2025-12-04T10:11:03.000+05:30\",\"end_time\":\"2025-12-04T10:32:44.812+05:30\",\"reason\":\"component_init\"},\"client_info\":{\"telemetry_sdk_build\":\"65.2.3\",\"os_version\":\"10.0\",\"app_display_version\":\"145.0.2\",\"architecture\":\"x86_64\",\"locale\":\"en-US\",\"os\":\"Windows\",\"app_build\":\"20251124145406\",\"app_channel\":\"release\",\"client_id\":\"90571d99-40b9-4f10-9a9a-227b856f2593\",\"windows_build_number\":19045,\"build_date\":"
		"\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2022-10-16+05:30\",\"attribution\":{\"campaign\":\"%2528not%2Bset%2529\",\"source\":\"www.bing.com\",\"content\":\"%2528not%2Bset%2529\",\"medium\":\"referral\"}},\"metrics\":{\"string\":{\"newtab.locale\":\"en-US\",\"newtab.newtab_category\":\"enabled\",\"newtab.homepage_category\":\"enabled\"},\"string_list\":{\"newtab.blocked_sponsors\":[]}}}", 
		LAST);

	web_custom_request("a74e062e-3985-41a4-afe8-f6526c5ec54e", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/nimbus-targeting-context/1/a74e062e-3985-41a4-afe8-f6526c5ec54e", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t29.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTTP", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":14,\"start_time\":\"2025-12-04T10:11:03.000+05:30\",\"end_time\":\"2025-12-04T10:32:45.017+05:30\",\"experiments\":{\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\"rollout-branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}}"
		",\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\"next-sign-up-modal-cta\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"deprecate-ipaddrany-rollout-for-release\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"acct-adoption-callout-addresses-rollout-with-pxi-required\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"new-tab-147020251114194929-to-release\":{\"branch"
		"\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-search-rollout\":{\"branch\":\"google-lens-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-credit-card-autofill-global-enablement-rollout-release\":{\"branch\":\"creditcard-enable\",\""
		"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"improved-mailto-handling-with-os-integration-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-shortcuts-v3-sticky\":{\"branch\":\"sticky-frozen-thom\",\""
		"extra\":{\"type\":\"nimbus-nimbus\"}},\"account-adoption-callout-credit-cards-treatment-c-rollout\":{\"branch\":\"treatment-c\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-passwords-global-rollout\":{\"branch\":\"treatment-e\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\""
		":{\"type\":\"nimbus-rollout\"}},\"desktop-address-autofill-india-release-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\"treatment-fast-udp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-tab-groups-rollout-beta\":{\"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"temp-new-tab-mobile-qr-code-campaign-row\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\"treatment-a-callout-badge\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-10-eos-sync-and-reminder-messaging-rollout\":{\"branch\":\"treatment-a\""
		",\"extra\":{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"65.2.3\",\"client_id\":\"90571d99-40b9-4f10-9a9a-227b856f2593\",\"windows_build_number\":19045,\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2022-10-16+05:30\",\"os\":\"Windows\",\"app_display_version\":\"145.0.2\",\"architecture\":\"x86_64\",\"app_channel\""
		":\"release\",\"os_version\":\"10.0\",\"locale\":\"en-US\",\"app_build\":\"20251124145406\",\"attribution\":{\"campaign\":\"%2528not%2Bset%2529\",\"medium\":\"referral\",\"source\":\"www.bing.com\",\"content\":\"%2528not%2Bset%2529\"}},\"metrics\":{\"boolean\":{\"nimbus_targeting_context.does_app_need_pin\":false,\"nimbus_targeting_context.uses_firefox_sync\":false,\"nimbus_targeting_context.has_active_enterprise_policies\":false,\"nimbus_targeting_context.has_pinned_tabs\":false,\""
		"nimbus_targeting_context.is_msix\":false,\"nimbus_targeting_context.is_first_startup\":false,\"nimbus_targeting_context.is_default_browser\":false,\"nimbus_targeting_context.user_prefers_reduced_motion\":true,\"nimbus_targeting_context.is_fx_a_enabled\":true,\"nimbus_targeting_context.is_fx_a_signed_in\":false},\"uuid\":{\"legacy.telemetry.profile_group_id\":\"f6637294-d75f-4350-be24-43ca2fcded9d\",\"legacy.telemetry.client_id\":\"f6637294-d75f-4350-be24-43ca2fcded9d\"},\"object\":{\""
		"nimbus_targeting_environment.pref_values\":{\"browser__newtabpage__activity_stream__asrouter__userprefs__cfr__addons\":true,\"browser__newtabpage__activity_stream__asrouter__userprefs__cfr__features\":true,\"browser__newtabpage__activity_stream__feeds__section__highlights\":false,\"browser__newtabpage__activity_stream__feeds__section__topstories\":true,\"browser__newtabpage__activity_stream__feeds__topsites\":true,\"browser__newtabpage__activity_stream__showSearch\":true,\""
		"browser__newtabpage__activity_stream__showSponsoredTopSites\":true,\"browser__newtabpage__enabled\":true,\"browser__startup__page\":1,\"browser__toolbars__bookmarks__visibility\":\"newtab\",\"browser__urlbar__lastUrlbarSearchSeconds\":0,\"browser__urlbar__quicksuggest__dataCollection__enabled\":false,\"browser__urlbar__showSearchSuggestionsFirst\":true,\"browser__urlbar__suggest__quicksuggest__sponsored\":false,\"media__videocontrols__picture_in_picture__enabled\":true,\""
		"media__videocontrols__picture_in_picture__video_toggle__enabled\":true,\"media__videocontrols__picture_in_picture__video_toggle__has_used\":false,\"network__trr__mode\":0,\"security__sandbox__content__level\":8,\"trailhead__firstrun__didSeeAboutWelcome\":true,\"nimbus__qa__pref_1\":\"default\",\"nimbus__qa__pref_2\":\"default\"},\"nimbus_targeting_context.home_page_settings\":{\"isCustomUrl\":false,\"isDefault\":true,\"isLocked\":false,\"isWebExt\":false},\""
		"nimbus_targeting_context.browser_settings\":{\"update\":{\"channel\":\"release\"}},\"nimbus_targeting_context.os\":{\"isLinux\":false,\"isMac\":false,\"windowsBuildNumber\":19045,\"windowsVersion\":10},\"nimbus_targeting_context.primary_resolution\":{\"height\":760,\"width\":1280},\"nimbus_targeting_context.active_rollouts\":[\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\",\"account-adoption-callout-credit-cards-treatment-c-rollout\",\""
		"account-adoption-callout-passwords-global-rollout\",\"account-adoption-pxi-menu-rollout-v2\",\"acct-adoption-callout-addresses-rollout-with-pxi-required\",\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\",\"backgroundupdate-enable-unelevated-installations-rollout-3-release\",\"context-id-rotation-every-3-days\",\"deprecate-ipaddrany-rollout-for-release\",\"desktop-address-autofill-india-release-rollout\",\"desktop-credit-card-autofill-global-enablement-rollout-release\",\""
		"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\",\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\",\"downsample-uptakeremotecontent-events\",\"enable-nimbus-unenrollment-synchronization\",\"encrypted-client-hello-fallback-mechanism\",\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\",\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\",\"fox-doodle-multi-action-cta-2025-rollout\",\"fx-accounts-ping-release-rollout-2\",\""
		"improved-mailto-handling-with-os-integration-treatment-a-rollout\",\"new-tab-147020251114194929-to-release\",\"pdf-annotations-highlight-treatment-b-rollout\",\"pin-frequently-used-websites-143-promo-rollout-all-locales\",\"private-window-visual-refresh-rollout\",\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\",\"smart-tab-groups-rollout-beta\",\"taskbar-tabs-discovery-global-rollout\",\"temp-new-tab-mobile-qr-code-campaign-row\",\""
		"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\",\"visual-card-updates\",\"visual-search-rollout\",\"windows-10-eos-sync-and-reminder-messaging-rollout\",\"windows-ui-automation-release-rollout\"],\"nimbus_targeting_context.is_default_handler\":{\"html\":false,\"pdf\":false},\"nimbus_targeting_context.user_monthly_activity\":[{\"numberOfURLsVisited\":3,\"date\":\"2025-11-20\"},{\"numberOfURLsVisited\":1,\"date\":\"2025-12-03\"}],\"nimbus_targeting_context.attribution_data\""
		":{\"medium\":\"referral\",\"source\":\"www.bing.com\",\"ua\":\"edge\"},\"nimbus_targeting_context.default_pdf_handler\":{\"knownBrowser\":true,\"registered\":true},\"nimbus_targeting_context.enrollments_map\":[{\"experimentSlug\":\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\",\"branchSlug\":\"treatment-a-tab-switching-copy\"},{\"experimentSlug\":\"account-adoption-callout-credit-cards-treatment-c-rollout\",\"branchSlug\":\"treatment-c\"},{\"experimentSlug\":\""
		"account-adoption-callout-passwords-global-rollout\",\"branchSlug\":\"treatment-e\"},{\"experimentSlug\":\"account-adoption-pxi-menu-rollout-v2\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"account-spotlight-modal-english-rollout-v2\",\"branchSlug\":\"rollout\"},{\"experimentSlug\":\"acct-adoption-callout-addresses-rollout-with-pxi-required\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\",\"branchSlug\":\""
		"treatment-a-callout-badge\"},{\"experimentSlug\":\"backgroundupdate-enable-unelevated-installations-rollout-3-release\",\"branchSlug\":\"enabled\"},{\"experimentSlug\":\"consolidated-search-configuration-row-desktop-relaunch\",\"branchSlug\":\"rollout\"},{\"experimentSlug\":\"context-id-rotation-every-3-days\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"context-id-rotation-every-7-days\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"custom-wallpapers-no-message-rollout-release\",\""
		"branchSlug\":\"control\"},{\"experimentSlug\":\"deprecate-ipaddrany-rollout-for-release\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"desktop-address-autofill-india-release-rollout\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"desktop-credit-card-autofill-global-enablement-rollout-release\",\"branchSlug\":\"creditcard-enable\"},{\"experimentSlug\":\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\",\"branchSlug\":\"next-sign-up-modal-cta\"},{\""
		"experimentSlug\":\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"downsample-uptakeremotecontent-events\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"enable-nimbus-unenrollment-synchronization\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"encrypted-client-hello-fallback-mechanism\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\",\"branchSlug\":\""
		"enforce\"},{\"experimentSlug\":\"etp-strict-message-release\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\",\"branchSlug\":\"treatment-fast-udp\"},{\"experimentSlug\":\"fox-doodle-multi-action-cta-2025-rollout\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"fx-accounts-ping-release-rollout-2\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"fx-view-discoverability-rollout\",\"branchSlug\":\"treatment-b\"},{\"experimentSlug\":"
		"\"improved-mailto-handling-with-os-integration-treatment-a-rollout\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"long-term-holdback-2024-h2-velocity-desktop\",\"branchSlug\":\"delivery\"},{\"experimentSlug\":\"long-term-holdback-2025h1-growth-desktop\",\"branchSlug\":\"delivery\"},{\"experimentSlug\":\"mozilla-foundation-donation-promotion-moments-page\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"new-tab-145120251009134757-to-release\",\"branchSlug\":\"rollout\"},{\""
		"experimentSlug\":\"new-tab-147020251114194929-to-release\",\"branchSlug\":\"rollout\"},{\"experimentSlug\":\"one-click-sponsored-settings\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"pdf-annotations-highlight-treatment-b-rollout\",\"branchSlug\":\"treatment-b\"},{\"experimentSlug\":\"pin-frequently-used-websites-143-promo-rollout-all-locales\",\"branchSlug\":\"rollout-branch\"},{\"experimentSlug\":\"private-window-visual-refresh-rollout\",\"branchSlug\":\"control\"},{\"experimentSlug\":\""
		"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\",\"branchSlug\":\"sign-in-with-call-out\"},{\"experimentSlug\":\"smart-shortcuts-v3-sticky\",\"branchSlug\":\"sticky-frozen-thom\"},{\"experimentSlug\":\"smart-tab-groups-rollout-beta\",\"branchSlug\":\"smart-tab-groups\"},{\"experimentSlug\":\"storage-access-heuristic-restriction-rollout\",\"branchSlug\":\"treatment-branch\"},{\"experimentSlug\":\"taskbar-tabs-discovery-global-rollout\",\"branchSlug\":\"delivery\"},{\""
		"experimentSlug\":\"temp-new-tab-mobile-qr-code-campaign-row\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"visual-card-updates\",\"branchSlug\":\"updated\"},{\"experimentSlug\":\"visual-search-rollout\",\"branchSlug\":\"google-lens-rollout\"},{\"experimentSlug\":\"windows-10-eos-sync-and-reminder-messaging-rollout\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\""
		":\"windows-10-eos-sync-messaging-rollout-2\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"windows-ui-automation-release-rollout\",\"branchSlug\":\"rollout\"}],\"nimbus_targeting_environment.user_set_prefs\":[\"nimbus.profilesdatastoreservice.read.enabled\",\"nimbus.profilesdatastoreservice.sync.enabled\",\"browser.search.separatePrivateDefault.urlbarResult.enabled\",\"browser.newtabpage.activity-stream.mobileDownloadModal.enabled\",\""
		"browser.newtabpage.activity-stream.mobileDownloadModal.variant-a\",\"browser.newtabpage.trainhopAddon.version\",\"signon.firefoxRelay.showToAllBrowsers\",\"browser.contextual-services.contextId.rotation-in-days\"],\"nimbus_targeting_context.addons_info\":{\"addons\":[\"addons-search-detection@mozilla.com\",\"data-leak-blocker@mozilla.com\",\"formautofill@mozilla.org\",\"ipp-activator@mozilla.com\",\"newtab@mozilla.org\",\"pictureinpicture@mozilla.org\",\"webcompat@mozilla.org\"],\""
		"hasInstalledAddons\":true},\"nimbus_targeting_context.active_experiments\":[\"long-term-holdback-2025h1-growth-desktop\",\"mozilla-foundation-donation-promotion-moments-page\",\"smart-shortcuts-v3-sticky\"]},\"quantity\":{\"nimbus_targeting_context.firefox_version\":145,\"nimbus_targeting_context.memory_mb\":16382,\"nimbus_targeting_context.addresses_saved\":0,\"nimbus_targeting_context.arch_bits\":64,\"nimbus_targeting_context.profile_group_profile_count\":0,\""
		"nimbus_targeting_context.profile_age_created\":1665919558706,\"nimbus_targeting_context.total_bookmarks_count\":5,\"nimbus_targeting_context.build_id\":1},\"string\":{\"nimbus_targeting_context.current_date\":\"Thu, 04 Dec 2025 05:02:43 GMT\",\"nimbus_targeting_context.distribution_id\":\"\",\"nimbus_targeting_context.version\":\"145.0.2\",\"nimbus_targeting_context.locale\":\"en-US\",\"nimbus_targeting_context.region\":\"IN\"}}}", 
		LAST);

	web_custom_request("clicks_2", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/clicks?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t30.inf", 
		"Mode=HTTP", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"703b3c79-1185-4d2d-a74e-e36cf4feda72\",\"iso_time_full\":\"2025-12-04T05:02:50.011Z\",\"local_time_full\":\"Thu Dec 04 2025 10:32:50 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"f01d9b86-f2d9-43a7-aa18-9503441bf9ee\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"d73a1ddd-55a0-43a1-a421-649b790622ab\",\"tracker_loaded_at\":\"2025-12-04T05:02:48.547Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"b72be2c7-0557-4e48-8f35-ae3e214b731b\"},\"page\":{\"title\":\"BlazeDemo\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":675,\"pixel_max\":675,\"ratio\":1,\"ratio_max\":1},\"time_on_page\":1,\"time_on_page_ms\":1464},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\":true,\""
		"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":675,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/\",\"info\":{}},\"referrer\":{\""
		"full\":\"\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T05:02:50.011Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\""
		"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]},\"element\":{\"class\":\"form-inline\",\"href\":null,\"id\":null,\"name\":\"fromPort\",\"all_attrs\":{\"name\":\"fromPort\",\"class\":\"form-inline\",\"unique_selector\":\"form > :nth-child(1)\"},\"node_name\":\"SELECT\",\"tag_name\":\"SELECT\",\"text\":null,\"title"
		"\":null,\"type\":null,\"n_parents\":[{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"action\":\"reserve.php\",\"method\":\"post\",\"unique_selector\":\"form\"},\"node_name\":\"FORM\",\"tag_name\":\"FORM\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":1},{\"class\":\"container\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"container\",\"unique_selector\":\"body > :nth-child(3)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\""
		"title\":null,\"type\":null,\"nth_parent\":2},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"body\"},\"node_name\":\"BODY\",\"tag_name\":\"BODY\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":3},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"lang\":\"en\",\"unique_selector\":\"html\"},\"node_name\":\"HTML\",\"tag_name\":\"HTML\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":4},{\"class\":null,\"href\""
		":null,\"id\":null,\"name\":null,\"all_attrs\":{},\"node_name\":\"#document\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":5}],\"selector\":\"body > div:eq(2) > form > select:eq(0)\",\"text_content\":\"---REDACTED---\",\"cursor\":\"pointer\",\"x_position\":55,\"y_position\":242}}", 
		LAST);

	web_custom_request("9bb24be5-f8e3-4c8a-b3cb-f2af34e8b923", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/baseline/1/9bb24be5-f8e3-4c8a-b3cb-f2af34e8b923", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t31.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTTP", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":31,\"start_time\":\"2025-12-04T10:11:03.000+05:30\",\"end_time\":\"2025-12-04T10:32:45.113+05:30\",\"reason\":\"active\",\"experiments\":{\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\""
		"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-tab-groups-rollout-beta\":{\"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\"treatment-a-callout-badge\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\""
		"sign-in-with-call-out\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-search-rollout\":{\"branch\":\"google-lens-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-nimbus\"}}"
		",\"desktop-address-autofill-india-release-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\"next-sign-up-modal-cta\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-10-eos-sync-and-reminder-messaging-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"deprecate-ipaddrany-rollout-for-release\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\"rollout-branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\"treatment-fast-udp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"new-tab-147020251114194929-to-release\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-shortcuts-v3-sticky\":"
		"{\"branch\":\"sticky-frozen-thom\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"desktop-credit-card-autofill-global-enablement-rollout-release\":{\"branch\":\"creditcard-enable\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-passwords-global-rollout\":{\"branch\":\"treatment-e\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"private-window-visual-refresh-rollout\":{\"branch\":\"control\""
		",\"extra\":{\"type\":\"nimbus-rollout\"}},\"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"temp-new-tab-mobile-qr-code-campaign-row\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"improved-mailto-handling-with-os-integration-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-credit-cards-treatment-c-rollout\":{\"branch\":\"treatment-c\",\"extra\":"
		"{\"type\":\"nimbus-rollout\"}},\"acct-adoption-callout-addresses-rollout-with-pxi-required\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"65.2.3\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2022-10-16+05:30\",\"windows_build_number\":19045,\"client_id\":\"90571d99-40b9-4f10-9a9a-227b856f2593\","
		"\"app_display_version\":\"145.0.2\",\"app_build\":\"20251124145406\",\"architecture\":\"x86_64\",\"os\":\"Windows\",\"locale\":\"en-US\",\"app_channel\":\"release\",\"os_version\":\"10.0\",\"attribution\":{\"content\":\"%2528not%2Bset%2529\",\"source\":\"www.bing.com\",\"medium\":\"referral\",\"campaign\":\"%2528not%2Bset%2529\"}},\"metrics\":{\"uuid\":{\"legacy.telemetry.client_id\":\"f6637294-d75f-4350-be24-43ca2fcded9d\",\"legacy.telemetry.profile_group_id\":\""
		"f6637294-d75f-4350-be24-43ca2fcded9d\"},\"string\":{\"startup.profile_selection_reason\":\"default\",\"usage.distribution_id\":\"default\"},\"labeled_counter\":{\"glean.validation.pings_submitted\":{\"baseline\":1,\"events\":1}},\"boolean\":{\"usage.is_default_browser\":false},\"datetime\":{\"glean.validation.first_run_hour\":\"2022-10-16T16+05:30\"},\"counter\":{\"browser.engagement.uri_count\":1,\"browser.engagement.active_ticks\":6}}}", 
		LAST);

	web_custom_request("76336140-4e23-4164-9fcc-9b728604ce92", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/usage-reporting/1/76336140-4e23-4164-9fcc-9b728604ce92", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t32.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTTP", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"metrics\":{\"boolean\":{\"usage.is_default_browser\":false,\"usage.windows_backup_enabled\":false},\"quantity\":{\"usage.windows_user_profile_age_in_days\":1145,\"usage.windows_build_number\":19045},\"counter\":{\"browser.engagement.active_ticks\":6,\"browser.engagement.uri_count\":1},\"uuid\":{\"usage.profile_group_id\":\"9285e5cf-d171-4f29-a5b8-d53d109d51a8\",\"usage.profile_id\":\"5ae6e87b-e670-4529-b684-10268475dcce\"},\"datetime\":{\"usage.first_run_date\":\"2022-10-16+05:30\"},\""
		"string\":{\"usage.app_channel\":\"release\",\"usage.os\":\"WINNT\",\"usage.distribution_id\":\"default\",\"usage.app_build\":\"20251124145406\",\"usage.app_display_version\":\"145.0.2\",\"usage.os_version\":\"10.0\"}}}", 
		LAST);

	web_custom_request("0221c094-6218-46aa-a4b4-c03650249d88", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/health/1/0221c094-6218-46aa-a4b4-c03650249d88", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t33.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTTP", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":24,\"start_time\":\"2025-12-04T10:11:03.000+05:30\",\"end_time\":\"2025-12-04T10:32:45.131+05:30\",\"reason\":\"pre_init\",\"experiments\":{\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\""
		":\"nimbus-rollout\"}},\"visual-search-rollout\":{\"branch\":\"google-lens-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"acct-adoption-callout-addresses-rollout-with-pxi-required\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"improved-mailto-handling-with-os-integration-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"account-adoption-callout-passwords-global-rollout\":{\"branch\":\"treatment-e\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-credit-cards-treatment-c-rollout\":{\"branch\":\"treatment-c\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\"next-sign-up-modal-cta\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-10-eos-sync-and-reminder-messaging-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\"rollout-branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-tab-groups-rollout-beta\":{\""
		"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-shortcuts-v3-sticky\":{\"branch\":\"sticky-frozen-thom\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\""
		"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\"treatment-a-callout-badge\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-address-autofill-india-release-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"temp-new-tab-mobile-qr-code-campaign-row\":{\"branch"
		"\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"new-tab-147020251114194929-to-release\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\"treatment-fast-udp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"deprecate-ipaddrany-rollout-for-release\":{\"branch\":\"control\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-credit-card-autofill-global-enablement-rollout-release\":{\"branch\":\"creditcard-enable\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"65.2.3\",\"client_id\":\"90571d99-40b9-4f10-9a9a-227b856f2593\",\"first_run_date\":\"2022-10-16+05:30\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\""
		"windows_build_number\":19045,\"app_channel\":\"release\",\"locale\":\"en-US\",\"os\":\"Windows\",\"app_build\":\"20251124145406\",\"os_version\":\"10.0\",\"architecture\":\"x86_64\",\"app_display_version\":\"145.0.2\",\"attribution\":{\"campaign\":\"%2528not%2Bset%2529\",\"source\":\"www.bing.com\",\"medium\":\"referral\",\"content\":\"%2528not%2Bset%2529\"}},\"metrics\":{\"memory_distribution\":{\"glean.upload.pending_pings_directory_size\":{\"values\":{\"10173\":1},\"sum\":10240},\""
		"glean.database.size\":{\"values\":{\"202140\":1},\"sum\":211011}},\"counter\":{\"glean.upload.pending_pings\":2,\"glean.health.init_count\":13},\"labeled_counter\":{\"glean.upload.ping_upload_failure\":{\"recoverable\":4},\"glean.validation.pings_submitted\":{\"baseline\":1,\"events\":1}},\"object\":{\"glean.health.data_directory_info\":[{\"dir_name\":\"db\",\"dir_exists\":true,\"dir_created\":1665919583,\"dir_modified\":1764823823,\"file_count\":1,\"files\":[{\"file_name\":\"data.safe.bin\",\""
		"file_created\":1764823823,\"file_modified\":1764823823,\"file_size\":211011}]},{\"dir_name\":\"events\",\"dir_exists\":true,\"dir_created\":1665919583,\"dir_modified\":1764823263,\"file_count\":2,\"files\":[{\"file_name\":\"events\",\"file_created\":1733465245,\"file_modified\":1764823823,\"file_size\":3199},{\"file_name\":\"prototype-no-code-events\",\"file_created\":1733395015,\"file_modified\":1762144555,\"file_size\":645}]},{\"dir_name\":\"pending_pings\",\"dir_exists\":true,\"dir_created\""
		":1665919583,\"dir_modified\":1764823823,\"file_count\":2,\"files\":[{\"file_name\":\"09f654cb-0bf5-4a13-ae82-273df63d00a2\",\"file_created\":1764757770,\"file_modified\":1764757770,\"file_size\":368},{\"file_name\":\"e2b7912c-9878-4d57-ac2e-8245983de039\",\"file_created\":1764823823,\"file_modified\":1764823823,\"file_size\":9877}]}],\"glean.database.load_sizes\":{\"new\":211011,\"open\":211011,\"post_open\":211011,\"post_open_user\":211011,\"post_load_ping_lifetime_data\":211011,\"user_records\""
		":62,\"ping_records\":892,\"application_records\":301,\"ping_memory_records\":892}},\"timing_distribution\":{\"glean.upload.send_failure\":{\"values\":{\"451452825\":1,\"492312796\":1,\"87029429\":2},\"sum\":1144300400},\"glean.upload.send_success\":{\"values\":{\"348117717\":1,\"268435456\":1,\"292730940\":2,\"379625062\":1,\"1518500249\":1,\"319225354\":2},\"sum\":3959405200},\"glean.validation.shutdown_dispatcher_wait\":{\"values\":{\"2719669\":1},\"sum\":2774700},\""
		"glean.validation.shutdown_wait\":{\"values\":{\"2965820\":1},\"sum\":3066700}},\"uuid\":{\"legacy.telemetry.profile_group_id\":\"f6637294-d75f-4350-be24-43ca2fcded9d\",\"legacy.telemetry.client_id\":\"f6637294-d75f-4350-be24-43ca2fcded9d\"}}}", 
		LAST);

	web_custom_request("f7e6e3fc-45ae-451a-9562-35676ec2c329", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/health/1/f7e6e3fc-45ae-451a-9562-35676ec2c329", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t34.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTTP", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":25,\"start_time\":\"2025-12-04T10:32:45.000+05:30\",\"end_time\":\"2025-12-04T10:32:45.141+05:30\",\"reason\":\"post_init\",\"experiments\":{\"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-credit-cards-treatment-c-rollout\":{\"branch\":\"treatment-c\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-tab-groups-rollout-beta\":{\"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\"treatment-fast-udp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"acct-adoption-callout-addresses-rollout-with-pxi-required\":{\"branch\":\"treatment-a\",\"extra\":{\"type\""
		":\"nimbus-rollout\"}},\"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-passwords-global-rollout\":{\"branch\":\"treatment-e\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"new-tab-147020251114194929-to-release\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"desktop-credit-card-autofill-global-enablement-rollout-release\":{\"branch\":\"creditcard-enable\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-address-autofill-india-release-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\"treatment-a-tab-switching-copy\",\""
		"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"deprecate-ipaddrany-rollout-for-release\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\"next-sign-up-modal-cta\",\"extra"
		"\":{\"type\":\"nimbus-rollout\"}},\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\"rollout-branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\"treatment-a-callout-badge\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"temp-new-tab-mobile-qr-code-campaign-row\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-search-rollout\":{\"branch\":\"google-lens-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"improved-mailto-handling-with-os-integration-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-10-eos-sync-and-reminder-messaging-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-shortcuts-v3-sticky\":{\"branch\":\"sticky-frozen-thom\",\"extra\":{\"type\":\"nimbus-nimbus\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"65.2.3\",\"first_run_date\":\"2022-10-16+05:30\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"windows_build_number\""
		":19045,\"architecture\":\"x86_64\",\"locale\":\"en-US\",\"os_version\":\"10.0\",\"os\":\"Windows\",\"app_display_version\":\"145.0.2\",\"app_channel\":\"release\",\"app_build\":\"20251124145406\",\"client_id\":\"90571d99-40b9-4f10-9a9a-227b856f2593\",\"attribution\":{\"medium\":\"referral\",\"source\":\"www.bing.com\",\"campaign\":\"%2528not%2Bset%2529\",\"content\":\"%2528not%2Bset%2529\"}},\"metrics\":{\"object\":{\"glean.health.data_directory_info\":[{\"dir_name\":\"db\",\"dir_exists\":true,\""
		"dir_created\":1665919583,\"dir_modified\":1764824565,\"file_count\":1,\"files\":[{\"file_name\":\"data.safe.bin\",\"file_created\":1764824564,\"file_modified\":1764824565,\"file_size\":204949}]},{\"dir_name\":\"events\",\"dir_exists\":true,\"dir_created\":1665919583,\"dir_modified\":1764824564,\"file_count\":2,\"files\":[{\"file_name\":\"events\",\"file_created\":1733465245,\"file_modified\":1764824564,\"file_size\":0},{\"file_name\":\"prototype-no-code-events\",\"file_created\":1733395015,\""
		"file_modified\":1762144555,\"file_size\":645}]},{\"dir_name\":\"pending_pings\",\"dir_exists\":true,\"dir_created\":1665919583,\"dir_modified\":1764824565,\"file_count\":8,\"files\":[{\"file_name\":\"0221c094-6218-46aa-a4b4-c03650249d88\",\"file_created\":1764824565,\"file_modified\":1764824565,\"file_size\":7013},{\"file_name\":\"06567e4a-c9bc-489c-a58d-45856cb79c8b\",\"file_created\":1764824564,\"file_modified\":1764824564,\"file_size\":9245},{\"file_name\":\""
		"09f654cb-0bf5-4a13-ae82-273df63d00a2\",\"file_created\":1764757770,\"file_modified\":1764757770,\"file_size\":368},{\"file_name\":\"76336140-4e23-4164-9fcc-9b728604ce92\",\"file_created\":1764824565,\"file_modified\":1764824565,\"file_size\":831},{\"file_name\":\"9bb24be5-f8e3-4c8a-b3cb-f2af34e8b923\",\"file_created\":1764824565,\"file_modified\":1764824565,\"file_size\":5416},{\"file_name\":\"a74e062e-3985-41a4-afe8-f6526c5ec54e\",\"file_created\":1764824565,\"file_modified\":1764824565,\""
		"file_size\":15578},{\"file_name\":\"d5fb4081-21e5-486e-8630-fecbde3bc60f\",\"file_created\":1764824564,\"file_modified\":1764824564,\"file_size\":955},{\"file_name\":\"e2b7912c-9878-4d57-ac2e-8245983de039\",\"file_created\":1764823823,\"file_modified\":1764823823,\"file_size\":9877}]}]},\"counter\":{\"glean.health.init_count\":13},\"uuid\":{\"legacy.telemetry.profile_group_id\":\"f6637294-d75f-4350-be24-43ca2fcded9d\",\"legacy.telemetry.client_id\":\"f6637294-d75f-4350-be24-43ca2fcded9d\"}}}", 
		LAST);

	web_custom_request("clicks_3", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/clicks?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t35.inf", 
		"Mode=HTTP", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"3b496f93-a719-4acf-a3fc-d4a6d81f2570\",\"iso_time_full\":\"2025-12-04T05:02:51.047Z\",\"local_time_full\":\"Thu Dec 04 2025 10:32:51 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"f01d9b86-f2d9-43a7-aa18-9503441bf9ee\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"d73a1ddd-55a0-43a1-a421-649b790622ab\",\"tracker_loaded_at\":\"2025-12-04T05:02:48.547Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"b72be2c7-0557-4e48-8f35-ae3e214b731b\"},\"page\":{\"title\":\"BlazeDemo\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":675,\"pixel_max\":675,\"ratio\":1,\"ratio_max\":1},\"time_on_page\":3,\"time_on_page_ms\":2500},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\":true,\""
		"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":675,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/\",\"info\":{}},\"referrer\":{\""
		"full\":\"\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T05:02:51.047Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\""
		"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]},\"element\":{\"class\":\"form-inline\",\"href\":null,\"id\":null,\"name\":\"toPort\",\"all_attrs\":{\"name\":\"toPort\",\"class\":\"form-inline\",\"unique_selector\":\"form > :nth-child(4)\"},\"node_name\":\"SELECT\",\"tag_name\":\"SELECT\",\"text\":null,\"title\""
		":null,\"type\":null,\"n_parents\":[{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"action\":\"reserve.php\",\"method\":\"post\",\"unique_selector\":\"form\"},\"node_name\":\"FORM\",\"tag_name\":\"FORM\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":1},{\"class\":\"container\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"container\",\"unique_selector\":\"body > :nth-child(3)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\""
		"title\":null,\"type\":null,\"nth_parent\":2},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"body\"},\"node_name\":\"BODY\",\"tag_name\":\"BODY\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":3},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"lang\":\"en\",\"unique_selector\":\"html\"},\"node_name\":\"HTML\",\"tag_name\":\"HTML\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":4},{\"class\":null,\"href\""
		":null,\"id\":null,\"name\":null,\"all_attrs\":{},\"node_name\":\"#document\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":5}],\"selector\":\"body > div:eq(2) > form > select:eq(1)\",\"text_content\":\"---REDACTED---\",\"cursor\":\"pointer\",\"x_position\":55,\"y_position\":342}}", 
		LAST);

	web_url("canonical.html_5", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t36.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("success.txt_3", 
		"URL=http://detectportal.firefox.com/success.txt?ipv4", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t37.inf", 
		LAST);

	web_url("canonical.html_6", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t38.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("success.txt_4", 
		"URL=http://detectportal.firefox.com/success.txt?ipv4", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t39.inf", 
		LAST);

	web_custom_request("clicks_4", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/clicks?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t40.inf", 
		"Mode=HTTP", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"4198fc0e-f241-4f9b-82ea-c3d197c5e6bf\",\"iso_time_full\":\"2025-12-04T05:02:52.394Z\",\"local_time_full\":\"Thu Dec 04 2025 10:32:52 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"f01d9b86-f2d9-43a7-aa18-9503441bf9ee\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"d73a1ddd-55a0-43a1-a421-649b790622ab\",\"tracker_loaded_at\":\"2025-12-04T05:02:48.547Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"b72be2c7-0557-4e48-8f35-ae3e214b731b\"},\"page\":{\"title\":\"BlazeDemo\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":675,\"pixel_max\":675,\"ratio\":1,\"ratio_max\":1},\"time_on_page\":4,\"time_on_page_ms\":3847},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\":true,\""
		"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":675,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/\",\"info\":{}},\"referrer\":{\""
		"full\":\"\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T05:02:52.394Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\""
		"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]},\"element\":{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\":nth-child(4) > :nth-child(3)\"},\"node_name\":\"OPTION\",\"tag_name\":\"OPTION\",\"text\":null,\"title\":null,\"type\":null,\"n_parents\":[{\"class\":\""
		"form-inline\",\"href\":null,\"id\":null,\"name\":\"toPort\",\"all_attrs\":{\"name\":\"toPort\",\"class\":\"form-inline\",\"unique_selector\":\"form > :nth-child(4)\"},\"node_name\":\"SELECT\",\"tag_name\":\"SELECT\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":1},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"action\":\"reserve.php\",\"method\":\"post\",\"unique_selector\":\"form\"},\"node_name\":\"FORM\",\"tag_name\":\"FORM\",\"text\":null,\"title\":null,\""
		"type\":null,\"nth_parent\":2},{\"class\":\"container\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"container\",\"unique_selector\":\"body > :nth-child(3)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":3},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"body\"},\"node_name\":\"BODY\",\"tag_name\":\"BODY\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":4},{\"class\""
		":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"lang\":\"en\",\"unique_selector\":\"html\"},\"node_name\":\"HTML\",\"tag_name\":\"HTML\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":5},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{},\"node_name\":\"#document\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":6}],\"selector\":\"body > div:eq(2) > form > select:eq(1) > option:eq(2)\",\"text_content\":\"---REDACTED---\",\"cursor\":\""
		"pointer\",\"x_position\":null,\"y_position\":null}}", 
		LAST);

	web_custom_request("changes", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/changes?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t41.inf", 
		"Mode=HTTP", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"2f948fd1-e9a7-4cdd-b6b1-64e7781c5029\",\"iso_time_full\":\"2025-12-04T05:02:52.390Z\",\"local_time_full\":\"Thu Dec 04 2025 10:32:52 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"f01d9b86-f2d9-43a7-aa18-9503441bf9ee\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"d73a1ddd-55a0-43a1-a421-649b790622ab\",\"tracker_loaded_at\":\"2025-12-04T05:02:48.547Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"b72be2c7-0557-4e48-8f35-ae3e214b731b\"},\"page\":{\"title\":\"BlazeDemo\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":675,\"pixel_max\":675,\"ratio\":1,\"ratio_max\":1},\"time_on_page\":4,\"time_on_page_ms\":3843},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\":true,\""
		"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":675,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/\",\"info\":{}},\"referrer\":{\""
		"full\":\"\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T05:02:52.390Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\""
		"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]},\"element\":{\"class\":\"form-inline\",\"href\":null,\"id\":null,\"name\":\"toPort\",\"all_attrs\":{\"name\":\"toPort\",\"class\":\"form-inline\",\"unique_selector\":\"form > :nth-child(4)\"},\"node_name\":\"SELECT\",\"tag_name\":\"SELECT\",\"text\":null,\"title\""
		":null,\"type\":null,\"n_parents\":[{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"action\":\"reserve.php\",\"method\":\"post\",\"unique_selector\":\"form\"},\"node_name\":\"FORM\",\"tag_name\":\"FORM\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":1},{\"class\":\"container\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"container\",\"unique_selector\":\"body > :nth-child(3)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\""
		"title\":null,\"type\":null,\"nth_parent\":2},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"body\"},\"node_name\":\"BODY\",\"tag_name\":\"BODY\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":3},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"lang\":\"en\",\"unique_selector\":\"html\"},\"node_name\":\"HTML\",\"tag_name\":\"HTML\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":4},{\"class\":null,\"href\""
		":null,\"id\":null,\"name\":null,\"all_attrs\":{},\"node_name\":\"#document\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":5}],\"selector\":\"body > div:eq(2) > form > select:eq(1)\",\"text_content\":\"---REDACTED---\",\"cursor\":\"pointer\",\"x_position\":55,\"y_position\":342}}", 
		LAST);

	web_custom_request("clicks_5", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/clicks?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t42.inf", 
		"Mode=HTTP", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"8533e33a-2787-4aae-b61f-730d8aafb89a\",\"iso_time_full\":\"2025-12-04T05:02:53.690Z\",\"local_time_full\":\"Thu Dec 04 2025 10:32:53 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"f01d9b86-f2d9-43a7-aa18-9503441bf9ee\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"d73a1ddd-55a0-43a1-a421-649b790622ab\",\"tracker_loaded_at\":\"2025-12-04T05:02:48.547Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"b72be2c7-0557-4e48-8f35-ae3e214b731b\"},\"page\":{\"title\":\"BlazeDemo\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":675,\"pixel_max\":675,\"ratio\":1,\"ratio_max\":1},\"time_on_page\":5,\"time_on_page_ms\":5143},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\":true,\""
		"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":675,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/\",\"info\":{}},\"referrer\":{\""
		"full\":\"\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T05:02:53.690Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\""
		"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]},\"element\":{\"class\":\"btn btn-primary\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"type\":\"submit\",\"class\":\"btn btn-primary\",\"unique_selector\":\"form > .container > .btn\"},\"node_name\":\"INPUT\",\"tag_name\":\"INPUT\",\"text\":null,\"title"
		"\":null,\"type\":\"submit\",\"n_parents\":[{\"class\":\"container\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"container\",\"unique_selector\":\"form > .container\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":1},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"action\":\"reserve.php\",\"method\":\"post\",\"unique_selector\":\"form\"},\"node_name\":\"FORM\",\"tag_name\":\"FORM\",\"text\":null,"
		"\"title\":null,\"type\":null,\"nth_parent\":2},{\"class\":\"container\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"container\",\"unique_selector\":\"body > :nth-child(3)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":3},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"body\"},\"node_name\":\"BODY\",\"tag_name\":\"BODY\",\"text\":null,\"title\":null,\"type\":null,\""
		"nth_parent\":4},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"lang\":\"en\",\"unique_selector\":\"html\"},\"node_name\":\"HTML\",\"tag_name\":\"HTML\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":5},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{},\"node_name\":\"#document\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":6}],\"selector\":\"body > div:eq(2) > form > div > input\",\"text_content\":null,\"cursor\":\"pointer\","
		"\"x_position\":55,\"y_position\":392}}", 
		LAST);

	web_custom_request("pageunloads", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/pageunloads?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t43.inf", 
		"Mode=HTTP", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"b3a3bb7e-9748-458d-ac76-1b8137445614\",\"iso_time_full\":\"2025-12-04T05:02:53.695Z\",\"local_time_full\":\"Thu Dec 04 2025 10:32:53 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"f01d9b86-f2d9-43a7-aa18-9503441bf9ee\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"d73a1ddd-55a0-43a1-a421-649b790622ab\",\"tracker_loaded_at\":\"2025-12-04T05:02:48.547Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"b72be2c7-0557-4e48-8f35-ae3e214b731b\"},\"page\":{\"title\":\"BlazeDemo\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":675,\"pixel_max\":675,\"ratio\":1,\"ratio_max\":1},\"time_on_page\":5,\"time_on_page_ms\":5148},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\":true,\""
		"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":675,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/\",\"info\":{}},\"referrer\":{\""
		"full\":\"\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T05:02:53.695Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\""
		"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]}}", 
		LAST);

	web_custom_request("form_submissions", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/form_submissions?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t44.inf", 
		"Mode=HTTP", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"45e480b9-3964-493b-b6c7-c6e1b4216b3d\",\"iso_time_full\":\"2025-12-04T05:02:53.694Z\",\"local_time_full\":\"Thu Dec 04 2025 10:32:53 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"f01d9b86-f2d9-43a7-aa18-9503441bf9ee\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"d73a1ddd-55a0-43a1-a421-649b790622ab\",\"tracker_loaded_at\":\"2025-12-04T05:02:48.547Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"b72be2c7-0557-4e48-8f35-ae3e214b731b\"},\"page\":{\"title\":\"BlazeDemo\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":675,\"pixel_max\":675,\"ratio\":1,\"ratio_max\":1},\"time_on_page\":5,\"time_on_page_ms\":5147},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\":true,\""
		"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":675,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/\",\"info\":{}},\"referrer\":{\""
		"full\":\"\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T05:02:53.694Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\""
		"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]},\"form\":{\"action\":\"https://blazedemo.com/reserve.php\",\"fields\":{\"fromPort\":\"---REDACTED---\",\"toPort\":\"---REDACTED---\"},\"method\":\"post\"},\"element\":{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"action\":\"reserve.php\",\""
		"method\":\"post\",\"unique_selector\":\"form\"},\"node_name\":\"FORM\",\"tag_name\":\"FORM\",\"text\":null,\"title\":null,\"type\":null,\"action\":\"https://blazedemo.com/reserve.php\",\"method\":\"post\",\"n_parents\":[{\"class\":\"container\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"container\",\"unique_selector\":\"body > :nth-child(3)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":1},{\"class\":null,\"href\""
		":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"body\"},\"node_name\":\"BODY\",\"tag_name\":\"BODY\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":2},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"lang\":\"en\",\"unique_selector\":\"html\"},\"node_name\":\"HTML\",\"tag_name\":\"HTML\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":3},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{},\"node_name\":\""
		"#document\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":4}],\"selector\":\"body > div:eq(2) > form\",\"text_content\":\"---REDACTED---\",\"cursor\":\"auto\",\"x_position\":55,\"y_position\":242}}", 
		LAST);

	web_add_cookie("prodperfect_session={%22session_uuid%22:%22f01d9b86-f2d9-43a7-aa18-9503441bf9ee%22}; DOMAIN=blazedemo.com");

	web_add_cookie("keen={%22uuid%22:%22b72be2c7-0557-4e48-8f35-ae3e214b731b%22%2C%22initialReferrer%22:null}; DOMAIN=blazedemo.com");

	web_submit_data("reserve.php", 
		"Action=https://blazedemo.com/reserve.php", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t45.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=fromPort", "Value=Paris", ENDITEM, 
		"Name=toPort", "Value=London", ENDITEM, 
		LAST);

	web_custom_request("pageviews_2", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/pageviews?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t46.inf", 
		"Mode=HTTP", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"aecea041-3790-4a8d-be19-f8eee39cf322\",\"iso_time_full\":\"2025-12-04T05:02:54.891Z\",\"local_time_full\":\"Thu Dec 04 2025 10:32:54 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"f01d9b86-f2d9-43a7-aa18-9503441bf9ee\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"89143dc3-0a2a-43a6-909f-1db74336cdf2\",\"tracker_loaded_at\":\"2025-12-04T05:02:54.889Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"b72be2c7-0557-4e48-8f35-ae3e214b731b\"},\"page\":{\"title\":\"BlazeDemo - reserve\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":675,\"pixel_max\":675,\"ratio\":1,\"ratio_max\":1},\"time_on_page\":0,\"time_on_page_ms\":2},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\":true,\""
		"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":675,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/reserve.php\",\"info\":{}},\""
		"referrer\":{\"initial\":\"https://blazedemo.com/\",\"full\":\"https://blazedemo.com/\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T05:02:54.891Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\"name\":\"keen"
		":date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]}}", 
		LAST);

	web_custom_request("pageunloads_2", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/pageunloads?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t47.inf", 
		"Mode=HTTP", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"c7ce7001-fa27-45e0-870d-6142a5d2b713\",\"iso_time_full\":\"2025-12-04T05:02:58.932Z\",\"local_time_full\":\"Thu Dec 04 2025 10:32:58 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"f01d9b86-f2d9-43a7-aa18-9503441bf9ee\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"89143dc3-0a2a-43a6-909f-1db74336cdf2\",\"tracker_loaded_at\":\"2025-12-04T05:02:54.889Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"b72be2c7-0557-4e48-8f35-ae3e214b731b\"},\"page\":{\"title\":\"BlazeDemo - reserve\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":675,\"pixel_max\":675,\"ratio\":1,\"ratio_max\":1},\"time_on_page\":4,\"time_on_page_ms\":4043},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\":true,"
		"\"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":675,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/reserve.php\",\"info\":{}},\""
		"referrer\":{\"initial\":\"https://blazedemo.com/\",\"full\":\"https://blazedemo.com/\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T05:02:58.932Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\"name\":\"keen"
		":date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]}}", 
		LAST);

	web_custom_request("clicks_6", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/clicks?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t48.inf", 
		"Mode=HTTP", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"ec737d40-be5d-4226-9493-aecd2427bd88\",\"iso_time_full\":\"2025-12-04T05:02:58.928Z\",\"local_time_full\":\"Thu Dec 04 2025 10:32:58 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"f01d9b86-f2d9-43a7-aa18-9503441bf9ee\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"89143dc3-0a2a-43a6-909f-1db74336cdf2\",\"tracker_loaded_at\":\"2025-12-04T05:02:54.889Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"b72be2c7-0557-4e48-8f35-ae3e214b731b\"},\"page\":{\"title\":\"BlazeDemo - reserve\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":675,\"pixel_max\":675,\"ratio\":1,\"ratio_max\":1},\"time_on_page\":4,\"time_on_page_ms\":4039},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\":true,"
		"\"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":675,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/reserve.php\",\"info\":{}},\""
		"referrer\":{\"initial\":\"https://blazedemo.com/\",\"full\":\"https://blazedemo.com/\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T05:02:58.928Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\"name\":\"keen"
		":date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]},\"element\":{\"class\":\"btn btn-small\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"type\":\"submit\",\"class\":\"btn btn-small\",\"unique_selector\":\":nth-child(1) > "
		":nth-child(2) > .btn\"},\"node_name\":\"INPUT\",\"tag_name\":\"INPUT\",\"text\":null,\"title\":null,\"type\":\"submit\",\"n_parents\":[{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"tbody > :nth-child(1) > :nth-child(2)\"},\"node_name\":\"TD\",\"tag_name\":\"TD\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":1},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"tbody > :nth-child(1)\"},\"node_name\""
		":\"TR\",\"tag_name\":\"TR\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":2},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"tbody\"},\"node_name\":\"TBODY\",\"tag_name\":\"TBODY\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":3},{\"class\":\"table\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"table\",\"unique_selector\":\".table\"},\"node_name\":\"TABLE\",\"tag_name\":\"TABLE\",\"text\":null,\"title\":null"
		",\"type\":null,\"nth_parent\":4},{\"class\":\"container\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"container\",\"unique_selector\":\"body > :nth-child(2)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":5},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"body\"},\"node_name\":\"BODY\",\"tag_name\":\"BODY\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":6}],\""
		"selector\":\"body > div:eq(1) > table > tbody > tr:eq(0) > td:eq(0) > input\",\"text_content\":null,\"cursor\":\"pointer\",\"x_position\":8,\"y_position\":8}}", 
		LAST);

	web_add_cookie("keen={%22uuid%22:%22b72be2c7-0557-4e48-8f35-ae3e214b731b%22%2C%22initialReferrer%22:%22https://blazedemo.com/%22}; DOMAIN=blazedemo.com");

	web_submit_data("purchase.php", 
		"Action=https://blazedemo.com/purchase.php", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://blazedemo.com/reserve.php", 
		"Snapshot=t49.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=flight", "Value=43", ENDITEM, 
		"Name=price", "Value=472.56", ENDITEM, 
		"Name=airline", "Value=Virgin America", ENDITEM, 
		"Name=fromPort", "Value=Paris", ENDITEM, 
		"Name=toPort", "Value=London", ENDITEM, 
		LAST);

	web_custom_request("form_submissions_2", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/form_submissions?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t50.inf", 
		"Mode=HTTP", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"6796ac89-9448-42e6-83d1-369077236301\",\"iso_time_full\":\"2025-12-04T05:02:58.930Z\",\"local_time_full\":\"Thu Dec 04 2025 10:32:58 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"f01d9b86-f2d9-43a7-aa18-9503441bf9ee\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"89143dc3-0a2a-43a6-909f-1db74336cdf2\",\"tracker_loaded_at\":\"2025-12-04T05:02:54.889Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"b72be2c7-0557-4e48-8f35-ae3e214b731b\"},\"page\":{\"title\":\"BlazeDemo - reserve\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":675,\"pixel_max\":675,\"ratio\":1,\"ratio_max\":1},\"time_on_page\":4,\"time_on_page_ms\":4041},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\":true,"
		"\"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":675,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/reserve.php\",\"info\":{}},\""
		"referrer\":{\"initial\":\"https://blazedemo.com/\",\"full\":\"https://blazedemo.com/\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T05:02:58.930Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\"name\":\"keen"
		":date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]},\"form\":{\"action\":\"https://blazedemo.com/purchase.php\",\"fields\":{\"flight\":\"---REDACTED---\",\"price\":\"---REDACTED---\",\"airline\":\"---REDACTED---\",\"fromPort\":\""
		"---REDACTED---\",\"toPort\":\"---REDACTED---\"},\"method\":\"post\"},\"element\":{\"class\":null,\"href\":null,\"id\":null,\"name\":\"VA43\",\"all_attrs\":{\"name\":\"VA43\",\"method\":\"post\",\"action\":\"purchase.php\",\"unique_selector\":\":nth-child(1) > form\"},\"node_name\":\"FORM\",\"tag_name\":\"FORM\",\"text\":null,\"title\":null,\"type\":null,\"action\":\"https://blazedemo.com/purchase.php\",\"method\":\"post\",\"n_parents\":[{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\""
		"all_attrs\":{\"unique_selector\":\"tbody > :nth-child(1)\"},\"node_name\":\"TR\",\"tag_name\":\"TR\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":1},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"tbody\"},\"node_name\":\"TBODY\",\"tag_name\":\"TBODY\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":2},{\"class\":\"table\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"table\",\"unique_selector\":\".table\"},\""
		"node_name\":\"TABLE\",\"tag_name\":\"TABLE\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":3},{\"class\":\"container\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"container\",\"unique_selector\":\"body > :nth-child(2)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":4},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"body\"},\"node_name\":\"BODY\",\"tag_name\":\""
		"BODY\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":5}],\"selector\":\"body > div:eq(1) > table > tbody > tr:eq(0) > form\",\"text_content\":null,\"cursor\":\"auto\",\"x_position\":null,\"y_position\":null}}", 
		LAST);

	web_custom_request("pageviews_3", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/pageviews?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t51.inf", 
		"Mode=HTTP", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"c88a04b8-d4ef-4664-9fc0-e870e493d6a5\",\"iso_time_full\":\"2025-12-04T05:02:59.890Z\",\"local_time_full\":\"Thu Dec 04 2025 10:32:59 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"f01d9b86-f2d9-43a7-aa18-9503441bf9ee\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"f2239019-0272-4da1-b343-2ac99d695473\",\"tracker_loaded_at\":\"2025-12-04T05:02:59.889Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"b72be2c7-0557-4e48-8f35-ae3e214b731b\"},\"page\":{\"title\":\"BlazeDemo Purchase\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":675,\"pixel_max\":675,\"ratio\":0.58,\"ratio_max\":0.58},\"time_on_page\":0,\"time_on_page_ms\":1},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\""
		":true,\"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":1164,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/purchase.php\",\"info\":"
		"{}},\"referrer\":{\"initial\":\"https://blazedemo.com/\",\"full\":\"https://blazedemo.com/reserve.php\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T05:02:59.890Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\"name"
		"\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]}}", 
		LAST);

	web_custom_request("form_submissions_3", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/form_submissions?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t52.inf", 
		"Mode=HTTP", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"8b62fc55-c629-46c4-8814-c7e7b99827d6\",\"iso_time_full\":\"2025-12-04T05:03:03.817Z\",\"local_time_full\":\"Thu Dec 04 2025 10:33:03 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"f01d9b86-f2d9-43a7-aa18-9503441bf9ee\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"f2239019-0272-4da1-b343-2ac99d695473\",\"tracker_loaded_at\":\"2025-12-04T05:02:59.889Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"b72be2c7-0557-4e48-8f35-ae3e214b731b\"},\"page\":{\"title\":\"BlazeDemo Purchase\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":1164,\"pixel_max\":1164,\"ratio\":1,\"ratio_max\":1},\"time_on_page\":4,\"time_on_page_ms\":3928},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\":true"
		",\"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":1164,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/purchase.php\",\"info\":{}},"
		"\"referrer\":{\"initial\":\"https://blazedemo.com/\",\"full\":\"https://blazedemo.com/reserve.php\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T05:03:03.817Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\"name\":\""
		"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]},\"form\":{\"action\":\"https://blazedemo.com/confirmation.php\",\"fields\":{\"cardType\":\"---REDACTED---\",\"creditCardMonth\":\"---REDACTED---\",\"creditCardYear\":\"---REDACTED---\"}"
		",\"method\":\"post\"},\"element\":{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"method\":\"POST\",\"action\":\"https://blazedemo.com/confirmation.php\",\"accept-charset\":\"UTF-8\",\"unique_selector\":\"form\"},\"node_name\":\"FORM\",\"tag_name\":\"FORM\",\"text\":null,\"title\":null,\"type\":null,\"action\":\"https://blazedemo.com/confirmation.php\",\"method\":\"post\",\"n_parents\":[{\"class\":\"container\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\""
		"class\":\"container\",\"unique_selector\":\"body > :nth-child(2)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":1},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"body\"},\"node_name\":\"BODY\",\"tag_name\":\"BODY\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":2},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"lang\":\"en\",\"unique_selector\":\"html\"},\""
		"node_name\":\"HTML\",\"tag_name\":\"HTML\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":3},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{},\"node_name\":\"#document\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":4}],\"selector\":\"body > div:eq(1) > form\",\"text_content\":\"---REDACTED---\",\"cursor\":\"auto\",\"x_position\":47,\"y_position\":334}}", 
		LAST);

	web_submit_data("confirmation.php", 
		"Action=https://blazedemo.com/confirmation.php", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://blazedemo.com/purchase.php", 
		"Snapshot=t53.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=_token", "Value=", ENDITEM, 
		"Name=inputName", "Value=", ENDITEM, 
		"Name=address", "Value=", ENDITEM, 
		"Name=city", "Value=", ENDITEM, 
		"Name=state", "Value=", ENDITEM, 
		"Name=zipCode", "Value=", ENDITEM, 
		"Name=cardType", "Value=visa", ENDITEM, 
		"Name=creditCardNumber", "Value=", ENDITEM, 
		"Name=creditCardMonth", "Value=11", ENDITEM, 
		"Name=creditCardYear", "Value=2017", ENDITEM, 
		"Name=nameOnCard", "Value=", ENDITEM, 
		LAST);

	web_custom_request("clicks_7", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/clicks?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t54.inf", 
		"Mode=HTTP", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"9480273b-57d8-4d68-b4b0-f22440659197\",\"iso_time_full\":\"2025-12-04T05:03:03.814Z\",\"local_time_full\":\"Thu Dec 04 2025 10:33:03 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"f01d9b86-f2d9-43a7-aa18-9503441bf9ee\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"f2239019-0272-4da1-b343-2ac99d695473\",\"tracker_loaded_at\":\"2025-12-04T05:02:59.889Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"b72be2c7-0557-4e48-8f35-ae3e214b731b\"},\"page\":{\"title\":\"BlazeDemo Purchase\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":1164,\"pixel_max\":1164,\"ratio\":1,\"ratio_max\":1},\"time_on_page\":4,\"time_on_page_ms\":3925},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\":true"
		",\"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":1164,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/purchase.php\",\"info\":{}},"
		"\"referrer\":{\"initial\":\"https://blazedemo.com/\",\"full\":\"https://blazedemo.com/reserve.php\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T05:03:03.814Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\"name\":\""
		"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]},\"element\":{\"class\":\"btn btn-primary\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"btn btn-primary\",\"type\":\"submit\",\"unique_selector\":\".controls > "
		".btn\"},\"node_name\":\"INPUT\",\"tag_name\":\"INPUT\",\"text\":null,\"title\":null,\"type\":\"submit\",\"n_parents\":[{\"class\":\"controls\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"controls\",\"unique_selector\":\":nth-child(12) > .controls\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":1},{\"class\":\"control-group\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"control-group\",\""
		"unique_selector\":\":nth-child(12)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":2},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"method\":\"POST\",\"action\":\"https://blazedemo.com/confirmation.php\",\"accept-charset\":\"UTF-8\",\"unique_selector\":\"form\"},\"node_name\":\"FORM\",\"tag_name\":\"FORM\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":3},{\"class\":\"container\",\"href\":null,\"id\":null"
		",\"name\":null,\"all_attrs\":{\"class\":\"container\",\"unique_selector\":\"body > :nth-child(2)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":4},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"body\"},\"node_name\":\"BODY\",\"tag_name\":\"BODY\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":5},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"lang\":\"en\",\""
		"unique_selector\":\"html\"},\"node_name\":\"HTML\",\"tag_name\":\"HTML\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":6}],\"selector\":\"body > div:eq(1) > form > div:eq(10) > div > input\",\"text_content\":null,\"cursor\":\"pointer\",\"x_position\":47,\"y_position\":1114}}", 
		LAST);

	web_custom_request("pageunloads_3", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/pageunloads?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t55.inf", 
		"Mode=HTTP", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"87523036-3a0a-4c19-bdc9-e7e1047b7597\",\"iso_time_full\":\"2025-12-04T05:03:03.818Z\",\"local_time_full\":\"Thu Dec 04 2025 10:33:03 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"f01d9b86-f2d9-43a7-aa18-9503441bf9ee\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"f2239019-0272-4da1-b343-2ac99d695473\",\"tracker_loaded_at\":\"2025-12-04T05:02:59.889Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"b72be2c7-0557-4e48-8f35-ae3e214b731b\"},\"page\":{\"title\":\"BlazeDemo Purchase\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":1164,\"pixel_max\":1164,\"ratio\":1,\"ratio_max\":1},\"time_on_page\":4,\"time_on_page_ms\":3929},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\":true"
		",\"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":1164,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/purchase.php\",\"info\":{}},"
		"\"referrer\":{\"initial\":\"https://blazedemo.com/\",\"full\":\"https://blazedemo.com/reserve.php\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T05:03:03.818Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\"name\":\""
		"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]}}", 
		LAST);

	web_custom_request("pageviews_4", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/pageviews?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t56.inf", 
		"Mode=HTTP", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"6727abb9-6ea6-4ba3-a9ac-de884d7377b7\",\"iso_time_full\":\"2025-12-04T05:03:04.578Z\",\"local_time_full\":\"Thu Dec 04 2025 10:33:04 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"f01d9b86-f2d9-43a7-aa18-9503441bf9ee\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"6f4295ba-e4bc-4447-9234-a93cee9cf668\",\"tracker_loaded_at\":\"2025-12-04T05:03:04.576Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"b72be2c7-0557-4e48-8f35-ae3e214b731b\"},\"page\":{\"title\":\"BlazeDemo Confirmation\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":675,\"pixel_max\":675,\"ratio\":0.53,\"ratio_max\":0.53},\"time_on_page\":0,\"time_on_page_ms\":2},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\""
		":true,\"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":1269,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/confirmation.php\",\""
		"info\":{}},\"referrer\":{\"initial\":\"https://blazedemo.com/\",\"full\":\"https://blazedemo.com/purchase.php\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T05:03:04.578Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},"
		"{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]}}", 
		LAST);

	return 0;
}