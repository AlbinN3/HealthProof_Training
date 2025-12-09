Action()
{

	web_url("canonical.html", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_custom_request("xvY", 
		"URL=http://o.pki.goog/s/wr3/xvY", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0R0P0N0L0J0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x11\\x00\\xC6\\xF6\\xC8\r\\xE2\\xDF\\x16\\xC1\\x12\\xC6\\xEC\\xC0s\\\\\\xB0T", 
		LAST);

	web_url("canonical.html_2", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	web_url("v1", 
		"URL=https://firefox.settings.services.mozilla.com/v1/", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	web_url("v1_2", 
		"URL=https://firefox.settings.services.mozilla.com/v1/", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("ads", 
		"URL=https://ads.mozilla.org/v1/ads", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"context_id\":\"23852afd-307f-4d9f-8e21-aa01fb354cbc\",\"placements\":[{\"placement\":\"newtab_tile_1\",\"count\":1},{\"placement\":\"newtab_tile_2\",\"count\":1},{\"placement\":\"newtab_tile_3\",\"count\":1}],\"blocks\":[\"\"],\"credentials\":\"omit\"}", 
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
		"Buffer={\"messageType\":\"hello\",\"broadcasts\":{\"remote-settings/monitor_changes\":\"\\\"1764830190557\\\"\"},\"use_webpush\":true}", 
		"IsBinary=0", 
		LAST);

	/*Connection ID 0 received buffer WebSocketReceive0*/

	web_custom_request("cfr-v1-en-US", 
		"URL=https://firefox.settings.services.mozilla.com/v1/buckets/main/collections/ms-language-packs/records/cfr-v1-en-US", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	web_url("canonical.html_3", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("ocsp.digicert.com", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x02\\xF1\\x84\\xDA\\xF8\\x12Sy\\xE1\\x18\\x08\\xA7\\x04<\\xF6\\xF4", 
		EXTRARES, 
		"Url=http://detectportal.firefox.com/success.txt?ipv4", "Referer=", ENDITEM, 
		LAST);

	web_reg_find("Text=Employee Directory", 
		LAST);

	web_url("examples.codecharge.com", 
		"URL=http://examples.codecharge.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("6e4a87c3-82eb-4667-9010-238e1a7be89e", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/events/1/6e4a87c3-82eb-4667-9010-238e1a7be89e", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t22.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":28,\"start_time\":\"2025-12-04T11:42:39.000+05:30\",\"end_time\":\"2025-12-04T11:45:05.324+05:30\",\"reason\":\"startup\",\"experiments\":{\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-tab-groups-rollout-beta\":{\"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\""
		"treatment-a-callout-badge\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\"next-sign-up-modal-cta\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-foundation-donation-promotion-moments-page\":{\""
		"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\"treatment-fast-udp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"new-tab-147020251114194929-to-release\":{\"branch\":"
		"\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\""
		":{\"type\":\"nimbus-rollout\"}},\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\"rollout-branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"deprecate-ipaddrany-rollout-for-release\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-credit-card-autofill-global-enablement-rollout-release\":{\"branch\":\"creditcard-enable\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-search-rollout\":{\"branch\":\"google-lens-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"temp-new-tab-mobile-qr-code-campaign-row\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-passwords-global-rollout\":{\"branch\":\"treatment-e\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-credit-cards-treatment-c-rollout\":{\"branch\":\"treatment-c\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"acct-adoption-callout-addresses-rollout-with-pxi-required\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-shortcuts-v3-sticky\":{\"branch\":\"sticky-frozen-thom\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\""
		"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"improved-mailto-handling-with-os-integration-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-10-eos-sync-and-reminder-messaging-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-address-autofill-india-release-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"context-id-rotation-every-3-days\":{\"branch\":\"control\",\""
		"extra\":{\"type\":\"nimbus-rollout\"}},\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"65.2.3\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2022-10-16+05:30\",\"client_id\":\"90571d99-40b9-4f10-9a9a-227b856f2593\",\"app_channel\":\"release\",\"os_version\""
		":\"10.0\",\"os\":\"Windows\",\"app_display_version\":\"145.0.2\",\"app_build\":\"20251124145406\",\"locale\":\"en-US\",\"architecture\":\"x86_64\",\"windows_build_number\":19045,\"attribution\":{\"source\":\"www.bing.com\",\"medium\":\"referral\",\"campaign\":\"%2528not%2Bset%2529\",\"content\":\"%2528not%2Bset%2529\"}},\"metrics\":{\"quantity\":{\"browser.engagement.max_concurrent_tab_count\":2,\"urlbar.pref_max_results\":10},\"boolean\":{\"urlbar.pref_suggest_topsites\":true,\""
		"search.engine.private.overridden_by_third_party\":false,\"usage.is_default_browser\":false,\"urlbar.pref_suggest_data_collection\":false,\"search.engine.default.overridden_by_third_party\":false,\"policies.is_enterprise\":false,\"urlbar.pref_suggest_nonsponsored\":false,\"urlbar.pref_suggest_sponsored\":false},\"url\":{\"search.engine.private.submission_url\":\"blank:\",\"search.engine.default.submission_url\":\"https://www.google.com/search?client=firefox-b-d&q=\"},\"uuid\":{\""
		"legacy.telemetry.client_id\":\"f6637294-d75f-4350-be24-43ca2fcded9d\",\"legacy.telemetry.profile_group_id\":\"f6637294-d75f-4350-be24-43ca2fcded9d\"},\"counter\":{\"browser.engagement.tab_open_event_count\":1,\"browser.engagement.uri_count\":2,\"browser.engagement.active_ticks\":6},\"string\":{\"search.engine.default.display_name\":\"Google\",\"search.engine.private.partner_code\":\"\",\"search.engine.private.provider_id\":\"\",\"search.engine.default.provider_id\":\"google\",\""
		"search.engine.private.load_path\":\"\",\"search.engine.private.display_name\":\"\",\"search.engine.default.partner_code\":\"firefox-b-d\",\"region.home_region\":\"IN\",\"search.engine.default.load_path\":\"[app]google\"}},\"events\":[{\"timestamp\":0,\"category\":\"session_restore\",\"name\":\"backup_can_be_loaded_session_file\",\"extra\":{\"can_load\":\"true\",\"loadfail_reason\":\"N/A\",\"glean_timestamp\":\"1764828757056\",\"path_key\":\"clean\"}},{\"timestamp\":0,\"category\":\""
		"session_restore\",\"name\":\"backup_can_be_loaded_session_file\",\"extra\":{\"path_key\":\"clean\",\"can_load\":\"true\",\"glean_timestamp\":\"1764828757056\",\"loadfail_reason\":\"N/A\"}},{\"timestamp\":0,\"category\":\"session_restore\",\"name\":\"shutdown_success_session_startup\",\"extra\":{\"glean_timestamp\":\"1764828757057\",\"shutdown_ok\":\"false\",\"shutdown_reason\":\"N/A\"}},{\"timestamp\":601,\"category\":\"webcompatreporting\",\"name\":\"reason_dropdown\",\"extra\":{\""
		"glean_timestamp\":\"1764828757657\",\"setting\":\"required\"}},{\"timestamp\":1157,\"category\":\"nimbus_events\",\"name\":\"startup_database_consistency\",\"extra\":{\"glean_timestamp\":\"1764828758213\",\"db_active_count\":\"37\",\"total_store_count\":\"48\",\"total_db_count\":\"48\",\"primary\":\"database\",\"store_active_count\":\"37\",\"trigger\":\"startup\"}},{\"timestamp\":1252,\"category\":\"jsonfile\",\"name\":\"load_autofillprofiles\",\"extra\":{\"glean_timestamp\":\"1764828758308\",\""
		"value\":\"error_notfounderror\"}},{\"timestamp\":1268,\"category\":\"doh\",\"name\":\"state_rollback\",\"extra\":{\"glean_timestamp\":\"1764828758324\",\"value\":\"null\"}},{\"timestamp\":1285,\"category\":\"containers\",\"name\":\"container_profile_loaded\",\"extra\":{\"glean_timestamp\":\"1764828758342\",\"containers\":\"4\"}},{\"timestamp\":1850,\"category\":\"normandy\",\"name\":\"enroll_failed_nimbus_experiment\",\"extra\":{\"reason\":\"feature-conflict\",\"value\":\""
		"account-spotlight-modal-global-rollout-v3\",\"glean_timestamp\":\"1764828758907\"}},{\"timestamp\":1851,\"category\":\"nimbus_events\",\"name\":\"enroll_failed\",\"extra\":{\"experiment\":\"account-spotlight-modal-global-rollout-v3\",\"glean_timestamp\":\"1764828758907\",\"reason\":\"feature-conflict\"}},{\"timestamp\":2000,\"category\":\"nimbus_events\",\"name\":\"is_ready\",\"extra\":{\"glean_timestamp\":\"1764828759057\"}},{\"timestamp\":2007,\"category\":\"jsonfile\",\"name\":\"load_logins\","
		"\"extra\":{\"glean_timestamp\":\"1764828759064\",\"value\":\"error_notfounderror\"}},{\"timestamp\":2012,\"category\":\"upgrade_dialog\",\"name\":\"trigger_reason\",\"extra\":{\"glean_timestamp\":\"1764828759068\",\"value\":\"not-major\"}},{\"timestamp\":3884,\"category\":\"nimbus_events\",\"name\":\"exposure\",\"extra\":{\"experiment\":\"private-window-visual-refresh-rollout\",\"glean_timestamp\":\"1764828762184\",\"feature_id\":\"feltPrivacy\",\"branch\":\"control\"}},{\"timestamp\":3884,\""
		"category\":\"normandy\",\"name\":\"expose_nimbus_experiment\",\"extra\":{\"branchSlug\":\"control\",\"value\":\"private-window-visual-refresh-rollout\",\"featureId\":\"feltPrivacy\",\"glean_timestamp\":\"1764828762184\"}},{\"timestamp\":5680,\"category\":\"normandy\",\"name\":\"expose_nimbus_experiment\",\"extra\":{\"value\":\"new-tab-147020251114194929-to-release\",\"branchSlug\":\"rollout\",\"glean_timestamp\":\"1764828762737\",\"featureId\":\"newtabTrainhopAddon\"}},{\"timestamp\":5680,\""
		"category\":\"nimbus_events\",\"name\":\"exposure\",\"extra\":{\"feature_id\":\"newtabTrainhopAddon\",\"branch\":\"rollout\",\"glean_timestamp\":\"1764828762737\",\"experiment\":\"new-tab-147020251114194929-to-release\"}},{\"timestamp\":83113,\"category\":\"urlbar\",\"name\":\"abandonment\",\"extra\":{\"actions\":\"none,none,none,none,none,none\",\"glean_timestamp\":\"1764828840169\",\"n_words\":\"0\",\"results\":\"top_site,top_site,top_site,top_site,top_site,top_site\",\"groups\":\"top_site,"
		"top_site,top_site,top_site,top_site,top_site\",\"n_chars\":\"0\",\"n_results\":\"6\",\"interaction\":\"topsites\",\"sap\":\"urlbar_newtab\",\"abandonment_type\":\"tab_switch\",\"search_mode\":\"\",\"available_semantic_sources\":\"none\",\"search_engine_default_id\":\"google-b-d\"}},{\"timestamp\":84287,\"category\":\"urlbar\",\"name\":\"engagement\",\"extra\":{\"glean_timestamp\":\"1764828841344\",\"selected_result\":\"url\",\"n_chars\":\"60\",\"n_results\":\"1\",\"actions\":\"none\",\"sap\":\""
		"urlbar_newtab\",\"results\":\"url\",\"search_engine_default_id\":\"google-b-d\",\"groups\":\"heuristic\",\"selected_position\":\"1\",\"available_semantic_sources\":\"none\",\"provider\":\"UrlbarProviderHeuristicFallback\",\"search_mode\":\"\",\"engagement_type\":\"enter\",\"n_words\":\"1\",\"interaction\":\"pasted\"}},{\"timestamp\":106884,\"category\":\"doh\",\"name\":\"state_shutdown\",\"extra\":{\"glean_timestamp\":\"1764828863940\",\"value\":\"null\"}}]}", 
		EXTRARES, 
		"Url=https://prod.ohttp-gateway.prod.webservices.mozgcp.net/ohttp-configs", "Referer=", ENDITEM, 
		LAST);

	web_url("Default.php", 
		"URL=http://examples.codecharge.com/EmployeeDirectory/Default.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=Styles/Oak/Images/HeaderLeft.gif", "Referer=http://examples.codecharge.com/EmployeeDirectory/Styles/Oak/Style.css", ENDITEM, 
		"Url=Styles/Oak/Images/HeaderRight.gif", "Referer=http://examples.codecharge.com/EmployeeDirectory/Styles/Oak/Style.css", ENDITEM, 
		LAST);

	lr_think_time(112);

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

	web_custom_request("ads_2", 
		"URL=https://ads.mozilla.org/v1/ads", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"context_id\":\"23852afd-307f-4d9f-8e21-aa01fb354cbc\",\"placements\":[{\"placement\":\"newtab_tile_1\",\"count\":1},{\"placement\":\"newtab_tile_2\",\"count\":1},{\"placement\":\"newtab_tile_3\",\"count\":1}],\"blocks\":[\"\"],\"credentials\":\"omit\"}", 
		LAST);

	return 0;
}