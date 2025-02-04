// Copyright 2021 https://github.com/fightforlife
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

// RGB_MATRIX config
#define LED_MATRIX_ROW_CHANNELS 3 //(RBG)
#define LED_MATRIX_ROWS MATRIX_ROWS
#define LED_MATRIX_ROWS_HW (LED_MATRIX_ROWS * LED_MATRIX_ROW_CHANNELS)
#define LED_MATRIX_ROW_PINS { A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14 }  //RBG Order needed, original Womier K66 v1

#define LED_MATRIX_COLS MATRIX_COLS
#define LED_MATRIX_COL_PINS MATRIX_COL_PINS

#define UNDERGLOW_I2C_ADR 0xE8  //AD is connected to ground (1110100(0)=0xE8)
#define UNDERGLOW_LED_TOTAL_HW (UNDERGLOW_LED_TOTAL * LED_MATRIX_ROW_CHANNELS)

#define MATRIX_LED_TOTAL 66
#define UNDERGLOW_LED_TOTAL 43
#define DRIVER_LED_TOTAL (MATRIX_LED_TOTAL + UNDERGLOW_LED_TOTAL)


/* LED matrix Hackeroo for RAM. Uncomment to enable PWM Channel ROWS */
#define ACTIVATE_PWM_CHAN_0 //A0
#define ACTIVATE_PWM_CHAN_1 //A1
#define ACTIVATE_PWM_CHAN_2 //A2
#define ACTIVATE_PWM_CHAN_3 //A3
#define ACTIVATE_PWM_CHAN_4 //A4
#define ACTIVATE_PWM_CHAN_5 //A5
#define ACTIVATE_PWM_CHAN_6 //A6
#define ACTIVATE_PWM_CHAN_7 //A7
#define ACTIVATE_PWM_CHAN_8 //A8
#define ACTIVATE_PWM_CHAN_9 //A9
#define ACTIVATE_PWM_CHAN_10 //A10
#define ACTIVATE_PWM_CHAN_11 //A11
#define ACTIVATE_PWM_CHAN_12 //A12
#define ACTIVATE_PWM_CHAN_13 //A13
#define ACTIVATE_PWM_CHAN_14 //A14
//#define ACTIVATE_PWM_CHAN_15 //A15
//#define ACTIVATE_PWM_CHAN_16 //D0
//#define ACTIVATE_PWM_CHAN_17 //D1
//#define ACTIVATE_PWM_CHAN_18 //D2
//#define ACTIVATE_PWM_CHAN_19 //D3
//#define ACTIVATE_PWM_CHAN_21 //D5
//#define ACTIVATE_PWM_CHAN_22 //D8
