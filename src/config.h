/*
 * NEMO Tool Display - WiFi and MQTT configuration
 * Edit this file or override via platformio.ini build_flags.
 */

#ifndef CONFIG_H
#define CONFIG_H

/* -----------------------------------------------------------------------------
 * Macro fallbacks (override with -D in platformio.ini build_flags if needed)
 * ----------------------------------------------------------------------------- */

#ifndef WIFI_SSID
#define WIFI_SSID "Zucotti Manicotti"
#endif
#ifndef WIFI_PASSWORD
#define WIFI_PASSWORD "100BoiledEggs"
#endif

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

#ifndef TARGET_TOOL_NAME
#define TARGET_TOOL_NAME "woollam"
#endif

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

#ifndef WIFI_CONNECT_TIMEOUT
#define WIFI_CONNECT_TIMEOUT 10000
#endif
#ifndef MQTT_RECONNECT_INTERVAL
#define MQTT_RECONNECT_INTERVAL 5000
#endif

#ifndef STATUS_ACTIVE
#define STATUS_ACTIVE "active"
#endif
#ifndef STATUS_IDLE
#define STATUS_IDLE "idle"
#endif

/* -----------------------------------------------------------------------------
 * WiFi and MQTT variables (used by main.cpp)
 * ----------------------------------------------------------------------------- */

static const char* ssid = WIFI_SSID;
static const char* password = WIFI_PASSWORD;

static const char* mqtt_broker = MQTT_BROKER;
static const int mqtt_port = MQTT_PORT_ESP32;
static const char* mqtt_client_id = MQTT_CLIENT_ID;

#endif /* CONFIG_H */
