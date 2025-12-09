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

	web_url("petstore.octoperf.com", 
		"URL=https://petstore.octoperf.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("xvY", 
		"URL=http://o.pki.goog/s/wr3/xvY", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0R0P0N0L0J0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x11\\x00\\xC6\\xF6\\xC8\r\\xE2\\xDF\\x16\\xC1\\x12\\xC6\\xEC\\xC0s\\\\\\xB0T", 
		LAST);

	web_url("canonical.html_2", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
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

	web_url("canonical.html_3", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/success.txt?ipv4", "Referer=", ENDITEM, 
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

	web_url("canonical.html_4", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
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
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x02\\xF1\\x84\\xDA\\xF8\\x12Sy\\xE1\\x18\\x08\\xA7\\x04<\\xF6\\xF4", 
		EXTRARES, 
		"Url=http://detectportal.firefox.com/success.txt?ipv4", "Referer=", ENDITEM, 
		LAST);

	/*Connection ID 0 received buffer WebSocketReceive0*/

	web_custom_request("81b9aec5-e8bd-4367-a2b0-ef0ce78add7d", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/events/1/81b9aec5-e8bd-4367-a2b0-ef0ce78add7d", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":18,\"start_time\":\"2025-12-04T09:32:37.000+05:30\",\"end_time\":\"2025-12-04T09:36:41.929+05:30\",\"reason\":\"startup\",\"experiments\":{\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\"rollout-branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\"treatment-a-callout-badge\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"desktop-address-autofill-india-release-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"account-adoption-callout-passwords-global-rollout\":{\"branch\":\"treatment-e\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"improved-mailto-handling-with-os-integration-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"new-tab-147020251114194929-to-release\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"temp-new-tab-mobile-qr-code-campaign-row\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\""
		",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-tab-groups-rollout-beta\":{\"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"deprecate-ipaddrany-rollout-for-release\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"acct-adoption-callout-addresses-rollout-with-pxi-required\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-shortcuts-v3-sticky\":{\"branch\":\"sticky-frozen-thom\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\"treatment-fast-udp\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"desktop-credit-card-autofill-global-enablement-rollout-release\":{\"branch\":\"creditcard-enable\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\"next-sign-up-modal-cta\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-10-eos-sync-and-reminder-messaging-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":"
		"{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-search-rollout\":{\"branch\":\"google-lens-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\""
		"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-credit-cards-treatment-c-rollout\":{\"branch\":\"treatment-c\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"65.2.3\",\"client_id\":\"90571d99-40b9-4f10-9a9a-227b856f2593\",\"windows_build_number\":19045,\"build_date\":\"1970-01-01T00:00:00+00:00\",\""
		"first_run_date\":\"2022-10-16+05:30\",\"architecture\":\"x86_64\",\"app_channel\":\"release\",\"locale\":\"en-US\",\"os_version\":\"10.0\",\"app_build\":\"20251124145406\",\"app_display_version\":\"145.0.2\",\"os\":\"Windows\",\"attribution\":{\"medium\":\"referral\",\"campaign\":\"%2528not%2Bset%2529\",\"source\":\"www.bing.com\",\"content\":\"%2528not%2Bset%2529\"}},\"metrics\":{\"boolean\":{\"urlbar.pref_suggest_nonsponsored\":false,\"usage.is_default_browser\":false,\""
		"search.engine.private.overridden_by_third_party\":false,\"urlbar.pref_suggest_sponsored\":false,\"policies.is_enterprise\":false,\"search.engine.default.overridden_by_third_party\":false,\"urlbar.pref_suggest_topsites\":true,\"urlbar.pref_suggest_data_collection\":false},\"string\":{\"search.engine.default.display_name\":\"Google\",\"search.engine.default.partner_code\":\"firefox-b-d\",\"search.engine.private.partner_code\":\"\",\"search.engine.private.provider_id\":\"\",\""
		"search.engine.private.display_name\":\"\",\"search.engine.default.provider_id\":\"google\",\"search.engine.default.load_path\":\"[app]google\",\"search.engine.private.load_path\":\"\",\"region.home_region\":\"IN\"},\"url\":{\"search.engine.private.submission_url\":\"blank:\",\"search.engine.default.submission_url\":\"https://www.google.com/search?client=firefox-b-d&q=\"},\"counter\":{\"browser.engagement.uri_count\":1,\"browser.engagement.active_ticks\":4},\"uuid\":{\"legacy.telemetry.client_id\""
		":\"f6637294-d75f-4350-be24-43ca2fcded9d\",\"legacy.telemetry.profile_group_id\":\"f6637294-d75f-4350-be24-43ca2fcded9d\"},\"quantity\":{\"browser.engagement.max_concurrent_tab_count\":1,\"urlbar.pref_max_results\":10}},\"events\":[{\"timestamp\":0,\"category\":\"session_restore\",\"name\":\"backup_can_be_loaded_session_file\",\"extra\":{\"glean_timestamp\":\"1764820954775\",\"loadfail_reason\":\"N/A\",\"path_key\":\"clean\",\"can_load\":\"true\"}},{\"timestamp\":0,\"category\":\"session_restore\","
		"\"name\":\"backup_can_be_loaded_session_file\",\"extra\":{\"can_load\":\"true\",\"glean_timestamp\":\"1764820954775\",\"path_key\":\"clean\",\"loadfail_reason\":\"N/A\"}},{\"timestamp\":1,\"category\":\"session_restore\",\"name\":\"shutdown_success_session_startup\",\"extra\":{\"shutdown_ok\":\"false\",\"glean_timestamp\":\"1764820954776\",\"shutdown_reason\":\"N/A\"}},{\"timestamp\":965,\"category\":\"webcompatreporting\",\"name\":\"reason_dropdown\",\"extra\":{\"setting\":\"required\",\""
		"glean_timestamp\":\"1764820955740\"}},{\"timestamp\":1200,\"category\":\"nimbus_events\",\"name\":\"startup_database_consistency\",\"extra\":{\"total_store_count\":\"48\",\"primary\":\"database\",\"total_db_count\":\"48\",\"trigger\":\"startup\",\"db_active_count\":\"37\",\"glean_timestamp\":\"1764820955974\",\"store_active_count\":\"37\"}},{\"timestamp\":1301,\"category\":\"jsonfile\",\"name\":\"load_autofillprofiles\",\"extra\":{\"glean_timestamp\":\"1764820956076\",\"value\":\""
		"error_notfounderror\"}},{\"timestamp\":1347,\"category\":\"doh\",\"name\":\"state_rollback\",\"extra\":{\"value\":\"null\",\"glean_timestamp\":\"1764820956122\"}},{\"timestamp\":1608,\"category\":\"containers\",\"name\":\"container_profile_loaded\",\"extra\":{\"glean_timestamp\":\"1764820956383\",\"containers\":\"4\"}},{\"timestamp\":1955,\"category\":\"normandy\",\"name\":\"enroll_failed_nimbus_experiment\",\"extra\":{\"glean_timestamp\":\"1764820956730\",\"value\":\""
		"account-spotlight-modal-global-rollout-v3\",\"reason\":\"feature-conflict\"}},{\"timestamp\":1955,\"category\":\"nimbus_events\",\"name\":\"enroll_failed\",\"extra\":{\"glean_timestamp\":\"1764820956730\",\"reason\":\"feature-conflict\",\"experiment\":\"account-spotlight-modal-global-rollout-v3\"}},{\"timestamp\":2137,\"category\":\"nimbus_events\",\"name\":\"is_ready\",\"extra\":{\"glean_timestamp\":\"1764820956911\"}},{\"timestamp\":2146,\"category\":\"jsonfile\",\"name\":\"load_logins\",\""
		"extra\":{\"value\":\"error_notfounderror\",\"glean_timestamp\":\"1764820956921\"}},{\"timestamp\":2148,\"category\":\"upgrade_dialog\",\"name\":\"trigger_reason\",\"extra\":{\"glean_timestamp\":\"1764820956923\",\"value\":\"not-major\"}},{\"timestamp\":3956,\"category\":\"nimbus_events\",\"name\":\"database_write\",\"extra\":{\"glean_timestamp\":\"1764820958731\",\"success\":\"true\"}},{\"timestamp\":4286,\"category\":\"nimbus_events\",\"name\":\"exposure\",\"extra\":{\"experiment\":\""
		"private-window-visual-refresh-rollout\",\"feature_id\":\"feltPrivacy\",\"branch\":\"control\",\"glean_timestamp\":\"1764820982905\"}},{\"timestamp\":4286,\"category\":\"normandy\",\"name\":\"expose_nimbus_experiment\",\"extra\":{\"branchSlug\":\"control\",\"glean_timestamp\":\"1764820982905\",\"featureId\":\"feltPrivacy\",\"value\":\"private-window-visual-refresh-rollout\"}},{\"timestamp\":6106,\"category\":\"normandy\",\"name\":\"expose_nimbus_experiment\",\"extra\":{\"glean_timestamp\":\""
		"1764820960881\",\"value\":\"new-tab-147020251114194929-to-release\",\"featureId\":\"newtabTrainhopAddon\",\"branchSlug\":\"rollout\"}},{\"timestamp\":6106,\"category\":\"nimbus_events\",\"name\":\"exposure\",\"extra\":{\"branch\":\"rollout\",\"glean_timestamp\":\"1764820960881\",\"feature_id\":\"newtabTrainhopAddon\",\"experiment\":\"new-tab-147020251114194929-to-release\"}},{\"timestamp\":240903,\"category\":\"doh\",\"name\":\"state_shutdown\",\"extra\":{\"glean_timestamp\":\"1764821195678\",\""
		"value\":\"null\"}}]}", 
		EXTRARES, 
		"Url=https://prod.ohttp-gateway.prod.webservices.mozgcp.net/ohttp-configs", "Referer=", ENDITEM, 
		LAST);

	web_url("canonical.html_5", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/success.txt?ipv4", "Referer=", ENDITEM, 
		LAST);

	web_custom_request("9729b2ee-146e-437e-9b9c-2f0cf606f4ae", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/use-counters/1/9729b2ee-146e-437e-9b9c-2f0cf606f4ae", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t12.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":10,\"start_time\":\"2025-12-03T16:00:20.000+05:30\",\"end_time\":\"2025-12-04T09:36:35.606+05:30\",\"reason\":\"app_shutdown_confirmed\",\"experiments\":{\"smart-tab-groups-rollout-beta\":{\"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"temp-new-tab-mobile-qr-code-campaign-row\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-credit-cards-treatment-c-rollout\":{\"branch\":\"treatment-c\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-address-autofill-india-release-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"deprecate-ipaddrany-rollout-for-release\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{"
		"\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\"treatment-a-callout-badge\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\"rollout-branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\"next-sign-up-modal-cta\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"windows-10-eos-sync-and-reminder-messaging-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}"
		"},\"account-adoption-callout-passwords-global-rollout\":{\"branch\":\"treatment-e\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-shortcuts-v3-sticky\":{\"branch\":\"sticky-frozen-thom\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"acct-adoption-callout-addresses-rollout-with-pxi-required\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"improved-mailto-handling-with-os-integration-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"new-tab-147020251114194929-to-release\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-search-rollout\":{\"branch\":\"google-lens-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"desktop-credit-card-autofill-global-enablement-rollout-release\":{\"branch\":\"creditcard-enable\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\"treatment-fast-udp\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"65.2.3\",\"client_id\":\"90571d99-40b9-4f10-9a9a-227b856f2593\",\"build_date\""
		":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2022-10-16+05:30\",\"windows_build_number\":19045,\"os\":\"Windows\",\"app_channel\":\"release\",\"architecture\":\"x86_64\",\"locale\":\"en-US\",\"app_build\":\"20251124145406\",\"app_display_version\":\"145.0.2\",\"os_version\":\"10.0\",\"attribution\":{\"content\":\"%2528not%2Bset%2529\",\"medium\":\"referral\",\"source\":\"www.bing.com\",\"campaign\":\"%2528not%2Bset%2529\"}},\"metrics\":{\"counter\":{\"use.counter.css.page.css_font_family\""
		":1,\"use.counter.top_level_content_documents_destroyed\":1,\"use.counter.css.doc.css_text_decoration\":1,\"use.counter.css.doc.css_font_weight\":1,\"use.counter.content_documents_destroyed\":14,\"use.counter.css.doc.css_font_family\":2,\"use.counter.css.doc.css_clip_path\":2,\"use.counter.css.page.css_color\":1,\"use.counter.css.page.css_font_size\":1,\"use.counter.css.page.css_text_decoration\":1,\"use.counter.css.doc.css_clip_rule\":3,\"use.counter.css.doc.css_fill\":5,\""
		"use.counter.css.doc.css_stroke\":2,\"use.counter.css.page.css_font_weight\":1,\"use.counter.css.doc.css_height\":5,\"use.counter.css.doc.css_font_size\":2,\"use.counter.css.doc.css_fill_rule\":3,\"use.counter.css.doc.css_color\":2,\"use.counter.css.doc.css_width\":5}}}", 
		LAST);

	web_custom_request("80c9c6af-7912-4568-a554-81aca7a92d4c", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/newtab/1/80c9c6af-7912-4568-a554-81aca7a92d4c", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t13.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":46,\"start_time\":\"2025-12-04T09:32:37.000+05:30\",\"end_time\":\"2025-12-04T09:36:42.144+05:30\",\"reason\":\"component_init\"},\"client_info\":{\"telemetry_sdk_build\":\"65.2.3\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2022-10-16+05:30\",\"architecture\":\"x86_64\",\"app_channel\":\"release\",\"os\":\"Windows\",\"os_version\":\"10.0\",\"app_build\":\"20251124145406\",\"locale\":\"en-US\",\"app_display_version\":\"145.0.2\",\"client_id\":\""
		"90571d99-40b9-4f10-9a9a-227b856f2593\",\"windows_build_number\":19045,\"attribution\":{\"source\":\"www.bing.com\",\"campaign\":\"%2528not%2Bset%2529\",\"content\":\"%2528not%2Bset%2529\",\"medium\":\"referral\"}},\"metrics\":{\"string_list\":{\"newtab.blocked_sponsors\":[]},\"string\":{\"newtab.homepage_category\":\"enabled\",\"newtab.newtab_category\":\"enabled\",\"newtab.locale\":\"en-US\"}}}", 
		LAST);

	web_custom_request("a3c89a32-7d13-48ed-8363-fcf64aaf5c10", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/nimbus-targeting-context/1/a3c89a32-7d13-48ed-8363-fcf64aaf5c10", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t14.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":9,\"start_time\":\"2025-12-04T09:32:37.000+05:30\",\"end_time\":\"2025-12-04T09:36:42.323+05:30\",\"experiments\":{\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"smart-tab-groups-rollout-beta\":{\"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"windows-10-eos-sync-and-reminder-messaging-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\"treatment-a-callout-badge\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\""
		"next-sign-up-modal-cta\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-address-autofill-india-release-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-credit-card-autofill-global-enablement-rollout-release\":{\"branch\":\"creditcard-enable\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"acct-adoption-callout-addresses-rollout-with-pxi-required\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"deprecate-ipaddrany-rollout-for-release\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"visual-search-rollout\":{\"branch\":\"google-lens-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"temp-new-tab-mobile-qr-code-campaign-row\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\"treatment-fast-udp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\"rollout-branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-passwords-global-rollout\":{\"branch\":\"treatment-e\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-credit-cards-treatment-c-rollout\":{\"branch\":\"treatment-c\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"improved-mailto-handling-with-os-integration-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type"
		"\":\"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"new-tab-147020251114194929-to-release\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-shortcuts-v3-sticky\":{\"branch\":\"sticky-frozen-thom\",\"extra\":{\"type\":\"nimbus-nimbus\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"65.2.3\",\"client_id\":\"90571d99-40b9-4f10-9a9a-227b856f2593\",\"first_run_date\":\"2022-10-16+05:30\",\""
		"build_date\":\"1970-01-01T00:00:00+00:00\",\"windows_build_number\":19045,\"os\":\"Windows\",\"app_display_version\":\"145.0.2\",\"architecture\":\"x86_64\",\"locale\":\"en-US\",\"app_build\":\"20251124145406\",\"os_version\":\"10.0\",\"app_channel\":\"release\",\"attribution\":{\"medium\":\"referral\",\"content\":\"%2528not%2Bset%2529\",\"campaign\":\"%2528not%2Bset%2529\",\"source\":\"www.bing.com\"}},\"metrics\":{\"uuid\":{\"legacy.telemetry.profile_group_id\":\""
		"f6637294-d75f-4350-be24-43ca2fcded9d\",\"legacy.telemetry.client_id\":\"f6637294-d75f-4350-be24-43ca2fcded9d\"},\"quantity\":{\"nimbus_targeting_context.firefox_version\":145,\"nimbus_targeting_context.memory_mb\":16382,\"nimbus_targeting_context.total_bookmarks_count\":5,\"nimbus_targeting_context.arch_bits\":64,\"nimbus_targeting_context.addresses_saved\":0,\"nimbus_targeting_context.profile_group_profile_count\":0,\"nimbus_targeting_context.build_id\":1,\""
		"nimbus_targeting_context.profile_age_created\":1665919558706},\"string\":{\"nimbus_targeting_context.distribution_id\":\"\",\"nimbus_targeting_context.locale\":\"en-US\",\"nimbus_targeting_context.region\":\"IN\",\"nimbus_targeting_context.version\":\"145.0.2\",\"nimbus_targeting_context.current_date\":\"Thu, 04 Dec 2025 04:06:40 GMT\"},\"boolean\":{\"nimbus_targeting_context.is_first_startup\":false,\"nimbus_targeting_context.user_prefers_reduced_motion\":true,\"nimbus_targeting_context.is_msix\""
		":false,\"nimbus_targeting_context.is_fx_a_signed_in\":false,\"nimbus_targeting_context.has_pinned_tabs\":false,\"nimbus_targeting_context.does_app_need_pin\":false,\"nimbus_targeting_context.is_default_browser\":false,\"nimbus_targeting_context.uses_firefox_sync\":false,\"nimbus_targeting_context.is_fx_a_enabled\":true,\"nimbus_targeting_context.has_active_enterprise_policies\":false},\"object\":{\"nimbus_targeting_environment.user_set_prefs\":[\"nimbus.profilesdatastoreservice.read.enabled\",\""
		"nimbus.profilesdatastoreservice.sync.enabled\",\"browser.search.separatePrivateDefault.urlbarResult.enabled\",\"browser.newtabpage.activity-stream.mobileDownloadModal.enabled\",\"browser.newtabpage.activity-stream.mobileDownloadModal.variant-a\",\"browser.newtabpage.trainhopAddon.version\",\"signon.firefoxRelay.showToAllBrowsers\",\"browser.contextual-services.contextId.rotation-in-days\"],\"nimbus_targeting_context.home_page_settings\":{\"isCustomUrl\":false,\"isDefault\":true,\"isLocked\":false,"
		"\"isWebExt\":false},\"nimbus_targeting_context.os\":{\"isLinux\":false,\"isMac\":false,\"windowsBuildNumber\":19045,\"windowsVersion\":10},\"nimbus_targeting_context.browser_settings\":{\"update\":{\"channel\":\"release\"}},\"nimbus_targeting_context.default_pdf_handler\":{\"knownBrowser\":true,\"registered\":true},\"nimbus_targeting_context.enrollments_map\":[{\"experimentSlug\":\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\",\"branchSlug\":\""
		"treatment-a-tab-switching-copy\"},{\"experimentSlug\":\"account-adoption-callout-credit-cards-treatment-c-rollout\",\"branchSlug\":\"treatment-c\"},{\"experimentSlug\":\"account-adoption-callout-passwords-global-rollout\",\"branchSlug\":\"treatment-e\"},{\"experimentSlug\":\"account-adoption-pxi-menu-rollout-v2\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"account-spotlight-modal-english-rollout-v2\",\"branchSlug\":\"rollout\"},{\"experimentSlug\":\""
		"acct-adoption-callout-addresses-rollout-with-pxi-required\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\",\"branchSlug\":\"treatment-a-callout-badge\"},{\"experimentSlug\":\"backgroundupdate-enable-unelevated-installations-rollout-3-release\",\"branchSlug\":\"enabled\"},{\"experimentSlug\":\"consolidated-search-configuration-row-desktop-relaunch\",\"branchSlug\":\"rollout\"},{\"experimentSlug\":\""
		"context-id-rotation-every-3-days\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"context-id-rotation-every-7-days\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"custom-wallpapers-no-message-rollout-release\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"deprecate-ipaddrany-rollout-for-release\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"desktop-address-autofill-india-release-rollout\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\""
		"desktop-credit-card-autofill-global-enablement-rollout-release\",\"branchSlug\":\"creditcard-enable\"},{\"experimentSlug\":\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\",\"branchSlug\":\"next-sign-up-modal-cta\"},{\"experimentSlug\":\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"downsample-uptakeremotecontent-events\",\"branchSlug\":\"control\"},{\"experimentSlug\":\""
		"enable-nimbus-unenrollment-synchronization\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"encrypted-client-hello-fallback-mechanism\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\",\"branchSlug\":\"enforce\"},{\"experimentSlug\":\"etp-strict-message-release\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\",\"branchSlug\":\"treatment-fast-udp\"},{\"experimentSlug\":\""
		"fox-doodle-multi-action-cta-2025-rollout\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"fx-accounts-ping-release-rollout-2\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"fx-view-discoverability-rollout\",\"branchSlug\":\"treatment-b\"},{\"experimentSlug\":\"improved-mailto-handling-with-os-integration-treatment-a-rollout\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"long-term-holdback-2024-h2-velocity-desktop\",\"branchSlug\":\"delivery\"},{\"experimentSlug\":\""
		"long-term-holdback-2025h1-growth-desktop\",\"branchSlug\":\"delivery\"},{\"experimentSlug\":\"mozilla-foundation-donation-promotion-moments-page\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"new-tab-145120251009134757-to-release\",\"branchSlug\":\"rollout\"},{\"experimentSlug\":\"new-tab-147020251114194929-to-release\",\"branchSlug\":\"rollout\"},{\"experimentSlug\":\"one-click-sponsored-settings\",\"branchSlug\":\"control\"},{\"experimentSlug\":\""
		"pdf-annotations-highlight-treatment-b-rollout\",\"branchSlug\":\"treatment-b\"},{\"experimentSlug\":\"pin-frequently-used-websites-143-promo-rollout-all-locales\",\"branchSlug\":\"rollout-branch\"},{\"experimentSlug\":\"private-window-visual-refresh-rollout\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\",\"branchSlug\":\"sign-in-with-call-out\"},{\"experimentSlug\":\"smart-shortcuts-v3-sticky\",\"branchSlug\":\""
		"sticky-frozen-thom\"},{\"experimentSlug\":\"smart-tab-groups-rollout-beta\",\"branchSlug\":\"smart-tab-groups\"},{\"experimentSlug\":\"storage-access-heuristic-restriction-rollout\",\"branchSlug\":\"treatment-branch\"},{\"experimentSlug\":\"taskbar-tabs-discovery-global-rollout\",\"branchSlug\":\"delivery\"},{\"experimentSlug\":\"temp-new-tab-mobile-qr-code-campaign-row\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\","
		"\"branchSlug\":\"control\"},{\"experimentSlug\":\"visual-card-updates\",\"branchSlug\":\"updated\"},{\"experimentSlug\":\"visual-search-rollout\",\"branchSlug\":\"google-lens-rollout\"},{\"experimentSlug\":\"windows-10-eos-sync-and-reminder-messaging-rollout\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"windows-10-eos-sync-messaging-rollout-2\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"windows-ui-automation-release-rollout\",\"branchSlug\":\"rollout\"}],\""
		"nimbus_targeting_context.addons_info\":{\"addons\":[\"addons-search-detection@mozilla.com\",\"data-leak-blocker@mozilla.com\",\"formautofill@mozilla.org\",\"ipp-activator@mozilla.com\",\"newtab@mozilla.org\",\"pictureinpicture@mozilla.org\",\"webcompat@mozilla.org\"],\"hasInstalledAddons\":true},\"nimbus_targeting_context.active_experiments\":[\"long-term-holdback-2025h1-growth-desktop\",\"mozilla-foundation-donation-promotion-moments-page\",\"smart-shortcuts-v3-sticky\"],\""
		"nimbus_targeting_context.attribution_data\":{\"medium\":\"referral\",\"source\":\"www.bing.com\",\"ua\":\"edge\"},\"nimbus_targeting_context.is_default_handler\":{\"html\":false,\"pdf\":false},\"nimbus_targeting_context.active_rollouts\":[\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\",\"account-adoption-callout-credit-cards-treatment-c-rollout\",\"account-adoption-callout-passwords-global-rollout\",\"account-adoption-pxi-menu-rollout-v2\",\""
		"acct-adoption-callout-addresses-rollout-with-pxi-required\",\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\",\"backgroundupdate-enable-unelevated-installations-rollout-3-release\",\"context-id-rotation-every-3-days\",\"deprecate-ipaddrany-rollout-for-release\",\"desktop-address-autofill-india-release-rollout\",\"desktop-credit-card-autofill-global-enablement-rollout-release\",\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\",\""
		"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\",\"downsample-uptakeremotecontent-events\",\"enable-nimbus-unenrollment-synchronization\",\"encrypted-client-hello-fallback-mechanism\",\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\",\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\",\"fox-doodle-multi-action-cta-2025-rollout\",\"fx-accounts-ping-release-rollout-2\",\"improved-mailto-handling-with-os-integration-treatment-a-rollout\",\""
		"new-tab-147020251114194929-to-release\",\"pdf-annotations-highlight-treatment-b-rollout\",\"pin-frequently-used-websites-143-promo-rollout-all-locales\",\"private-window-visual-refresh-rollout\",\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\",\"smart-tab-groups-rollout-beta\",\"taskbar-tabs-discovery-global-rollout\",\"temp-new-tab-mobile-qr-code-campaign-row\",\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\",\"visual-card-updates\",\""
		"visual-search-rollout\",\"windows-10-eos-sync-and-reminder-messaging-rollout\",\"windows-ui-automation-release-rollout\"],\"nimbus_targeting_context.user_monthly_activity\":[{\"numberOfURLsVisited\":3,\"date\":\"2025-11-20\"},{\"numberOfURLsVisited\":1,\"date\":\"2025-12-03\"}],\"nimbus_targeting_environment.pref_values\":{\"browser__newtabpage__activity_stream__asrouter__userprefs__cfr__addons\":true,\"browser__newtabpage__activity_stream__asrouter__userprefs__cfr__features\":true,\""
		"browser__newtabpage__activity_stream__feeds__section__highlights\":false,\"browser__newtabpage__activity_stream__feeds__section__topstories\":true,\"browser__newtabpage__activity_stream__feeds__topsites\":true,\"browser__newtabpage__activity_stream__showSearch\":true,\"browser__newtabpage__activity_stream__showSponsoredTopSites\":true,\"browser__newtabpage__enabled\":true,\"browser__startup__page\":1,\"browser__toolbars__bookmarks__visibility\":\"newtab\",\""
		"browser__urlbar__lastUrlbarSearchSeconds\":0,\"browser__urlbar__quicksuggest__dataCollection__enabled\":false,\"browser__urlbar__showSearchSuggestionsFirst\":true,\"browser__urlbar__suggest__quicksuggest__sponsored\":false,\"media__videocontrols__picture_in_picture__enabled\":true,\"media__videocontrols__picture_in_picture__video_toggle__enabled\":true,\"media__videocontrols__picture_in_picture__video_toggle__has_used\":false,\"network__trr__mode\":0,\"security__sandbox__content__level\":8,\""
		"trailhead__firstrun__didSeeAboutWelcome\":true,\"nimbus__qa__pref_1\":\"default\",\"nimbus__qa__pref_2\":\"default\"},\"nimbus_targeting_context.primary_resolution\":{\"height\":760,\"width\":1280}}}}", 
		LAST);

	web_custom_request("6e1be924-ee7d-4808-a876-5d02ec513c49", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/baseline/1/6e1be924-ee7d-4808-a876-5d02ec513c49", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t15.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":26,\"start_time\":\"2025-12-04T09:32:37.000+05:30\",\"end_time\":\"2025-12-04T09:36:42.405+05:30\",\"reason\":\"active\",\"experiments\":{\"visual-search-rollout\":{\"branch\":\"google-lens-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"acct-adoption-callout-addresses-rollout-with-pxi-required\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\""
		"next-sign-up-modal-cta\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"improved-mailto-handling-with-os-integration-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-shortcuts-v3-sticky\":{\"branch\":\"sticky-frozen-thom\",\"extra\":{\"type\""
		":\"nimbus-nimbus\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-10-eos-sync-and-reminder-messaging-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-address-autofill-india-release-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\""
		"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\"rollout-branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\"treatment-a-callout-badge\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"desktop-credit-card-autofill-global-enablement-rollout-release\":{\"branch\":\"creditcard-enable\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\""
		"extra\":{\"type\":\"nimbus-rollout\"}},\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"private-window-visual-refresh-rollout\":{\""
		"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"temp-new-tab-mobile-qr-code-campaign-row\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\"treatment-fast-udp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"account-adoption-callout-passwords-global-rollout\":{\"branch\":\"treatment-e\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"new-tab-147020251114194929-to-release\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-credit-cards-treatment-c-rollout\":{\"branch\":\"treatment-c\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"deprecate-ipaddrany-rollout-for-release\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-tab-groups-rollout-beta\":{\""
		"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"65.2.3\",\"first_run_date\":\"2022-10-16+05:30\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"windows_build_number\":19045,\"client_id\":\"90571d99-40b9-4f10-9a9a-227b856f2593\",\"app_display_version\":\"145.0.2\",\"app_build\":\""
		"20251124145406\",\"os_version\":\"10.0\",\"app_channel\":\"release\",\"locale\":\"en-US\",\"architecture\":\"x86_64\",\"os\":\"Windows\",\"attribution\":{\"source\":\"www.bing.com\",\"campaign\":\"%2528not%2Bset%2529\",\"content\":\"%2528not%2Bset%2529\",\"medium\":\"referral\"}},\"metrics\":{\"uuid\":{\"legacy.telemetry.profile_group_id\":\"f6637294-d75f-4350-be24-43ca2fcded9d\",\"legacy.telemetry.client_id\":\"f6637294-d75f-4350-be24-43ca2fcded9d\"},\"string\":{\"usage.distribution_id\":\""
		"default\",\"startup.profile_selection_reason\":\"default\"},\"boolean\":{\"usage.is_default_browser\":false},\"counter\":{\"browser.engagement.uri_count\":1,\"browser.engagement.active_ticks\":4},\"datetime\":{\"glean.validation.first_run_hour\":\"2022-10-16T16+05:30\"},\"labeled_counter\":{\"glean.validation.pings_submitted\":{\"baseline\":1,\"events\":1}}}}", 
		LAST);

	web_custom_request("ca16ebfd-c370-4f15-9ce9-3029a3471f20", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/usage-reporting/1/ca16ebfd-c370-4f15-9ce9-3029a3471f20", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t16.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"metrics\":{\"string\":{\"usage.os_version\":\"10.0\",\"usage.app_channel\":\"release\",\"usage.app_build\":\"20251124145406\",\"usage.distribution_id\":\"default\",\"usage.app_display_version\":\"145.0.2\",\"usage.os\":\"WINNT\"},\"boolean\":{\"usage.is_default_browser\":false,\"usage.windows_backup_enabled\":false},\"counter\":{\"browser.engagement.active_ticks\":4,\"browser.engagement.uri_count\":1},\"quantity\":{\"usage.windows_user_profile_age_in_days\":1145,\""
		"usage.windows_build_number\":19045},\"datetime\":{\"usage.first_run_date\":\"2022-10-16+05:30\"},\"uuid\":{\"usage.profile_id\":\"5ae6e87b-e670-4529-b684-10268475dcce\",\"usage.profile_group_id\":\"9285e5cf-d171-4f29-a5b8-d53d109d51a8\"}}}", 
		LAST);

	web_custom_request("72b70dcb-d58e-4a1c-84c6-5dc4470f7eca", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/health/1/72b70dcb-d58e-4a1c-84c6-5dc4470f7eca", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t17.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":14,\"start_time\":\"2025-12-04T09:32:37.000+05:30\",\"end_time\":\"2025-12-04T09:36:42.424+05:30\",\"reason\":\"pre_init\",\"experiments\":{\"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\"next-sign-up-modal-cta\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch"
		"\":\"rollout-branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-nimbus\""
		"}},\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-tab-groups-rollout-beta\":{\"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"improved-mailto-handling-with-os-integration-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"temp-new-tab-mobile-qr-code-campaign-row\":{\"branch\":\"treatment-a\",\"extra\""
		":{\"type\":\"nimbus-rollout\"}},\"smart-shortcuts-v3-sticky\":{\"branch\":\"sticky-frozen-thom\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\"treatment-a-callout-badge\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-credit-cards-treatment-c-rollout\":{\"branch\":\"treatment-c\",\"extra\":{\"type\":\"nimbus-rollout\"}"
		"},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\"treatment-fast-udp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-passwords-global-rollout\":{\"branch\":\"treatment-e\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"deprecate-ipaddrany-rollout-for-release\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-credit-card-autofill-global-enablement-rollout-release\":{\"branch\":\"creditcard-enable\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-search-rollout\":{\"branch\":\"google-lens-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-10-eos-sync-and-reminder-messaging-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"desktop-address-autofill-india-release-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"acct-adoption-callout-addresses-rollout-with-pxi-required\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\""
		"new-tab-147020251114194929-to-release\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"65.2.3\",\"locale\":\"en-US\",\"os_version\":\"10.0\",\"os\":\"Windows\",\"app_channel\":\"release\",\"app_display_version\":\"145.0.2\",\"architecture\":\"x86_64\",\"app_build\":\"20251124145406\",\"client_id\""
		":\"90571d99-40b9-4f10-9a9a-227b856f2593\",\"first_run_date\":\"2022-10-16+05:30\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"windows_build_number\":19045,\"attribution\":{\"medium\":\"referral\",\"content\":\"%2528not%2Bset%2529\",\"source\":\"www.bing.com\",\"campaign\":\"%2528not%2Bset%2529\"}},\"metrics\":{\"uuid\":{\"legacy.telemetry.profile_group_id\":\"f6637294-d75f-4350-be24-43ca2fcded9d\",\"legacy.telemetry.client_id\":\"f6637294-d75f-4350-be24-43ca2fcded9d\"},\"labeled_counter\":{\""
		"glean.upload.ping_upload_failure\":{\"recoverable\":5},\"glean.validation.pings_submitted\":{\"baseline\":1,\"events\":1}},\"object\":{\"glean.database.load_sizes\":{\"new\":166583,\"open\":166583,\"post_open\":166583,\"post_open_user\":166583,\"post_load_ping_lifetime_data\":166583,\"user_records\":62,\"ping_records\":806,\"application_records\":310,\"ping_memory_records\":806},\"glean.health.data_directory_info\":[{\"dir_name\":\"db\",\"dir_exists\":true,\"dir_created\":1665919583,\""
		"dir_modified\":1764821195,\"file_count\":1,\"files\":[{\"file_name\":\"data.safe.bin\",\"file_created\":1764821195,\"file_modified\":1764821195,\"file_size\":166583}]},{\"dir_name\":\"events\",\"dir_exists\":true,\"dir_created\":1665919583,\"dir_modified\":1764820957,\"file_count\":2,\"files\":[{\"file_name\":\"events\",\"file_created\":1733465245,\"file_modified\":1764821195,\"file_size\":3333},{\"file_name\":\"prototype-no-code-events\",\"file_created\":1733395015,\"file_modified\":1762144555,\""
		"file_size\":645}]},{\"dir_name\":\"pending_pings\",\"dir_exists\":true,\"dir_created\":1665919583,\"dir_modified\":1764821195,\"file_count\":2,\"files\":[{\"file_name\":\"09f654cb-0bf5-4a13-ae82-273df63d00a2\",\"file_created\":1764757770,\"file_modified\":1764757770,\"file_size\":368},{\"file_name\":\"9729b2ee-146e-437e-9b9c-2f0cf606f4ae\",\"file_created\":1764821195,\"file_modified\":1764821195,\"file_size\":5681}]}]},\"memory_distribution\":{\"glean.upload.pending_pings_directory_size\":{\""
		"values\":{\"5086\":1},\"sum\":5120},\"glean.database.size\":{\"values\":{\"162772\":1},\"sum\":166583}},\"counter\":{\"glean.upload.pending_pings\":2,\"glean.health.init_count\":8},\"timing_distribution\":{\"glean.validation.shutdown_wait\":{\"values\":{\"2286960\":1},\"sum\":2389600},\"glean.validation.shutdown_dispatcher_wait\":{\"values\":{\"1617125\":1},\"sum\":1667000},\"glean.upload.send_success\":{\"values\":{\"1805811301\":1,\"292730940\":10,\"319225354\":2,\"585461880\":1,\"348117717\":1,"
		"\"268435456\":9,\"246156398\":10,\"451452825\":1,\"492312796\":2},\"sum\":13206782900},\"glean.upload.send_failure\":{\"values\":{\"94906265\":1,\"61539099\":1,\"492312796\":2,\"112863206\":1},\"sum\":1316798100}}}}", 
		LAST);

	web_custom_request("61310eaf-1d9a-42ff-b52f-69288cff9291", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/health/1/61310eaf-1d9a-42ff-b52f-69288cff9291", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t18.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":15,\"start_time\":\"2025-12-04T09:36:42.000+05:30\",\"end_time\":\"2025-12-04T09:36:42.432+05:30\",\"reason\":\"post_init\",\"experiments\":{\"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"improved-mailto-handling-with-os-integration-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\""
		"branch\":\"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-search-rollout\":{\"branch\":\"google-lens-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\"next-sign-up-modal-cta\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"desktop-address-autofill-india-release-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-credit-cards-treatment-c-rollout\":{\"branch\":\"treatment-c\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"new-tab-147020251114194929-to-release\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-passwords-global-rollout\":{\"branch\":\""
		"treatment-e\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"deprecate-ipaddrany-rollout-for-release\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"windows-10-eos-sync-and-reminder-messaging-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"acct-adoption-callout-addresses-rollout-with-pxi-required\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-tab-groups-rollout-beta\":{\"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"temp-new-tab-mobile-qr-code-campaign-row\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\"treatment-a-callout-badge\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"desktop-credit-card-autofill-global-enablement-rollout-release\":{\"branch\":\"creditcard-enable\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\"rollout-branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"smart-shortcuts-v3-sticky\":{\"branch\":\"sticky-frozen-thom\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\""
		"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\"treatment-fast-udp\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"65.2.3\",\"os\":\"Windows\",\"app_display_version\":\"145.0.2\",\"architecture\":\"x86_64\",\"locale\":\"en-US\",\"app_build\":\"20251124145406\",\"app_channel\":\"release\",\"os_version\":\"10.0\",\""
		"windows_build_number\":19045,\"client_id\":\"90571d99-40b9-4f10-9a9a-227b856f2593\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2022-10-16+05:30\",\"attribution\":{\"campaign\":\"%2528not%2Bset%2529\",\"medium\":\"referral\",\"content\":\"%2528not%2Bset%2529\",\"source\":\"www.bing.com\"}},\"metrics\":{\"counter\":{\"glean.health.init_count\":8},\"object\":{\"glean.health.data_directory_info\":[{\"dir_name\":\"db\",\"dir_exists\":true,\"dir_created\":1665919583,\""
		"dir_modified\":1764821202,\"file_count\":1,\"files\":[{\"file_name\":\"data.safe.bin\",\"file_created\":1764821195,\"file_modified\":1764821202,\"file_size\":159174}]},{\"dir_name\":\"events\",\"dir_exists\":true,\"dir_created\":1665919583,\"dir_modified\":1764821202,\"file_count\":2,\"files\":[{\"file_name\":\"events\",\"file_created\":1733465245,\"file_modified\":1764821202,\"file_size\":0},{\"file_name\":\"prototype-no-code-events\",\"file_created\":1733395015,\"file_modified\":1762144555,\""
		"file_size\":645}]},{\"dir_name\":\"pending_pings\",\"dir_exists\":true,\"dir_created\":1665919583,\"dir_modified\":1764821202,\"file_count\":8,\"files\":[{\"file_name\":\"09f654cb-0bf5-4a13-ae82-273df63d00a2\",\"file_created\":1764757770,\"file_modified\":1764757770,\"file_size\":368},{\"file_name\":\"6e1be924-ee7d-4808-a876-5d02ec513c49\",\"file_created\":1764821202,\"file_modified\":1764821202,\"file_size\":5416},{\"file_name\":\"72b70dcb-d58e-4a1c-84c6-5dc4470f7eca\",\"file_created\":1764821202"
		",\"file_modified\":1764821202,\"file_size\":7068},{\"file_name\":\"80c9c6af-7912-4568-a554-81aca7a92d4c\",\"file_created\":1764821202,\"file_modified\":1764821202,\"file_size\":955},{\"file_name\":\"81b9aec5-e8bd-4367-a2b0-ef0ce78add7d\",\"file_created\":1764821201,\"file_modified\":1764821201,\"file_size\":9376},{\"file_name\":\"9729b2ee-146e-437e-9b9c-2f0cf606f4ae\",\"file_created\":1764821195,\"file_modified\":1764821195,\"file_size\":5681},{\"file_name\":\"a3c89a32-7d13-48ed-8363-fcf64aaf5c10"
		"\",\"file_created\":1764821202,\"file_modified\":1764821202,\"file_size\":15577},{\"file_name\":\"ca16ebfd-c370-4f15-9ce9-3029a3471f20\",\"file_created\":1764821202,\"file_modified\":1764821202,\"file_size\":831}]}]},\"uuid\":{\"legacy.telemetry.client_id\":\"f6637294-d75f-4350-be24-43ca2fcded9d\",\"legacy.telemetry.profile_group_id\":\"f6637294-d75f-4350-be24-43ca2fcded9d\"}}}", 
		LAST);

	web_url("canonical.html_6", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/success.txt?ipv4", "Referer=", ENDITEM, 
		LAST);

	web_url("canonical.html_7", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/success.txt?ipv4", "Referer=", ENDITEM, 
		LAST);

	web_url("Catalog.action", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(85);

	web_image("sm_fish.gif", 
		"Src=../images/sm_fish.gif", 
		"Snapshot=t22.inf", 
		LAST);

	web_link("FI-SW-01", 
		"Text=FI-SW-01", 
		"Snapshot=t23.inf", 
		LAST);

	web_link("Add to Cart", 
		"Text=Add to Cart", 
		"Ordinal=1", 
		"Snapshot=t24.inf", 
		LAST);

	web_link("Proceed to Checkout", 
		"Text=Proceed to Checkout", 
		"Snapshot=t25.inf", 
		LAST);

	return 0;
}