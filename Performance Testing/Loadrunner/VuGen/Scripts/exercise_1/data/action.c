Action()
{

	web_url("canonical.html", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_custom_request("v9o", 
		"URL=http://o.pki.goog/s/wr3/v9o", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t2.inf", 
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
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0R0P0N0L0J0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x11\\x00\\xBF\\xDA\\x16\\xE1\\xB54\\xDC\\xCB\\x10\\xE0\\x7FRB\\xD3\\xF9\\x9A", 
		LAST);

	web_custom_request("xvY", 
		"URL=http://o.pki.goog/s/wr3/xvY", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t4.inf", 
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
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"context_id\":\"23852afd-307f-4d9f-8e21-aa01fb354cbc\",\"placements\":[{\"placement\":\"newtab_tile_1\",\"count\":1},{\"placement\":\"newtab_tile_2\",\"count\":1},{\"placement\":\"newtab_tile_3\",\"count\":1}],\"blocks\":[\"\"],\"credentials\":\"omit\"}", 
		LAST);

	web_custom_request("curated-recommendations", 
		"URL=https://merino.services.mozilla.com/api/v1/curated-recommendations", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"inferredInterests\":null,\"locale\":\"en-US\",\"region\":\"IN\",\"topics\":[],\"sections\":[],\"enableInterestPicker\":false}", 
		LAST);

	web_url("blazedemo.com", 
		"URL=https://blazedemo.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/favicon.ico", ENDITEM, 
		"Url=https://blazemeter.trackinglibrary.prodperfect.com/keen-tracking.min.js", ENDITEM, 
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

	/*Connection ID 0 received buffer WebSocketReceive0*/

	web_url("canonical.html_2", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/success.txt?ipv4", "Referer=", ENDITEM, 
		LAST);

	web_custom_request("ocsp.digicert.com", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x02\\xF1\\x84\\xDA\\xF8\\x12Sy\\xE1\\x18\\x08\\xA7\\x04<\\xF6\\xF4", 
		LAST);

	web_custom_request("c92b7e28-7b2b-4e26-8c07-8ffd18684d74", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/events/1/c92b7e28-7b2b-4e26-8c07-8ffd18684d74", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t11.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":21,\"start_time\":\"2025-12-04T09:47:57.000+05:30\",\"end_time\":\"2025-12-04T09:55:27.178+05:30\",\"reason\":\"startup\",\"experiments\":{\"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-passwords-global-rollout\":{\"branch\":\"treatment-e\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"desktop-address-autofill-india-release-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\"treatment-a-callout-badge\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-credit-card-autofill-global-enablement-rollout-release\":{\"branch\":\"creditcard-enable\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\","
		"\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-shortcuts-v3-sticky\":{\"branch\":\"sticky-frozen-thom\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\"rollout-branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\"next-sign-up-modal-cta\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-credit-cards-treatment-c-rollout\":{\"branch\":\"treatment-c\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"new-tab-147020251114194929-to-release\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}"
		"},\"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\"treatment-fast-udp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"acct-adoption-callout-addresses-rollout-with-pxi-required\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"temp-new-tab-mobile-qr-code-campaign-row\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-tab-groups-rollout-beta\":{\"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"windows-10-eos-sync-and-reminder-messaging-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-search-rollout\":{\"branch\":\"google-lens-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"deprecate-ipaddrany-rollout-for-release\":{\"branch\":\""
		"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"improved-mailto-handling-with-os-integration-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"65.2.3\",\"windows_build_number\":19045,\"first_run_date\":\"2022-10-16+05:30\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"app_display_version\":\"145.0.2\",\"app_build\":\"20251124145406\",\"os_version"
		"\":\"10.0\",\"app_channel\":\"release\",\"architecture\":\"x86_64\",\"locale\":\"en-US\",\"os\":\"Windows\",\"client_id\":\"90571d99-40b9-4f10-9a9a-227b856f2593\",\"attribution\":{\"campaign\":\"%2528not%2Bset%2529\",\"source\":\"www.bing.com\",\"medium\":\"referral\",\"content\":\"%2528not%2Bset%2529\"}},\"metrics\":{\"string\":{\"search.engine.private.load_path\":\"\",\"region.home_region\":\"IN\",\"search.engine.default.partner_code\":\"firefox-b-d\",\"search.engine.private.provider_id\":\"\","
		"\"search.engine.default.display_name\":\"Google\",\"search.engine.private.display_name\":\"\",\"search.engine.default.load_path\":\"[app]google\",\"search.engine.default.provider_id\":\"google\",\"search.engine.private.partner_code\":\"\"},\"uuid\":{\"legacy.telemetry.client_id\":\"f6637294-d75f-4350-be24-43ca2fcded9d\",\"legacy.telemetry.profile_group_id\":\"f6637294-d75f-4350-be24-43ca2fcded9d\"},\"quantity\":{\"urlbar.pref_max_results\":10,\"browser.engagement.max_concurrent_tab_count\":1},\""
		"boolean\":{\"search.engine.default.overridden_by_third_party\":false,\"urlbar.pref_suggest_data_collection\":false,\"policies.is_enterprise\":false,\"urlbar.pref_suggest_nonsponsored\":false,\"urlbar.pref_suggest_sponsored\":false,\"urlbar.pref_suggest_topsites\":true,\"usage.is_default_browser\":false,\"search.engine.private.overridden_by_third_party\":false},\"url\":{\"search.engine.default.submission_url\":\"https://www.google.com/search?client=firefox-b-d&q=\",\""
		"search.engine.private.submission_url\":\"blank:\"},\"counter\":{\"browser.engagement.uri_count\":1,\"browser.engagement.active_ticks\":6}},\"events\":[{\"timestamp\":0,\"category\":\"session_restore\",\"name\":\"backup_can_be_loaded_session_file\",\"extra\":{\"loadfail_reason\":\"N/A\",\"glean_timestamp\":\"1764821875076\",\"path_key\":\"clean\",\"can_load\":\"true\"}},{\"timestamp\":0,\"category\":\"session_restore\",\"name\":\"backup_can_be_loaded_session_file\",\"extra\":{\"can_load\":\"true\","
		"\"glean_timestamp\":\"1764821875077\",\"loadfail_reason\":\"N/A\",\"path_key\":\"clean\"}},{\"timestamp\":0,\"category\":\"session_restore\",\"name\":\"shutdown_success_session_startup\",\"extra\":{\"shutdown_ok\":\"false\",\"glean_timestamp\":\"1764821875077\",\"shutdown_reason\":\"N/A\"}},{\"timestamp\":662,\"category\":\"webcompatreporting\",\"name\":\"reason_dropdown\",\"extra\":{\"glean_timestamp\":\"1764821875738\",\"setting\":\"required\"}},{\"timestamp\":1206,\"category\":\"nimbus_events\""
		",\"name\":\"startup_database_consistency\",\"extra\":{\"primary\":\"database\",\"store_active_count\":\"37\",\"total_store_count\":\"48\",\"trigger\":\"startup\",\"glean_timestamp\":\"1764821876283\",\"total_db_count\":\"48\",\"db_active_count\":\"37\"}},{\"timestamp\":1337,\"category\":\"jsonfile\",\"name\":\"load_autofillprofiles\",\"extra\":{\"value\":\"error_notfounderror\",\"glean_timestamp\":\"1764821876414\"}},{\"timestamp\":1366,\"category\":\"doh\",\"name\":\"state_rollback\",\"extra\":{"
		"\"glean_timestamp\":\"1764821876442\",\"value\":\"null\"}},{\"timestamp\":1570,\"category\":\"containers\",\"name\":\"container_profile_loaded\",\"extra\":{\"glean_timestamp\":\"1764821876647\",\"containers\":\"4\"}},{\"timestamp\":1698,\"category\":\"jsonfile\",\"name\":\"load_logins\",\"extra\":{\"glean_timestamp\":\"1764821876775\",\"value\":\"error_notfounderror\"}},{\"timestamp\":2114,\"category\":\"normandy\",\"name\":\"enroll_failed_nimbus_experiment\",\"extra\":{\"glean_timestamp\":\""
		"1764821877191\",\"value\":\"account-spotlight-modal-global-rollout-v3\",\"reason\":\"feature-conflict\"}},{\"timestamp\":2114,\"category\":\"nimbus_events\",\"name\":\"enroll_failed\",\"extra\":{\"glean_timestamp\":\"1764821877191\",\"reason\":\"feature-conflict\",\"experiment\":\"account-spotlight-modal-global-rollout-v3\"}},{\"timestamp\":2257,\"category\":\"nimbus_events\",\"name\":\"is_ready\",\"extra\":{\"glean_timestamp\":\"1764821877333\"}},{\"timestamp\":2258,\"category\":\"upgrade_dialog"
		"\",\"name\":\"trigger_reason\",\"extra\":{\"glean_timestamp\":\"1764821877335\",\"value\":\"not-major\"}},{\"timestamp\":4207,\"category\":\"normandy\",\"name\":\"expose_nimbus_experiment\",\"extra\":{\"value\":\"private-window-visual-refresh-rollout\",\"glean_timestamp\":\"1764821928417\",\"featureId\":\"feltPrivacy\",\"branchSlug\":\"control\"}},{\"timestamp\":4207,\"category\":\"nimbus_events\",\"name\":\"exposure\",\"extra\":{\"glean_timestamp\":\"1764821928417\",\"experiment\":\""
		"private-window-visual-refresh-rollout\",\"feature_id\":\"feltPrivacy\",\"branch\":\"control\"}},{\"timestamp\":5736,\"category\":\"normandy\",\"name\":\"expose_nimbus_experiment\",\"extra\":{\"glean_timestamp\":\"1764821880813\",\"featureId\":\"newtabTrainhopAddon\",\"value\":\"new-tab-147020251114194929-to-release\",\"branchSlug\":\"rollout\"}},{\"timestamp\":5736,\"category\":\"nimbus_events\",\"name\":\"exposure\",\"extra\":{\"glean_timestamp\":\"1764821880813\",\"experiment\":\""
		"new-tab-147020251114194929-to-release\",\"feature_id\":\"newtabTrainhopAddon\",\"branch\":\"rollout\"}},{\"timestamp\":445999,\"category\":\"doh\",\"name\":\"state_shutdown\",\"extra\":{\"value\":\"null\",\"glean_timestamp\":\"1764822321076\"}}]}", 
		EXTRARES, 
		"Url=https://prod.ohttp-gateway.prod.webservices.mozgcp.net/ohttp-configs", "Referer=", ENDITEM, 
		LAST);

	web_url("canonical.html_3", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
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
		EXTRARES, 
		"Url=http://detectportal.firefox.com/success.txt?ipv4", "Referer=", ENDITEM, 
		LAST);

	web_custom_request("6d98c56e-7489-40c0-a393-a4d0b9e70360", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/use-counters/1/6d98c56e-7489-40c0-a393-a4d0b9e70360", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t14.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":13,\"start_time\":\"2025-12-04T09:47:51.000+05:30\",\"end_time\":\"2025-12-04T09:55:21.000+05:30\",\"reason\":\"app_shutdown_confirmed\",\"experiments\":{\"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\""
		"type\":\"nimbus-rollout\"}},\"account-adoption-callout-passwords-global-rollout\":{\"branch\":\"treatment-e\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"acct-adoption-callout-addresses-rollout-with-pxi-required\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\"rollout-branch\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\"treatment-fast-udp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\"next-sign-up-modal-cta\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-tab-groups-rollout-beta\":{\"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\""
		"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"improved-mailto-handling-with-os-integration-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\"type"
		"\":\"nimbus-rollout\"}},\"desktop-credit-card-autofill-global-enablement-rollout-release\":{\"branch\":\"creditcard-enable\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-search-rollout\":{\"branch\":\"google-lens-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"temp-new-tab-mobile-qr-code-campaign-row\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\"treatment-a-callout-badge\",\""
		"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-credit-cards-treatment-c-rollout\":{\"branch\":\"treatment-c\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"deprecate-ipaddrany-rollout-for-release\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-address-autofill-india-release-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\""
		":\"nimbus-rollout\"}},\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"new-tab-147020251114194929-to-release\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-shortcuts-v3-sticky\":{\"branch\":\"sticky-frozen-thom\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"windows-10-eos-sync-and-reminder-messaging-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}}"
		",\"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"65.2.3\",\"windows_build_number\":19045,\"app_build\":\"20251124145406\",\"os_version\":\"10.0\",\"architecture\":\"x86_64\",\"os\":\"Windows\",\"app_channel\":\"release\",\"app_display_version\":\"145.0.2\",\"locale\":\"en-US\",\""
		"client_id\":\"90571d99-40b9-4f10-9a9a-227b856f2593\",\"first_run_date\":\"2022-10-16+05:30\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"attribution\":{\"content\":\"%2528not%2Bset%2529\",\"campaign\":\"%2528not%2Bset%2529\",\"source\":\"www.bing.com\",\"medium\":\"referral\"}},\"metrics\":{\"counter\":{\"use.counter.css.doc.css_width\":4,\"use.counter.css.doc.css_float\":4,\"use.counter.css.doc.css_empty_cells\":4,\"use.counter.css.doc.css_border_width\":4,\""
		"use.counter.css.doc.css_border_style\":4,\"use.counter.css.doc.css_margin_left\":4,\"use.counter.css.doc.css_overflow\":4,\"use.counter.css.doc.css_text_decoration\":6,\"use.counter.top_level_content_documents_destroyed\":1,\"use.counter.css.doc.css_max_height\":4,\"use.counter.css.doc.css_background_color\":4,\"use.counter.css.page.css_font_family\":1,\"use.counter.css.doc.css_font_family\":12,\"use.counter.css.doc.css_height\":4,\"use.counter.css.doc.css_color\":12,\""
		"use.counter.css.doc.css_margin\":4,\"use.counter.css.doc.css_border_spacing\":4,\"use.counter.css.doc.css_font_size\":12,\"use.counter.css.page.css_font_size\":1,\"use.counter.css.doc.css_cursor\":4,\"use.counter.css.doc.css_margin_right\":4,\"use.counter.css.doc.css_padding_top\":4,\"use.counter.css.doc.css_border_color\":4,\"use.counter.css.doc.css_font_style\":4,\"use.counter.css.doc.css_border\":4,\"use.counter.css.doc.css_clear\":4,\"use.counter.css.doc.css_background\":4,\""
		"use.counter.css.doc.css_padding_bottom\":4,\"use.counter.css.doc.css_white_space\":4,\"use.counter.css.page.css_color\":1,\"use.counter.css.doc.css_line_height\":4,\"use.counter.css.page.css_font_weight\":1,\"use.counter.css.doc.css_padding\":4,\"use.counter.css.doc.css_text_align\":4,\"use.counter.content_documents_destroyed\":22,\"use.counter.css.doc.css_vertical_align\":4,\"use.counter.css.doc.css_font_weight\":6,\"use.counter.css.page.css_text_decoration\":1}}}", 
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

	web_custom_request("8a5c2561-eead-40d9-9c9e-1edb68bfde90", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/newtab/1/8a5c2561-eead-40d9-9c9e-1edb68bfde90", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t16.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":49,\"start_time\":\"2025-12-04T09:47:57.000+05:30\",\"end_time\":\"2025-12-04T09:55:27.410+05:30\",\"reason\":\"component_init\"},\"client_info\":{\"telemetry_sdk_build\":\"65.2.3\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2022-10-16+05:30\",\"windows_build_number\":19045,\"app_channel\":\"release\",\"locale\":\"en-US\",\"app_display_version\":\"145.0.2\",\"architecture\":\"x86_64\",\"os\":\"Windows\",\"os_version\":\"10.0\",\"app_build\":\""
		"20251124145406\",\"client_id\":\"90571d99-40b9-4f10-9a9a-227b856f2593\",\"attribution\":{\"medium\":\"referral\",\"content\":\"%2528not%2Bset%2529\",\"source\":\"www.bing.com\",\"campaign\":\"%2528not%2Bset%2529\"}},\"metrics\":{\"string_list\":{\"newtab.blocked_sponsors\":[]},\"string\":{\"newtab.locale\":\"en-US\",\"newtab.homepage_category\":\"enabled\",\"newtab.newtab_category\":\"enabled\"}}}", 
		LAST);

	web_custom_request("pageviews", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/pageviews?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"399ecc96-c33d-4065-b022-25f4a91eaf94\",\"iso_time_full\":\"2025-12-04T04:25:30.101Z\",\"local_time_full\":\"Thu Dec 04 2025 09:55:30 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"4e2bcbae-544e-47ad-b01a-43a4f54ea4dc\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"81bf27df-9ae8-4e10-9100-9a14dedc28dd\",\"tracker_loaded_at\":\"2025-12-04T04:25:30.098Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"34ca1b82-3816-4641-bedc-0458a9968f8f\"},\"page\":{\"title\":\"BlazeDemo\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":675,\"pixel_max\":675,\"ratio\":1,\"ratio_max\":1},\"time_on_page\":0,\"time_on_page_ms\":3},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\":true,\"platform\""
		":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":675,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/\",\"info\":{}},\"referrer\":{\"full\":\"\""
		",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T04:25:30.101Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\"time.utc\"},{\""
		"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]}}", 
		LAST);

	web_custom_request("56838e0a-ebe2-4037-b0d4-d032935a2588", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/nimbus-targeting-context/1/56838e0a-ebe2-4037-b0d4-d032935a2588", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t18.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":12,\"start_time\":\"2025-12-04T09:47:58.000+05:30\",\"end_time\":\"2025-12-04T09:55:27.586+05:30\",\"experiments\":{\"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\"treatment-a-callout-badge\",\"extra\":{\"type\":"
		"\"nimbus-rollout\"}},\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-tab-groups-rollout-beta\":{\"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-foundation-donation-promotion-moments-page\":{"
		"\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\"next-sign-up-modal-cta\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"new-tab-147020251114194929-to-release\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\"rollout-branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-credit-cards-treatment-c-rollout\":{\"branch\":\"treatment-c\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-search-rollout\":{\"branch\":\"google-lens-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-address-autofill-india-release-rollout\""
		":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-shortcuts-v3-sticky\":{\"branch\":\"sticky-frozen-thom\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"windows-10-eos-sync-and-reminder-messaging-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"improved-mailto-handling-with-os-integration-treatment-a-rollout\":{\"branch\":\""
		"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"acct-adoption-callout-addresses-rollout-with-pxi-required\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"deprecate-ipaddrany-rollout-for-release\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\""
		"type\":\"nimbus-rollout\"}},\"temp-new-tab-mobile-qr-code-campaign-row\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-credit-card-autofill-global-enablement-rollout-release\":{\"branch\":\"creditcard-enable\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\"treatment-fast-udp\",\"extra\":{\"type\":"
		"\"nimbus-rollout\"}},\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-passwords-global-rollout\":{\"branch\":\"treatment-e\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"65.2.3\",\"windows_build_number\":19045,\"app_build\":\"20251124145406\",\"locale\":\"en-US\",\"os\":\"Windows\",\"app_display_version\":\"145.0.2\",\"os_version\":\"10.0\",\"app_channel\":\"release\",\""
		"architecture\":\"x86_64\",\"client_id\":\"90571d99-40b9-4f10-9a9a-227b856f2593\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2022-10-16+05:30\",\"attribution\":{\"medium\":\"referral\",\"campaign\":\"%2528not%2Bset%2529\",\"source\":\"www.bing.com\",\"content\":\"%2528not%2Bset%2529\"}},\"metrics\":{\"object\":{\"nimbus_targeting_context.os\":{\"isLinux\":false,\"isMac\":false,\"windowsBuildNumber\":19045,\"windowsVersion\":10},\"nimbus_targeting_context.browser_settings\":{"
		"\"update\":{\"channel\":\"release\"}},\"nimbus_targeting_context.home_page_settings\":{\"isCustomUrl\":false,\"isDefault\":true,\"isLocked\":false,\"isWebExt\":false},\"nimbus_targeting_environment.pref_values\":{\"browser__newtabpage__activity_stream__asrouter__userprefs__cfr__addons\":true,\"browser__newtabpage__activity_stream__asrouter__userprefs__cfr__features\":true,\"browser__newtabpage__activity_stream__feeds__section__highlights\":false,\""
		"browser__newtabpage__activity_stream__feeds__section__topstories\":true,\"browser__newtabpage__activity_stream__feeds__topsites\":true,\"browser__newtabpage__activity_stream__showSearch\":true,\"browser__newtabpage__activity_stream__showSponsoredTopSites\":true,\"browser__newtabpage__enabled\":true,\"browser__startup__page\":1,\"browser__toolbars__bookmarks__visibility\":\"newtab\",\"browser__urlbar__lastUrlbarSearchSeconds\":0,\"browser__urlbar__quicksuggest__dataCollection__enabled\":false,\""
		"browser__urlbar__showSearchSuggestionsFirst\":true,\"browser__urlbar__suggest__quicksuggest__sponsored\":false,\"media__videocontrols__picture_in_picture__enabled\":true,\"media__videocontrols__picture_in_picture__video_toggle__enabled\":true,\"media__videocontrols__picture_in_picture__video_toggle__has_used\":false,\"network__trr__mode\":0,\"security__sandbox__content__level\":8,\"trailhead__firstrun__didSeeAboutWelcome\":true,\"nimbus__qa__pref_1\":\"default\",\"nimbus__qa__pref_2\":\"default\"}"
		",\"nimbus_targeting_context.default_pdf_handler\":{\"knownBrowser\":true,\"registered\":true},\"nimbus_targeting_context.is_default_handler\":{\"html\":false,\"pdf\":false},\"nimbus_targeting_environment.user_set_prefs\":[\"nimbus.profilesdatastoreservice.read.enabled\",\"nimbus.profilesdatastoreservice.sync.enabled\",\"browser.search.separatePrivateDefault.urlbarResult.enabled\",\"browser.newtabpage.activity-stream.mobileDownloadModal.enabled\",\""
		"browser.newtabpage.activity-stream.mobileDownloadModal.variant-a\",\"browser.newtabpage.trainhopAddon.version\",\"signon.firefoxRelay.showToAllBrowsers\",\"browser.contextual-services.contextId.rotation-in-days\"],\"nimbus_targeting_context.addons_info\":{\"addons\":[\"addons-search-detection@mozilla.com\",\"data-leak-blocker@mozilla.com\",\"formautofill@mozilla.org\",\"ipp-activator@mozilla.com\",\"newtab@mozilla.org\",\"pictureinpicture@mozilla.org\",\"webcompat@mozilla.org\"],\""
		"hasInstalledAddons\":true},\"nimbus_targeting_context.primary_resolution\":{\"height\":760,\"width\":1280},\"nimbus_targeting_context.active_experiments\":[\"long-term-holdback-2025h1-growth-desktop\",\"mozilla-foundation-donation-promotion-moments-page\",\"smart-shortcuts-v3-sticky\"],\"nimbus_targeting_context.user_monthly_activity\":[{\"numberOfURLsVisited\":3,\"date\":\"2025-11-20\"},{\"numberOfURLsVisited\":1,\"date\":\"2025-12-03\"}],\"nimbus_targeting_context.active_rollouts\":[\""
		"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\",\"account-adoption-callout-credit-cards-treatment-c-rollout\",\"account-adoption-callout-passwords-global-rollout\",\"account-adoption-pxi-menu-rollout-v2\",\"acct-adoption-callout-addresses-rollout-with-pxi-required\",\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\",\"backgroundupdate-enable-unelevated-installations-rollout-3-release\",\"context-id-rotation-every-3-days\",\""
		"deprecate-ipaddrany-rollout-for-release\",\"desktop-address-autofill-india-release-rollout\",\"desktop-credit-card-autofill-global-enablement-rollout-release\",\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\",\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\",\"downsample-uptakeremotecontent-events\",\"enable-nimbus-unenrollment-synchronization\",\"encrypted-client-hello-fallback-mechanism\",\""
		"enforce-crlite-results-and-limit-use-of-ocsp-rollout\",\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\",\"fox-doodle-multi-action-cta-2025-rollout\",\"fx-accounts-ping-release-rollout-2\",\"improved-mailto-handling-with-os-integration-treatment-a-rollout\",\"new-tab-147020251114194929-to-release\",\"pdf-annotations-highlight-treatment-b-rollout\",\"pin-frequently-used-websites-143-promo-rollout-all-locales\",\"private-window-visual-refresh-rollout\",\""
		"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\",\"smart-tab-groups-rollout-beta\",\"taskbar-tabs-discovery-global-rollout\",\"temp-new-tab-mobile-qr-code-campaign-row\",\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\",\"visual-card-updates\",\"visual-search-rollout\",\"windows-10-eos-sync-and-reminder-messaging-rollout\",\"windows-ui-automation-release-rollout\"],\"nimbus_targeting_context.enrollments_map\":[{\"experimentSlug\":\""
		"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\",\"branchSlug\":\"treatment-a-tab-switching-copy\"},{\"experimentSlug\":\"account-adoption-callout-credit-cards-treatment-c-rollout\",\"branchSlug\":\"treatment-c\"},{\"experimentSlug\":\"account-adoption-callout-passwords-global-rollout\",\"branchSlug\":\"treatment-e\"},{\"experimentSlug\":\"account-adoption-pxi-menu-rollout-v2\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\""
		"account-spotlight-modal-english-rollout-v2\",\"branchSlug\":\"rollout\"},{\"experimentSlug\":\"acct-adoption-callout-addresses-rollout-with-pxi-required\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\",\"branchSlug\":\"treatment-a-callout-badge\"},{\"experimentSlug\":\"backgroundupdate-enable-unelevated-installations-rollout-3-release\",\"branchSlug\":\"enabled\"},{\"experimentSlug\":\""
		"consolidated-search-configuration-row-desktop-relaunch\",\"branchSlug\":\"rollout\"},{\"experimentSlug\":\"context-id-rotation-every-3-days\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"context-id-rotation-every-7-days\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"custom-wallpapers-no-message-rollout-release\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"deprecate-ipaddrany-rollout-for-release\",\"branchSlug\":\"control\"},{\"experimentSlug\":\""
		"desktop-address-autofill-india-release-rollout\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"desktop-credit-card-autofill-global-enablement-rollout-release\",\"branchSlug\":\"creditcard-enable\"},{\"experimentSlug\":\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\",\"branchSlug\":\"next-sign-up-modal-cta\"},{\"experimentSlug\":\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\",\"branchSlug\":\"control\"},{\"experimentSlug\":\""
		"downsample-uptakeremotecontent-events\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"enable-nimbus-unenrollment-synchronization\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"encrypted-client-hello-fallback-mechanism\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\",\"branchSlug\":\"enforce\"},{\"experimentSlug\":\"etp-strict-message-release\",\"branchSlug\":\"control\"},{\"experimentSlug\":\""
		"fast-udp-for-firefox-treatment-fast-udp-release-rollout\",\"branchSlug\":\"treatment-fast-udp\"},{\"experimentSlug\":\"fox-doodle-multi-action-cta-2025-rollout\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"fx-accounts-ping-release-rollout-2\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"fx-view-discoverability-rollout\",\"branchSlug\":\"treatment-b\"},{\"experimentSlug\":\"improved-mailto-handling-with-os-integration-treatment-a-rollout\",\"branchSlug\":\"treatment-a\"},{\""
		"experimentSlug\":\"long-term-holdback-2024-h2-velocity-desktop\",\"branchSlug\":\"delivery\"},{\"experimentSlug\":\"long-term-holdback-2025h1-growth-desktop\",\"branchSlug\":\"delivery\"},{\"experimentSlug\":\"mozilla-foundation-donation-promotion-moments-page\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"new-tab-145120251009134757-to-release\",\"branchSlug\":\"rollout\"},{\"experimentSlug\":\"new-tab-147020251114194929-to-release\",\"branchSlug\":\"rollout\"},{\"experimentSlug\":\""
		"one-click-sponsored-settings\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"pdf-annotations-highlight-treatment-b-rollout\",\"branchSlug\":\"treatment-b\"},{\"experimentSlug\":\"pin-frequently-used-websites-143-promo-rollout-all-locales\",\"branchSlug\":\"rollout-branch\"},{\"experimentSlug\":\"private-window-visual-refresh-rollout\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\",\"branchSlug\":\"sign-in-with-call-out\"},{"
		"\"experimentSlug\":\"smart-shortcuts-v3-sticky\",\"branchSlug\":\"sticky-frozen-thom\"},{\"experimentSlug\":\"smart-tab-groups-rollout-beta\",\"branchSlug\":\"smart-tab-groups\"},{\"experimentSlug\":\"storage-access-heuristic-restriction-rollout\",\"branchSlug\":\"treatment-branch\"},{\"experimentSlug\":\"taskbar-tabs-discovery-global-rollout\",\"branchSlug\":\"delivery\"},{\"experimentSlug\":\"temp-new-tab-mobile-qr-code-campaign-row\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\""
		"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"visual-card-updates\",\"branchSlug\":\"updated\"},{\"experimentSlug\":\"visual-search-rollout\",\"branchSlug\":\"google-lens-rollout\"},{\"experimentSlug\":\"windows-10-eos-sync-and-reminder-messaging-rollout\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"windows-10-eos-sync-messaging-rollout-2\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\""
		"windows-ui-automation-release-rollout\",\"branchSlug\":\"rollout\"}],\"nimbus_targeting_context.attribution_data\":{\"medium\":\"referral\",\"source\":\"www.bing.com\",\"ua\":\"edge\"}},\"quantity\":{\"nimbus_targeting_context.memory_mb\":16382,\"nimbus_targeting_context.addresses_saved\":0,\"nimbus_targeting_context.firefox_version\":145,\"nimbus_targeting_context.profile_group_profile_count\":0,\"nimbus_targeting_context.total_bookmarks_count\":5,\"nimbus_targeting_context.arch_bits\":64,\""
		"nimbus_targeting_context.profile_age_created\":1665919558706,\"nimbus_targeting_context.build_id\":1},\"uuid\":{\"legacy.telemetry.client_id\":\"f6637294-d75f-4350-be24-43ca2fcded9d\",\"legacy.telemetry.profile_group_id\":\"f6637294-d75f-4350-be24-43ca2fcded9d\"},\"string\":{\"nimbus_targeting_context.version\":\"145.0.2\",\"nimbus_targeting_context.distribution_id\":\"\",\"nimbus_targeting_context.region\":\"IN\",\"nimbus_targeting_context.current_date\":\"Thu, 04 Dec 2025 04:25:26 GMT\",\""
		"nimbus_targeting_context.locale\":\"en-US\"},\"boolean\":{\"nimbus_targeting_context.uses_firefox_sync\":false,\"nimbus_targeting_context.is_fx_a_signed_in\":false,\"nimbus_targeting_context.is_fx_a_enabled\":true,\"nimbus_targeting_context.has_active_enterprise_policies\":false,\"nimbus_targeting_context.is_default_browser\":false,\"nimbus_targeting_context.is_msix\":false,\"nimbus_targeting_context.has_pinned_tabs\":false,\"nimbus_targeting_context.does_app_need_pin\":false,\""
		"nimbus_targeting_context.is_first_startup\":false,\"nimbus_targeting_context.user_prefers_reduced_motion\":true}}}", 
		LAST);

	web_custom_request("b450bb0b-5d20-4470-b782-c6dfaae9fe7e", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/baseline/1/b450bb0b-5d20-4470-b782-c6dfaae9fe7e", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t19.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":29,\"start_time\":\"2025-12-04T09:47:58.000+05:30\",\"end_time\":\"2025-12-04T09:55:27.680+05:30\",\"reason\":\"active\",\"experiments\":{\"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-address-autofill-india-release-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout"
		"\"}},\"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\""
		"visual-search-rollout\":{\"branch\":\"google-lens-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"improved-mailto-handling-with-os-integration-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-passwords-global-rollout\":{\"branch\":\"treatment-e\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\"treatment-fast-udp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"acct-adoption-callout-addresses-rollout-with-pxi-required\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra\":{\"type\""
		":\"nimbus-rollout\"}},\"new-tab-147020251114194929-to-release\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-credit-card-autofill-global-enablement-rollout-release\":{\"branch\":\"creditcard-enable\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"account-adoption-callout-credit-cards-treatment-c-rollout\":{\"branch\":\"treatment-c\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"deprecate-ipaddrany-rollout-for-release\":{\"branch\":\"control\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\"next-sign-up-modal-cta\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\"treatment-a-callout-badge\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\"rollout-branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-10-eos-sync-and-reminder-messaging-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-tab-groups-rollout-beta\":{\""
		"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"temp-new-tab-mobile-qr-code-campaign-row\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-shortcuts-v3-sticky\":{\"branch\":\"sticky-frozen-thom\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"65.2.3\",\"client_id\":\"90571d99-40b9-4f10-9a9a-227b856f2593\",\"windows_build_number\":19045,\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2022-10-16+05:30\",\"locale\":\"en-US\",\"os\":\"Windows\""
		",\"app_build\":\"20251124145406\",\"app_channel\":\"release\",\"architecture\":\"x86_64\",\"app_display_version\":\"145.0.2\",\"os_version\":\"10.0\",\"attribution\":{\"medium\":\"referral\",\"campaign\":\"%2528not%2Bset%2529\",\"source\":\"www.bing.com\",\"content\":\"%2528not%2Bset%2529\"}},\"metrics\":{\"counter\":{\"browser.engagement.uri_count\":1,\"browser.engagement.active_ticks\":7},\"boolean\":{\"usage.is_default_browser\":false},\"string\":{\"startup.profile_selection_reason\":\"default"
		"\",\"usage.distribution_id\":\"default\"},\"uuid\":{\"legacy.telemetry.profile_group_id\":\"f6637294-d75f-4350-be24-43ca2fcded9d\",\"legacy.telemetry.client_id\":\"f6637294-d75f-4350-be24-43ca2fcded9d\"},\"datetime\":{\"glean.validation.first_run_hour\":\"2022-10-16T16+05:30\"},\"labeled_counter\":{\"glean.validation.pings_submitted\":{\"baseline\":1,\"events\":1}}}}", 
		LAST);

	web_custom_request("clicks", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/clicks?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"96d5132d-8382-4cf5-8253-5355fc8ebb4f\",\"iso_time_full\":\"2025-12-04T04:25:31.236Z\",\"local_time_full\":\"Thu Dec 04 2025 09:55:31 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"4e2bcbae-544e-47ad-b01a-43a4f54ea4dc\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"81bf27df-9ae8-4e10-9100-9a14dedc28dd\",\"tracker_loaded_at\":\"2025-12-04T04:25:30.098Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"34ca1b82-3816-4641-bedc-0458a9968f8f\"},\"page\":{\"title\":\"BlazeDemo\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":675,\"pixel_max\":675,\"ratio\":1,\"ratio_max\":1},\"time_on_page\":1,\"time_on_page_ms\":1138},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\":true,\""
		"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":675,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/\",\"info\":{}},\"referrer\":{\""
		"full\":\"\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T04:25:31.236Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\""
		"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]},\"element\":{\"class\":\"form-inline\",\"href\":null,\"id\":null,\"name\":\"fromPort\",\"all_attrs\":{\"name\":\"fromPort\",\"class\":\"form-inline\",\"unique_selector\":\"form > :nth-child(1)\"},\"node_name\":\"SELECT\",\"tag_name\":\"SELECT\",\"text\":null,\"title"
		"\":null,\"type\":null,\"n_parents\":[{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"action\":\"reserve.php\",\"method\":\"post\",\"unique_selector\":\"form\"},\"node_name\":\"FORM\",\"tag_name\":\"FORM\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":1},{\"class\":\"container\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"container\",\"unique_selector\":\"body > :nth-child(3)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\""
		"title\":null,\"type\":null,\"nth_parent\":2},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"body\"},\"node_name\":\"BODY\",\"tag_name\":\"BODY\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":3},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"lang\":\"en\",\"unique_selector\":\"html\"},\"node_name\":\"HTML\",\"tag_name\":\"HTML\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":4},{\"class\":null,\"href\""
		":null,\"id\":null,\"name\":null,\"all_attrs\":{},\"node_name\":\"#document\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":5}],\"selector\":\"body > div:eq(2) > form > select:eq(0)\",\"text_content\":\"---REDACTED---\",\"cursor\":\"pointer\",\"x_position\":55,\"y_position\":242}}", 
		LAST);

	web_custom_request("24c01565-fee0-4ad6-9e43-802cbef03dea", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/usage-reporting/1/24c01565-fee0-4ad6-9e43-802cbef03dea", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t21.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"metrics\":{\"counter\":{\"browser.engagement.uri_count\":1,\"browser.engagement.active_ticks\":7},\"boolean\":{\"usage.is_default_browser\":false,\"usage.windows_backup_enabled\":false},\"quantity\":{\"usage.windows_build_number\":19045,\"usage.windows_user_profile_age_in_days\":1145},\"uuid\":{\"usage.profile_group_id\":\"9285e5cf-d171-4f29-a5b8-d53d109d51a8\",\"usage.profile_id\":\"5ae6e87b-e670-4529-b684-10268475dcce\"},\"datetime\":{\"usage.first_run_date\":\"2022-10-16+05:30\"},\""
		"string\":{\"usage.app_build\":\"20251124145406\",\"usage.app_channel\":\"release\",\"usage.os\":\"WINNT\",\"usage.distribution_id\":\"default\",\"usage.app_display_version\":\"145.0.2\",\"usage.os_version\":\"10.0\"}}}", 
		LAST);

	web_custom_request("1f8b0e31-58a1-47e9-abda-c94bff20fa83", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/health/1/1f8b0e31-58a1-47e9-abda-c94bff20fa83", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t22.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":20,\"start_time\":\"2025-12-04T09:47:58.000+05:30\",\"end_time\":\"2025-12-04T09:55:27.708+05:30\",\"reason\":\"pre_init\",\"experiments\":{\"improved-mailto-handling-with-os-integration-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\""
		"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-credit-cards-treatment-c-rollout\":{\"branch\":\"treatment-c\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\"rollout-branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-credit-card-autofill-global-enablement-rollout-release\":{\"branch\":\"creditcard-enable\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-passwords-global-rollout\":{\"branch\":\"treatment-e\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"new-tab-147020251114194929-to-release\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"downsample-uptakeremotecontent-events\":{\"branch\":\""
		"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\""
		"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-10-eos-sync-and-reminder-messaging-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"acct-adoption-callout-addresses-rollout-with-pxi-required\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"temp-new-tab-mobile-qr-code-campaign-row\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\"treatment-a-callout-badge\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-search-rollout\":{\"branch\":\"google-lens-rollout\",\"extra\":{\""
		"type\":\"nimbus-rollout\"}},\"deprecate-ipaddrany-rollout-for-release\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-tab-groups-rollout-beta\":{\"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\"treatment-fast-udp\",\"extra\":{\""
		"type\":\"nimbus-rollout\"}},\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-shortcuts-v3-sticky\":{\"branch\":\"sticky-frozen-thom\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\""
		"desktop-address-autofill-india-release-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\"next-sign-up-modal-cta\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"65.2.3\",\"windows_build_number\":19045,\"first_run_date\":\"2022-10-16+05:30\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"client_id\":\"90571d99-40b9-4f10-9a9a-227b856f2593\","
		"\"app_build\":\"20251124145406\",\"os_version\":\"10.0\",\"app_channel\":\"release\",\"app_display_version\":\"145.0.2\",\"os\":\"Windows\",\"architecture\":\"x86_64\",\"locale\":\"en-US\",\"attribution\":{\"campaign\":\"%2528not%2Bset%2529\",\"content\":\"%2528not%2Bset%2529\",\"medium\":\"referral\",\"source\":\"www.bing.com\"}},\"metrics\":{\"memory_distribution\":{\"glean.database.size\":{\"values\":{\"185363\":1},\"sum\":191896},\"glean.upload.pending_pings_directory_size\":{\"values\":{\""
		"6049\":1},\"sum\":6144}},\"timing_distribution\":{\"glean.upload.send_failure\":{\"values\":{\"379625062\":1,\"87029429\":1,\"73182735\":1,\"159612677\":1},\"sum\":743366000},\"glean.upload.send_success\":{\"values\":{\"268435456\":1,\"638450708\":1,\"319225354\":2,\"1969251187\":1,\"292730940\":3},\"sum\":4507999100},\"glean.validation.shutdown_wait\":{\"values\":{\"1763487\":1},\"sum\":1822400},\"glean.validation.shutdown_dispatcher_wait\":{\"values\":{\"1617125\":1},\"sum\":1684300}},\"counter"
		"\":{\"glean.upload.pending_pings\":2,\"glean.health.init_count\":11},\"labeled_counter\":{\"glean.validation.pings_submitted\":{\"baseline\":1,\"events\":1},\"glean.upload.ping_upload_failure\":{\"recoverable\":4}},\"object\":{\"glean.database.load_sizes\":{\"new\":191896,\"open\":191896,\"post_open\":191896,\"post_open_user\":191896,\"post_load_ping_lifetime_data\":191896,\"user_records\":62,\"ping_records\":835,\"application_records\":301,\"ping_memory_records\":835},\""
		"glean.health.data_directory_info\":[{\"dir_name\":\"db\",\"dir_exists\":true,\"dir_created\":1665919583,\"dir_modified\":1764822321,\"file_count\":1,\"files\":[{\"file_name\":\"data.safe.bin\",\"file_created\":1764822320,\"file_modified\":1764822321,\"file_size\":191896}]},{\"dir_name\":\"events\",\"dir_exists\":true,\"dir_created\":1665919583,\"dir_modified\":1764821877,\"file_count\":2,\"files\":[{\"file_name\":\"events\",\"file_created\":1733465245,\"file_modified\":1764822321,\"file_size\""
		":3199},{\"file_name\":\"prototype-no-code-events\",\"file_created\":1733395015,\"file_modified\":1762144555,\"file_size\":645}]},{\"dir_name\":\"pending_pings\",\"dir_exists\":true,\"dir_created\":1665919583,\"dir_modified\":1764822321,\"file_count\":2,\"files\":[{\"file_name\":\"09f654cb-0bf5-4a13-ae82-273df63d00a2\",\"file_created\":1764757770,\"file_modified\":1764757770,\"file_size\":368},{\"file_name\":\"6d98c56e-7489-40c0-a393-a4d0b9e70360\",\"file_created\":1764822321,\"file_modified\""
		":1764822321,\"file_size\":6442}]}]},\"uuid\":{\"legacy.telemetry.profile_group_id\":\"f6637294-d75f-4350-be24-43ca2fcded9d\",\"legacy.telemetry.client_id\":\"f6637294-d75f-4350-be24-43ca2fcded9d\"}}}", 
		LAST);

	web_custom_request("ea08fabe-521f-4679-9379-820127fdfa18", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/health/1/ea08fabe-521f-4679-9379-820127fdfa18", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t23.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":21,\"start_time\":\"2025-12-04T09:55:27.000+05:30\",\"end_time\":\"2025-12-04T09:55:27.716+05:30\",\"reason\":\"post_init\",\"experiments\":{\"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\"treatment-fast-udp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":"
		"\"nimbus-rollout\"}},\"desktop-credit-card-autofill-global-enablement-rollout-release\":{\"branch\":\"creditcard-enable\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"improved-mailto-handling-with-os-integration-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-10-eos-sync-and-reminder-messaging-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"temp-new-tab-mobile-qr-code-campaign-row\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"acct-adoption-callout-addresses-rollout-with-pxi-required\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"deprecate-ipaddrany-rollout-for-release\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-shortcuts-v3-sticky\":{\"branch\":\"sticky-frozen-thom\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\""
		"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-passwords-global-rollout\":{\"branch\":\"treatment-e\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"new-tab-147020251114194929-to-release\":{"
		"\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-search-rollout\":{\"branch\":\"google-lens-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-credit-cards-treatment-c-rollout\":{\"branch\":\"treatment-c\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\"treatment-a-callout-badge"
		"\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-address-autofill-india-release-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\"next-sign-up-modal-cta\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-tab-groups-rollout-beta\":{\"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\""
		"branch\":\"rollout-branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-nimbus\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"65.2.3\",\"windows_build_number\":19045,\"app_channel\":\"release\",\"app_display_version\":\"145.0.2\",\"locale\":\"en-US\",\"os\":\"Windows\",\"os_version\":\"10.0\",\"architecture\":\"x86_64\",\"app_build\":\"20251124145406\",\"client_id\":\""
		"90571d99-40b9-4f10-9a9a-227b856f2593\",\"first_run_date\":\"2022-10-16+05:30\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"attribution\":{\"campaign\":\"%2528not%2Bset%2529\",\"source\":\"www.bing.com\",\"medium\":\"referral\",\"content\":\"%2528not%2Bset%2529\"}},\"metrics\":{\"counter\":{\"glean.health.init_count\":11},\"object\":{\"glean.health.data_directory_info\":[{\"dir_name\":\"db\",\"dir_exists\":true,\"dir_created\":1665919583,\"dir_modified\":1764822327,\"file_count\":1,\"files\":[{"
		"\"file_name\":\"data.safe.bin\",\"file_created\":1764822320,\"file_modified\":1764822327,\"file_size\":189851}]},{\"dir_name\":\"events\",\"dir_exists\":true,\"dir_created\":1665919583,\"dir_modified\":1764822327,\"file_count\":2,\"files\":[{\"file_name\":\"events\",\"file_created\":1733465245,\"file_modified\":1764822327,\"file_size\":0},{\"file_name\":\"prototype-no-code-events\",\"file_created\":1733395015,\"file_modified\":1762144555,\"file_size\":645}]},{\"dir_name\":\"pending_pings\",\""
		"dir_exists\":true,\"dir_created\":1665919583,\"dir_modified\":1764822327,\"file_count\":8,\"files\":[{\"file_name\":\"09f654cb-0bf5-4a13-ae82-273df63d00a2\",\"file_created\":1764757770,\"file_modified\":1764757770,\"file_size\":368},{\"file_name\":\"1f8b0e31-58a1-47e9-abda-c94bff20fa83\",\"file_created\":1764822327,\"file_modified\":1764822327,\"file_size\":7009},{\"file_name\":\"24c01565-fee0-4ad6-9e43-802cbef03dea\",\"file_created\":1764822327,\"file_modified\":1764822327,\"file_size\":831},{\""
		"file_name\":\"56838e0a-ebe2-4037-b0d4-d032935a2588\",\"file_created\":1764822327,\"file_modified\":1764822327,\"file_size\":15578},{\"file_name\":\"6d98c56e-7489-40c0-a393-a4d0b9e70360\",\"file_created\":1764822321,\"file_modified\":1764822321,\"file_size\":6442},{\"file_name\":\"8a5c2561-eead-40d9-9c9e-1edb68bfde90\",\"file_created\":1764822327,\"file_modified\":1764822327,\"file_size\":955},{\"file_name\":\"b450bb0b-5d20-4470-b782-c6dfaae9fe7e\",\"file_created\":1764822327,\"file_modified\""
		":1764822327,\"file_size\":5416},{\"file_name\":\"c92b7e28-7b2b-4e26-8c07-8ffd18684d74\",\"file_created\":1764822327,\"file_modified\":1764822327,\"file_size\":9245}]}]},\"uuid\":{\"legacy.telemetry.profile_group_id\":\"f6637294-d75f-4350-be24-43ca2fcded9d\",\"legacy.telemetry.client_id\":\"f6637294-d75f-4350-be24-43ca2fcded9d\"}}}", 
		LAST);

	web_url("canonical.html_4", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/success.txt?ipv4", "Referer=", ENDITEM, 
		LAST);

	web_url("canonical.html_5", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/success.txt?ipv4", "Referer=", ENDITEM, 
		LAST);

	web_custom_request("clicks_2", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/clicks?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"62c3149f-e35e-4aca-b9aa-c98d73fa5188\",\"iso_time_full\":\"2025-12-04T04:25:36.665Z\",\"local_time_full\":\"Thu Dec 04 2025 09:55:36 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"4e2bcbae-544e-47ad-b01a-43a4f54ea4dc\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"81bf27df-9ae8-4e10-9100-9a14dedc28dd\",\"tracker_loaded_at\":\"2025-12-04T04:25:30.098Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"34ca1b82-3816-4641-bedc-0458a9968f8f\"},\"page\":{\"title\":\"BlazeDemo\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":675,\"pixel_max\":675,\"ratio\":1,\"ratio_max\":1},\"time_on_page\":7,\"time_on_page_ms\":6567},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\":true,\""
		"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":675,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/\",\"info\":{}},\"referrer\":{\""
		"full\":\"\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T04:25:36.665Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\""
		"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]},\"element\":{\"class\":\"form-inline\",\"href\":null,\"id\":null,\"name\":\"fromPort\",\"all_attrs\":{\"name\":\"fromPort\",\"class\":\"form-inline\",\"unique_selector\":\"form > :nth-child(1)\"},\"node_name\":\"SELECT\",\"tag_name\":\"SELECT\",\"text\":null,\"title"
		"\":null,\"type\":null,\"n_parents\":[{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"action\":\"reserve.php\",\"method\":\"post\",\"unique_selector\":\"form\"},\"node_name\":\"FORM\",\"tag_name\":\"FORM\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":1},{\"class\":\"container\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"container\",\"unique_selector\":\"body > :nth-child(3)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\""
		"title\":null,\"type\":null,\"nth_parent\":2},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"body\"},\"node_name\":\"BODY\",\"tag_name\":\"BODY\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":3},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"lang\":\"en\",\"unique_selector\":\"html\"},\"node_name\":\"HTML\",\"tag_name\":\"HTML\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":4},{\"class\":null,\"href\""
		":null,\"id\":null,\"name\":null,\"all_attrs\":{},\"node_name\":\"#document\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":5}],\"selector\":\"body > div:eq(2) > form > select:eq(0)\",\"text_content\":\"---REDACTED---\",\"cursor\":\"pointer\",\"x_position\":55,\"y_position\":242}}", 
		LAST);

	lr_think_time(4);

	web_custom_request("clicks_3", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/clicks?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"26fed9f3-0621-454c-ad20-ff7477419446\",\"iso_time_full\":\"2025-12-04T04:25:41.390Z\",\"local_time_full\":\"Thu Dec 04 2025 09:55:41 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"4e2bcbae-544e-47ad-b01a-43a4f54ea4dc\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"81bf27df-9ae8-4e10-9100-9a14dedc28dd\",\"tracker_loaded_at\":\"2025-12-04T04:25:30.098Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"34ca1b82-3816-4641-bedc-0458a9968f8f\"},\"page\":{\"title\":\"BlazeDemo\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":675,\"pixel_max\":675,\"ratio\":1,\"ratio_max\":1},\"time_on_page\":11,\"time_on_page_ms\":11292},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\":true,\""
		"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":675,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/\",\"info\":{}},\"referrer\":{\""
		"full\":\"\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T04:25:41.390Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\""
		"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]},\"element\":{\"class\":\"form-inline\",\"href\":null,\"id\":null,\"name\":\"fromPort\",\"all_attrs\":{\"name\":\"fromPort\",\"class\":\"form-inline\",\"unique_selector\":\"form > :nth-child(1)\"},\"node_name\":\"SELECT\",\"tag_name\":\"SELECT\",\"text\":null,\"title"
		"\":null,\"type\":null,\"n_parents\":[{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"action\":\"reserve.php\",\"method\":\"post\",\"unique_selector\":\"form\"},\"node_name\":\"FORM\",\"tag_name\":\"FORM\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":1},{\"class\":\"container\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"container\",\"unique_selector\":\"body > :nth-child(3)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\""
		"title\":null,\"type\":null,\"nth_parent\":2},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"body\"},\"node_name\":\"BODY\",\"tag_name\":\"BODY\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":3},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"lang\":\"en\",\"unique_selector\":\"html\"},\"node_name\":\"HTML\",\"tag_name\":\"HTML\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":4},{\"class\":null,\"href\""
		":null,\"id\":null,\"name\":null,\"all_attrs\":{},\"node_name\":\"#document\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":5}],\"selector\":\"body > div:eq(2) > form > select:eq(0)\",\"text_content\":\"---REDACTED---\",\"cursor\":\"pointer\",\"x_position\":55,\"y_position\":242}}", 
		LAST);

	web_custom_request("clicks_4", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/clicks?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"6fe2fa94-fd6f-408a-aa5f-74f93e43da1f\",\"iso_time_full\":\"2025-12-04T04:25:43.507Z\",\"local_time_full\":\"Thu Dec 04 2025 09:55:43 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"4e2bcbae-544e-47ad-b01a-43a4f54ea4dc\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"81bf27df-9ae8-4e10-9100-9a14dedc28dd\",\"tracker_loaded_at\":\"2025-12-04T04:25:30.098Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"34ca1b82-3816-4641-bedc-0458a9968f8f\"},\"page\":{\"title\":\"BlazeDemo\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":675,\"pixel_max\":675,\"ratio\":1,\"ratio_max\":1},\"time_on_page\":13,\"time_on_page_ms\":13409},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\":true,\""
		"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":675,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/\",\"info\":{}},\"referrer\":{\""
		"full\":\"\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T04:25:43.507Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\""
		"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]},\"element\":{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"form > :nth-child(1) > :nth-child(1)\"},\"node_name\":\"OPTION\",\"tag_name\":\"OPTION\",\"text\":null,\"title\":null,\"type\":null,\"n_parents\":[{\"class\":\""
		"form-inline\",\"href\":null,\"id\":null,\"name\":\"fromPort\",\"all_attrs\":{\"name\":\"fromPort\",\"class\":\"form-inline\",\"unique_selector\":\"form > :nth-child(1)\"},\"node_name\":\"SELECT\",\"tag_name\":\"SELECT\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":1},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"action\":\"reserve.php\",\"method\":\"post\",\"unique_selector\":\"form\"},\"node_name\":\"FORM\",\"tag_name\":\"FORM\",\"text\":null,\"title\":null"
		",\"type\":null,\"nth_parent\":2},{\"class\":\"container\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"container\",\"unique_selector\":\"body > :nth-child(3)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":3},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"body\"},\"node_name\":\"BODY\",\"tag_name\":\"BODY\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":4},{\""
		"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"lang\":\"en\",\"unique_selector\":\"html\"},\"node_name\":\"HTML\",\"tag_name\":\"HTML\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":5},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{},\"node_name\":\"#document\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":6}],\"selector\":\"body > div:eq(2) > form > select:eq(0) > option:eq(0)\",\"text_content\":\"---REDACTED---\",\"cursor\":"
		"\"pointer\",\"x_position\":null,\"y_position\":null}}", 
		LAST);

	web_custom_request("clicks_5", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/clicks?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"cf217838-76d6-4682-b5b5-1dfae18f379e\",\"iso_time_full\":\"2025-12-04T04:25:44.671Z\",\"local_time_full\":\"Thu Dec 04 2025 09:55:44 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"4e2bcbae-544e-47ad-b01a-43a4f54ea4dc\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"81bf27df-9ae8-4e10-9100-9a14dedc28dd\",\"tracker_loaded_at\":\"2025-12-04T04:25:30.098Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"34ca1b82-3816-4641-bedc-0458a9968f8f\"},\"page\":{\"title\":\"BlazeDemo\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":675,\"pixel_max\":675,\"ratio\":1,\"ratio_max\":1},\"time_on_page\":15,\"time_on_page_ms\":14574},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\":true,\""
		"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":675,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/\",\"info\":{}},\"referrer\":{\""
		"full\":\"\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T04:25:44.672Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\""
		"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]},\"element\":{\"class\":\"form-inline\",\"href\":null,\"id\":null,\"name\":\"toPort\",\"all_attrs\":{\"name\":\"toPort\",\"class\":\"form-inline\",\"unique_selector\":\"form > :nth-child(4)\"},\"node_name\":\"SELECT\",\"tag_name\":\"SELECT\",\"text\":null,\"title\""
		":null,\"type\":null,\"n_parents\":[{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"action\":\"reserve.php\",\"method\":\"post\",\"unique_selector\":\"form\"},\"node_name\":\"FORM\",\"tag_name\":\"FORM\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":1},{\"class\":\"container\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"container\",\"unique_selector\":\"body > :nth-child(3)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\""
		"title\":null,\"type\":null,\"nth_parent\":2},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"body\"},\"node_name\":\"BODY\",\"tag_name\":\"BODY\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":3},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"lang\":\"en\",\"unique_selector\":\"html\"},\"node_name\":\"HTML\",\"tag_name\":\"HTML\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":4},{\"class\":null,\"href\""
		":null,\"id\":null,\"name\":null,\"all_attrs\":{},\"node_name\":\"#document\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":5}],\"selector\":\"body > div:eq(2) > form > select:eq(1)\",\"text_content\":\"---REDACTED---\",\"cursor\":\"pointer\",\"x_position\":55,\"y_position\":342}}", 
		LAST);

	web_custom_request("changes", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/changes?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"786fc597-5a89-4e5e-9602-834e1925cd2b\",\"iso_time_full\":\"2025-12-04T04:25:46.348Z\",\"local_time_full\":\"Thu Dec 04 2025 09:55:46 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"4e2bcbae-544e-47ad-b01a-43a4f54ea4dc\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"81bf27df-9ae8-4e10-9100-9a14dedc28dd\",\"tracker_loaded_at\":\"2025-12-04T04:25:30.098Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"34ca1b82-3816-4641-bedc-0458a9968f8f\"},\"page\":{\"title\":\"BlazeDemo\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":675,\"pixel_max\":675,\"ratio\":1,\"ratio_max\":1},\"time_on_page\":16,\"time_on_page_ms\":16250},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\":true,\""
		"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":675,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/\",\"info\":{}},\"referrer\":{\""
		"full\":\"\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T04:25:46.348Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\""
		"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]},\"element\":{\"class\":\"form-inline\",\"href\":null,\"id\":null,\"name\":\"toPort\",\"all_attrs\":{\"name\":\"toPort\",\"class\":\"form-inline\",\"unique_selector\":\"form > :nth-child(4)\"},\"node_name\":\"SELECT\",\"tag_name\":\"SELECT\",\"text\":null,\"title\""
		":null,\"type\":null,\"n_parents\":[{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"action\":\"reserve.php\",\"method\":\"post\",\"unique_selector\":\"form\"},\"node_name\":\"FORM\",\"tag_name\":\"FORM\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":1},{\"class\":\"container\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"container\",\"unique_selector\":\"body > :nth-child(3)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\""
		"title\":null,\"type\":null,\"nth_parent\":2},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"body\"},\"node_name\":\"BODY\",\"tag_name\":\"BODY\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":3},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"lang\":\"en\",\"unique_selector\":\"html\"},\"node_name\":\"HTML\",\"tag_name\":\"HTML\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":4},{\"class\":null,\"href\""
		":null,\"id\":null,\"name\":null,\"all_attrs\":{},\"node_name\":\"#document\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":5}],\"selector\":\"body > div:eq(2) > form > select:eq(1)\",\"text_content\":\"---REDACTED---\",\"cursor\":\"pointer\",\"x_position\":55,\"y_position\":342}}", 
		LAST);

	web_custom_request("clicks_6", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/clicks?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"2bca5cd3-71ff-4cdc-8768-a94f8ce0fdf3\",\"iso_time_full\":\"2025-12-04T04:25:46.350Z\",\"local_time_full\":\"Thu Dec 04 2025 09:55:46 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"4e2bcbae-544e-47ad-b01a-43a4f54ea4dc\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"81bf27df-9ae8-4e10-9100-9a14dedc28dd\",\"tracker_loaded_at\":\"2025-12-04T04:25:30.098Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"34ca1b82-3816-4641-bedc-0458a9968f8f\"},\"page\":{\"title\":\"BlazeDemo\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":675,\"pixel_max\":675,\"ratio\":1,\"ratio_max\":1},\"time_on_page\":16,\"time_on_page_ms\":16252},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\":true,\""
		"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":675,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/\",\"info\":{}},\"referrer\":{\""
		"full\":\"\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T04:25:46.350Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\""
		"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]},\"element\":{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\":nth-child(4) > :nth-child(3)\"},\"node_name\":\"OPTION\",\"tag_name\":\"OPTION\",\"text\":null,\"title\":null,\"type\":null,\"n_parents\":[{\"class\":\""
		"form-inline\",\"href\":null,\"id\":null,\"name\":\"toPort\",\"all_attrs\":{\"name\":\"toPort\",\"class\":\"form-inline\",\"unique_selector\":\"form > :nth-child(4)\"},\"node_name\":\"SELECT\",\"tag_name\":\"SELECT\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":1},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"action\":\"reserve.php\",\"method\":\"post\",\"unique_selector\":\"form\"},\"node_name\":\"FORM\",\"tag_name\":\"FORM\",\"text\":null,\"title\":null,\""
		"type\":null,\"nth_parent\":2},{\"class\":\"container\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"container\",\"unique_selector\":\"body > :nth-child(3)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":3},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"body\"},\"node_name\":\"BODY\",\"tag_name\":\"BODY\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":4},{\"class\""
		":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"lang\":\"en\",\"unique_selector\":\"html\"},\"node_name\":\"HTML\",\"tag_name\":\"HTML\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":5},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{},\"node_name\":\"#document\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":6}],\"selector\":\"body > div:eq(2) > form > select:eq(1) > option:eq(2)\",\"text_content\":\"---REDACTED---\",\"cursor\":\""
		"pointer\",\"x_position\":null,\"y_position\":null}}", 
		LAST);

	web_custom_request("clicks_7", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/clicks?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"9ea176c1-212e-400c-84f8-5bedd34b6e55\",\"iso_time_full\":\"2025-12-04T04:25:48.544Z\",\"local_time_full\":\"Thu Dec 04 2025 09:55:48 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"4e2bcbae-544e-47ad-b01a-43a4f54ea4dc\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"81bf27df-9ae8-4e10-9100-9a14dedc28dd\",\"tracker_loaded_at\":\"2025-12-04T04:25:30.098Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"34ca1b82-3816-4641-bedc-0458a9968f8f\"},\"page\":{\"title\":\"BlazeDemo\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":675,\"pixel_max\":675,\"ratio\":1,\"ratio_max\":1},\"time_on_page\":18,\"time_on_page_ms\":18446},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\":true,\""
		"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":675,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/\",\"info\":{}},\"referrer\":{\""
		"full\":\"\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T04:25:48.544Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\""
		"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]},\"element\":{\"class\":\"btn btn-primary\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"type\":\"submit\",\"class\":\"btn btn-primary\",\"unique_selector\":\"form > .container > .btn\"},\"node_name\":\"INPUT\",\"tag_name\":\"INPUT\",\"text\":null,\"title"
		"\":null,\"type\":\"submit\",\"n_parents\":[{\"class\":\"container\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"container\",\"unique_selector\":\"form > .container\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":1},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"action\":\"reserve.php\",\"method\":\"post\",\"unique_selector\":\"form\"},\"node_name\":\"FORM\",\"tag_name\":\"FORM\",\"text\":null,"
		"\"title\":null,\"type\":null,\"nth_parent\":2},{\"class\":\"container\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"container\",\"unique_selector\":\"body > :nth-child(3)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":3},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"body\"},\"node_name\":\"BODY\",\"tag_name\":\"BODY\",\"text\":null,\"title\":null,\"type\":null,\""
		"nth_parent\":4},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"lang\":\"en\",\"unique_selector\":\"html\"},\"node_name\":\"HTML\",\"tag_name\":\"HTML\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":5},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{},\"node_name\":\"#document\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":6}],\"selector\":\"body > div:eq(2) > form > div > input\",\"text_content\":null,\"cursor\":\"pointer\","
		"\"x_position\":55,\"y_position\":392}}", 
		LAST);

	web_custom_request("form_submissions", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/form_submissions?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"be41577c-5a60-4887-8ab6-36a879651521\",\"iso_time_full\":\"2025-12-04T04:25:48.546Z\",\"local_time_full\":\"Thu Dec 04 2025 09:55:48 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"4e2bcbae-544e-47ad-b01a-43a4f54ea4dc\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"81bf27df-9ae8-4e10-9100-9a14dedc28dd\",\"tracker_loaded_at\":\"2025-12-04T04:25:30.098Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"34ca1b82-3816-4641-bedc-0458a9968f8f\"},\"page\":{\"title\":\"BlazeDemo\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":675,\"pixel_max\":675,\"ratio\":1,\"ratio_max\":1},\"time_on_page\":18,\"time_on_page_ms\":18448},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\":true,\""
		"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":675,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/\",\"info\":{}},\"referrer\":{\""
		"full\":\"\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T04:25:48.546Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\""
		"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]},\"form\":{\"action\":\"https://blazedemo.com/reserve.php\",\"fields\":{\"fromPort\":\"---REDACTED---\",\"toPort\":\"---REDACTED---\"},\"method\":\"post\"},\"element\":{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"action\":\"reserve.php\",\""
		"method\":\"post\",\"unique_selector\":\"form\"},\"node_name\":\"FORM\",\"tag_name\":\"FORM\",\"text\":null,\"title\":null,\"type\":null,\"action\":\"https://blazedemo.com/reserve.php\",\"method\":\"post\",\"n_parents\":[{\"class\":\"container\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"container\",\"unique_selector\":\"body > :nth-child(3)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":1},{\"class\":null,\"href\""
		":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"body\"},\"node_name\":\"BODY\",\"tag_name\":\"BODY\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":2},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"lang\":\"en\",\"unique_selector\":\"html\"},\"node_name\":\"HTML\",\"tag_name\":\"HTML\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":3},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{},\"node_name\":\""
		"#document\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":4}],\"selector\":\"body > div:eq(2) > form\",\"text_content\":\"---REDACTED---\",\"cursor\":\"auto\",\"x_position\":55,\"y_position\":242}}", 
		LAST);

	web_custom_request("pageunloads", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/pageunloads?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"4481f17b-8db8-430a-b64d-47ce593989e8\",\"iso_time_full\":\"2025-12-04T04:25:48.547Z\",\"local_time_full\":\"Thu Dec 04 2025 09:55:48 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"4e2bcbae-544e-47ad-b01a-43a4f54ea4dc\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"81bf27df-9ae8-4e10-9100-9a14dedc28dd\",\"tracker_loaded_at\":\"2025-12-04T04:25:30.098Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"34ca1b82-3816-4641-bedc-0458a9968f8f\"},\"page\":{\"title\":\"BlazeDemo\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":675,\"pixel_max\":675,\"ratio\":1,\"ratio_max\":1},\"time_on_page\":18,\"time_on_page_ms\":18449},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\":true,\""
		"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":675,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/\",\"info\":{}},\"referrer\":{\""
		"full\":\"\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T04:25:48.547Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\""
		"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]}}", 
		LAST);

	web_add_cookie("prodperfect_session={%22session_uuid%22:%224e2bcbae-544e-47ad-b01a-43a4f54ea4dc%22}; DOMAIN=blazedemo.com");

	web_add_cookie("keen={%22uuid%22:%2234ca1b82-3816-4641-bedc-0458a9968f8f%22%2C%22initialReferrer%22:null}; DOMAIN=blazedemo.com");

	web_submit_data("reserve.php", 
		"Action=https://blazedemo.com/reserve.php", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
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
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"5b07dfd8-4989-431e-8bb1-162c900765ef\",\"iso_time_full\":\"2025-12-04T04:25:49.205Z\",\"local_time_full\":\"Thu Dec 04 2025 09:55:49 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"4e2bcbae-544e-47ad-b01a-43a4f54ea4dc\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"ea68183d-d615-409e-b185-a60ee41d963f\",\"tracker_loaded_at\":\"2025-12-04T04:25:49.204Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"34ca1b82-3816-4641-bedc-0458a9968f8f\"},\"page\":{\"title\":\"BlazeDemo - reserve\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":675,\"pixel_max\":675,\"ratio\":1,\"ratio_max\":1},\"time_on_page\":0,\"time_on_page_ms\":2},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\":true,\""
		"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":675,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/reserve.php\",\"info\":{}},\""
		"referrer\":{\"initial\":\"https://blazedemo.com/\",\"full\":\"https://blazedemo.com/\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T04:25:49.206Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\"name\":\"keen"
		":date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]}}", 
		LAST);

	web_custom_request("clicks_8", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/clicks?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"249649fb-ead8-4544-a22f-d1eb5d2af4b8\",\"iso_time_full\":\"2025-12-04T04:25:51.081Z\",\"local_time_full\":\"Thu Dec 04 2025 09:55:51 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"4e2bcbae-544e-47ad-b01a-43a4f54ea4dc\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"ea68183d-d615-409e-b185-a60ee41d963f\",\"tracker_loaded_at\":\"2025-12-04T04:25:49.204Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"34ca1b82-3816-4641-bedc-0458a9968f8f\"},\"page\":{\"title\":\"BlazeDemo - reserve\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":675,\"pixel_max\":675,\"ratio\":1,\"ratio_max\":1},\"time_on_page\":2,\"time_on_page_ms\":1877},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\":true,"
		"\"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":675,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/reserve.php\",\"info\":{}},\""
		"referrer\":{\"initial\":\"https://blazedemo.com/\",\"full\":\"https://blazedemo.com/\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T04:25:51.081Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\"name\":\"keen"
		":date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]},\"element\":{\"class\":\"btn btn-small\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"type\":\"submit\",\"class\":\"btn btn-small\",\"unique_selector\":\":nth-child(1) > "
		":nth-child(2) > .btn\"},\"node_name\":\"INPUT\",\"tag_name\":\"INPUT\",\"text\":null,\"title\":null,\"type\":\"submit\",\"n_parents\":[{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"tbody > :nth-child(1) > :nth-child(2)\"},\"node_name\":\"TD\",\"tag_name\":\"TD\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":1},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"tbody > :nth-child(1)\"},\"node_name\""
		":\"TR\",\"tag_name\":\"TR\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":2},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"tbody\"},\"node_name\":\"TBODY\",\"tag_name\":\"TBODY\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":3},{\"class\":\"table\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"table\",\"unique_selector\":\".table\"},\"node_name\":\"TABLE\",\"tag_name\":\"TABLE\",\"text\":null,\"title\":null"
		",\"type\":null,\"nth_parent\":4},{\"class\":\"container\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"container\",\"unique_selector\":\"body > :nth-child(2)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":5},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"body\"},\"node_name\":\"BODY\",\"tag_name\":\"BODY\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":6}],\""
		"selector\":\"body > div:eq(1) > table > tbody > tr:eq(0) > td:eq(0) > input\",\"text_content\":null,\"cursor\":\"pointer\",\"x_position\":8,\"y_position\":8}}", 
		LAST);

	web_custom_request("form_submissions_2", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/form_submissions?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"54ed73c7-9b02-4e0f-bc4c-5ad390a6bbf5\",\"iso_time_full\":\"2025-12-04T04:25:51.083Z\",\"local_time_full\":\"Thu Dec 04 2025 09:55:51 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"4e2bcbae-544e-47ad-b01a-43a4f54ea4dc\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"ea68183d-d615-409e-b185-a60ee41d963f\",\"tracker_loaded_at\":\"2025-12-04T04:25:49.204Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"34ca1b82-3816-4641-bedc-0458a9968f8f\"},\"page\":{\"title\":\"BlazeDemo - reserve\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":675,\"pixel_max\":675,\"ratio\":1,\"ratio_max\":1},\"time_on_page\":2,\"time_on_page_ms\":1879},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\":true,"
		"\"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":675,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/reserve.php\",\"info\":{}},\""
		"referrer\":{\"initial\":\"https://blazedemo.com/\",\"full\":\"https://blazedemo.com/\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T04:25:51.083Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\"name\":\"keen"
		":date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]},\"form\":{\"action\":\"https://blazedemo.com/purchase.php\",\"fields\":{\"flight\":\"---REDACTED---\",\"price\":\"---REDACTED---\",\"airline\":\"---REDACTED---\",\"fromPort\":\""
		"---REDACTED---\",\"toPort\":\"---REDACTED---\"},\"method\":\"post\"},\"element\":{\"class\":null,\"href\":null,\"id\":null,\"name\":\"VA43\",\"all_attrs\":{\"name\":\"VA43\",\"method\":\"post\",\"action\":\"purchase.php\",\"unique_selector\":\":nth-child(1) > form\"},\"node_name\":\"FORM\",\"tag_name\":\"FORM\",\"text\":null,\"title\":null,\"type\":null,\"action\":\"https://blazedemo.com/purchase.php\",\"method\":\"post\",\"n_parents\":[{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\""
		"all_attrs\":{\"unique_selector\":\"tbody > :nth-child(1)\"},\"node_name\":\"TR\",\"tag_name\":\"TR\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":1},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"tbody\"},\"node_name\":\"TBODY\",\"tag_name\":\"TBODY\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":2},{\"class\":\"table\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"table\",\"unique_selector\":\".table\"},\""
		"node_name\":\"TABLE\",\"tag_name\":\"TABLE\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":3},{\"class\":\"container\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"container\",\"unique_selector\":\"body > :nth-child(2)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":4},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"body\"},\"node_name\":\"BODY\",\"tag_name\":\""
		"BODY\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":5}],\"selector\":\"body > div:eq(1) > table > tbody > tr:eq(0) > form\",\"text_content\":null,\"cursor\":\"auto\",\"x_position\":null,\"y_position\":null}}", 
		LAST);

	web_custom_request("pageunloads_2", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/pageunloads?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"4682b3ac-369b-4f49-a7e8-61d3c28e2494\",\"iso_time_full\":\"2025-12-04T04:25:51.084Z\",\"local_time_full\":\"Thu Dec 04 2025 09:55:51 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"4e2bcbae-544e-47ad-b01a-43a4f54ea4dc\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"ea68183d-d615-409e-b185-a60ee41d963f\",\"tracker_loaded_at\":\"2025-12-04T04:25:49.204Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"34ca1b82-3816-4641-bedc-0458a9968f8f\"},\"page\":{\"title\":\"BlazeDemo - reserve\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":675,\"pixel_max\":675,\"ratio\":1,\"ratio_max\":1},\"time_on_page\":2,\"time_on_page_ms\":1880},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\":true,"
		"\"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":675,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/reserve.php\",\"info\":{}},\""
		"referrer\":{\"initial\":\"https://blazedemo.com/\",\"full\":\"https://blazedemo.com/\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T04:25:51.084Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\"name\":\"keen"
		":date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]}}", 
		LAST);

	web_add_cookie("keen={%22uuid%22:%2234ca1b82-3816-4641-bedc-0458a9968f8f%22%2C%22initialReferrer%22:%22https://blazedemo.com/%22}; DOMAIN=blazedemo.com");

	web_submit_data("purchase.php", 
		"Action=https://blazedemo.com/purchase.php", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://blazedemo.com/reserve.php", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=flight", "Value=43", ENDITEM, 
		"Name=price", "Value=472.56", ENDITEM, 
		"Name=airline", "Value=Virgin America", ENDITEM, 
		"Name=fromPort", "Value=Paris", ENDITEM, 
		"Name=toPort", "Value=London", ENDITEM, 
		LAST);

	web_custom_request("pageviews_3", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/pageviews?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"8b91b0c0-b61a-44df-9f7a-673d01939769\",\"iso_time_full\":\"2025-12-04T04:25:52.454Z\",\"local_time_full\":\"Thu Dec 04 2025 09:55:52 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"4e2bcbae-544e-47ad-b01a-43a4f54ea4dc\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"219616a2-fd87-4d2b-8e80-0e48ee7406e7\",\"tracker_loaded_at\":\"2025-12-04T04:25:52.454Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"34ca1b82-3816-4641-bedc-0458a9968f8f\"},\"page\":{\"title\":\"BlazeDemo Purchase\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":675,\"pixel_max\":675,\"ratio\":0.58,\"ratio_max\":0.58},\"time_on_page\":0,\"time_on_page_ms\":1},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\""
		":true,\"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":1164,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/purchase.php\",\"info\":"
		"{}},\"referrer\":{\"initial\":\"https://blazedemo.com/\",\"full\":\"https://blazedemo.com/reserve.php\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T04:25:52.455Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\"name"
		"\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]}}", 
		LAST);

	web_custom_request("clicks_9", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/clicks?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"8d19efe0-22cb-4c01-939b-79a7bd90cfe9\",\"iso_time_full\":\"2025-12-04T04:25:55.138Z\",\"local_time_full\":\"Thu Dec 04 2025 09:55:55 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"4e2bcbae-544e-47ad-b01a-43a4f54ea4dc\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"219616a2-fd87-4d2b-8e80-0e48ee7406e7\",\"tracker_loaded_at\":\"2025-12-04T04:25:52.454Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"34ca1b82-3816-4641-bedc-0458a9968f8f\"},\"page\":{\"title\":\"BlazeDemo Purchase\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":675,\"pixel_max\":675,\"ratio\":0.58,\"ratio_max\":0.58},\"time_on_page\":3,\"time_on_page_ms\":2684},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\""
		":true,\"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":1164,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/purchase.php\",\"info\":"
		"{}},\"referrer\":{\"initial\":\"https://blazedemo.com/\",\"full\":\"https://blazedemo.com/reserve.php\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T04:25:55.138Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\"name"
		"\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]},\"element\":{\"class\":null,\"href\":null,\"id\":\"inputName\",\"name\":\"inputName\",\"all_attrs\":{\"id\":\"inputName\",\"placeholder\":\"First Last\",\"name\":\"inputName\",\""
		"type\":\"text\",\"unique_selector\":\"#inputName\"},\"node_name\":\"INPUT\",\"tag_name\":\"INPUT\",\"text\":null,\"title\":null,\"type\":\"text\",\"n_parents\":[{\"class\":\"controls\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"controls\",\"unique_selector\":\":nth-child(2) > .controls\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":1},{\"class\":\"control-group\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":"
		"{\"class\":\"control-group\",\"unique_selector\":\"form > :nth-child(2)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":2},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"method\":\"POST\",\"action\":\"https://blazedemo.com/confirmation.php\",\"accept-charset\":\"UTF-8\",\"unique_selector\":\"form\"},\"node_name\":\"FORM\",\"tag_name\":\"FORM\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":3},{\"class\":\""
		"container\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"container\",\"unique_selector\":\"body > :nth-child(2)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":4},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"body\"},\"node_name\":\"BODY\",\"tag_name\":\"BODY\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":5},{\"class\":null,\"href\":null,\"id\":null,\"name\""
		":null,\"all_attrs\":{\"lang\":\"en\",\"unique_selector\":\"html\"},\"node_name\":\"HTML\",\"tag_name\":\"HTML\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":6}],\"selector\":\"body > div:eq(1) > form > div:eq(0) > div > input#inputName\",\"text_content\":null,\"cursor\":\"text\",\"x_position\":47,\"y_position\":359}}", 
		LAST);

	web_custom_request("changes_2", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/changes?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"b56c3ccd-82a2-4dba-8660-c85764ae7869\",\"iso_time_full\":\"2025-12-04T04:25:59.026Z\",\"local_time_full\":\"Thu Dec 04 2025 09:55:59 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"4e2bcbae-544e-47ad-b01a-43a4f54ea4dc\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"219616a2-fd87-4d2b-8e80-0e48ee7406e7\",\"tracker_loaded_at\":\"2025-12-04T04:25:52.454Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"34ca1b82-3816-4641-bedc-0458a9968f8f\"},\"page\":{\"title\":\"BlazeDemo Purchase\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":675,\"pixel_max\":675,\"ratio\":0.58,\"ratio_max\":0.58},\"time_on_page\":7,\"time_on_page_ms\":6572},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\""
		":true,\"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":1164,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/purchase.php\",\"info\":"
		"{}},\"referrer\":{\"initial\":\"https://blazedemo.com/\",\"full\":\"https://blazedemo.com/reserve.php\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T04:25:59.026Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\"name"
		"\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]},\"element\":{\"class\":null,\"href\":null,\"id\":\"inputName\",\"name\":\"inputName\",\"all_attrs\":{\"id\":\"inputName\",\"placeholder\":\"First Last\",\"name\":\"inputName\",\""
		"type\":\"text\",\"unique_selector\":\"#inputName\"},\"node_name\":\"INPUT\",\"tag_name\":\"INPUT\",\"text\":null,\"title\":null,\"type\":\"text\",\"n_parents\":[{\"class\":\"controls\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"controls\",\"unique_selector\":\":nth-child(2) > .controls\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":1},{\"class\":\"control-group\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":"
		"{\"class\":\"control-group\",\"unique_selector\":\"form > :nth-child(2)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":2},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"method\":\"POST\",\"action\":\"https://blazedemo.com/confirmation.php\",\"accept-charset\":\"UTF-8\",\"unique_selector\":\"form\"},\"node_name\":\"FORM\",\"tag_name\":\"FORM\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":3},{\"class\":\""
		"container\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"container\",\"unique_selector\":\"body > :nth-child(2)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":4},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"body\"},\"node_name\":\"BODY\",\"tag_name\":\"BODY\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":5},{\"class\":null,\"href\":null,\"id\":null,\"name\""
		":null,\"all_attrs\":{\"lang\":\"en\",\"unique_selector\":\"html\"},\"node_name\":\"HTML\",\"tag_name\":\"HTML\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":6}],\"selector\":\"body > div:eq(1) > form > div:eq(0) > div > input#inputName\",\"text_content\":null,\"cursor\":\"text\",\"x_position\":47,\"y_position\":359}}", 
		LAST);

	web_custom_request("clicks_10", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/clicks?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"f2efbac8-7803-4903-b8ab-bcaf473c4532\",\"iso_time_full\":\"2025-12-04T04:25:59.256Z\",\"local_time_full\":\"Thu Dec 04 2025 09:55:59 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"4e2bcbae-544e-47ad-b01a-43a4f54ea4dc\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"219616a2-fd87-4d2b-8e80-0e48ee7406e7\",\"tracker_loaded_at\":\"2025-12-04T04:25:52.454Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"34ca1b82-3816-4641-bedc-0458a9968f8f\"},\"page\":{\"title\":\"BlazeDemo Purchase\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":675,\"pixel_max\":675,\"ratio\":0.58,\"ratio_max\":0.58},\"time_on_page\":7,\"time_on_page_ms\":6802},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\""
		":true,\"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":1164,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/purchase.php\",\"info\":"
		"{}},\"referrer\":{\"initial\":\"https://blazedemo.com/\",\"full\":\"https://blazedemo.com/reserve.php\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T04:25:59.256Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\"name"
		"\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]},\"element\":{\"class\":null,\"href\":null,\"id\":\"address\",\"name\":\"address\",\"all_attrs\":{\"type\":\"text\",\"name\":\"address\",\"id\":\"address\",\"placeholder\":\"123 "
		"Main St.\",\"unique_selector\":\"#address\"},\"node_name\":\"INPUT\",\"tag_name\":\"INPUT\",\"text\":null,\"title\":null,\"type\":\"text\",\"n_parents\":[{\"class\":\"controls\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"controls\",\"unique_selector\":\":nth-child(3) > .controls\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":1},{\"class\":\"control-group\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\""
		"class\":\"control-group\",\"unique_selector\":\"form > :nth-child(3)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":2},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"method\":\"POST\",\"action\":\"https://blazedemo.com/confirmation.php\",\"accept-charset\":\"UTF-8\",\"unique_selector\":\"form\"},\"node_name\":\"FORM\",\"tag_name\":\"FORM\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":3},{\"class\":\""
		"container\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"container\",\"unique_selector\":\"body > :nth-child(2)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":4},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"body\"},\"node_name\":\"BODY\",\"tag_name\":\"BODY\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":5},{\"class\":null,\"href\":null,\"id\":null,\"name\""
		":null,\"all_attrs\":{\"lang\":\"en\",\"unique_selector\":\"html\"},\"node_name\":\"HTML\",\"tag_name\":\"HTML\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":6}],\"selector\":\"body > div:eq(1) > form > div:eq(1) > div > input#address\",\"text_content\":null,\"cursor\":\"text\",\"x_position\":47,\"y_position\":434}}", 
		LAST);

	web_custom_request("changes_3", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/changes?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"2c6a0fe7-d857-4793-ba50-e006f7f2a2fa\",\"iso_time_full\":\"2025-12-04T04:26:01.196Z\",\"local_time_full\":\"Thu Dec 04 2025 09:56:01 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"4e2bcbae-544e-47ad-b01a-43a4f54ea4dc\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"219616a2-fd87-4d2b-8e80-0e48ee7406e7\",\"tracker_loaded_at\":\"2025-12-04T04:25:52.454Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"34ca1b82-3816-4641-bedc-0458a9968f8f\"},\"page\":{\"title\":\"BlazeDemo Purchase\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":675,\"pixel_max\":675,\"ratio\":0.58,\"ratio_max\":0.58},\"time_on_page\":9,\"time_on_page_ms\":8742},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\""
		":true,\"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":1164,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/purchase.php\",\"info\":"
		"{}},\"referrer\":{\"initial\":\"https://blazedemo.com/\",\"full\":\"https://blazedemo.com/reserve.php\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T04:26:01.196Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\"name"
		"\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]},\"element\":{\"class\":null,\"href\":null,\"id\":\"address\",\"name\":\"address\",\"all_attrs\":{\"type\":\"text\",\"name\":\"address\",\"id\":\"address\",\"placeholder\":\"123 "
		"Main St.\",\"unique_selector\":\"#address\"},\"node_name\":\"INPUT\",\"tag_name\":\"INPUT\",\"text\":null,\"title\":null,\"type\":\"text\",\"n_parents\":[{\"class\":\"controls\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"controls\",\"unique_selector\":\":nth-child(3) > .controls\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":1},{\"class\":\"control-group\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\""
		"class\":\"control-group\",\"unique_selector\":\"form > :nth-child(3)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":2},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"method\":\"POST\",\"action\":\"https://blazedemo.com/confirmation.php\",\"accept-charset\":\"UTF-8\",\"unique_selector\":\"form\"},\"node_name\":\"FORM\",\"tag_name\":\"FORM\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":3},{\"class\":\""
		"container\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"container\",\"unique_selector\":\"body > :nth-child(2)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":4},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"body\"},\"node_name\":\"BODY\",\"tag_name\":\"BODY\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":5},{\"class\":null,\"href\":null,\"id\":null,\"name\""
		":null,\"all_attrs\":{\"lang\":\"en\",\"unique_selector\":\"html\"},\"node_name\":\"HTML\",\"tag_name\":\"HTML\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":6}],\"selector\":\"body > div:eq(1) > form > div:eq(1) > div > input#address\",\"text_content\":null,\"cursor\":\"text\",\"x_position\":47,\"y_position\":434}}", 
		LAST);

	web_custom_request("clicks_11", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/clicks?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"722ae3c9-83d4-4e98-9d94-56c0d2297eb6\",\"iso_time_full\":\"2025-12-04T04:26:01.410Z\",\"local_time_full\":\"Thu Dec 04 2025 09:56:01 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"4e2bcbae-544e-47ad-b01a-43a4f54ea4dc\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"219616a2-fd87-4d2b-8e80-0e48ee7406e7\",\"tracker_loaded_at\":\"2025-12-04T04:25:52.454Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"34ca1b82-3816-4641-bedc-0458a9968f8f\"},\"page\":{\"title\":\"BlazeDemo Purchase\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":675,\"pixel_max\":675,\"ratio\":0.58,\"ratio_max\":0.58},\"time_on_page\":9,\"time_on_page_ms\":8957},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\""
		":true,\"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":1164,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/purchase.php\",\"info\":"
		"{}},\"referrer\":{\"initial\":\"https://blazedemo.com/\",\"full\":\"https://blazedemo.com/reserve.php\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T04:26:01.411Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\"name"
		"\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]},\"element\":{\"class\":null,\"href\":null,\"id\":\"city\",\"name\":\"city\",\"all_attrs\":{\"type\":\"text\",\"name\":\"city\",\"id\":\"city\",\"placeholder\":\"Anytown\",\""
		"unique_selector\":\"#city\"},\"node_name\":\"INPUT\",\"tag_name\":\"INPUT\",\"text\":null,\"title\":null,\"type\":\"text\",\"n_parents\":[{\"class\":\"controls\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"controls\",\"unique_selector\":\":nth-child(4) > .controls\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":1},{\"class\":\"control-group\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\""
		"control-group\",\"unique_selector\":\"form > :nth-child(4)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":2},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"method\":\"POST\",\"action\":\"https://blazedemo.com/confirmation.php\",\"accept-charset\":\"UTF-8\",\"unique_selector\":\"form\"},\"node_name\":\"FORM\",\"tag_name\":\"FORM\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":3},{\"class\":\"container\","
		"\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"container\",\"unique_selector\":\"body > :nth-child(2)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":4},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"body\"},\"node_name\":\"BODY\",\"tag_name\":\"BODY\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":5},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\""
		"all_attrs\":{\"lang\":\"en\",\"unique_selector\":\"html\"},\"node_name\":\"HTML\",\"tag_name\":\"HTML\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":6}],\"selector\":\"body > div:eq(1) > form > div:eq(2) > div > input#city\",\"text_content\":null,\"cursor\":\"text\",\"x_position\":47,\"y_position\":509}}", 
		LAST);

	web_custom_request("changes_4", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/changes?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"515ac1f9-bbcc-49ea-b6d7-e3e4cbc4809c\",\"iso_time_full\":\"2025-12-04T04:26:03.931Z\",\"local_time_full\":\"Thu Dec 04 2025 09:56:03 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"4e2bcbae-544e-47ad-b01a-43a4f54ea4dc\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"219616a2-fd87-4d2b-8e80-0e48ee7406e7\",\"tracker_loaded_at\":\"2025-12-04T04:25:52.454Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"34ca1b82-3816-4641-bedc-0458a9968f8f\"},\"page\":{\"title\":\"BlazeDemo Purchase\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":981,\"pixel_max\":981,\"ratio\":0.84,\"ratio_max\":0.84},\"time_on_page\":11,\"time_on_page_ms\":11477},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online"
		"\":true,\"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":1164,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/purchase.php\",\"info"
		"\":{}},\"referrer\":{\"initial\":\"https://blazedemo.com/\",\"full\":\"https://blazedemo.com/reserve.php\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T04:26:03.931Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\""
		"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]},\"element\":{\"class\":null,\"href\":null,\"id\":\"city\",\"name\":\"city\",\"all_attrs\":{\"type\":\"text\",\"name\":\"city\",\"id\":\"city\",\"placeholder\":\"Anytown\",\""
		"unique_selector\":\"#city\"},\"node_name\":\"INPUT\",\"tag_name\":\"INPUT\",\"text\":null,\"title\":null,\"type\":\"text\",\"n_parents\":[{\"class\":\"controls\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"controls\",\"unique_selector\":\":nth-child(4) > .controls\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":1},{\"class\":\"control-group\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\""
		"control-group\",\"unique_selector\":\"form > :nth-child(4)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":2},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"method\":\"POST\",\"action\":\"https://blazedemo.com/confirmation.php\",\"accept-charset\":\"UTF-8\",\"unique_selector\":\"form\"},\"node_name\":\"FORM\",\"tag_name\":\"FORM\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":3},{\"class\":\"container\","
		"\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"container\",\"unique_selector\":\"body > :nth-child(2)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":4},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"body\"},\"node_name\":\"BODY\",\"tag_name\":\"BODY\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":5},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\""
		"all_attrs\":{\"lang\":\"en\",\"unique_selector\":\"html\"},\"node_name\":\"HTML\",\"tag_name\":\"HTML\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":6}],\"selector\":\"body > div:eq(1) > form > div:eq(2) > div > input#city\",\"text_content\":null,\"cursor\":\"text\",\"x_position\":47,\"y_position\":509}}", 
		LAST);

	web_custom_request("clicks_12", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/clicks?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"166b83ee-927d-45c3-9784-8deda85f0f3a\",\"iso_time_full\":\"2025-12-04T04:26:04.152Z\",\"local_time_full\":\"Thu Dec 04 2025 09:56:04 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"4e2bcbae-544e-47ad-b01a-43a4f54ea4dc\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"219616a2-fd87-4d2b-8e80-0e48ee7406e7\",\"tracker_loaded_at\":\"2025-12-04T04:25:52.454Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"34ca1b82-3816-4641-bedc-0458a9968f8f\"},\"page\":{\"title\":\"BlazeDemo Purchase\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":981,\"pixel_max\":981,\"ratio\":0.84,\"ratio_max\":0.84},\"time_on_page\":12,\"time_on_page_ms\":11698},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online"
		"\":true,\"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":1164,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/purchase.php\",\"info"
		"\":{}},\"referrer\":{\"initial\":\"https://blazedemo.com/\",\"full\":\"https://blazedemo.com/reserve.php\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T04:26:04.152Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\""
		"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]},\"element\":{\"class\":null,\"href\":null,\"id\":\"state\",\"name\":\"state\",\"all_attrs\":{\"type\":\"text\",\"name\":\"state\",\"id\":\"state\",\"placeholder\":\"State\",\""
		"unique_selector\":\"#state\"},\"node_name\":\"INPUT\",\"tag_name\":\"INPUT\",\"text\":null,\"title\":null,\"type\":\"text\",\"n_parents\":[{\"class\":\"controls\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"controls\",\"unique_selector\":\":nth-child(5) > .controls\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":1},{\"class\":\"control-group\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\""
		"control-group\",\"unique_selector\":\"form > :nth-child(5)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":2},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"method\":\"POST\",\"action\":\"https://blazedemo.com/confirmation.php\",\"accept-charset\":\"UTF-8\",\"unique_selector\":\"form\"},\"node_name\":\"FORM\",\"tag_name\":\"FORM\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":3},{\"class\":\"container\","
		"\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"container\",\"unique_selector\":\"body > :nth-child(2)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":4},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"body\"},\"node_name\":\"BODY\",\"tag_name\":\"BODY\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":5},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\""
		"all_attrs\":{\"lang\":\"en\",\"unique_selector\":\"html\"},\"node_name\":\"HTML\",\"tag_name\":\"HTML\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":6}],\"selector\":\"body > div:eq(1) > form > div:eq(3) > div > input#state\",\"text_content\":null,\"cursor\":\"text\",\"x_position\":47,\"y_position\":584}}", 
		LAST);

	web_custom_request("clicks_13", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/clicks?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"da5ef637-d6a3-4064-9634-c9f49d4d42cd\",\"iso_time_full\":\"2025-12-04T04:26:06.695Z\",\"local_time_full\":\"Thu Dec 04 2025 09:56:06 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"4e2bcbae-544e-47ad-b01a-43a4f54ea4dc\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"219616a2-fd87-4d2b-8e80-0e48ee7406e7\",\"tracker_loaded_at\":\"2025-12-04T04:25:52.454Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"34ca1b82-3816-4641-bedc-0458a9968f8f\"},\"page\":{\"title\":\"BlazeDemo Purchase\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":981,\"pixel_max\":981,\"ratio\":0.84,\"ratio_max\":0.84},\"time_on_page\":14,\"time_on_page_ms\":14241},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online"
		"\":true,\"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":1164,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/purchase.php\",\"info"
		"\":{}},\"referrer\":{\"initial\":\"https://blazedemo.com/\",\"full\":\"https://blazedemo.com/reserve.php\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T04:26:06.695Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\""
		"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]},\"element\":{\"class\":null,\"href\":null,\"id\":\"zipCode\",\"name\":\"zipCode\",\"all_attrs\":{\"type\":\"text\",\"name\":\"zipCode\",\"id\":\"zipCode\",\"placeholder\":\""
		"12345\",\"unique_selector\":\"#zipCode\"},\"node_name\":\"INPUT\",\"tag_name\":\"INPUT\",\"text\":null,\"title\":null,\"type\":\"text\",\"n_parents\":[{\"class\":\"controls\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"controls\",\"unique_selector\":\":nth-child(6) > .controls\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":1},{\"class\":\"control-group\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\""
		":\"control-group\",\"unique_selector\":\"form > :nth-child(6)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":2},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"method\":\"POST\",\"action\":\"https://blazedemo.com/confirmation.php\",\"accept-charset\":\"UTF-8\",\"unique_selector\":\"form\"},\"node_name\":\"FORM\",\"tag_name\":\"FORM\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":3},{\"class\":\"container"
		"\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"container\",\"unique_selector\":\"body > :nth-child(2)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":4},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"body\"},\"node_name\":\"BODY\",\"tag_name\":\"BODY\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":5},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\""
		"all_attrs\":{\"lang\":\"en\",\"unique_selector\":\"html\"},\"node_name\":\"HTML\",\"tag_name\":\"HTML\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":6}],\"selector\":\"body > div:eq(1) > form > div:eq(4) > div > input#zipCode\",\"text_content\":null,\"cursor\":\"text\",\"x_position\":47,\"y_position\":659}}", 
		LAST);

	web_custom_request("changes_5", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/changes?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"c7d6999e-2901-48c5-9f3e-7a879164a253\",\"iso_time_full\":\"2025-12-04T04:26:06.467Z\",\"local_time_full\":\"Thu Dec 04 2025 09:56:06 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"4e2bcbae-544e-47ad-b01a-43a4f54ea4dc\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"219616a2-fd87-4d2b-8e80-0e48ee7406e7\",\"tracker_loaded_at\":\"2025-12-04T04:25:52.454Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"34ca1b82-3816-4641-bedc-0458a9968f8f\"},\"page\":{\"title\":\"BlazeDemo Purchase\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":981,\"pixel_max\":981,\"ratio\":0.84,\"ratio_max\":0.84},\"time_on_page\":14,\"time_on_page_ms\":14013},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online"
		"\":true,\"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":1164,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/purchase.php\",\"info"
		"\":{}},\"referrer\":{\"initial\":\"https://blazedemo.com/\",\"full\":\"https://blazedemo.com/reserve.php\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T04:26:06.467Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\""
		"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]},\"element\":{\"class\":null,\"href\":null,\"id\":\"state\",\"name\":\"state\",\"all_attrs\":{\"type\":\"text\",\"name\":\"state\",\"id\":\"state\",\"placeholder\":\"State\",\""
		"unique_selector\":\"#state\"},\"node_name\":\"INPUT\",\"tag_name\":\"INPUT\",\"text\":null,\"title\":null,\"type\":\"text\",\"n_parents\":[{\"class\":\"controls\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"controls\",\"unique_selector\":\":nth-child(5) > .controls\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":1},{\"class\":\"control-group\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\""
		"control-group\",\"unique_selector\":\"form > :nth-child(5)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":2},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"method\":\"POST\",\"action\":\"https://blazedemo.com/confirmation.php\",\"accept-charset\":\"UTF-8\",\"unique_selector\":\"form\"},\"node_name\":\"FORM\",\"tag_name\":\"FORM\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":3},{\"class\":\"container\","
		"\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"container\",\"unique_selector\":\"body > :nth-child(2)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":4},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"body\"},\"node_name\":\"BODY\",\"tag_name\":\"BODY\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":5},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\""
		"all_attrs\":{\"lang\":\"en\",\"unique_selector\":\"html\"},\"node_name\":\"HTML\",\"tag_name\":\"HTML\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":6}],\"selector\":\"body > div:eq(1) > form > div:eq(3) > div > input#state\",\"text_content\":null,\"cursor\":\"text\",\"x_position\":47,\"y_position\":584}}", 
		LAST);

	web_custom_request("changes_6", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/changes?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"2398e075-3eee-47bd-9c0b-97f89e0d62d7\",\"iso_time_full\":\"2025-12-04T04:26:09.759Z\",\"local_time_full\":\"Thu Dec 04 2025 09:56:09 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"4e2bcbae-544e-47ad-b01a-43a4f54ea4dc\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"219616a2-fd87-4d2b-8e80-0e48ee7406e7\",\"tracker_loaded_at\":\"2025-12-04T04:25:52.454Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"34ca1b82-3816-4641-bedc-0458a9968f8f\"},\"page\":{\"title\":\"BlazeDemo Purchase\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":1083,\"pixel_max\":1083,\"ratio\":0.93,\"ratio_max\":0.93},\"time_on_page\":17,\"time_on_page_ms\":17305},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\""
		"online\":true,\"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":1164,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/purchase.php\","
		"\"info\":{}},\"referrer\":{\"initial\":\"https://blazedemo.com/\",\"full\":\"https://blazedemo.com/reserve.php\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T04:26:09.759Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"}"
		",{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]},\"element\":{\"class\":null,\"href\":null,\"id\":\"zipCode\",\"name\":\"zipCode\",\"all_attrs\":{\"type\":\"text\",\"name\":\"zipCode\",\"id\":\"zipCode\",\"placeholder\":"
		"\"12345\",\"unique_selector\":\"#zipCode\"},\"node_name\":\"INPUT\",\"tag_name\":\"INPUT\",\"text\":null,\"title\":null,\"type\":\"text\",\"n_parents\":[{\"class\":\"controls\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"controls\",\"unique_selector\":\":nth-child(6) > .controls\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":1},{\"class\":\"control-group\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class"
		"\":\"control-group\",\"unique_selector\":\"form > :nth-child(6)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":2},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"method\":\"POST\",\"action\":\"https://blazedemo.com/confirmation.php\",\"accept-charset\":\"UTF-8\",\"unique_selector\":\"form\"},\"node_name\":\"FORM\",\"tag_name\":\"FORM\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":3},{\"class\":\""
		"container\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"container\",\"unique_selector\":\"body > :nth-child(2)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":4},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"body\"},\"node_name\":\"BODY\",\"tag_name\":\"BODY\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":5},{\"class\":null,\"href\":null,\"id\":null,\"name\""
		":null,\"all_attrs\":{\"lang\":\"en\",\"unique_selector\":\"html\"},\"node_name\":\"HTML\",\"tag_name\":\"HTML\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":6}],\"selector\":\"body > div:eq(1) > form > div:eq(4) > div > input#zipCode\",\"text_content\":null,\"cursor\":\"text\",\"x_position\":47,\"y_position\":659}}", 
		LAST);

	web_custom_request("clicks_14", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/clicks?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"c121debf-f5be-40ec-aa1e-a96c8b4ade7c\",\"iso_time_full\":\"2025-12-04T04:26:09.974Z\",\"local_time_full\":\"Thu Dec 04 2025 09:56:09 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"4e2bcbae-544e-47ad-b01a-43a4f54ea4dc\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"219616a2-fd87-4d2b-8e80-0e48ee7406e7\",\"tracker_loaded_at\":\"2025-12-04T04:25:52.454Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"34ca1b82-3816-4641-bedc-0458a9968f8f\"},\"page\":{\"title\":\"BlazeDemo Purchase\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":1083,\"pixel_max\":1083,\"ratio\":0.93,\"ratio_max\":0.93},\"time_on_page\":18,\"time_on_page_ms\":17520},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\""
		"online\":true,\"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":1164,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/purchase.php\","
		"\"info\":{}},\"referrer\":{\"initial\":\"https://blazedemo.com/\",\"full\":\"https://blazedemo.com/reserve.php\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T04:26:09.974Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"}"
		",{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]},\"element\":{\"class\":null,\"href\":null,\"id\":\"creditCardNumber\",\"name\":\"creditCardNumber\",\"all_attrs\":{\"type\":\"text\",\"id\":\"creditCardNumber\",\"name\":\""
		"creditCardNumber\",\"placeholder\":\"Credit Card Number\",\"unique_selector\":\"#creditCardNumber\"},\"node_name\":\"INPUT\",\"tag_name\":\"INPUT\",\"text\":null,\"title\":null,\"type\":\"text\",\"n_parents\":[{\"class\":\"controls\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"controls\",\"unique_selector\":\":nth-child(8) > .controls\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":1},{\"class\":\"control-group\",\""
		"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"control-group\",\"unique_selector\":\"form > :nth-child(8)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":2},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"method\":\"POST\",\"action\":\"https://blazedemo.com/confirmation.php\",\"accept-charset\":\"UTF-8\",\"unique_selector\":\"form\"},\"node_name\":\"FORM\",\"tag_name\":\"FORM\",\"text\":null,\"title"
		"\":null,\"type\":null,\"nth_parent\":3},{\"class\":\"container\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"container\",\"unique_selector\":\"body > :nth-child(2)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":4},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"body\"},\"node_name\":\"BODY\",\"tag_name\":\"BODY\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":5},"
		"{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"lang\":\"en\",\"unique_selector\":\"html\"},\"node_name\":\"HTML\",\"tag_name\":\"HTML\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":6}],\"selector\":\"body > div:eq(1) > form > div:eq(6) > div > input#creditCardNumber\",\"text_content\":null,\"cursor\":\"text\",\"x_position\":47,\"y_position\":809}}", 
		LAST);

	web_custom_request("clicks_15", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/clicks?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"b0bf2bb4-a457-4337-97ce-5f4b904808ce\",\"iso_time_full\":\"2025-12-04T04:26:13.318Z\",\"local_time_full\":\"Thu Dec 04 2025 09:56:13 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"4e2bcbae-544e-47ad-b01a-43a4f54ea4dc\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"219616a2-fd87-4d2b-8e80-0e48ee7406e7\",\"tracker_loaded_at\":\"2025-12-04T04:25:52.454Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"34ca1b82-3816-4641-bedc-0458a9968f8f\"},\"page\":{\"title\":\"BlazeDemo Purchase\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":1164,\"pixel_max\":1164,\"ratio\":1,\"ratio_max\":1},\"time_on_page\":21,\"time_on_page_ms\":20864},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\""
		":true,\"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":1164,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/purchase.php\",\"info\":"
		"{}},\"referrer\":{\"initial\":\"https://blazedemo.com/\",\"full\":\"https://blazedemo.com/reserve.php\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T04:26:13.318Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\"name"
		"\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]},\"element\":{\"class\":null,\"href\":null,\"id\":\"nameOnCard\",\"name\":\"nameOnCard\",\"all_attrs\":{\"type\":\"text\",\"id\":\"nameOnCard\",\"placeholder\":\"John Smith\",\""
		"name\":\"nameOnCard\",\"unique_selector\":\"#nameOnCard\"},\"node_name\":\"INPUT\",\"tag_name\":\"INPUT\",\"text\":null,\"title\":null,\"type\":\"text\",\"n_parents\":[{\"class\":\"controls\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"controls\",\"unique_selector\":\":nth-child(11) > .controls\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":1},{\"class\":\"control-group\",\"href\":null,\"id\":null,\"name\":null,\""
		"all_attrs\":{\"class\":\"control-group\",\"unique_selector\":\"form > :nth-child(11)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":2},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"method\":\"POST\",\"action\":\"https://blazedemo.com/confirmation.php\",\"accept-charset\":\"UTF-8\",\"unique_selector\":\"form\"},\"node_name\":\"FORM\",\"tag_name\":\"FORM\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":3},"
		"{\"class\":\"container\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"container\",\"unique_selector\":\"body > :nth-child(2)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":4},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"body\"},\"node_name\":\"BODY\",\"tag_name\":\"BODY\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":5},{\"class\":null,\"href\":null,\"id\":null"
		",\"name\":null,\"all_attrs\":{\"lang\":\"en\",\"unique_selector\":\"html\"},\"node_name\":\"HTML\",\"tag_name\":\"HTML\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":6}],\"selector\":\"body > div:eq(1) > form > div:eq(9) > div > input#nameOnCard\",\"text_content\":null,\"cursor\":\"text\",\"x_position\":47,\"y_position\":1034}}", 
		LAST);

	web_custom_request("changes_7", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/changes?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"32a530ea-0149-424c-893f-7e9dc71e894e\",\"iso_time_full\":\"2025-12-04T04:26:13.101Z\",\"local_time_full\":\"Thu Dec 04 2025 09:56:13 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"4e2bcbae-544e-47ad-b01a-43a4f54ea4dc\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"219616a2-fd87-4d2b-8e80-0e48ee7406e7\",\"tracker_loaded_at\":\"2025-12-04T04:25:52.454Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"34ca1b82-3816-4641-bedc-0458a9968f8f\"},\"page\":{\"title\":\"BlazeDemo Purchase\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":1164,\"pixel_max\":1164,\"ratio\":1,\"ratio_max\":1},\"time_on_page\":21,\"time_on_page_ms\":20647},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\""
		":true,\"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":1164,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/purchase.php\",\"info\":"
		"{}},\"referrer\":{\"initial\":\"https://blazedemo.com/\",\"full\":\"https://blazedemo.com/reserve.php\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T04:26:13.101Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\"name"
		"\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]},\"element\":{\"class\":null,\"href\":null,\"id\":\"creditCardNumber\",\"name\":\"creditCardNumber\",\"all_attrs\":{\"type\":\"text\",\"id\":\"creditCardNumber\",\"name\":\""
		"creditCardNumber\",\"placeholder\":\"Credit Card Number\",\"unique_selector\":\"#creditCardNumber\"},\"node_name\":\"INPUT\",\"tag_name\":\"INPUT\",\"text\":null,\"title\":null,\"type\":\"text\",\"n_parents\":[{\"class\":\"controls\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"controls\",\"unique_selector\":\":nth-child(8) > .controls\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":1},{\"class\":\"control-group\",\""
		"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"control-group\",\"unique_selector\":\"form > :nth-child(8)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":2},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"method\":\"POST\",\"action\":\"https://blazedemo.com/confirmation.php\",\"accept-charset\":\"UTF-8\",\"unique_selector\":\"form\"},\"node_name\":\"FORM\",\"tag_name\":\"FORM\",\"text\":null,\"title"
		"\":null,\"type\":null,\"nth_parent\":3},{\"class\":\"container\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"container\",\"unique_selector\":\"body > :nth-child(2)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":4},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"body\"},\"node_name\":\"BODY\",\"tag_name\":\"BODY\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":5},"
		"{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"lang\":\"en\",\"unique_selector\":\"html\"},\"node_name\":\"HTML\",\"tag_name\":\"HTML\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":6}],\"selector\":\"body > div:eq(1) > form > div:eq(6) > div > input#creditCardNumber\",\"text_content\":null,\"cursor\":\"text\",\"x_position\":47,\"y_position\":809}}", 
		LAST);

	web_custom_request("changes_8", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/changes?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"6f312566-91a3-4925-b245-564a8a436a45\",\"iso_time_full\":\"2025-12-04T04:26:16.886Z\",\"local_time_full\":\"Thu Dec 04 2025 09:56:16 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"4e2bcbae-544e-47ad-b01a-43a4f54ea4dc\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"219616a2-fd87-4d2b-8e80-0e48ee7406e7\",\"tracker_loaded_at\":\"2025-12-04T04:25:52.454Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"34ca1b82-3816-4641-bedc-0458a9968f8f\"},\"page\":{\"title\":\"BlazeDemo Purchase\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":1164,\"pixel_max\":1164,\"ratio\":1,\"ratio_max\":1},\"time_on_page\":24,\"time_on_page_ms\":24432},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\""
		":true,\"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":1164,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/purchase.php\",\"info\":"
		"{}},\"referrer\":{\"initial\":\"https://blazedemo.com/\",\"full\":\"https://blazedemo.com/reserve.php\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T04:26:16.886Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\"name"
		"\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]},\"element\":{\"class\":null,\"href\":null,\"id\":\"nameOnCard\",\"name\":\"nameOnCard\",\"all_attrs\":{\"type\":\"text\",\"id\":\"nameOnCard\",\"placeholder\":\"John Smith\",\""
		"name\":\"nameOnCard\",\"unique_selector\":\"#nameOnCard\"},\"node_name\":\"INPUT\",\"tag_name\":\"INPUT\",\"text\":null,\"title\":null,\"type\":\"text\",\"n_parents\":[{\"class\":\"controls\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"controls\",\"unique_selector\":\":nth-child(11) > .controls\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":1},{\"class\":\"control-group\",\"href\":null,\"id\":null,\"name\":null,\""
		"all_attrs\":{\"class\":\"control-group\",\"unique_selector\":\"form > :nth-child(11)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":2},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"method\":\"POST\",\"action\":\"https://blazedemo.com/confirmation.php\",\"accept-charset\":\"UTF-8\",\"unique_selector\":\"form\"},\"node_name\":\"FORM\",\"tag_name\":\"FORM\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":3},"
		"{\"class\":\"container\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"container\",\"unique_selector\":\"body > :nth-child(2)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":4},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"body\"},\"node_name\":\"BODY\",\"tag_name\":\"BODY\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":5},{\"class\":null,\"href\":null,\"id\":null"
		",\"name\":null,\"all_attrs\":{\"lang\":\"en\",\"unique_selector\":\"html\"},\"node_name\":\"HTML\",\"tag_name\":\"HTML\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":6}],\"selector\":\"body > div:eq(1) > form > div:eq(9) > div > input#nameOnCard\",\"text_content\":null,\"cursor\":\"text\",\"x_position\":47,\"y_position\":1034}}", 
		LAST);

	web_custom_request("clicks_16", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/clicks?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"5b758558-dccf-4d6f-86c0-1c64dcf11d69\",\"iso_time_full\":\"2025-12-04T04:26:17.096Z\",\"local_time_full\":\"Thu Dec 04 2025 09:56:17 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"4e2bcbae-544e-47ad-b01a-43a4f54ea4dc\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"219616a2-fd87-4d2b-8e80-0e48ee7406e7\",\"tracker_loaded_at\":\"2025-12-04T04:25:52.454Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"34ca1b82-3816-4641-bedc-0458a9968f8f\"},\"page\":{\"title\":\"BlazeDemo Purchase\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":1164,\"pixel_max\":1164,\"ratio\":1,\"ratio_max\":1},\"time_on_page\":25,\"time_on_page_ms\":24642},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\""
		":true,\"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":1164,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/purchase.php\",\"info\":"
		"{}},\"referrer\":{\"initial\":\"https://blazedemo.com/\",\"full\":\"https://blazedemo.com/reserve.php\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T04:26:17.096Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\"name"
		"\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]},\"element\":{\"class\":\"btn btn-primary\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"btn btn-primary\",\"type\":\"submit\",\"unique_selector\":\".controls "
		"> .btn\"},\"node_name\":\"INPUT\",\"tag_name\":\"INPUT\",\"text\":null,\"title\":null,\"type\":\"submit\",\"n_parents\":[{\"class\":\"controls\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"controls\",\"unique_selector\":\":nth-child(12) > .controls\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":1},{\"class\":\"control-group\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"control-group\",\""
		"unique_selector\":\":nth-child(12)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":2},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"method\":\"POST\",\"action\":\"https://blazedemo.com/confirmation.php\",\"accept-charset\":\"UTF-8\",\"unique_selector\":\"form\"},\"node_name\":\"FORM\",\"tag_name\":\"FORM\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":3},{\"class\":\"container\",\"href\":null,\"id\":null"
		",\"name\":null,\"all_attrs\":{\"class\":\"container\",\"unique_selector\":\"body > :nth-child(2)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":4},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"body\"},\"node_name\":\"BODY\",\"tag_name\":\"BODY\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":5},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"lang\":\"en\",\""
		"unique_selector\":\"html\"},\"node_name\":\"HTML\",\"tag_name\":\"HTML\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":6}],\"selector\":\"body > div:eq(1) > form > div:eq(10) > div > input\",\"text_content\":null,\"cursor\":\"pointer\",\"x_position\":47,\"y_position\":1114}}", 
		LAST);

	web_custom_request("form_submissions_3", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/form_submissions?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"0a9e0317-bfaa-4530-9ce7-883542f46ce7\",\"iso_time_full\":\"2025-12-04T04:26:17.100Z\",\"local_time_full\":\"Thu Dec 04 2025 09:56:17 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"4e2bcbae-544e-47ad-b01a-43a4f54ea4dc\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"219616a2-fd87-4d2b-8e80-0e48ee7406e7\",\"tracker_loaded_at\":\"2025-12-04T04:25:52.454Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"34ca1b82-3816-4641-bedc-0458a9968f8f\"},\"page\":{\"title\":\"BlazeDemo Purchase\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":1164,\"pixel_max\":1164,\"ratio\":1,\"ratio_max\":1},\"time_on_page\":25,\"time_on_page_ms\":24646},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\""
		":true,\"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":1164,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/purchase.php\",\"info\":"
		"{}},\"referrer\":{\"initial\":\"https://blazedemo.com/\",\"full\":\"https://blazedemo.com/reserve.php\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T04:26:17.100Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\"name"
		"\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]},\"form\":{\"action\":\"https://blazedemo.com/confirmation.php\",\"fields\":{\"inputName\":\"---REDACTED---\",\"address\":\"---REDACTED---\",\"city\":\"---REDACTED---\",\"state\":\""
		"---REDACTED---\",\"zipCode\":\"---REDACTED---\",\"cardType\":\"---REDACTED---\",\"creditCardNumber\":\"---REDACTED---\",\"creditCardMonth\":\"---REDACTED---\",\"creditCardYear\":\"---REDACTED---\",\"nameOnCard\":\"---REDACTED---\"},\"method\":\"post\"},\"element\":{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"method\":\"POST\",\"action\":\"https://blazedemo.com/confirmation.php\",\"accept-charset\":\"UTF-8\",\"unique_selector\":\"form\"},\"node_name\":\"FORM\",\""
		"tag_name\":\"FORM\",\"text\":null,\"title\":null,\"type\":null,\"action\":\"https://blazedemo.com/confirmation.php\",\"method\":\"post\",\"n_parents\":[{\"class\":\"container\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"container\",\"unique_selector\":\"body > :nth-child(2)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":1},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\""
		"body\"},\"node_name\":\"BODY\",\"tag_name\":\"BODY\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":2},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"lang\":\"en\",\"unique_selector\":\"html\"},\"node_name\":\"HTML\",\"tag_name\":\"HTML\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":3},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{},\"node_name\":\"#document\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":4}],\""
		"selector\":\"body > div:eq(1) > form\",\"text_content\":\"---REDACTED---\",\"cursor\":\"auto\",\"x_position\":47,\"y_position\":334}}", 
		LAST);

	web_custom_request("pageunloads_3", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/pageunloads?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"ca23b67c-2944-49b8-aaba-433b8c2f3ac8\",\"iso_time_full\":\"2025-12-04T04:26:17.101Z\",\"local_time_full\":\"Thu Dec 04 2025 09:56:17 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"4e2bcbae-544e-47ad-b01a-43a4f54ea4dc\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"219616a2-fd87-4d2b-8e80-0e48ee7406e7\",\"tracker_loaded_at\":\"2025-12-04T04:25:52.454Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"34ca1b82-3816-4641-bedc-0458a9968f8f\"},\"page\":{\"title\":\"BlazeDemo Purchase\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":1164,\"pixel_max\":1164,\"ratio\":1,\"ratio_max\":1},\"time_on_page\":25,\"time_on_page_ms\":24647},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\""
		":true,\"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":1164,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/purchase.php\",\"info\":"
		"{}},\"referrer\":{\"initial\":\"https://blazedemo.com/\",\"full\":\"https://blazedemo.com/reserve.php\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T04:26:17.101Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\"name"
		"\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]}}", 
		LAST);

	web_submit_data("confirmation.php", 
		"Action=https://blazedemo.com/confirmation.php", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://blazedemo.com/purchase.php", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=_token", "Value=", ENDITEM, 
		"Name=inputName", "Value=asdws sd", ENDITEM, 
		"Name=address", "Value=vee", ENDITEM, 
		"Name=city", "Value=sddf", ENDITEM, 
		"Name=state", "Value=verve", ENDITEM, 
		"Name=zipCode", "Value=csc3", ENDITEM, 
		"Name=cardType", "Value=visa", ENDITEM, 
		"Name=creditCardNumber", "Value=322343", ENDITEM, 
		"Name=creditCardMonth", "Value=11", ENDITEM, 
		"Name=creditCardYear", "Value=2017", ENDITEM, 
		"Name=nameOnCard", "Value=sdcdfv fdvfd", ENDITEM, 
		LAST);

	web_custom_request("pageviews_4", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/pageviews?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"dd737d59-7d05-45a0-9abe-8202ecd8c26a\",\"iso_time_full\":\"2025-12-04T04:26:18.798Z\",\"local_time_full\":\"Thu Dec 04 2025 09:56:18 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"4e2bcbae-544e-47ad-b01a-43a4f54ea4dc\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"c17ec2e9-58c5-4a73-b1f6-bacf44a34c7b\",\"tracker_loaded_at\":\"2025-12-04T04:26:18.797Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"34ca1b82-3816-4641-bedc-0458a9968f8f\"},\"page\":{\"title\":\"BlazeDemo Confirmation\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":675,\"pixel_max\":675,\"ratio\":0.53,\"ratio_max\":0.53},\"time_on_page\":0,\"time_on_page_ms\":1},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\""
		":true,\"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":1269,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/confirmation.php\",\""
		"info\":{}},\"referrer\":{\"initial\":\"https://blazedemo.com/\",\"full\":\"https://blazedemo.com/purchase.php\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T04:26:18.798Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},"
		"{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]}}", 
		LAST);

	return 0;
}