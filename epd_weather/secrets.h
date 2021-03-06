#pragma once

// secrets.h
// Define your WIFI and OpenWeatherMap API key and location in this file

#define WIFI_SSID "your_ssid"
#define WIFI_PASSWORD "your_wifi_password"

#define OWM_KEY "MY_OPENWEATHER_API_KEY"
#define OWM_LOCATION "Austin,US"
//example
//#define OWM_LOCATION "New York,US"

// update the weather at this interval, in minutes
#define UPDATE_INTERVAL 59

// Set to true to show temperatures in Celsius, false for Fahrenheit
#define OWM_METRIC false

// temperature will display in red at or above this temperature
// set to a high number (i.e. >200) to not show temperatures in red
#define METRIC_HOT  32
#define ENGLISH_HOT  89

/*
Arabic - ar, Bulgarian - bg, Catalan - ca, Czech - cz, German - de, Greek - el,
English - en, Persian (Farsi) - fa, Finnish - fi, French - fr, Galician - gl,
Croatian - hr, Hungarian - hu, Italian - it, Japanese - ja, Korean - kr,
Latvian - la, Lithuanian - lt, Macedonian - mk, Dutch - nl, Polish - pl,
Portuguese - pt, Romanian - ro, Russian - ru, Swedish - se, Slovak - sk,
Slovenian - sl, Spanish - es, Turkish - tr, Ukrainian - ua, Vietnamese - vi,
Chinese Simplified - zh_cn, Chinese Traditional - zh_tw.
*/
#define OWM_LANGUAGE "en"
