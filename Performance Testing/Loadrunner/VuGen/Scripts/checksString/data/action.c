Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("canonical.html", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://content-signature-2.cdn.mozilla.net/g/chains/202402/remote-settings.content-signature.mozilla.org-2026-01-07-09-15-50.chain", "Referer=", ENDITEM, 
		LAST);

	web_url("v1", 
		"URL=https://firefox.settings.services.mozilla.com/v1/", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://content-signature-2.cdn.mozilla.net/g/chains/202402/remote-settings.content-signature.mozilla.org-2026-01-07-09-15-50.chain", "Referer=", ENDITEM, 
		"Url=https://content-signature-2.cdn.mozilla.net/g/chains/202402/remote-settings.content-signature.mozilla.org-2025-12-18-09-14-51.chain", "Referer=", ENDITEM, 
		LAST);

	web_url("v1_2", 
		"URL=https://firefox.settings.services.mozilla.com/v1/", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("v9o", 
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

	web_url("canonical.html_2", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("v9o_2", 
		"URL=http://o.pki.goog/s/wr3/v9o", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t6.inf", 
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
		"Snapshot=t7.inf", 
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
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"context_id\":\"23852afd-307f-4d9f-8e21-aa01fb354cbc\",\"placements\":[{\"placement\":\"newtab_tile_1\",\"count\":1},{\"placement\":\"newtab_tile_2\",\"count\":1},{\"placement\":\"newtab_tile_3\",\"count\":1}],\"blocks\":[\"\"],\"credentials\":\"omit\"}", 
		LAST);

	web_url("blazedemo.com", 
		"URL=https://blazedemo.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://blazemeter.trackinglibrary.prodperfect.com/keen-tracking.min.js", ENDITEM, 
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

	web_custom_request("we2", 
		"URL=http://o.pki.goog/we2", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0R0P0N0L0J0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x11\\x00\\xC6\\xEF\\xA1\\xB3\\xBBL!\\xFE\t\\xAB\\x18\\xC7\\x1AE\\xFD\\xE4", 
		EXTRARES, 
		"Url=https://safebrowsing.googleapis.com/v4/threatListUpdates:fetch?$ct=application/x-protobuf&key=AIzaSyC7jsptDS3am4tPx4r3nxis7IMjBc5Dovo&$httpMethod=POST&$req=ChUKE25hdmNsaWVudC1hdXRvLWZmb3gaJwgFEAEaGwoNCAUQBhgBIgMwMDEwARDb7B0aAhgFiV1rkyICIAIoARonCAEQARobCg0IARAGGAEiAzAwMTABEMqTExoCGAVcpV0xIgIgAigBGicIAxABGhsKDQgDEAYYASIDMDAxMAEQ7YsTGgIYBXJJeKIiAiACKAEaJwgHEAEaGwoNCAcQBhgBIgMwMDEwARCKnxMaAhgFbDSi4CICIAIoARolCAkQARoZCg0ICRAGGAEiAzAwMTABECMaAhgFrYvPTCICIAIoAQ==", "Referer=", ENDITEM, 
		LAST);

	web_websocket_send("ID=0", 
		"Buffer={\"messageType\":\"hello\",\"broadcasts\":{\"remote-settings/monitor_changes\":\"\\\"1764820630686\\\"\"},\"use_webpush\":true}", 
		"IsBinary=0", 
		LAST);

	/*Connection ID 0 received buffer WebSocketReceive0*/

	web_url("canonical.html_3", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("ocsp.digicert.com", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x02\\xF1\\x84\\xDA\\xF8\\x12Sy\\xE1\\x18\\x08\\xA7\\x04<\\xF6\\xF4", 
		LAST);

	web_custom_request("eac1b383-d838-4666-9177-452601d65896", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/events/1/eac1b383-d838-4666-9177-452601d65896", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t14.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":24,\"start_time\":\"2025-12-04T10:32:44.000+05:30\",\"end_time\":\"2025-12-04T11:10:59.810+05:30\",\"reason\":\"startup\",\"experiments\":{\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\"treatment-a-callout-badge\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"acct-adoption-callout-addresses-rollout-with-pxi-required\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-shortcuts-v3-sticky\":{\"branch\":\""
		"sticky-frozen-thom\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"deprecate-ipaddrany-rollout-for-release\":{\"branch\":\"control\",\"extra\":{\""
		"type\":\"nimbus-rollout\"}},\"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-address-autofill-india-release-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\"treatment-fast-udp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"desktop-credit-card-autofill-global-enablement-rollout-release\":{\"branch\":\"creditcard-enable\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-passwords-global-rollout\":{\"branch\":\"treatment-e\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-credit-cards-treatment-c-rollout\":{\"branch\":\"treatment-c\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"improved-mailto-handling-with-os-integration-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"new-tab-147020251114194929-to-release\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"windows-10-eos-sync-and-reminder-messaging-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\"next-sign-up-modal-cta\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{"
		"\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\"rollout-branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-search-rollout\":{\"branch\":\"google-lens-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"temp-new-tab-mobile-qr-code-campaign-row\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\"treatment-a-tab-switching-copy\",\"extra\":{\"type\":"
		"\"nimbus-rollout\"}},\"smart-tab-groups-rollout-beta\":{\"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"65.2.3\",\"first_run_date\":\"2022-10-16+05:30\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"client_id\":\"90571d99-40b9-4f10-9a9a-227b856f2593\",\"windows_build_number\":19045,"
		"\"os_version\":\"10.0\",\"app_display_version\":\"145.0.2\",\"app_build\":\"20251124145406\",\"app_channel\":\"release\",\"architecture\":\"x86_64\",\"locale\":\"en-US\",\"os\":\"Windows\",\"attribution\":{\"campaign\":\"%2528not%2Bset%2529\",\"medium\":\"referral\",\"content\":\"%2528not%2Bset%2529\",\"source\":\"www.bing.com\"}},\"metrics\":{\"uuid\":{\"legacy.telemetry.client_id\":\"f6637294-d75f-4350-be24-43ca2fcded9d\",\"legacy.telemetry.profile_group_id\":\""
		"f6637294-d75f-4350-be24-43ca2fcded9d\"},\"quantity\":{\"urlbar.pref_max_results\":10,\"browser.engagement.max_concurrent_tab_count\":1},\"boolean\":{\"urlbar.pref_suggest_sponsored\":false,\"policies.is_enterprise\":false,\"usage.is_default_browser\":false,\"urlbar.pref_suggest_nonsponsored\":false,\"urlbar.pref_suggest_data_collection\":false,\"search.engine.default.overridden_by_third_party\":false,\"search.engine.private.overridden_by_third_party\":false,\"urlbar.pref_suggest_topsites\":true},"
		"\"string\":{\"search.engine.private.provider_id\":\"\",\"search.engine.default.display_name\":\"Google\",\"search.engine.private.display_name\":\"\",\"search.engine.private.partner_code\":\"\",\"search.engine.default.provider_id\":\"google\",\"search.engine.default.partner_code\":\"firefox-b-d\",\"search.engine.default.load_path\":\"[app]google\",\"region.home_region\":\"IN\",\"search.engine.private.load_path\":\"\"},\"url\":{\"search.engine.private.submission_url\":\"blank:\",\""
		"search.engine.default.submission_url\":\"https://www.google.com/search?client=firefox-b-d&q=\"},\"counter\":{\"browser.engagement.uri_count\":4,\"browser.engagement.active_ticks\":5}},\"events\":[{\"timestamp\":0,\"category\":\"session_restore\",\"name\":\"backup_can_be_loaded_session_file\",\"extra\":{\"path_key\":\"clean\",\"glean_timestamp\":\"1764824561086\",\"loadfail_reason\":\"N/A\",\"can_load\":\"true\"}},{\"timestamp\":0,\"category\":\"session_restore\",\"name\":\""
		"backup_can_be_loaded_session_file\",\"extra\":{\"loadfail_reason\":\"N/A\",\"path_key\":\"clean\",\"glean_timestamp\":\"1764824561086\",\"can_load\":\"true\"}},{\"timestamp\":1,\"category\":\"session_restore\",\"name\":\"shutdown_success_session_startup\",\"extra\":{\"glean_timestamp\":\"1764824561087\",\"shutdown_ok\":\"false\",\"shutdown_reason\":\"N/A\"}},{\"timestamp\":934,\"category\":\"webcompatreporting\",\"name\":\"reason_dropdown\",\"extra\":{\"setting\":\"required\",\"glean_timestamp\":"
		"\"1764824562020\"}},{\"timestamp\":1840,\"category\":\"nimbus_events\",\"name\":\"startup_database_consistency\",\"extra\":{\"db_active_count\":\"37\",\"trigger\":\"startup\",\"store_active_count\":\"37\",\"total_db_count\":\"48\",\"primary\":\"database\",\"total_store_count\":\"48\",\"glean_timestamp\":\"1764824562926\"}},{\"timestamp\":1981,\"category\":\"jsonfile\",\"name\":\"load_autofillprofiles\",\"extra\":{\"value\":\"error_notfounderror\",\"glean_timestamp\":\"1764824563067\"}},{\""
		"timestamp\":1997,\"category\":\"doh\",\"name\":\"state_rollback\",\"extra\":{\"value\":\"null\",\"glean_timestamp\":\"1764824563083\"}},{\"timestamp\":2394,\"category\":\"containers\",\"name\":\"container_profile_loaded\",\"extra\":{\"glean_timestamp\":\"1764824563480\",\"containers\":\"4\"}},{\"timestamp\":2791,\"category\":\"normandy\",\"name\":\"enroll_failed_nimbus_experiment\",\"extra\":{\"glean_timestamp\":\"1764824563877\",\"reason\":\"feature-conflict\",\"value\":\""
		"account-spotlight-modal-global-rollout-v3\"}},{\"timestamp\":2791,\"category\":\"nimbus_events\",\"name\":\"enroll_failed\",\"extra\":{\"experiment\":\"account-spotlight-modal-global-rollout-v3\",\"glean_timestamp\":\"1764824563877\",\"reason\":\"feature-conflict\"}},{\"timestamp\":3054,\"category\":\"nimbus_events\",\"name\":\"is_ready\",\"extra\":{\"glean_timestamp\":\"1764824564140\"}},{\"timestamp\":3151,\"category\":\"jsonfile\",\"name\":\"load_logins\",\"extra\":{\"value\":\""
		"error_notfounderror\",\"glean_timestamp\":\"1764824564237\"}},{\"timestamp\":3158,\"category\":\"upgrade_dialog\",\"name\":\"trigger_reason\",\"extra\":{\"value\":\"not-major\",\"glean_timestamp\":\"1764824564243\"}},{\"timestamp\":6650,\"category\":\"normandy\",\"name\":\"expose_nimbus_experiment\",\"extra\":{\"featureId\":\"newtabTrainhopAddon\",\"branchSlug\":\"rollout\",\"glean_timestamp\":\"1764824567736\",\"value\":\"new-tab-147020251114194929-to-release\"}},{\"timestamp\":6650,\"category\""
		":\"nimbus_events\",\"name\":\"exposure\",\"extra\":{\"experiment\":\"new-tab-147020251114194929-to-release\",\"branch\":\"rollout\",\"feature_id\":\"newtabTrainhopAddon\",\"glean_timestamp\":\"1764824567736\"}},{\"timestamp\":7024,\"category\":\"normandy\",\"name\":\"expose_nimbus_experiment\",\"extra\":{\"glean_timestamp\":\"1764824597256\",\"featureId\":\"feltPrivacy\",\"branchSlug\":\"control\",\"value\":\"private-window-visual-refresh-rollout\"}},{\"timestamp\":7024,\"category\":\""
		"nimbus_events\",\"name\":\"exposure\",\"extra\":{\"branch\":\"control\",\"feature_id\":\"feltPrivacy\",\"glean_timestamp\":\"1764824597256\",\"experiment\":\"private-window-visual-refresh-rollout\"}},{\"timestamp\":36143,\"category\":\"doh\",\"name\":\"state_shutdown\",\"extra\":{\"value\":\"null\",\"glean_timestamp\":\"1764824597229\"}}]}", 
		EXTRARES, 
		"Url=http://detectportal.firefox.com/success.txt?ipv4", "Referer=", ENDITEM, 
		"Url=https://prod.ohttp-gateway.prod.webservices.mozgcp.net/ohttp-configs", "Referer=", ENDITEM, 
		LAST);

	web_url("canonical.html_4", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/success.txt?ipv4", "Referer=", ENDITEM, 
		LAST);

	web_custom_request("f7ce9ec9-c13e-4ce7-ae4a-e01462ca3007", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/use-counters/1/f7ce9ec9-c13e-4ce7-ae4a-e01462ca3007", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t16.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":16,\"start_time\":\"2025-12-04T10:20:23.000+05:30\",\"end_time\":\"2025-12-04T10:33:11.365+05:30\",\"reason\":\"app_shutdown_confirmed\",\"experiments\":{\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\""
		"acct-adoption-callout-addresses-rollout-with-pxi-required\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\"rollout-branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-search-rollout\":{\"branch\":\"google-lens-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-passwords-global-rollout\":{\"branch\":\"treatment-e\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-credit-card-autofill-global-enablement-rollout-release\":{\"branch\":\"creditcard-enable\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\"treatment-fast-udp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"temp-new-tab-mobile-qr-code-campaign-row\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-address-autofill-india-release-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\""
		"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-shortcuts-v3-sticky\":{\"branch\":\"sticky-frozen-thom\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"new-tab-147020251114194929-to-release\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\"next-sign-up-modal-cta\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"deprecate-ipaddrany-rollout-for-release\":{\"branch\":\""
		"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-tab-groups-rollout-beta\":{\"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-credit-cards-treatment-c-rollout\":{\"branch\":\"treatment-c\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-10-eos-sync-and-reminder-messaging-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"improved-mailto-handling-with-os-integration-treatment-a-rollout\":{\"branch\":\"treatment-a\",\""
		"extra\":{\"type\":\"nimbus-rollout\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\"treatment-a-callout-badge\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"65.2.3\",\"client_id\":\"90571d99-40b9-4f10-9a9a-227b856f2593\",\"first_run_date\":\"2022-10-16+05:30\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\""
		"windows_build_number\":19045,\"app_display_version\":\"145.0.2\",\"locale\":\"en-US\",\"os\":\"Windows\",\"app_build\":\"20251124145406\",\"architecture\":\"x86_64\",\"os_version\":\"10.0\",\"app_channel\":\"release\",\"attribution\":{\"medium\":\"referral\",\"source\":\"www.bing.com\",\"content\":\"%2528not%2Bset%2529\",\"campaign\":\"%2528not%2Bset%2529\"}},\"metrics\":{\"counter\":{\"use.counter.css.doc.css_color\":2,\"use.counter.css.page.css_word_wrap\":4,\""
		"use.counter.css.doc.css_font_family\":2,\"use.counter.css.page.css_page_break_inside\":4,\"use.counter.css.page.css_text_transform\":4,\"use.counter.css.page.css_right\":4,\"use.counter.css.page.css_border_top_left_radius\":4,\"use.counter.css.page.css_border_bottom_width\":4,\"use.counter.css.page.css_padding_right\":4,\"use.counter.css.page.css_border_color\":4,\"use.counter.css.page.css_border_left_width\":4,\"use.counter.css.page.css_max_height\":4,\"use.counter.css.page.css_content\":4,\""
		"use.counter.css.page.css_vertical_align\":4,\"use.counter.css.page.css_opacity\":4,\"use.counter.css.page.css_overflow_x\":4,\"use.counter.css.page.css_letter_spacing\":4,\"use.counter.css.page.css_box_sizing\":4,\"use.counter.css.page.css_margin\":4,\"use.counter.css.page.orphans\":4,\"use.counter.css.page.css_font_style\":4,\"use.counter.css.page.css_line_height\":4,\"use.counter.css.page.css_border_bottom_right_radius\":4,\"use.counter.css.page.css_webkit_appearance\":4,\""
		"use.counter.css.page.css_text_decoration\":4,\"use.counter.css.page.css_white_space\":4,\"use.counter.css.page.css_margin_bottom\":4,\"use.counter.css.page.widows\":4,\"use.counter.css.page.css_text_overflow\":4,\"use.counter.css.page.css_border_left_color\":4,\"use.counter.css.page.css_word_break\":4,\"use.counter.css.page.css_webkit_border_bottom_right_radius\":4,\"use.counter.css.page.css_webkit_border_top_left_radius\":4,\"use.counter.css.page.css_background_image\":4,\""
		"use.counter.css.page.css_outline\":4,\"use.counter.css.page.css_font_size\":4,\"use.counter.css.page.css_font_family\":4,\"use.counter.css.page.css_webkit_background_size\":4,\"use.counter.css.page.css_border_bottom\":4,\"use.counter.css.page.css_border_style\":4,\"use.counter.css.page.css_moz_animation\":4,\"use.counter.css.page.css_webkit_box_sizing\":4,\"use.counter.css.page.css_border_bottom_color\":4,\"use.counter.css.page.css_webkit_transition\":4,\"use.counter.css.page.css_visibility\":4,\""
		"use.counter.css.page.css_height\":4,\"use.counter.css.page.css_border_left\":4,\"use.counter.css.page.css_border_top_width\":4,\"use.counter.css.page.css_border\":4,\"use.counter.css.page.css_moz_transition\":4,\"use.counter.css.page.css_z_index\":4,\"use.counter.css.page.css_margin_left\":4,\"use.counter.css.page.css_overflow\":4,\"use.counter.css.page.css_text_indent\":4,\"use.counter.css.page.css_min_width\":4,\"use.counter.top_level_content_documents_destroyed\":4,\""
		"use.counter.css.page.css_padding\":4,\"use.counter.css.page.css_border_right_color\":4,\"use.counter.css.page.css_webkit_animation\":4,\"use.counter.css.page.css_padding_bottom\":4,\"use.counter.css.page.css_position\":4,\"use.counter.css.page.css_border_radius\":4,\"use.counter.css.page.css_padding_left\":4,\"use.counter.css.page.css_padding_top\":4,\"use.counter.css.page.css_float\":4,\"use.counter.css.page.css_transition\":4,\"use.counter.css.page.css_webkit_box_shadow\":4,\""
		"use.counter.css.page.css_width\":4,\"use.counter.css.page.css_text_rendering\":4,\"use.counter.css.page.css_webkit_transform\":4,\"use.counter.css.page.css_max_width\":4,\"use.counter.css.page.css_animation\":4,\"use.counter.css.page.css_display\":4,\"use.counter.css.page.css_page_break_after\":4,\"use.counter.css.page.css_outline_offset\":4,\"use.counter.css.page.css_cursor\":4,\"use.counter.css.page.css_border_top_color\":4,\"use.counter.css.page.css_border_bottom_left_radius\":4,\""
		"use.counter.css.page.css_background_repeat\":4,\"use.counter.css.page.css_border_right_width\":4,\"use.counter.css.doc.css_text_decoration\":1,\"use.counter.css.page.css_webkit_border_bottom_left_radius\":4,\"use.counter.css.page.css_webkit_border_top_right_radius\":4,\"use.counter.css.page.css_background_clip\":4,\"use.counter.css.page.css_color\":4,\"use.counter.css.page.css_clear\":4,\"use.counter.css.page.css_font\":4,\"use.counter.css.page.css_border_top_right_radius\":4,\""
		"use.counter.css.page.css_min_height\":4,\"use.counter.css.page.css_list_style\":4,\"use.counter.css.page.css_webkit_border_radius\":4,\"use.counter.css.doc.css_font_size\":2,\"use.counter.css.page.css_border_spacing\":4,\"use.counter.css.page.css_border_top\":4,\"use.counter.css.page.css_text_shadow\":4,\"use.counter.css.page.css_margin_top\":4,\"use.counter.css.page.css_webkit_background_clip\":4,\"use.counter.css.page.css_box_shadow\":4,\"use.counter.css.page.css_overflow_y\":4,\""
		"use.counter.css.page.css_bottom\":4,\"use.counter.css.page.css_border_right\":4,\"use.counter.css.page.css_background\":4,\"use.counter.css.page.css_left\":4,\"use.counter.css.page.css_border_collapse\":4,\"use.counter.css.page.css_margin_right\":4,\"use.counter.css.page.css_pointer_events\":4,\"use.counter.css.page.css_top\":4,\"use.counter.css.doc.css_font_weight\":1,\"use.counter.css.page.css_zoom\":4,\"use.counter.css.page.css_background_position\":4,\""
		"use.counter.css.page.css_background_color\":4,\"use.counter.css.page.css_font_weight\":4,\"use.counter.css.page.css_moz_box_sizing\":4,\"use.counter.content_documents_destroyed\":5,\"use.counter.css.page.css_border_width\":4,\"use.counter.css.page.css_text_align\":4,\"use.counter.css.page.css_background_size\":4,\"use.counter.css.page.webkit_margin_top_collapse\":4}}}", 
		LAST);

	web_custom_request("ocsp.r2m04.amazontrust.com", 
		"URL=http://ocsp.r2m04.amazontrust.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\n\\xF9\\xFA\n\\xC2\\xD8\\xC024d\\xE9a\\xC6%\\xAA\\x10", 
		LAST);

	web_custom_request("067f5f3d-21ad-4e92-9b88-ec06675c2d43", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/newtab/1/067f5f3d-21ad-4e92-9b88-ec06675c2d43", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t18.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":52,\"start_time\":\"2025-12-04T10:32:44.000+05:30\",\"end_time\":\"2025-12-04T11:11:00.085+05:30\",\"reason\":\"component_init\"},\"client_info\":{\"telemetry_sdk_build\":\"65.2.3\",\"os_version\":\"10.0\",\"locale\":\"en-US\",\"os\":\"Windows\",\"app_channel\":\"release\",\"app_build\":\"20251124145406\",\"app_display_version\":\"145.0.2\",\"architecture\":\"x86_64\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2022-10-16+05:30\",\"client_id\":\""
		"90571d99-40b9-4f10-9a9a-227b856f2593\",\"windows_build_number\":19045,\"attribution\":{\"campaign\":\"%2528not%2Bset%2529\",\"medium\":\"referral\",\"content\":\"%2528not%2Bset%2529\",\"source\":\"www.bing.com\"}},\"metrics\":{\"string\":{\"newtab.homepage_category\":\"enabled\",\"newtab.locale\":\"en-US\",\"newtab.newtab_category\":\"enabled\"},\"string_list\":{\"newtab.blocked_sponsors\":[]}}}", 
		LAST);

	web_custom_request("ocsp.r2m01.amazontrust.com", 
		"URL=http://ocsp.r2m01.amazontrust.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t19.inf", 
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
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"3ac92c70-2716-43d4-9b0f-2ccc821cbf58\",\"iso_time_full\":\"2025-12-04T05:41:02.953Z\",\"local_time_full\":\"Thu Dec 04 2025 11:11:02 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"f6329826-b24a-41b1-ab73-63ebcd541823\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"8cee76a3-42d3-4edd-88f8-86c28db337c1\",\"tracker_loaded_at\":\"2025-12-04T05:41:02.951Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"7cbef018-3d6c-4564-9374-c2e801b4a458\"},\"page\":{\"title\":\"BlazeDemo\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":675,\"pixel_max\":675,\"ratio\":1,\"ratio_max\":1},\"time_on_page\":0,\"time_on_page_ms\":3},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\":true,\"platform\""
		":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":675,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/\",\"info\":{}},\"referrer\":{\"full\":\"\""
		",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T05:41:02.954Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\"time.utc\"},{\""
		"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]}}", 
		LAST);

	web_custom_request("3159575b-a34c-49da-ac89-0205619f4873", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/nimbus-targeting-context/1/3159575b-a34c-49da-ac89-0205619f4873", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t21.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":15,\"start_time\":\"2025-12-04T10:32:45.000+05:30\",\"end_time\":\"2025-12-04T11:11:00.276+05:30\",\"experiments\":{\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\""
		"treatment-fast-udp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"temp-new-tab-mobile-qr-code-campaign-row\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-search-rollout\":{\"branch\":\"google-lens-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"acct-adoption-callout-addresses-rollout-with-pxi-required\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"improved-mailto-handling-with-os-integration-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\"treatment-a-callout-badge\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\""
		"rollout-branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-credit-card-autofill-global-enablement-rollout-release\":{\"branch\":\"creditcard-enable\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"deprecate-ipaddrany-rollout-for-release\":{\""
		"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\"next-sign-up-modal-cta\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-shortcuts-v3-sticky\":{\"branch\":\"sticky-frozen-thom\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"account-adoption-callout-credit-cards-treatment-c-rollout\":{\"branch\":\"treatment-c\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"downsample-uptakeremotecontent-events\":{\""
		"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-tab-groups-rollout-beta\":{\"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"account-adoption-callout-passwords-global-rollout\":{\"branch\":\"treatment-e\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-10-eos-sync-and-reminder-messaging-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"new-tab-147020251114194929-to-release\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-address-autofill-india-release-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"65.2.3\",\"client_id\":\"90571d99-40b9-4f10-9a9a-227b856f2593\",\"app_channel\":\"release\",\"app_display_version\":\"145.0.2\",\"app_build\":\"20251124145406\",\"os_version\":\"10.0\",\"locale"
		"\":\"en-US\",\"architecture\":\"x86_64\",\"os\":\"Windows\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2022-10-16+05:30\",\"windows_build_number\":19045,\"attribution\":{\"campaign\":\"%2528not%2Bset%2529\",\"content\":\"%2528not%2Bset%2529\",\"medium\":\"referral\",\"source\":\"www.bing.com\"}},\"metrics\":{\"quantity\":{\"nimbus_targeting_context.arch_bits\":64,\"nimbus_targeting_context.firefox_version\":145,\"nimbus_targeting_context.addresses_saved\":0,\""
		"nimbus_targeting_context.memory_mb\":16382,\"nimbus_targeting_context.total_bookmarks_count\":5,\"nimbus_targeting_context.profile_age_created\":1665919558706,\"nimbus_targeting_context.profile_group_profile_count\":0,\"nimbus_targeting_context.build_id\":1},\"boolean\":{\"nimbus_targeting_context.is_first_startup\":false,\"nimbus_targeting_context.is_default_browser\":false,\"nimbus_targeting_context.is_msix\":false,\"nimbus_targeting_context.is_fx_a_signed_in\":false,\""
		"nimbus_targeting_context.does_app_need_pin\":false,\"nimbus_targeting_context.uses_firefox_sync\":false,\"nimbus_targeting_context.user_prefers_reduced_motion\":true,\"nimbus_targeting_context.is_fx_a_enabled\":true,\"nimbus_targeting_context.has_active_enterprise_policies\":false,\"nimbus_targeting_context.has_pinned_tabs\":false},\"uuid\":{\"legacy.telemetry.client_id\":\"f6637294-d75f-4350-be24-43ca2fcded9d\",\"legacy.telemetry.profile_group_id\":\"f6637294-d75f-4350-be24-43ca2fcded9d\"},\""
		"object\":{\"nimbus_targeting_environment.pref_values\":{\"browser__newtabpage__activity_stream__asrouter__userprefs__cfr__addons\":true,\"browser__newtabpage__activity_stream__asrouter__userprefs__cfr__features\":true,\"browser__newtabpage__activity_stream__feeds__section__highlights\":false,\"browser__newtabpage__activity_stream__feeds__section__topstories\":true,\"browser__newtabpage__activity_stream__feeds__topsites\":true,\"browser__newtabpage__activity_stream__showSearch\":true,\""
		"browser__newtabpage__activity_stream__showSponsoredTopSites\":true,\"browser__newtabpage__enabled\":true,\"browser__startup__page\":1,\"browser__toolbars__bookmarks__visibility\":\"newtab\",\"browser__urlbar__lastUrlbarSearchSeconds\":0,\"browser__urlbar__quicksuggest__dataCollection__enabled\":false,\"browser__urlbar__showSearchSuggestionsFirst\":true,\"browser__urlbar__suggest__quicksuggest__sponsored\":false,\"media__videocontrols__picture_in_picture__enabled\":true,\""
		"media__videocontrols__picture_in_picture__video_toggle__enabled\":true,\"media__videocontrols__picture_in_picture__video_toggle__has_used\":false,\"network__trr__mode\":0,\"security__sandbox__content__level\":8,\"trailhead__firstrun__didSeeAboutWelcome\":true,\"nimbus__qa__pref_1\":\"default\",\"nimbus__qa__pref_2\":\"default\"},\"nimbus_targeting_context.addons_info\":{\"addons\":[\"addons-search-detection@mozilla.com\",\"data-leak-blocker@mozilla.com\",\"formautofill@mozilla.org\",\""
		"ipp-activator@mozilla.com\",\"newtab@mozilla.org\",\"pictureinpicture@mozilla.org\",\"webcompat@mozilla.org\"],\"hasInstalledAddons\":true},\"nimbus_targeting_context.active_experiments\":[\"long-term-holdback-2025h1-growth-desktop\",\"mozilla-foundation-donation-promotion-moments-page\",\"smart-shortcuts-v3-sticky\"],\"nimbus_targeting_context.user_monthly_activity\":[{\"numberOfURLsVisited\":3,\"date\":\"2025-11-20\"},{\"numberOfURLsVisited\":1,\"date\":\"2025-12-03\"}],\""
		"nimbus_targeting_context.os\":{\"isLinux\":false,\"isMac\":false,\"windowsBuildNumber\":19045,\"windowsVersion\":10},\"nimbus_targeting_context.default_pdf_handler\":{\"knownBrowser\":true,\"registered\":true},\"nimbus_targeting_context.primary_resolution\":{\"height\":760,\"width\":1280},\"nimbus_targeting_environment.user_set_prefs\":[\"nimbus.profilesdatastoreservice.read.enabled\",\"nimbus.profilesdatastoreservice.sync.enabled\",\"browser.search.separatePrivateDefault.urlbarResult.enabled\",\""
		"browser.newtabpage.activity-stream.mobileDownloadModal.enabled\",\"browser.newtabpage.activity-stream.mobileDownloadModal.variant-a\",\"browser.newtabpage.trainhopAddon.version\",\"signon.firefoxRelay.showToAllBrowsers\",\"browser.contextual-services.contextId.rotation-in-days\"],\"nimbus_targeting_context.enrollments_map\":[{\"experimentSlug\":\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\",\"branchSlug\":\"treatment-a-tab-switching-copy\"},{\"experimentSlug\":"
		"\"account-adoption-callout-credit-cards-treatment-c-rollout\",\"branchSlug\":\"treatment-c\"},{\"experimentSlug\":\"account-adoption-callout-passwords-global-rollout\",\"branchSlug\":\"treatment-e\"},{\"experimentSlug\":\"account-adoption-pxi-menu-rollout-v2\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"account-spotlight-modal-english-rollout-v2\",\"branchSlug\":\"rollout\"},{\"experimentSlug\":\"acct-adoption-callout-addresses-rollout-with-pxi-required\",\"branchSlug\":\"treatment-a\"},"
		"{\"experimentSlug\":\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\",\"branchSlug\":\"treatment-a-callout-badge\"},{\"experimentSlug\":\"backgroundupdate-enable-unelevated-installations-rollout-3-release\",\"branchSlug\":\"enabled\"},{\"experimentSlug\":\"consolidated-search-configuration-row-desktop-relaunch\",\"branchSlug\":\"rollout\"},{\"experimentSlug\":\"context-id-rotation-every-3-days\",\"branchSlug\":\"control\"},{\"experimentSlug\":\""
		"context-id-rotation-every-7-days\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"custom-wallpapers-no-message-rollout-release\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"deprecate-ipaddrany-rollout-for-release\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"desktop-address-autofill-india-release-rollout\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"desktop-credit-card-autofill-global-enablement-rollout-release\",\"branchSlug\":\"creditcard-enable\"},{\"experimentSlug\":\""
		"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\",\"branchSlug\":\"next-sign-up-modal-cta\"},{\"experimentSlug\":\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"downsample-uptakeremotecontent-events\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"enable-nimbus-unenrollment-synchronization\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"encrypted-client-hello-fallback-mechanism\",\""
		"branchSlug\":\"control\"},{\"experimentSlug\":\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\",\"branchSlug\":\"enforce\"},{\"experimentSlug\":\"etp-strict-message-release\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\",\"branchSlug\":\"treatment-fast-udp\"},{\"experimentSlug\":\"fox-doodle-multi-action-cta-2025-rollout\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"fx-accounts-ping-release-rollout-2\",\"branchSlug\":\""
		"control\"},{\"experimentSlug\":\"fx-view-discoverability-rollout\",\"branchSlug\":\"treatment-b\"},{\"experimentSlug\":\"improved-mailto-handling-with-os-integration-treatment-a-rollout\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"long-term-holdback-2024-h2-velocity-desktop\",\"branchSlug\":\"delivery\"},{\"experimentSlug\":\"long-term-holdback-2025h1-growth-desktop\",\"branchSlug\":\"delivery\"},{\"experimentSlug\":\"mozilla-foundation-donation-promotion-moments-page\",\"branchSlug\":"
		"\"treatment-a\"},{\"experimentSlug\":\"new-tab-145120251009134757-to-release\",\"branchSlug\":\"rollout\"},{\"experimentSlug\":\"new-tab-147020251114194929-to-release\",\"branchSlug\":\"rollout\"},{\"experimentSlug\":\"one-click-sponsored-settings\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"pdf-annotations-highlight-treatment-b-rollout\",\"branchSlug\":\"treatment-b\"},{\"experimentSlug\":\"pin-frequently-used-websites-143-promo-rollout-all-locales\",\"branchSlug\":\"rollout-branch\"},{\""
		"experimentSlug\":\"private-window-visual-refresh-rollout\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\",\"branchSlug\":\"sign-in-with-call-out\"},{\"experimentSlug\":\"smart-shortcuts-v3-sticky\",\"branchSlug\":\"sticky-frozen-thom\"},{\"experimentSlug\":\"smart-tab-groups-rollout-beta\",\"branchSlug\":\"smart-tab-groups\"},{\"experimentSlug\":\"storage-access-heuristic-restriction-rollout\",\"branchSlug\":\"treatment-branch\""
		"},{\"experimentSlug\":\"taskbar-tabs-discovery-global-rollout\",\"branchSlug\":\"delivery\"},{\"experimentSlug\":\"temp-new-tab-mobile-qr-code-campaign-row\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"visual-card-updates\",\"branchSlug\":\"updated\"},{\"experimentSlug\":\"visual-search-rollout\",\"branchSlug\":\"google-lens-rollout\"},{\"experimentSlug\":\""
		"windows-10-eos-sync-and-reminder-messaging-rollout\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"windows-10-eos-sync-messaging-rollout-2\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"windows-ui-automation-release-rollout\",\"branchSlug\":\"rollout\"}],\"nimbus_targeting_context.home_page_settings\":{\"isCustomUrl\":false,\"isDefault\":true,\"isLocked\":false,\"isWebExt\":false},\"nimbus_targeting_context.attribution_data\":{\"medium\":\"referral\",\"source\":\"www.bing.com\",\""
		"ua\":\"edge\"},\"nimbus_targeting_context.browser_settings\":{\"update\":{\"channel\":\"release\"}},\"nimbus_targeting_context.is_default_handler\":{\"html\":false,\"pdf\":false},\"nimbus_targeting_context.active_rollouts\":[\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\",\"account-adoption-callout-credit-cards-treatment-c-rollout\",\"account-adoption-callout-passwords-global-rollout\",\"account-adoption-pxi-menu-rollout-v2\",\""
		"acct-adoption-callout-addresses-rollout-with-pxi-required\",\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\",\"backgroundupdate-enable-unelevated-installations-rollout-3-release\",\"context-id-rotation-every-3-days\",\"deprecate-ipaddrany-rollout-for-release\",\"desktop-address-autofill-india-release-rollout\",\"desktop-credit-card-autofill-global-enablement-rollout-release\",\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\",\""
		"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\",\"downsample-uptakeremotecontent-events\",\"enable-nimbus-unenrollment-synchronization\",\"encrypted-client-hello-fallback-mechanism\",\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\",\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\",\"fox-doodle-multi-action-cta-2025-rollout\",\"fx-accounts-ping-release-rollout-2\",\"improved-mailto-handling-with-os-integration-treatment-a-rollout\",\""
		"new-tab-147020251114194929-to-release\",\"pdf-annotations-highlight-treatment-b-rollout\",\"pin-frequently-used-websites-143-promo-rollout-all-locales\",\"private-window-visual-refresh-rollout\",\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\",\"smart-tab-groups-rollout-beta\",\"taskbar-tabs-discovery-global-rollout\",\"temp-new-tab-mobile-qr-code-campaign-row\",\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\",\"visual-card-updates\",\""
		"visual-search-rollout\",\"windows-10-eos-sync-and-reminder-messaging-rollout\",\"windows-ui-automation-release-rollout\"]},\"string\":{\"nimbus_targeting_context.region\":\"IN\",\"nimbus_targeting_context.current_date\":\"Thu, 04 Dec 2025 05:40:59 GMT\",\"nimbus_targeting_context.distribution_id\":\"\",\"nimbus_targeting_context.version\":\"145.0.2\",\"nimbus_targeting_context.locale\":\"en-US\"}}}", 
		LAST);

	web_custom_request("49116061-1d6e-4c12-a372-4d71a22d576f", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/baseline/1/49116061-1d6e-4c12-a372-4d71a22d576f", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t22.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":32,\"start_time\":\"2025-12-04T10:32:45.000+05:30\",\"end_time\":\"2025-12-04T11:11:00.347+05:30\",\"reason\":\"active\",\"experiments\":{\"acct-adoption-callout-addresses-rollout-with-pxi-required\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\""
		":{\"branch\":\"enforce\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-credit-card-autofill-global-enablement-rollout-release\":{\"branch\":\"creditcard-enable\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"improved-mailto-handling-with-os-integration-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\""
		"account-adoption-callout-credit-cards-treatment-c-rollout\":{\"branch\":\"treatment-c\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"new-tab-147020251114194929-to-release\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\"next-sign-up-modal-cta\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\""
		"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-shortcuts-v3-sticky\":{\"branch\":\"sticky-frozen-thom\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"smart-tab-groups-rollout-beta\":{\"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\"rollout-branch\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"desktop-address-autofill-india-release-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\"treatment-a-callout-badge"
		"\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-search-rollout\":{\"branch\":\"google-lens-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"deprecate-ipaddrany-rollout-for-release\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-10-eos-sync-and-reminder-messaging-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"temp-new-tab-mobile-qr-code-campaign-row\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\""
		"branch\":\"treatment-fast-udp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-passwords-global-rollout\":{\"branch\":\"treatment-e\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"65.2.3\",\"windows_build_number\":19045,\"client_id\":\"90571d99-40b9-4f10-9a9a-227b856f2593\",\"app_display_version\":\"145.0.2\",\"os\":\"Windows\",\"app_build\":\""
		"20251124145406\",\"architecture\":\"x86_64\",\"os_version\":\"10.0\",\"locale\":\"en-US\",\"app_channel\":\"release\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2022-10-16+05:30\",\"attribution\":{\"medium\":\"referral\",\"source\":\"www.bing.com\",\"campaign\":\"%2528not%2Bset%2529\",\"content\":\"%2528not%2Bset%2529\"}},\"metrics\":{\"counter\":{\"browser.engagement.active_ticks\":5,\"browser.engagement.uri_count\":3},\"labeled_counter\":{\""
		"glean.validation.pings_submitted\":{\"baseline\":1,\"events\":1}},\"boolean\":{\"usage.is_default_browser\":false},\"uuid\":{\"legacy.telemetry.profile_group_id\":\"f6637294-d75f-4350-be24-43ca2fcded9d\",\"legacy.telemetry.client_id\":\"f6637294-d75f-4350-be24-43ca2fcded9d\"},\"datetime\":{\"glean.validation.first_run_hour\":\"2022-10-16T16+05:30\"},\"string\":{\"usage.distribution_id\":\"default\",\"startup.profile_selection_reason\":\"default\"}}}", 
		LAST);

	web_custom_request("a6bbde97-c895-4fee-a346-5c054e2b933d", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/usage-reporting/1/a6bbde97-c895-4fee-a346-5c054e2b933d", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t23.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"metrics\":{\"boolean\":{\"usage.is_default_browser\":false,\"usage.windows_backup_enabled\":false},\"counter\":{\"browser.engagement.uri_count\":3,\"browser.engagement.active_ticks\":5},\"quantity\":{\"usage.windows_user_profile_age_in_days\":1145,\"usage.windows_build_number\":19045},\"uuid\":{\"usage.profile_id\":\"5ae6e87b-e670-4529-b684-10268475dcce\",\"usage.profile_group_id\":\"9285e5cf-d171-4f29-a5b8-d53d109d51a8\"},\"datetime\":{\"usage.first_run_date\":\"2022-10-16+05:30\"},\""
		"string\":{\"usage.distribution_id\":\"default\",\"usage.os\":\"WINNT\",\"usage.os_version\":\"10.0\",\"usage.app_channel\":\"release\",\"usage.app_display_version\":\"145.0.2\",\"usage.app_build\":\"20251124145406\"}}}", 
		LAST);

	web_custom_request("9bbfbbb3-9265-41e7-89ad-db13ddc7dd1a", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/health/1/9bbfbbb3-9265-41e7-89ad-db13ddc7dd1a", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t24.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":26,\"start_time\":\"2025-12-04T10:32:45.000+05:30\",\"end_time\":\"2025-12-04T11:11:00.373+05:30\",\"reason\":\"pre_init\",\"experiments\":{\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-tab-groups-rollout-beta\":{\"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-credit-cards-treatment-c-rollout\":{\"branch\":\"treatment-c\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-address-autofill-india-release-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"deprecate-ipaddrany-rollout-for-release\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-10-eos-sync-and-reminder-messaging-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"account-adoption-callout-passwords-global-rollout\":{\"branch\":\"treatment-e\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"acct-adoption-callout-addresses-rollout-with-pxi-required\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-search-rollout\":{\"branch\":\"google-lens-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\"next-sign-up-modal-cta\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-credit-card-autofill-global-enablement-rollout-release\":{\"branch\":\"creditcard-enable\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\"treatment-a-callout-badge\",\"extra\":"
		"{\"type\":\"nimbus-rollout\"}},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"improved-mailto-handling-with-os-integration-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\"rollout-branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"new-tab-147020251114194929-to-release\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-shortcuts-v3-sticky\":{\"branch\":\"sticky-frozen-thom\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"temp-new-tab-mobile-qr-code-campaign-row\":{\"branch\":\""
		"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\"treatment-fast-udp\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"65.2.3\",\"first_run_date\":\"2022-10-16+05:30\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"app_display_version\":\"145.0.2\",\"os\":\"Windows\",\"architecture\":\"x86_64\",\""
		"app_channel\":\"release\",\"os_version\":\"10.0\",\"app_build\":\"20251124145406\",\"locale\":\"en-US\",\"windows_build_number\":19045,\"client_id\":\"90571d99-40b9-4f10-9a9a-227b856f2593\",\"attribution\":{\"campaign\":\"%2528not%2Bset%2529\",\"source\":\"www.bing.com\",\"content\":\"%2528not%2Bset%2529\",\"medium\":\"referral\"}},\"metrics\":{\"uuid\":{\"legacy.telemetry.client_id\":\"f6637294-d75f-4350-be24-43ca2fcded9d\",\"legacy.telemetry.profile_group_id\":\""
		"f6637294-d75f-4350-be24-43ca2fcded9d\"},\"counter\":{\"glean.health.init_count\":14,\"glean.upload.pending_pings\":2},\"memory_distribution\":{\"glean.upload.pending_pings_directory_size\":{\"values\":{\"10173\":1},\"sum\":10240},\"glean.database.size\":{\"values\":{\"220435\":1},\"sum\":226177}},\"object\":{\"glean.health.data_directory_info\":[{\"dir_name\":\"db\",\"dir_exists\":true,\"dir_created\":1665919583,\"dir_modified\":1764824597,\"file_count\":1,\"files\":[{\"file_name\":\""
		"data.safe.bin\",\"file_created\":1764824591,\"file_modified\":1764824597,\"file_size\":226177}]},{\"dir_name\":\"events\",\"dir_exists\":true,\"dir_created\":1665919583,\"dir_modified\":1764824564,\"file_count\":2,\"files\":[{\"file_name\":\"events\",\"file_created\":1733465245,\"file_modified\":1764824597,\"file_size\":3199},{\"file_name\":\"prototype-no-code-events\",\"file_created\":1733395015,\"file_modified\":1762144555,\"file_size\":645}]},{\"dir_name\":\"pending_pings\",\"dir_exists\":true,"
		"\"dir_created\":1665919583,\"dir_modified\":1764824591,\"file_count\":2,\"files\":[{\"file_name\":\"09f654cb-0bf5-4a13-ae82-273df63d00a2\",\"file_created\":1764757770,\"file_modified\":1764757770,\"file_size\":368},{\"file_name\":\"f7ce9ec9-c13e-4ce7-ae4a-e01462ca3007\",\"file_created\":1764824591,\"file_modified\":1764824591,\"file_size\":9982}]}],\"glean.database.load_sizes\":{\"new\":226177,\"open\":226177,\"post_open\":226177,\"post_open_user\":226177,\"post_load_ping_lifetime_data\":226177,\""
		"user_records\":62,\"ping_records\":1007,\"application_records\":301,\"ping_memory_records\":1007}},\"labeled_counter\":{\"glean.upload.ping_upload_failure\":{\"recoverable\":4},\"glean.validation.pings_submitted\":{\"baseline\":1,\"events\":1}},\"timing_distribution\":{\"glean.validation.shutdown_wait\":{\"values\":{\"4194304\":1},\"sum\":4521500},\"glean.upload.send_success\":{\"values\":{\"413984066\":1,\"3611622602\":1,\"451452825\":1,\"348117717\":3,\"292730940\":1,\"319225354\":1},\"sum\""
		":6386600200},\"glean.validation.shutdown_dispatcher_wait\":{\"values\":{\"3846193\":1},\"sum\":4168000},\"glean.upload.send_failure\":{\"values\":{\"123078199\":1,\"159612677\":1,\"638450708\":1,\"5569883475\":1},\"sum\":6803204900}}}}", 
		LAST);

	web_custom_request("303e04e6-3df2-4f28-9119-6e7a3e5b45ee", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/health/1/303e04e6-3df2-4f28-9119-6e7a3e5b45ee", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t25.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":27,\"start_time\":\"2025-12-04T11:11:00.000+05:30\",\"end_time\":\"2025-12-04T11:11:00.390+05:30\",\"reason\":\"post_init\",\"experiments\":{\"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-search-rollout\":{\"branch\":\"google-lens-rollout\",\"extra\":{\""
		"type\":\"nimbus-rollout\"}},\"desktop-address-autofill-india-release-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-passwords-global-rollout\":{\"branch\":\"treatment-e\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\"next-sign-up-modal-cta\",\"extra\":"
		"{\"type\":\"nimbus-rollout\"}},\"windows-10-eos-sync-and-reminder-messaging-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"deprecate-ipaddrany-rollout-for-release\":{\"branch\":\"control\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\""
		"treatment-a-callout-badge\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-credit-card-autofill-global-enablement-rollout-release\":{\"branch\":\"creditcard-enable\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"new-tab-147020251114194929-to-release\":{\"branch\":\""
		"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"improved-mailto-handling-with-os-integration-treatment-a-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\""
		"rollout-branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-shortcuts-v3-sticky\":{\"branch\":\"sticky-frozen-thom\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-callout-credit-cards-treatment-c-rollout\":{\"branch\":\"treatment-c\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"acct-adoption-callout-addresses-rollout-with-pxi-required\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\""
		"treatment-fast-udp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-tab-groups-rollout-beta\":{\"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"temp-new-tab-mobile-qr-code-campaign-row\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"65.2.3\",\"client_id\":\"90571d99-40b9-4f10-9a9a-227b856f2593\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2022-10-16+05:30\",\"app_build\":\""
		"20251124145406\",\"locale\":\"en-US\",\"os_version\":\"10.0\",\"os\":\"Windows\",\"app_channel\":\"release\",\"architecture\":\"x86_64\",\"app_display_version\":\"145.0.2\",\"windows_build_number\":19045,\"attribution\":{\"medium\":\"referral\",\"source\":\"www.bing.com\",\"content\":\"%2528not%2Bset%2529\",\"campaign\":\"%2528not%2Bset%2529\"}},\"metrics\":{\"object\":{\"glean.health.data_directory_info\":[{\"dir_name\":\"db\",\"dir_exists\":true,\"dir_created\":1665919583,\"dir_modified\""
		":1764826860,\"file_count\":1,\"files\":[{\"file_name\":\"data.safe.bin\",\"file_created\":1764826859,\"file_modified\":1764826860,\"file_size\":219694}]},{\"dir_name\":\"events\",\"dir_exists\":true,\"dir_created\":1665919583,\"dir_modified\":1764826860,\"file_count\":2,\"files\":[{\"file_name\":\"events\",\"file_created\":1733465245,\"file_modified\":1764826860,\"file_size\":0},{\"file_name\":\"prototype-no-code-events\",\"file_created\":1733395015,\"file_modified\":1762144555,\"file_size\":645}]"
		"},{\"dir_name\":\"pending_pings\",\"dir_exists\":true,\"dir_created\":1665919583,\"dir_modified\":1764826860,\"file_count\":8,\"files\":[{\"file_name\":\"067f5f3d-21ad-4e92-9b88-ec06675c2d43\",\"file_created\":1764826860,\"file_modified\":1764826860,\"file_size\":955},{\"file_name\":\"09f654cb-0bf5-4a13-ae82-273df63d00a2\",\"file_created\":1764757770,\"file_modified\":1764757770,\"file_size\":368},{\"file_name\":\"3159575b-a34c-49da-ac89-0205619f4873\",\"file_created\":1764826860,\"file_modified\""
		":1764826860,\"file_size\":15578},{\"file_name\":\"49116061-1d6e-4c12-a372-4d71a22d576f\",\"file_created\":1764826860,\"file_modified\":1764826860,\"file_size\":5416},{\"file_name\":\"9bbfbbb3-9265-41e7-89ad-db13ddc7dd1a\",\"file_created\":1764826860,\"file_modified\":1764826860,\"file_size\":7031},{\"file_name\":\"a6bbde97-c895-4fee-a346-5c054e2b933d\",\"file_created\":1764826860,\"file_modified\":1764826860,\"file_size\":831},{\"file_name\":\"eac1b383-d838-4666-9177-452601d65896\",\"file_created"
		"\":1764826859,\"file_modified\":1764826859,\"file_size\":9244},{\"file_name\":\"f7ce9ec9-c13e-4ce7-ae4a-e01462ca3007\",\"file_created\":1764824591,\"file_modified\":1764824591,\"file_size\":9982}]}]},\"uuid\":{\"legacy.telemetry.client_id\":\"f6637294-d75f-4350-be24-43ca2fcded9d\",\"legacy.telemetry.profile_group_id\":\"f6637294-d75f-4350-be24-43ca2fcded9d\"},\"counter\":{\"glean.health.init_count\":14}}}", 
		LAST);

	web_url("canonical.html_5", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/success.txt?ipv4", "Referer=", ENDITEM, 
		LAST);

	web_url("canonical.html_6", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/success.txt?ipv4", "Referer=", ENDITEM, 
		LAST);

	web_reg_find("Text=Welcome to the Simple Travel Agency!", 
		LAST);

	lr_think_time(7);

	web_custom_request("clicks", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/clicks?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"042bad9d-35e8-4e61-bd75-684fd4b402d4\",\"iso_time_full\":\"2025-12-04T05:41:12.537Z\",\"local_time_full\":\"Thu Dec 04 2025 11:11:12 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"f6329826-b24a-41b1-ab73-63ebcd541823\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"8cee76a3-42d3-4edd-88f8-86c28db337c1\",\"tracker_loaded_at\":\"2025-12-04T05:41:02.951Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"7cbef018-3d6c-4564-9374-c2e801b4a458\"},\"page\":{\"title\":\"BlazeDemo\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":675,\"pixel_max\":675,\"ratio\":1,\"ratio_max\":1},\"time_on_page\":10,\"time_on_page_ms\":9586},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\":true,\""
		"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":675,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/\",\"info\":{}},\"referrer\":{\""
		"full\":\"\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T05:41:12.537Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\""
		"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]},\"element\":{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"h1\"},\"node_name\":\"H1\",\"tag_name\":\"H1\",\"text\":null,\"title\":null,\"type\":null,\"n_parents\":[{\"class\":\"container\",\"href\":null,\"id\":null,\""
		"name\":null,\"all_attrs\":{\"class\":\"container\",\"unique_selector\":\".jumbotron > .container\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":1},{\"class\":\"jumbotron\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"jumbotron\",\"unique_selector\":\".jumbotron\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":2},{\"class\":null,\"href\":null,\"id\":null,\"name\""
		":null,\"all_attrs\":{\"unique_selector\":\"body\"},\"node_name\":\"BODY\",\"tag_name\":\"BODY\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":3},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"lang\":\"en\",\"unique_selector\":\"html\"},\"node_name\":\"HTML\",\"tag_name\":\"HTML\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":4},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{},\"node_name\":\"#document\",\"text\":null,\""
		"title\":null,\"type\":null,\"nth_parent\":5}],\"selector\":\"body > div:eq(1) > div > h1\",\"text_content\":\"---REDACTED---\",\"cursor\":\"auto\",\"x_position\":55,\"y_position\":72}}", 
		LAST);

	lr_think_time(5);

	web_custom_request("clicks_2", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/clicks?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"ed2c7a46-dc7a-4bd8-9cc1-33be0e0301bd\",\"iso_time_full\":\"2025-12-04T05:41:18.248Z\",\"local_time_full\":\"Thu Dec 04 2025 11:11:18 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"f6329826-b24a-41b1-ab73-63ebcd541823\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"8cee76a3-42d3-4edd-88f8-86c28db337c1\",\"tracker_loaded_at\":\"2025-12-04T05:41:02.951Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"7cbef018-3d6c-4564-9374-c2e801b4a458\"},\"page\":{\"title\":\"BlazeDemo\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":675,\"pixel_max\":675,\"ratio\":1,\"ratio_max\":1},\"time_on_page\":15,\"time_on_page_ms\":15297},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\":true,\""
		"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":675,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/\",\"info\":{}},\"referrer\":{\""
		"full\":\"\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T05:41:18.248Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\""
		"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]},\"element\":{\"class\":\"form-inline\",\"href\":null,\"id\":null,\"name\":\"fromPort\",\"all_attrs\":{\"name\":\"fromPort\",\"class\":\"form-inline\",\"unique_selector\":\"form > :nth-child(1)\"},\"node_name\":\"SELECT\",\"tag_name\":\"SELECT\",\"text\":null,\"title"
		"\":null,\"type\":null,\"n_parents\":[{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"action\":\"reserve.php\",\"method\":\"post\",\"unique_selector\":\"form\"},\"node_name\":\"FORM\",\"tag_name\":\"FORM\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":1},{\"class\":\"container\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"container\",\"unique_selector\":\"body > :nth-child(3)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\""
		"title\":null,\"type\":null,\"nth_parent\":2},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"body\"},\"node_name\":\"BODY\",\"tag_name\":\"BODY\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":3},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"lang\":\"en\",\"unique_selector\":\"html\"},\"node_name\":\"HTML\",\"tag_name\":\"HTML\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":4},{\"class\":null,\"href\""
		":null,\"id\":null,\"name\":null,\"all_attrs\":{},\"node_name\":\"#document\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":5}],\"selector\":\"body > div:eq(2) > form > select:eq(0)\",\"text_content\":\"---REDACTED---\",\"cursor\":\"pointer\",\"x_position\":55,\"y_position\":242}}", 
		LAST);

	web_custom_request("clicks_3", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/clicks?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"23c80147-a8c3-486e-baab-c88594af0d06\",\"iso_time_full\":\"2025-12-04T05:41:19.462Z\",\"local_time_full\":\"Thu Dec 04 2025 11:11:19 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"f6329826-b24a-41b1-ab73-63ebcd541823\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"8cee76a3-42d3-4edd-88f8-86c28db337c1\",\"tracker_loaded_at\":\"2025-12-04T05:41:02.951Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"7cbef018-3d6c-4564-9374-c2e801b4a458\"},\"page\":{\"title\":\"BlazeDemo\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":675,\"pixel_max\":675,\"ratio\":1,\"ratio_max\":1},\"time_on_page\":17,\"time_on_page_ms\":16512},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\":true,\""
		"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":675,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/\",\"info\":{}},\"referrer\":{\""
		"full\":\"\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T05:41:19.463Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\""
		"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]},\"element\":{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"form > :nth-child(1) > :nth-child(1)\"},\"node_name\":\"OPTION\",\"tag_name\":\"OPTION\",\"text\":null,\"title\":null,\"type\":null,\"n_parents\":[{\"class\":\""
		"form-inline\",\"href\":null,\"id\":null,\"name\":\"fromPort\",\"all_attrs\":{\"name\":\"fromPort\",\"class\":\"form-inline\",\"unique_selector\":\"form > :nth-child(1)\"},\"node_name\":\"SELECT\",\"tag_name\":\"SELECT\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":1},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"action\":\"reserve.php\",\"method\":\"post\",\"unique_selector\":\"form\"},\"node_name\":\"FORM\",\"tag_name\":\"FORM\",\"text\":null,\"title\":null"
		",\"type\":null,\"nth_parent\":2},{\"class\":\"container\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"container\",\"unique_selector\":\"body > :nth-child(3)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":3},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"body\"},\"node_name\":\"BODY\",\"tag_name\":\"BODY\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":4},{\""
		"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"lang\":\"en\",\"unique_selector\":\"html\"},\"node_name\":\"HTML\",\"tag_name\":\"HTML\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":5},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{},\"node_name\":\"#document\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":6}],\"selector\":\"body > div:eq(2) > form > select:eq(0) > option:eq(0)\",\"text_content\":\"---REDACTED---\",\"cursor\":"
		"\"pointer\",\"x_position\":null,\"y_position\":null}}", 
		LAST);

	web_custom_request("clicks_4", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/clicks?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"aa5e505a-a05a-4a0e-b017-9a708ca1f7b0\",\"iso_time_full\":\"2025-12-04T05:41:20.703Z\",\"local_time_full\":\"Thu Dec 04 2025 11:11:20 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"f6329826-b24a-41b1-ab73-63ebcd541823\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"8cee76a3-42d3-4edd-88f8-86c28db337c1\",\"tracker_loaded_at\":\"2025-12-04T05:41:02.951Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"7cbef018-3d6c-4564-9374-c2e801b4a458\"},\"page\":{\"title\":\"BlazeDemo\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":675,\"pixel_max\":675,\"ratio\":1,\"ratio_max\":1},\"time_on_page\":18,\"time_on_page_ms\":17752},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\":true,\""
		"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":675,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/\",\"info\":{}},\"referrer\":{\""
		"full\":\"\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T05:41:20.703Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\""
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
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"7404c314-8998-4920-aeba-1b2063350e3d\",\"iso_time_full\":\"2025-12-04T05:41:22.094Z\",\"local_time_full\":\"Thu Dec 04 2025 11:11:22 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"f6329826-b24a-41b1-ab73-63ebcd541823\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"8cee76a3-42d3-4edd-88f8-86c28db337c1\",\"tracker_loaded_at\":\"2025-12-04T05:41:02.951Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"7cbef018-3d6c-4564-9374-c2e801b4a458\"},\"page\":{\"title\":\"BlazeDemo\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":675,\"pixel_max\":675,\"ratio\":1,\"ratio_max\":1},\"time_on_page\":19,\"time_on_page_ms\":19143},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\":true,\""
		"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":675,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/\",\"info\":{}},\"referrer\":{\""
		"full\":\"\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T05:41:22.094Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\""
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
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"8b8eab3e-e1ea-47e0-9064-427fd2895334\",\"iso_time_full\":\"2025-12-04T05:41:22.090Z\",\"local_time_full\":\"Thu Dec 04 2025 11:11:22 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"f6329826-b24a-41b1-ab73-63ebcd541823\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"8cee76a3-42d3-4edd-88f8-86c28db337c1\",\"tracker_loaded_at\":\"2025-12-04T05:41:02.951Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"7cbef018-3d6c-4564-9374-c2e801b4a458\"},\"page\":{\"title\":\"BlazeDemo\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":675,\"pixel_max\":675,\"ratio\":1,\"ratio_max\":1},\"time_on_page\":19,\"time_on_page_ms\":19139},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\":true,\""
		"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":675,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/\",\"info\":{}},\"referrer\":{\""
		"full\":\"\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T05:41:22.090Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\""
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
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"c52ebbfd-48d9-432c-a7fd-4f2bc7a3193a\",\"iso_time_full\":\"2025-12-04T05:41:23.485Z\",\"local_time_full\":\"Thu Dec 04 2025 11:11:23 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"f6329826-b24a-41b1-ab73-63ebcd541823\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"8cee76a3-42d3-4edd-88f8-86c28db337c1\",\"tracker_loaded_at\":\"2025-12-04T05:41:02.951Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"7cbef018-3d6c-4564-9374-c2e801b4a458\"},\"page\":{\"title\":\"BlazeDemo\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":675,\"pixel_max\":675,\"ratio\":1,\"ratio_max\":1},\"time_on_page\":21,\"time_on_page_ms\":20534},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\":true,\""
		"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":675,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/\",\"info\":{}},\"referrer\":{\""
		"full\":\"\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T05:41:23.485Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\""
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
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"6e193e6a-51e1-4a31-bb0a-591fb8efeca2\",\"iso_time_full\":\"2025-12-04T05:41:23.494Z\",\"local_time_full\":\"Thu Dec 04 2025 11:11:23 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"f6329826-b24a-41b1-ab73-63ebcd541823\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"8cee76a3-42d3-4edd-88f8-86c28db337c1\",\"tracker_loaded_at\":\"2025-12-04T05:41:02.951Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"7cbef018-3d6c-4564-9374-c2e801b4a458\"},\"page\":{\"title\":\"BlazeDemo\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":675,\"pixel_max\":675,\"ratio\":1,\"ratio_max\":1},\"time_on_page\":21,\"time_on_page_ms\":20543},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\":true,\""
		"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":675,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/\",\"info\":{}},\"referrer\":{\""
		"full\":\"\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T05:41:23.494Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\""
		"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]}}", 
		LAST);

	web_custom_request("form_submissions", 
		"URL=https://blazemeter.datapipe.prodperfect.com/v1/3.0/projects/lXviifSA1NskA4wsG9N6WoWg/events/form_submissions?api_key=8RWMCGFX4X0IRY1GHWDM3HM5WDSJF9LP62BSDULOL3XK7WAIFGDB7EU526O1A0UPLH1S8SJP320LUXJKCHLJX1822GU1KFE80CNW6PXVZ83IOO6LJ731EN164IFVUFMC8DOGYP2MXHN47WGVB192F2PTQRQXCF95OJWAKGOH9S69DZAI5OPJW8QSPDE6LQQ9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"3f2fef00-ae9f-4573-82b6-e49ac8e3f109\",\"iso_time_full\":\"2025-12-04T05:41:23.491Z\",\"local_time_full\":\"Thu Dec 04 2025 11:11:23 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"f6329826-b24a-41b1-ab73-63ebcd541823\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"8cee76a3-42d3-4edd-88f8-86c28db337c1\",\"tracker_loaded_at\":\"2025-12-04T05:41:02.951Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"7cbef018-3d6c-4564-9374-c2e801b4a458\"},\"page\":{\"title\":\"BlazeDemo\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":675,\"pixel_max\":675,\"ratio\":1,\"ratio_max\":1},\"time_on_page\":21,\"time_on_page_ms\":20540},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\":true,\""
		"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":675,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/\",\"info\":{}},\"referrer\":{\""
		"full\":\"\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T05:41:23.491Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\""
		"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]},\"form\":{\"action\":\"https://blazedemo.com/reserve.php\",\"fields\":{\"fromPort\":\"---REDACTED---\",\"toPort\":\"---REDACTED---\"},\"method\":\"post\"},\"element\":{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"action\":\"reserve.php\",\""
		"method\":\"post\",\"unique_selector\":\"form\"},\"node_name\":\"FORM\",\"tag_name\":\"FORM\",\"text\":null,\"title\":null,\"type\":null,\"action\":\"https://blazedemo.com/reserve.php\",\"method\":\"post\",\"n_parents\":[{\"class\":\"container\",\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"class\":\"container\",\"unique_selector\":\"body > :nth-child(3)\"},\"node_name\":\"DIV\",\"tag_name\":\"DIV\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":1},{\"class\":null,\"href\""
		":null,\"id\":null,\"name\":null,\"all_attrs\":{\"unique_selector\":\"body\"},\"node_name\":\"BODY\",\"tag_name\":\"BODY\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":2},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{\"lang\":\"en\",\"unique_selector\":\"html\"},\"node_name\":\"HTML\",\"tag_name\":\"HTML\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":3},{\"class\":null,\"href\":null,\"id\":null,\"name\":null,\"all_attrs\":{},\"node_name\":\""
		"#document\",\"text\":null,\"title\":null,\"type\":null,\"nth_parent\":4}],\"selector\":\"body > div:eq(2) > form\",\"text_content\":\"---REDACTED---\",\"cursor\":\"auto\",\"x_position\":55,\"y_position\":242}}", 
		LAST);

	web_add_cookie("prodperfect_session={%22session_uuid%22:%22f6329826-b24a-41b1-ab73-63ebcd541823%22}; DOMAIN=blazedemo.com");

	web_add_cookie("keen={%22uuid%22:%227cbef018-3d6c-4564-9374-c2e801b4a458%22%2C%22initialReferrer%22:null}; DOMAIN=blazedemo.com");

	web_submit_data("reserve.php", 
		"Action=https://blazedemo.com/reserve.php", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t37.inf", 
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
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"visitor\":{\"user_id\":null},\"event_uuid\":\"5bee6bdc-12f2-45f9-814f-99b33f6adca0\",\"iso_time_full\":\"2025-12-04T05:41:24.423Z\",\"local_time_full\":\"Thu Dec 04 2025 11:11:24 GMT+0530 (India Standard Time)\",\"session\":{\"session_uuid\":\"f6329826-b24a-41b1-ab73-63ebcd541823\"},\"tracked_by\":\"prodperfect-keen-tracking-2.0.23\",\"tracker_load_uuid\":\"c2f2e399-e84b-463f-9d9b-d778dff64dbd\",\"tracker_loaded_at\":\"2025-12-04T05:41:24.420Z\",\"prodperfect_test_data\":null,\"user\":{\""
		"uuid\":\"7cbef018-3d6c-4564-9374-c2e801b4a458\"},\"page\":{\"title\":\"BlazeDemo - reserve\",\"description\":\"BlazeMeter demo app\",\"scroll_state\":{\"pixel\":675,\"pixel_max\":675,\"ratio\":1,\"ratio_max\":1},\"time_on_page\":0,\"time_on_page_ms\":3},\"ip_address\":\"${keen.ip}\",\"geo\":{},\"user_agent\":\"${keen.user_agent}\",\"tech\":{\"profile\":{\"cookies\":true,\"codeName\":\"Mozilla\",\"description\":\"BlazeMeter demo app\",\"language\":\"en-US\",\"name\":\"Netscape\",\"online\":true,\""
		"platform\":\"Win32\",\"useragent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:145.0) Gecko/20100101 Firefox/145.0\",\"version\":\"5.0 (Windows)\",\"screen\":{\"height\":800,\"width\":1280,\"colorDepth\":24,\"pixelDepth\":24,\"availHeight\":752,\"availWidth\":1280,\"orientation\":{\"angle\":0,\"type\":\"landscape\"}},\"window\":{\"height\":675,\"width\":1280,\"scrollHeight\":675,\"ratio\":{\"height\":0.9,\"width\":1}}}},\"url\":{\"full\":\"https://blazedemo.com/reserve.php\",\"info\":{}},\""
		"referrer\":{\"initial\":\"https://blazedemo.com/\",\"full\":\"https://blazedemo.com/\",\"info\":{}},\"time\":{\"local\":{},\"utc\":{}},\"keen\":{\"timestamp\":\"2025-12-04T05:41:24.423Z\",\"addons\":[{\"name\":\"keen:ua_parser\",\"input\":{\"ua_string\":\"user_agent\"},\"output\":\"tech\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"url.full\"},\"output\":\"url.info\"},{\"name\":\"keen:url_parser\",\"input\":{\"url\":\"referrer.full\"},\"output\":\"referrer.info\"},{\"name\":\"keen"
		":date_time_parser\",\"input\":{\"date_time\":\"keen.timestamp\"},\"output\":\"time.utc\"},{\"name\":\"keen:date_time_parser\",\"input\":{\"date_time\":\"local_time_full\"},\"output\":\"time.local\"},{\"name\":\"keen:ip_to_geo\",\"input\":{\"ip\":\"ip_address\",\"remove_ip_property\":false},\"output\":\"geo\"}]}}", 
		LAST);

	return 0;
}