/*
 * NEMO Tool Display - Configuration
 * Single source of truth: edit this file only. Not overridden by build flags.
 */

#ifndef CONFIG_H
#define CONFIG_H

/* -----------------------------------------------------------------------------
 * WiFi
 * ----------------------------------------------------------------------------- */

#ifndef WIFI_SSID
#define WIFI_SSID "Zucotti Manicotti"
#endif
#ifndef WIFI_PASSWORD
#define WIFI_PASSWORD "100BoiledEggs"
#endif
#ifndef WIFI_CONNECT_TIMEOUT
#define WIFI_CONNECT_TIMEOUT 10000
#endif

/* -----------------------------------------------------------------------------
 * MQTT
 * ----------------------------------------------------------------------------- */

#ifndef MQTT_BROKER
#define MQTT_BROKER "localhost"
#endif
#ifndef MQTT_PORT_ESP32
#define MQTT_PORT_ESP32 1883
#endif
#ifndef MQTT_CLIENT_ID
#define MQTT_CLIENT_ID "nemo_display_001"
#endif
#ifndef MQTT_TOPIC_PREFIX
#define MQTT_TOPIC_PREFIX "nemo/esp32"
#endif
#ifndef MQTT_USERNAME
#define MQTT_USERNAME "admin"
#endif
#ifndef MQTT_PASSWORD
#define MQTT_PASSWORD "admin"
#endif
#define MQTT_RECONNECT_INTERVAL 5000
#endif
#ifndef MQTT_MAX_RETRIES
#define MQTT_MAX_RETRIES 10
#endif

/* -----------------------------------------------------------------------------
 * Tool
 * ----------------------------------------------------------------------------- */

#ifndef TARGET_TOOL_ID
#define TARGET_TOOL_ID 1
#endif
#ifndef TARGET_TOOL_NAME
#define TARGET_TOOL_NAME "woollam"
#endif

/* -----------------------------------------------------------------------------
 * Display
 * ----------------------------------------------------------------------------- */

#ifndef DISPLAY_WIDTH
#define DISPLAY_WIDTH 480
#endif
#ifndef DISPLAY_HEIGHT
#define DISPLAY_HEIGHT 320
#endif
#ifndef DISPLAY_ROTATION
#define DISPLAY_ROTATION 1
#endif
#ifndef DISPLAY_UPDATE_INTERVAL
#define DISPLAY_UPDATE_INTERVAL 1000
#endif

/* -----------------------------------------------------------------------------
 * Variables for main.cpp (derived from macros above)
 * ----------------------------------------------------------------------------- */

static const char* ssid = WIFI_SSID;
static const char* password = WIFI_PASSWORD;
static const char* mqtt_broker = MQTT_BROKER;
static const int mqtt_port = MQTT_PORT_ESP32;
static const char* mqtt_client_id = MQTT_CLIENT_ID;
static const char* mqtt_username = MQTT_USERNAME;
static const char* mqtt_password = MQTT_PASSWORD;

#endif /* CONFIG_H */
