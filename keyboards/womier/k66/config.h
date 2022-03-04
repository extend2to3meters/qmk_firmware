// Copyright 2021 https://github.com/fightforlife
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"


/* USB Device descriptor parameter HID\VID
*/
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x7698
#define DEVICE_VER      0x0001

#define MANUFACTURER    Womier
#define PRODUCT         K66
#define DESCRIPTION     K66 v1 Keyboard

#define MATRIX_ROWS 5
#define MATRIX_COLS 14
#define DIODE_DIRECTION ROW2COL
#define MATRIX_ROW_PINS {B1, B2, B3, B4, B5}
#define MATRIX_COL_PINS {D1, D2, D3, D4, D5, D6, D7, D8, C3, C4, C5, C6, C7, C8}


/* 
 * Feature
 */
#define USB_POLLING_INTERVAL_MS 1           /* 1000 Hz */
#define FORCE_NKRO                          /* default NRKO enabled */
#define DEBOUNCE 1                          /* Debounce time in ms */
#define OPENRGB_DIRECT_MODE_UNBUFFERED


//RGB Settings
#define RGB_DISABLE_WHEN_USB_SUSPENDED /* rgb off when power off / suspend */
#define RGB_MATRIX_LED_PROCESS_LIMIT 1 // 1 for temporary fix for flickering LED indicators (like Capslock or layer) (reduces scan rate to 200Hz)
 
/* 
 * Optimization
 */
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
#define NO_ACTION_TAPPING
#define NO_ACTION_ONESHOT
#define NO_ACTION_LAYER
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE
#define DISABLE_LEADER
//#define LAYER_STATE_8BIT
//#define DYNAMIC_KEYMAP_LAYER_COUNT 4
//#define DYNAMIC_KEYMAP_EEPROM_MAX_ADDR 1200
#define NO_DEBUG 1
#define NO_PRINT 1

#include "config_led.h"
