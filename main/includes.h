/*
 * includes.h
 *
 *  Created on: May 13, 2024
 *      Author: MPJ
 */

#ifndef MAIN_INCLUDES_H_
#define MAIN_INCLUDES_H_

#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <list>
#include <deque>
#include <algorithm>
#include <mutex>
#include <sstream>
#include <iomanip>
#include <cstdint>
#include <regex>

#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/time.h>
#include <time.h>
#include <string.h>
#include <functional>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/queue.h"
#include "freertos/event_groups.h"
#include "freertos/semphr.h"

#include "esp_system.h"
#include "esp_bt.h"

#include "esp_gap_ble_api.h"
#include "esp_gatts_api.h"
#include "esp_bt_defs.h"
#include "esp_bt_main.h"
#include "esp_gatt_common_api.h"
#include "esp_task_wdt.h"
#include "esp_mac.h"

#include "esp_event.h"

#include "nvs_flash.h"
#include "nvs.h"
#include "esp_log.h"

#include "cJSON.h"

/*****USER DEFINED HEADERS*******/
#include "BLEManager.h"


#endif /* MAIN_INCLUDES_H_ */
