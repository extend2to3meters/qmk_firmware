// Copyright 2021 https://github.com/fightforlife
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"
#include <stdint.h>
#include <stdbool.h>


#define LAYOUT( \
	K000, K001,   K002,   K003,   K004,   K005,   K006,   K007,   K008,   K009,   K010,  K011, K012, K013,    K213, \
	K100, K101,   K102,   K103,   K104,   K105,   K106,   K107,   K108,   K109,   K110,  K111, K112, K113,    K313, \
	K200, K201,   K202,   K203,   K204,   K205,   K206,   K207,   K208,   K209,   K210, K211,     K212, \
	K300, K301,   K302,   K303,   K304,   K305,   K306,   K307,   K308,   K309,   K310,  K311,     K312, \
	K400, K401,   K402,          K405,                       K408, K409, K410,      K411, K412, K413 \
) { \
	{ K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012, K013 }, \
	{ K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113 }, \
	{ K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212, K213 }, \
	{ K300, K301, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311, K312, K313 }, \
	{ K400, K401, K402, KC_NO, KC_NO, K405, KC_NO, KC_NO, K408, K409, K410, K411, K412, K413 }, \
}

void init(void);
void set_color(int index, uint8_t r, uint8_t g, uint8_t b);
void set_color_all(uint8_t r, uint8_t g, uint8_t b);
void matrix_scan_keys(matrix_row_t raw_matrix[], uint8_t current);
void init_underglow(uint8_t devid);
void set_i2c_color_direct(uint8_t index, uint8_t r, uint8_t g, uint8_t b);
