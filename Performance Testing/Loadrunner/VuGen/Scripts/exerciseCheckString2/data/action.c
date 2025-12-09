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

	web_custom_request("ocsp.digicert.com", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x0B+\\x84S\\x81\\x9D\\x06\\xA0G\\xD5\\xB0\\xA9$\\xAEr\\xD5", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("demowebshop.tricentis.com", 
		"URL=https://demowebshop.tricentis.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/content/images/thumbs/0000240.png", ENDITEM, 
		"Url=/content/images/thumbs/0000201_build-your-own-expensive-computer_125.jpeg", ENDITEM, 
		"Url=/content/images/thumbs/0000224_141-inch-laptop_125.png", ENDITEM, 
		"Url=/content/images/thumbs/0000031_build-your-own-computer_125.jpeg", ENDITEM, 
		"Url=/favicon.ico", ENDITEM, 
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

	web_custom_request("xvY", 
		"URL=http://o.pki.goog/s/wr3/xvY", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0R0P0N0L0J0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x11\\x00\\xC6\\xF6\\xC8\r\\xE2\\xDF\\x16\\xC1\\x12\\xC6\\xEC\\xC0s\\\\\\xB0T", 
		LAST);

	/*Connection ID 0 received buffer WebSocketReceive0*/

	web_custom_request("ads", 
		"URL=https://ads.mozilla.org/v1/ads", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"context_id\":\"23852afd-307f-4d9f-8e21-aa01fb354cbc\",\"placements\":[{\"placement\":\"newtab_tile_1\",\"count\":1},{\"placement\":\"newtab_tile_2\",\"count\":1},{\"placement\":\"newtab_tile_3\",\"count\":1}],\"blocks\":[\"\"],\"credentials\":\"omit\"}", 
		LAST);

	web_url("canonical.html_2", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/success.txt?ipv4", "Referer=", ENDITEM, 
		LAST);

	web_custom_request("ocsp.digicert.com_2", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x02\\xF1\\x84\\xDA\\xF8\\x12Sy\\xE1\\x18\\x08\\xA7\\x04<\\xF6\\xF4", 
		LAST);

	web_custom_request("4fee0c73-8484-47d7-8b48-8a5634311ea6", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/events/1/4fee0c73-8484-47d7-8b48-8a5634311ea6", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t9.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":26,\"start_time\":\"2025-12-04T11:33:43.000+05:30\",\"end_time\":\"2025-12-04T11:38:53.695+05:30\",\"reason\":\"startup\",\"experiments\":{\"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\""
		":\"nimbus-rollout\"}},\"desktop-address-autofill-india-release-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-credit-cards-treatment-c-rollout\":{\"branch\":\"treatment-c\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"acct-adoption-callout-addresses-rollout-with-pxi-required\":{\"branch\":\"treatment-a\""
		",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"deprecate-ipaddrany-rollout-for-release\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"temp-new-tab-mobile-qr-code-campaign-row\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-search-rollout\":{\"branch\":\"google-lens-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\"treatment-fast-udp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"downsample-uptakeremotecontent-events\":{\""
		"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-credit-card-autofill-global-enablement-rollout-release\":{\"branch\":\"creditcard-enable\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\"next-sign-up-modal-cta\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"new-tab-147020251114194929-to-release\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\"treatment-a-callout-badge\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"smart-tab-groups-rollout-beta\":{\"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-shortcuts-v3-sticky\":{\"branch\":\"sticky-frozen-thom\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\"rollout-branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2025h1-growth-desktop\":{\""
		"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-10-eos-sync-and-reminder-messaging-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-passwords-global-rollout\":{\"branch\":\"treatment-e\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"improved-mailto-handling-with-os-integration-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"65.2.3\",\"client_id\":\"90571d99-40b9-4f10-9a9a-227b856f2593\",\"architecture\":\"x86_64\",\"os\":\"Windows\",\"locale\":\"en-US\",\"os_version\":\"10.0\",\""
		"app_display_version\":\"145.0.2\",\"app_channel\":\"release\",\"app_build\":\"20251124145406\",\"windows_build_number\":19045,\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2022-10-16+05:30\",\"attribution\":{\"campaign\":\"%2528not%2Bset%2529\",\"content\":\"%2528not%2Bset%2529\",\"medium\":\"referral\",\"source\":\"www.bing.com\"}},\"metrics\":{\"uuid\":{\"legacy.telemetry.profile_group_id\":\"f6637294-d75f-4350-be24-43ca2fcded9d\",\"legacy.telemetry.client_id\":\""
		"f6637294-d75f-4350-be24-43ca2fcded9d\"},\"counter\":{\"browser.engagement.uri_count\":1,\"browser.engagement.active_ticks\":4},\"string\":{\"region.home_region\":\"IN\",\"search.engine.default.partner_code\":\"firefox-b-d\",\"search.engine.private.display_name\":\"\",\"search.engine.private.partner_code\":\"\",\"search.engine.private.load_path\":\"\",\"search.engine.default.provider_id\":\"google\",\"search.engine.default.display_name\":\"Google\",\"search.engine.private.provider_id\":\"\",\""
		"search.engine.default.load_path\":\"[app]google\"},\"boolean\":{\"policies.is_enterprise\":false,\"urlbar.pref_suggest_nonsponsored\":false,\"usage.is_default_browser\":false,\"urlbar.pref_suggest_topsites\":true,\"search.engine.private.overridden_by_third_party\":false,\"urlbar.pref_suggest_sponsored\":false,\"urlbar.pref_suggest_data_collection\":false,\"search.engine.default.overridden_by_third_party\":false},\"quantity\":{\"urlbar.pref_max_results\":10,\""
		"browser.engagement.max_concurrent_tab_count\":1},\"url\":{\"search.engine.private.submission_url\":\"blank:\",\"search.engine.default.submission_url\":\"https://www.google.com/search?client=firefox-b-d&q=\"}},\"events\":[{\"timestamp\":0,\"category\":\"session_restore\",\"name\":\"backup_can_be_loaded_session_file\",\"extra\":{\"glean_timestamp\":\"1764828220626\",\"path_key\":\"clean\",\"loadfail_reason\":\"N/A\",\"can_load\":\"true\"}},{\"timestamp\":1,\"category\":\"session_restore\",\"name\":"
		"\"backup_can_be_loaded_session_file\",\"extra\":{\"can_load\":\"true\",\"path_key\":\"clean\",\"loadfail_reason\":\"N/A\",\"glean_timestamp\":\"1764828220626\"}},{\"timestamp\":1,\"category\":\"session_restore\",\"name\":\"shutdown_success_session_startup\",\"extra\":{\"glean_timestamp\":\"1764828220627\",\"shutdown_reason\":\"N/A\",\"shutdown_ok\":\"false\"}},{\"timestamp\":735,\"category\":\"webcompatreporting\",\"name\":\"reason_dropdown\",\"extra\":{\"setting\":\"required\",\"glean_timestamp\""
		":\"1764828221360\"}},{\"timestamp\":1279,\"category\":\"nimbus_events\",\"name\":\"startup_database_consistency\",\"extra\":{\"glean_timestamp\":\"1764828221905\",\"trigger\":\"startup\",\"primary\":\"database\",\"db_active_count\":\"37\",\"total_store_count\":\"48\",\"total_db_count\":\"48\",\"store_active_count\":\"37\"}},{\"timestamp\":1373,\"category\":\"jsonfile\",\"name\":\"load_autofillprofiles\",\"extra\":{\"glean_timestamp\":\"1764828221998\",\"value\":\"error_notfounderror\"}},{\""
		"timestamp\":1390,\"category\":\"doh\",\"name\":\"state_rollback\",\"extra\":{\"glean_timestamp\":\"1764828222015\",\"value\":\"null\"}},{\"timestamp\":1398,\"category\":\"containers\",\"name\":\"container_profile_loaded\",\"extra\":{\"containers\":\"4\",\"glean_timestamp\":\"1764828222023\"}},{\"timestamp\":1674,\"category\":\"jsonfile\",\"name\":\"load_logins\",\"extra\":{\"value\":\"error_notfounderror\",\"glean_timestamp\":\"1764828222299\"}},{\"timestamp\":1683,\"category\":\"upgrade_dialog\","
		"\"name\":\"trigger_reason\",\"extra\":{\"glean_timestamp\":\"1764828222308\",\"value\":\"not-major\"}},{\"timestamp\":2023,\"category\":\"normandy\",\"name\":\"enroll_failed_nimbus_experiment\",\"extra\":{\"reason\":\"feature-conflict\",\"glean_timestamp\":\"1764828222648\",\"value\":\"account-spotlight-modal-global-rollout-v3\"}},{\"timestamp\":2023,\"category\":\"nimbus_events\",\"name\":\"enroll_failed\",\"extra\":{\"glean_timestamp\":\"1764828222648\",\"experiment\":\""
		"account-spotlight-modal-global-rollout-v3\",\"reason\":\"feature-conflict\"}},{\"timestamp\":2238,\"category\":\"nimbus_events\",\"name\":\"is_ready\",\"extra\":{\"glean_timestamp\":\"1764828222863\"}},{\"timestamp\":3997,\"category\":\"nimbus_events\",\"name\":\"exposure\",\"extra\":{\"experiment\":\"private-window-visual-refresh-rollout\",\"branch\":\"control\",\"feature_id\":\"feltPrivacy\",\"glean_timestamp\":\"1764828239788\"}},{\"timestamp\":3997,\"category\":\"normandy\",\"name\":\""
		"expose_nimbus_experiment\",\"extra\":{\"branchSlug\":\"control\",\"featureId\":\"feltPrivacy\",\"value\":\"private-window-visual-refresh-rollout\",\"glean_timestamp\":\"1764828239788\"}},{\"timestamp\":5839,\"category\":\"normandy\",\"name\":\"expose_nimbus_experiment\",\"extra\":{\"glean_timestamp\":\"1764828226464\",\"value\":\"new-tab-147020251114194929-to-release\",\"branchSlug\":\"rollout\",\"featureId\":\"newtabTrainhopAddon\"}},{\"timestamp\":5839,\"category\":\"nimbus_events\",\"name\":\""
		"exposure\",\"extra\":{\"branch\":\"rollout\",\"glean_timestamp\":\"1764828226464\",\"experiment\":\"new-tab-147020251114194929-to-release\",\"feature_id\":\"newtabTrainhopAddon\"}},{\"timestamp\":19157,\"category\":\"doh\",\"name\":\"state_shutdown\",\"extra\":{\"value\":\"null\",\"glean_timestamp\":\"1764828239782\"}}]}", 
		EXTRARES, 
		"Url=https://demowebshop.tricentis.com/Themes/DefaultClean/Content/images/top-menu-divider.png", "Referer=https://demowebshop.tricentis.com/Themes/DefaultClean/Content/styles.css", ENDITEM, 
		"Url=https://demowebshop.tricentis.com/Themes/DefaultClean/Content/images/bullet-right.gif", "Referer=https://demowebshop.tricentis.com/Themes/DefaultClean/Content/styles.css", ENDITEM, 
		"Url=https://demowebshop.tricentis.com/Themes/DefaultClean/Content/images/star-x-inactive.png", "Referer=https://demowebshop.tricentis.com/Themes/DefaultClean/Content/styles.css", ENDITEM, 
		"Url=https://demowebshop.tricentis.com/Themes/DefaultClean/Content/images/star-x-active.png", "Referer=https://demowebshop.tricentis.com/Themes/DefaultClean/Content/styles.css", ENDITEM, 
		"Url=https://demowebshop.tricentis.com/Content/jquery-ui-themes/smoothness/images/ui-bg_flat_75_ffffff_40x100.png", "Referer=https://demowebshop.tricentis.com/Content/jquery-ui-themes/smoothness/jquery-ui-1.10.3.custom.min.css", ENDITEM, 
		"Url=https://demowebshop.tricentis.com/Plugins/Widgets.NivoSlider/Content/nivoslider/themes/default/loading.gif", "Referer=https://demowebshop.tricentis.com/Plugins/Widgets.NivoSlider/Content/nivoslider/themes/default/default.css", ENDITEM, 
		"Url=https://demowebshop.tricentis.com/Plugins/Widgets.NivoSlider/Content/nivoslider/themes/default/arrows.png", "Referer=https://demowebshop.tricentis.com/Plugins/Widgets.NivoSlider/Content/nivoslider/themes/default/default.css", ENDITEM, 
		"Url=https://demowebshop.tricentis.com/Plugins/Widgets.NivoSlider/Content/nivoslider/themes/default/bullets.png", "Referer=https://demowebshop.tricentis.com/Plugins/Widgets.NivoSlider/Content/nivoslider/themes/default/default.css", ENDITEM, 
		"Url=https://prod.ohttp-gateway.prod.webservices.mozgcp.net/ohttp-configs", "Referer=", ENDITEM, 
		LAST);

	web_url("canonical.html_3", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/success.txt?ipv4", "Referer=", ENDITEM, 
		LAST);

	web_custom_request("7feb88ad-0bec-48d0-abb2-85408ce9c871", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/use-counters/1/7feb88ad-0bec-48d0-abb2-85408ce9c871", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t11.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":18,\"start_time\":\"2025-12-04T11:33:36.000+05:30\",\"end_time\":\"2025-12-04T11:33:59.674+05:30\",\"reason\":\"app_shutdown_confirmed\",\"experiments\":{\"deprecate-ipaddrany-rollout-for-release\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\"treatment-fast-udp\",\"extra"
		"\":{\"type\":\"nimbus-rollout\"}},\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\"rollout-branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-shortcuts-v3-sticky\":{\"branch\":\"sticky-frozen-thom\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"account-adoption-callout-credit-cards-treatment-c-rollout\":{\"branch\":\"treatment-c\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"windows-10-eos-sync-and-reminder-messaging-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\""
		"}},\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"new-tab-147020251114194929-to-release\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-tab-groups-rollout-beta\":{\"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"improved-mailto-handling-with-os-integration-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},"
		"\"acct-adoption-callout-addresses-rollout-with-pxi-required\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\"next-sign-up-modal-cta\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-address-autofill-india-release-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-passwords-global-rollout\":{\"branch\":\"treatment-e\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-credit-card-autofill-global-enablement-rollout-release\":{\"branch\":\"creditcard-enable\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-search-rollout\":{\"branch\":\"google-lens-rollout\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\"treatment-a-callout-badge\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\""
		"nimbus-nimbus\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"temp-new-tab-mobile-qr-code-campaign-row\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"65.2.3\",\"windows_build_number\":19045,\"client_id\":\"90571d99-40b9-4f10-9a9a-227b856f2593\",\"app_display_version\":\"145.0.2\",\"architecture\":\"x86_64\",\"app_build\":\"20251124145406\",\"os\":\"Windows\",\"locale\""
		":\"en-US\",\"app_channel\":\"release\",\"os_version\":\"10.0\",\"first_run_date\":\"2022-10-16+05:30\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"attribution\":{\"content\":\"%2528not%2Bset%2529\",\"source\":\"www.bing.com\",\"campaign\":\"%2528not%2Bset%2529\",\"medium\":\"referral\"}},\"metrics\":{\"counter\":{\"use.counter.css.doc.webkit_margin_top_collapse\":2,\"use.counter.css.doc.css_moz_box_sizing\":2,\"use.counter.css.doc.css_top\":2,\"use.counter.css.page.css_page_break_after\":1,\""
		"use.counter.css.page.css_background_size\":1,\"use.counter.css.page.css_list_style\":1,\"use.counter.css.doc.css_overflow_y\":2,\"use.counter.css.doc.css_webkit_animation\":2,\"use.counter.css.page.css_background_position\":1,\"use.counter.css.page.css_padding\":1,\"use.counter.css.page.css_cursor\":1,\"use.counter.css.doc.css_border_right_color\":2,\"use.counter.css.doc.css_height\":2,\"use.counter.css.doc.css_moz_animation\":2,\"use.counter.css.page.css_border_top\":1,\""
		"use.counter.css.page.css_text_decoration\":1,\"use.counter.css.doc.css_padding_bottom\":2,\"use.counter.css.doc.css_text_rendering\":2,\"use.counter.css.doc.css_content\":2,\"use.counter.css.page.css_border_top_width\":1,\"use.counter.css.doc.css_border_width\":2,\"use.counter.css.doc.css_border_bottom\":2,\"use.counter.css.doc.css_overflow\":2,\"use.counter.css.doc.css_white_space\":2,\"use.counter.css.page.css_border\":1,\"use.counter.css.doc.css_outline\":2,\"use.counter.css.doc.css_color\":2,"
		"\"use.counter.css.doc.css_word_break\":2,\"use.counter.css.page.css_border_left\":1,\"use.counter.css.page.css_font_family\":1,\"use.counter.css.page.css_margin_right\":1,\"use.counter.css.page.css_overflow_x\":1,\"use.counter.css.page.css_font_style\":1,\"use.counter.css.page.css_font_weight\":1,\"use.counter.css.page.css_webkit_border_top_left_radius\":1,\"use.counter.css.doc.css_clear\":2,\"use.counter.css.page.css_webkit_transform\":1,\"use.counter.css.doc.css_font\":2,\""
		"use.counter.css.doc.css_letter_spacing\":2,\"use.counter.css.doc.css_width\":2,\"use.counter.css.page.css_moz_animation\":1,\"use.counter.css.page.css_border_bottom_left_radius\":1,\"use.counter.css.doc.css_webkit_transition\":2,\"use.counter.css.page.css_line_height\":1,\"use.counter.css.doc.css_border_top_left_radius\":2,\"use.counter.css.doc.css_font_weight\":2,\"use.counter.css.doc.css_bottom\":2,\"use.counter.css.page.css_opacity\":1,\"use.counter.css.doc.css_min_width\":2,\""
		"use.counter.css.doc.css_right\":2,\"use.counter.css.page.css_overflow\":1,\"use.counter.css.page.css_text_align\":1,\"use.counter.css.page.css_display\":1,\"use.counter.css.page.css_webkit_animation\":1,\"use.counter.css.page.css_text_transform\":1,\"use.counter.css.page.css_webkit_border_top_right_radius\":1,\"use.counter.css.page.css_webkit_transition\":1,\"use.counter.css.doc.css_webkit_background_clip\":2,\"use.counter.css.doc.css_page_break_inside\":2,\"use.counter.css.doc.css_box_shadow\":2,"
		"\"use.counter.css.page.css_text_shadow\":1,\"use.counter.css.doc.css_text_decoration\":2,\"use.counter.css.doc.css_animation\":2,\"use.counter.css.page.css_color\":1,\"use.counter.css.page.css_outline_offset\":1,\"use.counter.css.doc.css_padding_right\":2,\"use.counter.css.doc.css_opacity\":2,\"use.counter.css.doc.css_border_collapse\":2,\"use.counter.css.doc.css_border_top_right_radius\":2,\"use.counter.css.page.css_border_bottom_color\":1,\"use.counter.css.page.css_border_right\":1,\""
		"use.counter.css.page.css_height\":1,\"use.counter.css.page.css_border_right_width\":1,\"use.counter.css.page.css_transition\":1,\"use.counter.css.doc.css_margin_right\":2,\"use.counter.css.page.css_border_left_width\":1,\"use.counter.css.doc.css_left\":2,\"use.counter.css.doc.css_position\":2,\"use.counter.css.doc.css_border_bottom_left_radius\":2,\"use.counter.css.page.css_text_overflow\":1,\"use.counter.css.page.css_vertical_align\":1,\"use.counter.css.doc.css_transition\":2,\""
		"use.counter.css.page.css_letter_spacing\":1,\"use.counter.css.page.css_width\":1,\"use.counter.css.doc.css_pointer_events\":2,\"use.counter.css.doc.css_border_style\":2,\"use.counter.css.page.css_border_right_color\":1,\"use.counter.css.page.css_webkit_border_bottom_right_radius\":1,\"use.counter.css.page.css_background_color\":1,\"use.counter.css.page.css_border_bottom_right_radius\":1,\"use.counter.css.page.css_webkit_background_clip\":1,\"use.counter.css.page.css_left\":1,\""
		"use.counter.css.doc.css_margin_top\":2,\"use.counter.css.doc.css_padding_top\":2,\"use.counter.css.page.css_moz_transition\":1,\"use.counter.css.page.css_word_break\":1,\"use.counter.css.page.css_webkit_box_sizing\":1,\"use.counter.css.doc.css_list_style\":2,\"use.counter.css.page.css_animation\":1,\"use.counter.css.doc.css_outline_offset\":2,\"use.counter.css.doc.css_margin_left\":2,\"use.counter.css.doc.css_webkit_border_top_right_radius\":2,\"use.counter.css.page.css_border_spacing\":1,\""
		"use.counter.css.doc.css_webkit_border_radius\":2,\"use.counter.css.doc.css_border_bottom_color\":2,\"use.counter.css.doc.css_webkit_appearance\":2,\"use.counter.css.doc.css_border_left\":2,\"use.counter.css.page.css_background_image\":1,\"use.counter.css.doc.css_text_align\":2,\"use.counter.css.page.css_border_top_left_radius\":1,\"use.counter.css.page.css_box_sizing\":1,\"use.counter.css.page.css_float\":1,\"use.counter.css.doc.css_background_color\":2,\"use.counter.css.page.css_margin_bottom\":1"
		",\"use.counter.css.doc.css_vertical_align\":2,\"use.counter.css.page.css_margin_left\":1,\"use.counter.css.page.css_zoom\":1,\"use.counter.css.doc.css_max_width\":2,\"use.counter.css.page.css_pointer_events\":1,\"use.counter.css.doc.css_border_color\":2,\"use.counter.css.page.css_right\":1,\"use.counter.css.page.css_webkit_appearance\":1,\"use.counter.css.page.css_overflow_y\":1,\"use.counter.css.doc.css_padding_left\":2,\"use.counter.css.page.css_border_top_color\":1,\""
		"use.counter.css.doc.css_background_clip\":2,\"use.counter.css.page.css_margin\":1,\"use.counter.css.doc.css_margin\":2,\"use.counter.css.page.webkit_margin_top_collapse\":1,\"use.counter.top_level_content_documents_destroyed\":1,\"use.counter.css.page.css_bottom\":1,\"use.counter.css.doc.orphans\":2,\"use.counter.content_documents_destroyed\":2,\"use.counter.css.page.css_z_index\":1,\"use.counter.css.doc.css_text_overflow\":2,\"use.counter.css.doc.css_background\":2,\""
		"use.counter.css.page.css_padding_bottom\":1,\"use.counter.css.page.css_border_top_right_radius\":1,\"use.counter.css.doc.css_background_image\":2,\"use.counter.css.page.css_min_width\":1,\"use.counter.css.page.css_visibility\":1,\"use.counter.css.page.css_min_height\":1,\"use.counter.css.doc.css_border_top\":2,\"use.counter.css.doc.css_border_top_color\":2,\"use.counter.css.doc.css_min_height\":2,\"use.counter.css.doc.css_text_indent\":2,\"use.counter.css.doc.css_word_wrap\":2,\""
		"use.counter.css.doc.css_zoom\":2,\"use.counter.css.page.css_border_bottom\":1,\"use.counter.css.doc.css_border_right_width\":2,\"use.counter.css.doc.css_border_bottom_right_radius\":2,\"use.counter.css.doc.css_moz_transition\":2,\"use.counter.css.doc.css_webkit_border_top_left_radius\":2,\"use.counter.css.page.css_border_collapse\":1,\"use.counter.css.doc.css_border_right\":2,\"use.counter.css.doc.css_webkit_transform\":2,\"use.counter.css.doc.css_background_position\":2,\""
		"use.counter.css.page.css_background\":1,\"use.counter.css.page.css_max_width\":1,\"use.counter.css.page.css_position\":1,\"use.counter.css.doc.css_cursor\":2,\"use.counter.css.page.css_content\":1,\"use.counter.css.doc.css_webkit_box_sizing\":2,\"use.counter.css.page.css_padding_right\":1,\"use.counter.css.doc.css_font_style\":2,\"use.counter.css.page.css_outline\":1,\"use.counter.css.doc.css_border_left_color\":2,\"use.counter.css.doc.css_overflow_x\":2,\"use.counter.css.doc.css_text_shadow\":2,"
		"\"use.counter.css.page.css_padding_top\":1,\"use.counter.css.page.css_box_shadow\":1,\"use.counter.css.doc.widows\":2,\"use.counter.css.page.css_clear\":1,\"use.counter.css.doc.css_visibility\":2,\"use.counter.css.page.css_webkit_background_size\":1,\"use.counter.css.page.css_word_wrap\":1,\"use.counter.css.page.css_font_size\":1,\"use.counter.css.page.widows\":1,\"use.counter.css.page.css_max_height\":1,\"use.counter.css.page.css_webkit_border_radius\":1,\""
		"use.counter.css.page.css_border_left_color\":1,\"use.counter.css.page.css_padding_left\":1,\"use.counter.css.doc.css_background_repeat\":2,\"use.counter.css.doc.css_background_size\":2,\"use.counter.css.doc.css_margin_bottom\":2,\"use.counter.css.doc.css_padding\":2,\"use.counter.css.doc.css_max_height\":2,\"use.counter.css.doc.css_webkit_background_size\":2,\"use.counter.css.doc.css_page_break_after\":2,\"use.counter.css.page.css_top\":1,\"use.counter.css.page.css_webkit_box_shadow\":1,\""
		"use.counter.css.page.css_text_indent\":1,\"use.counter.css.page.css_text_rendering\":1,\"use.counter.css.page.css_white_space\":1,\"use.counter.css.page.orphans\":1,\"use.counter.css.doc.css_border_bottom_width\":2,\"use.counter.css.doc.css_border\":2,\"use.counter.css.page.css_border_color\":1,\"use.counter.css.page.css_background_clip\":1,\"use.counter.css.doc.css_border_spacing\":2,\"use.counter.css.doc.css_font_family\":2,\"use.counter.css.doc.css_font_size\":2,\""
		"use.counter.css.doc.css_webkit_box_shadow\":2,\"use.counter.css.doc.css_border_top_width\":2,\"use.counter.css.page.css_border_bottom_width\":1,\"use.counter.css.page.css_border_radius\":1,\"use.counter.css.page.css_margin_top\":1,\"use.counter.css.doc.css_border_radius\":2,\"use.counter.css.page.css_moz_box_sizing\":1,\"use.counter.css.doc.css_line_height\":2,\"use.counter.css.doc.css_float\":2,\"use.counter.css.doc.css_z_index\":2,\"use.counter.css.doc.css_border_left_width\":2,\""
		"use.counter.css.doc.css_display\":2,\"use.counter.css.page.css_background_repeat\":1,\"use.counter.css.page.css_font\":1,\"use.counter.css.page.css_page_break_inside\":1,\"use.counter.css.doc.css_text_transform\":2,\"use.counter.css.page.css_border_style\":1,\"use.counter.css.page.css_webkit_border_bottom_left_radius\":1,\"use.counter.css.doc.css_webkit_border_bottom_right_radius\":2,\"use.counter.css.doc.css_box_sizing\":2,\"use.counter.css.doc.css_webkit_border_bottom_left_radius\":2,\""
		"use.counter.css.page.css_border_width\":1}}}", 
		LAST);

	web_custom_request("4df2ce0d-a3b2-4d0c-8725-5fe0ad438179", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/newtab/1/4df2ce0d-a3b2-4d0c-8725-5fe0ad438179", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t12.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":54,\"start_time\":\"2025-12-04T11:33:43.000+05:30\",\"end_time\":\"2025-12-04T11:38:53.931+05:30\",\"reason\":\"component_init\"},\"client_info\":{\"telemetry_sdk_build\":\"65.2.3\",\"client_id\":\"90571d99-40b9-4f10-9a9a-227b856f2593\",\"windows_build_number\":19045,\"first_run_date\":\"2022-10-16+05:30\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"locale\":\"en-US\",\"os_version\":\"10.0\",\"app_display_version\":\"145.0.2\",\"app_build\":\"20251124145406\",\""
		"architecture\":\"x86_64\",\"os\":\"Windows\",\"app_channel\":\"release\",\"attribution\":{\"campaign\":\"%2528not%2Bset%2529\",\"content\":\"%2528not%2Bset%2529\",\"medium\":\"referral\",\"source\":\"www.bing.com\"}},\"metrics\":{\"string_list\":{\"newtab.blocked_sponsors\":[]},\"string\":{\"newtab.newtab_category\":\"enabled\",\"newtab.homepage_category\":\"enabled\",\"newtab.locale\":\"en-US\"}}}", 
		LAST);

	web_custom_request("1eaed5b7-5186-40d9-a683-7b892dbb99bc", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/nimbus-targeting-context/1/1eaed5b7-5186-40d9-a683-7b892dbb99bc", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t13.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":17,\"start_time\":\"2025-12-04T11:33:43.000+05:30\",\"end_time\":\"2025-12-04T11:38:54.109+05:30\",\"experiments\":{\"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\"next-sign-up-modal-cta\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout"
		"\"}},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"acct-adoption-callout-addresses-rollout-with-pxi-required\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\""
		"treatment-fast-udp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\"treatment-a-callout-badge\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\""
		"nimbus-nimbus\"}},\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"deprecate-ipaddrany-rollout-for-release\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-credit-card-autofill-global-enablement-rollout-release\":{\"branch\":\"creditcard-enable\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"new-tab-147020251114194929-to-release\":{\"branch\":\"rollout\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"desktop-address-autofill-india-release-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-passwords-global-rollout\":{\"branch\":\"treatment-e\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"improved-mailto-handling-with-os-integration-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-tab-groups-rollout-beta\":{\"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"windows-10-eos-sync-and-reminder-messaging-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\"rollout-branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"temp-new-tab-mobile-qr-code-campaign-row\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-credit-cards-treatment-c-rollout\":{\"branch\":\"treatment-c\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-shortcuts-v3-sticky\":{\"branch\""
		":\"sticky-frozen-thom\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-search-rollout\":{\"branch\":\"google-lens-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"65.2.3\",\"app_build\":\"20251124145406\",\"os\":\"Windows\",\"app_display_version\":\"145.0.2\",\"app_channel\":\"release\",\"os_version\":\"10.0\",\"architecture\":\"x86_64\",\""
		"locale\":\"en-US\",\"first_run_date\":\"2022-10-16+05:30\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"windows_build_number\":19045,\"client_id\":\"90571d99-40b9-4f10-9a9a-227b856f2593\",\"attribution\":{\"campaign\":\"%2528not%2Bset%2529\",\"source\":\"www.bing.com\",\"medium\":\"referral\",\"content\":\"%2528not%2Bset%2529\"}},\"metrics\":{\"object\":{\"nimbus_targeting_context.default_pdf_handler\":{\"knownBrowser\":true,\"registered\":true},\"nimbus_targeting_context.home_page_settings\":{"
		"\"isCustomUrl\":false,\"isDefault\":true,\"isLocked\":false,\"isWebExt\":false},\"nimbus_targeting_environment.user_set_prefs\":[\"nimbus.profilesdatastoreservice.read.enabled\",\"nimbus.profilesdatastoreservice.sync.enabled\",\"browser.search.separatePrivateDefault.urlbarResult.enabled\",\"browser.newtabpage.activity-stream.mobileDownloadModal.enabled\",\"browser.newtabpage.activity-stream.mobileDownloadModal.variant-a\",\"browser.newtabpage.trainhopAddon.version\",\""
		"signon.firefoxRelay.showToAllBrowsers\",\"browser.contextual-services.contextId.rotation-in-days\"],\"nimbus_targeting_context.os\":{\"isLinux\":false,\"isMac\":false,\"windowsBuildNumber\":19045,\"windowsVersion\":10},\"nimbus_targeting_context.is_default_handler\":{\"html\":false,\"pdf\":false},\"nimbus_targeting_context.browser_settings\":{\"update\":{\"channel\":\"release\"}},\"nimbus_targeting_context.active_rollouts\":[\""
		"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\",\"account-adoption-callout-credit-cards-treatment-c-rollout\",\"account-adoption-callout-passwords-global-rollout\",\"account-adoption-pxi-menu-rollout-v2\",\"acct-adoption-callout-addresses-rollout-with-pxi-required\",\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\",\"backgroundupdate-enable-unelevated-installations-rollout-3-release\",\"context-id-rotation-every-3-days\",\""
		"deprecate-ipaddrany-rollout-for-release\",\"desktop-address-autofill-india-release-rollout\",\"desktop-credit-card-autofill-global-enablement-rollout-release\",\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\",\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\",\"downsample-uptakeremotecontent-events\",\"enable-nimbus-unenrollment-synchronization\",\"encrypted-client-hello-fallback-mechanism\",\""
		"enforce-crlite-results-and-limit-use-of-ocsp-rollout\",\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\",\"fox-doodle-multi-action-cta-2025-rollout\",\"fx-accounts-ping-release-rollout-2\",\"improved-mailto-handling-with-os-integration-treatment-a-rollout\",\"new-tab-147020251114194929-to-release\",\"pdf-annotations-highlight-treatment-b-rollout\",\"pin-frequently-used-websites-143-promo-rollout-all-locales\",\"private-window-visual-refresh-rollout\",\""
		"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\",\"smart-tab-groups-rollout-beta\",\"taskbar-tabs-discovery-global-rollout\",\"temp-new-tab-mobile-qr-code-campaign-row\",\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\",\"visual-card-updates\",\"visual-search-rollout\",\"windows-10-eos-sync-and-reminder-messaging-rollout\",\"windows-ui-automation-release-rollout\"],\"nimbus_targeting_context.addons_info\":{\"addons\":[\""
		"addons-search-detection@mozilla.com\",\"data-leak-blocker@mozilla.com\",\"formautofill@mozilla.org\",\"ipp-activator@mozilla.com\",\"newtab@mozilla.org\",\"pictureinpicture@mozilla.org\",\"webcompat@mozilla.org\"],\"hasInstalledAddons\":true},\"nimbus_targeting_context.attribution_data\":{\"medium\":\"referral\",\"source\":\"www.bing.com\",\"ua\":\"edge\"},\"nimbus_targeting_context.enrollments_map\":[{\"experimentSlug\":\""
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
		"windows-ui-automation-release-rollout\",\"branchSlug\":\"rollout\"}],\"nimbus_targeting_context.active_experiments\":[\"long-term-holdback-2025h1-growth-desktop\",\"mozilla-foundation-donation-promotion-moments-page\",\"smart-shortcuts-v3-sticky\"],\"nimbus_targeting_context.primary_resolution\":{\"height\":760,\"width\":1280},\"nimbus_targeting_context.user_monthly_activity\":[{\"numberOfURLsVisited\":3,\"date\":\"2025-11-20\"},{\"numberOfURLsVisited\":1,\"date\":\"2025-12-03\"}],\""
		"nimbus_targeting_environment.pref_values\":{\"browser__newtabpage__activity_stream__asrouter__userprefs__cfr__addons\":true,\"browser__newtabpage__activity_stream__asrouter__userprefs__cfr__features\":true,\"browser__newtabpage__activity_stream__feeds__section__highlights\":false,\"browser__newtabpage__activity_stream__feeds__section__topstories\":true,\"browser__newtabpage__activity_stream__feeds__topsites\":true,\"browser__newtabpage__activity_stream__showSearch\":true,\""
		"browser__newtabpage__activity_stream__showSponsoredTopSites\":true,\"browser__newtabpage__enabled\":true,\"browser__startup__page\":1,\"browser__toolbars__bookmarks__visibility\":\"newtab\",\"browser__urlbar__lastUrlbarSearchSeconds\":0,\"browser__urlbar__quicksuggest__dataCollection__enabled\":false,\"browser__urlbar__showSearchSuggestionsFirst\":true,\"browser__urlbar__suggest__quicksuggest__sponsored\":false,\"media__videocontrols__picture_in_picture__enabled\":true,\""
		"media__videocontrols__picture_in_picture__video_toggle__enabled\":true,\"media__videocontrols__picture_in_picture__video_toggle__has_used\":false,\"network__trr__mode\":0,\"security__sandbox__content__level\":8,\"trailhead__firstrun__didSeeAboutWelcome\":true,\"nimbus__qa__pref_1\":\"default\",\"nimbus__qa__pref_2\":\"default\"}},\"boolean\":{\"nimbus_targeting_context.is_fx_a_signed_in\":false,\"nimbus_targeting_context.is_first_startup\":false,\"nimbus_targeting_context.is_msix\":false,\""
		"nimbus_targeting_context.user_prefers_reduced_motion\":true,\"nimbus_targeting_context.has_pinned_tabs\":false,\"nimbus_targeting_context.does_app_need_pin\":false,\"nimbus_targeting_context.has_active_enterprise_policies\":false,\"nimbus_targeting_context.is_default_browser\":false,\"nimbus_targeting_context.uses_firefox_sync\":false,\"nimbus_targeting_context.is_fx_a_enabled\":true},\"string\":{\"nimbus_targeting_context.distribution_id\":\"\",\"nimbus_targeting_context.locale\":\"en-US\",\""
		"nimbus_targeting_context.current_date\":\"Thu, 04 Dec 2025 06:08:52 GMT\",\"nimbus_targeting_context.region\":\"IN\",\"nimbus_targeting_context.version\":\"145.0.2\"},\"uuid\":{\"legacy.telemetry.profile_group_id\":\"f6637294-d75f-4350-be24-43ca2fcded9d\",\"legacy.telemetry.client_id\":\"f6637294-d75f-4350-be24-43ca2fcded9d\"},\"quantity\":{\"nimbus_targeting_context.build_id\":1,\"nimbus_targeting_context.total_bookmarks_count\":5,\"nimbus_targeting_context.firefox_version\":145,\""
		"nimbus_targeting_context.addresses_saved\":0,\"nimbus_targeting_context.profile_group_profile_count\":0,\"nimbus_targeting_context.memory_mb\":16382,\"nimbus_targeting_context.arch_bits\":64,\"nimbus_targeting_context.profile_age_created\":1665919558706}}}", 
		LAST);

	web_custom_request("164ae961-5578-4ed6-adf9-02e89466451f", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/baseline/1/164ae961-5578-4ed6-adf9-02e89466451f", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t14.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":34,\"start_time\":\"2025-12-04T11:33:43.000+05:30\",\"end_time\":\"2025-12-04T11:38:54.219+05:30\",\"reason\":\"active\",\"experiments\":{\"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"account-adoption-callout-credit-cards-treatment-c-rollout\":{\"branch\":\"treatment-c\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-shortcuts-v3-sticky\":{\"branch\":\"sticky-frozen-thom\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"improved-mailto-handling-with-os-integration-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"deprecate-ipaddrany-rollout-for-release\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"temp-new-tab-mobile-qr-code-campaign-row\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"smart-tab-groups-rollout-beta\":{\"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-10-eos-sync-and-reminder-messaging-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-credit-card-autofill-global-enablement-rollout-release\":{\"branch\":\"creditcard-enable\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"new-tab-147020251114194929-to-release\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"desktop-address-autofill-india-release-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\"next-sign-up-modal-cta\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\""
		"treatment-a-callout-badge\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\"rollout-branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-search-rollout\":{\"branch\":\"google-lens-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-passwords-global-rollout\":{\"branch\":\"treatment-e\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"acct-adoption-callout-addresses-rollout-with-pxi-required\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-card-updates"
		"\":{\"branch\":\"updated\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\"treatment-fast-udp\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"65.2.3\",\"app_build\":\"20251124145406\",\"app_display_version\":\"145.0.2\",\"app_channel\":\"release\",\"architecture\":\""
		"x86_64\",\"locale\":\"en-US\",\"os\":\"Windows\",\"os_version\":\"10.0\",\"windows_build_number\":19045,\"client_id\":\"90571d99-40b9-4f10-9a9a-227b856f2593\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2022-10-16+05:30\",\"attribution\":{\"medium\":\"referral\",\"campaign\":\"%2528not%2Bset%2529\",\"source\":\"www.bing.com\",\"content\":\"%2528not%2Bset%2529\"}},\"metrics\":{\"string\":{\"startup.profile_selection_reason\":\"default\",\"usage.distribution_id\":\"default\"},"
		"\"labeled_counter\":{\"glean.validation.pings_submitted\":{\"baseline\":1,\"events\":1}},\"uuid\":{\"legacy.telemetry.client_id\":\"f6637294-d75f-4350-be24-43ca2fcded9d\",\"legacy.telemetry.profile_group_id\":\"f6637294-d75f-4350-be24-43ca2fcded9d\"},\"counter\":{\"browser.engagement.active_ticks\":3},\"boolean\":{\"usage.is_default_browser\":false},\"datetime\":{\"glean.validation.first_run_hour\":\"2022-10-16T16+05:30\"}}}", 
		LAST);

	web_custom_request("876b6905-6cca-439b-b770-a77f5be53710", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/usage-reporting/1/876b6905-6cca-439b-b770-a77f5be53710", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t15.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"metrics\":{\"quantity\":{\"usage.windows_user_profile_age_in_days\":1145,\"usage.windows_build_number\":19045},\"string\":{\"usage.distribution_id\":\"default\",\"usage.app_build\":\"20251124145406\",\"usage.os\":\"WINNT\",\"usage.app_channel\":\"release\",\"usage.app_display_version\":\"145.0.2\",\"usage.os_version\":\"10.0\"},\"uuid\":{\"usage.profile_group_id\":\"9285e5cf-d171-4f29-a5b8-d53d109d51a8\",\"usage.profile_id\":\"5ae6e87b-e670-4529-b684-10268475dcce\"},\"counter\":{\""
		"browser.engagement.active_ticks\":3},\"boolean\":{\"usage.windows_backup_enabled\":false,\"usage.is_default_browser\":false},\"datetime\":{\"usage.first_run_date\":\"2022-10-16+05:30\"}}}", 
		LAST);

	web_custom_request("38efcd04-2f3a-446b-a8f4-7781217dcf5b", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/health/1/38efcd04-2f3a-446b-a8f4-7781217dcf5b", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t16.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":30,\"start_time\":\"2025-12-04T11:33:43.000+05:30\",\"end_time\":\"2025-12-04T11:38:54.253+05:30\",\"reason\":\"pre_init\",\"experiments\":{\"new-tab-147020251114194929-to-release\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-credit-cards-treatment-c-rollout\":{\"branch\":\"treatment-c\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\"rollout-branch\","
		"\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\"treatment-a-callout-badge\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-10-eos-sync-and-reminder-messaging-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\""
		"extra\":{\"type\":\"nimbus-rollout\"}},\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-shortcuts-v3-sticky\":{\"branch\":\"sticky-frozen-thom\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"temp-new-tab-mobile-qr-code-campaign-row\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"acct-adoption-callout-addresses-rollout-with-pxi-required\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"improved-mailto-handling-with-os-integration-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-search-rollout\":"
		"{\"branch\":\"google-lens-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-passwords-global-rollout\":{\"branch\":\"treatment-e\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\""
		"sign-in-with-call-out\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"deprecate-ipaddrany-rollout-for-release\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-address-autofill-india-release-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-credit-card-autofill-global-enablement-rollout-release\":{\"branch\":\""
		"creditcard-enable\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\"next-sign-up-modal-cta\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch"
		"\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\"treatment-fast-udp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-tab-groups-rollout-beta\":{\"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"65.2.3\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2022-10-16+05:30\",\"client_id\":\"90571d99-40b9-4f10-9a9a-227b856f2593\",\""
		"app_display_version\":\"145.0.2\",\"app_build\":\"20251124145406\",\"locale\":\"en-US\",\"architecture\":\"x86_64\",\"app_channel\":\"release\",\"os\":\"Windows\",\"os_version\":\"10.0\",\"windows_build_number\":19045,\"attribution\":{\"medium\":\"referral\",\"source\":\"www.bing.com\",\"campaign\":\"%2528not%2Bset%2529\",\"content\":\"%2528not%2Bset%2529\"}},\"metrics\":{\"timing_distribution\":{\"glean.validation.shutdown_wait\":{\"values\":{\"4987896\":1},\"sum\":5245800},\""
		"glean.upload.send_failure\":{\"values\":{\"413984066\":1,\"146365470\":1,\"61539099\":1,\"94906265\":1},\"sum\":738850300},\"glean.validation.shutdown_dispatcher_wait\":{\"values\":{\"11863283\":1},\"sum\":12532700},\"glean.upload.send_success\":{\"values\":{\"319225354\":2,\"2147483648\":1,\"292730940\":3,\"348117717\":2},\"sum\":4615484400}},\"uuid\":{\"legacy.telemetry.profile_group_id\":\"f6637294-d75f-4350-be24-43ca2fcded9d\",\"legacy.telemetry.client_id\":\""
		"f6637294-d75f-4350-be24-43ca2fcded9d\"},\"object\":{\"glean.health.data_directory_info\":[{\"dir_name\":\"db\",\"dir_exists\":true,\"dir_created\":1665919583,\"dir_modified\":1764828239,\"file_count\":1,\"files\":[{\"file_name\":\"data.safe.bin\",\"file_created\":1764828208,\"file_modified\":1764828239,\"file_size\":234901}]},{\"dir_name\":\"events\",\"dir_exists\":true,\"dir_created\":1665919583,\"dir_modified\":1764828223,\"file_count\":2,\"files\":[{\"file_name\":\"events\",\"file_created\""
		":1733465245,\"file_modified\":1764828239,\"file_size\":3199},{\"file_name\":\"prototype-no-code-events\",\"file_created\":1733395015,\"file_modified\":1762144555,\"file_size\":645}]},{\"dir_name\":\"pending_pings\",\"dir_exists\":true,\"dir_created\":1665919583,\"dir_modified\":1764828239,\"file_count\":2,\"files\":[{\"file_name\":\"09f654cb-0bf5-4a13-ae82-273df63d00a2\",\"file_created\":1764757770,\"file_modified\":1764757770,\"file_size\":368},{\"file_name\":\""
		"7feb88ad-0bec-48d0-abb2-85408ce9c871\",\"file_created\":1764828239,\"file_modified\":1764828239,\"file_size\":14429}]}],\"glean.database.load_sizes\":{\"new\":234901,\"open\":234901,\"post_open\":234901,\"post_open_user\":234901,\"post_load_ping_lifetime_data\":234901,\"user_records\":64,\"ping_records\":1009,\"application_records\":301,\"ping_memory_records\":1009}},\"memory_distribution\":{\"glean.upload.pending_pings_directory_size\":{\"values\":{\"13777\":1},\"sum\":14336},\""
		"glean.database.size\":{\"values\":{\"230195\":1},\"sum\":234901}},\"labeled_counter\":{\"glean.upload.ping_upload_failure\":{\"recoverable\":4},\"glean.validation.pings_submitted\":{\"baseline\":1,\"events\":1}},\"counter\":{\"glean.upload.pending_pings\":2,\"glean.health.init_count\":16}}}", 
		LAST);

	web_custom_request("94a66282-ab35-4458-8138-7bf9e6470f0d", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/health/1/94a66282-ab35-4458-8138-7bf9e6470f0d", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t17.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":31,\"start_time\":\"2025-12-04T11:38:54.000+05:30\",\"end_time\":\"2025-12-04T11:38:54.262+05:30\",\"reason\":\"post_init\",\"experiments\":{\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"desktop-address-autofill-india-release-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"account-adoption-callout-passwords-global-rollout\":{\"branch\":\"treatment-e\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-shortcuts-v3-sticky\":{\"branch\":\"sticky-frozen-thom\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"smart-tab-groups-rollout-beta\":{\"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"temp-new-tab-mobile-qr-code-campaign-row\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\""
		":\"nimbus-rollout\"}},\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\"rollout-branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"improved-mailto-handling-with-os-integration-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\""
		"next-sign-up-modal-cta\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-10-eos-sync-and-reminder-messaging-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\""
		"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-credit-cards-treatment-c-rollout\":{\"branch\":\"treatment-c\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-search-rollout\":{\"branch\":\"google-lens-rollout\",\"extra\":{\"type\":\"nimbus-rollout\""
		"}},\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"new-tab-147020251114194929-to-release\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"deprecate-ipaddrany-rollout-for-release\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"acct-adoption-callout-addresses-rollout-with-pxi-required\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\"treatment-fast-udp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"desktop-credit-card-autofill-global-enablement-rollout-release\":{\"branch\":\"creditcard-enable\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\"treatment-a-callout-badge\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"65.2.3\",\"client_id\":\"90571d99-40b9-4f10-9a9a-227b856f2593\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2022-10-16+05:30\",\"os\":\""
		"Windows\",\"app_build\":\"20251124145406\",\"os_version\":\"10.0\",\"architecture\":\"x86_64\",\"app_display_version\":\"145.0.2\",\"app_channel\":\"release\",\"locale\":\"en-US\",\"windows_build_number\":19045,\"attribution\":{\"campaign\":\"%2528not%2Bset%2529\",\"content\":\"%2528not%2Bset%2529\",\"source\":\"www.bing.com\",\"medium\":\"referral\"}},\"metrics\":{\"counter\":{\"glean.health.init_count\":16},\"object\":{\"glean.health.data_directory_info\":[{\"dir_name\":\"db\",\"dir_exists\""
		":true,\"dir_created\":1665919583,\"dir_modified\":1764828534,\"file_count\":1,\"files\":[{\"file_name\":\"data.safe.bin\",\"file_created\":1764828533,\"file_modified\":1764828534,\"file_size\":232705}]},{\"dir_name\":\"events\",\"dir_exists\":true,\"dir_created\":1665919583,\"dir_modified\":1764828533,\"file_count\":2,\"files\":[{\"file_name\":\"events\",\"file_created\":1733465245,\"file_modified\":1764828533,\"file_size\":0},{\"file_name\":\"prototype-no-code-events\",\"file_created\":1733395015"
		",\"file_modified\":1762144555,\"file_size\":645}]},{\"dir_name\":\"pending_pings\",\"dir_exists\":true,\"dir_created\":1665919583,\"dir_modified\":1764828534,\"file_count\":8,\"files\":[{\"file_name\":\"09f654cb-0bf5-4a13-ae82-273df63d00a2\",\"file_created\":1764757770,\"file_modified\":1764757770,\"file_size\":368},{\"file_name\":\"164ae961-5578-4ed6-adf9-02e89466451f\",\"file_created\":1764828534,\"file_modified\":1764828534,\"file_size\":5383},{\"file_name\":\""
		"1eaed5b7-5186-40d9-a683-7b892dbb99bc\",\"file_created\":1764828534,\"file_modified\":1764828534,\"file_size\":15578},{\"file_name\":\"38efcd04-2f3a-446b-a8f4-7781217dcf5b\",\"file_created\":1764828534,\"file_modified\":1764828534,\"file_size\":7002},{\"file_name\":\"4df2ce0d-a3b2-4d0c-8725-5fe0ad438179\",\"file_created\":1764828533,\"file_modified\":1764828533,\"file_size\":955},{\"file_name\":\"4fee0c73-8484-47d7-8b48-8a5634311ea6\",\"file_created\":1764828533,\"file_modified\":1764828533,\""
		"file_size\":9244},{\"file_name\":\"7feb88ad-0bec-48d0-abb2-85408ce9c871\",\"file_created\":1764828239,\"file_modified\":1764828239,\"file_size\":14429},{\"file_name\":\"876b6905-6cca-439b-b770-a77f5be53710\",\"file_created\":1764828534,\"file_modified\":1764828534,\"file_size\":798}]}]},\"uuid\":{\"legacy.telemetry.client_id\":\"f6637294-d75f-4350-be24-43ca2fcded9d\",\"legacy.telemetry.profile_group_id\":\"f6637294-d75f-4350-be24-43ca2fcded9d\"}}}", 
		LAST);

	web_url("canonical.html_4", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/success.txt?ipv4", "Referer=", ENDITEM, 
		LAST);

	web_reg_find("Text=Welcome to our store", 
		LAST);

	web_url("canonical.html_5", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/success.txt?ipv4", "Referer=", ENDITEM, 
		"Url=https://demowebshop.tricentis.com/Themes/DefaultClean/Content/images/top-menu-triangle.png", "Referer=https://demowebshop.tricentis.com/Themes/DefaultClean/Content/styles.css", ENDITEM, 
		LAST);

	return 0;
}