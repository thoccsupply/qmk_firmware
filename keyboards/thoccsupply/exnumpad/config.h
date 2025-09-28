/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#include "_pin_defs.h"
#include "rgb_matrix.h"
#include "rgb_matrix_types.h"
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U
#define ENCODER_A_PINS { GP2 }
#define ENCODER_B_PINS { GP3 }
#define ENCODER_RESOLUTION 4
#define ENCODER_MAP_KEY_DELAY 10

#define LAYOUT_default( \
	               K03, K04, K05, K06,      \
	                                        \
	               K13, K14, K15, K16,      \
	     K21,      K23, K24, K25, K26, K27, \
	K30, K31,      K33, K34, K35, K36, K37, \
	K40, K41,      K43, K44, K45,      K47, \
	K50, K51,      K53, K54, K55, K56, K57  \
) { \
	{ KC_NO, KC_NO, KC_NO, K03,   K04,   K05,   K06,   KC_NO }, \
	{ KC_NO, KC11,  KC_NO, K13,   K14,   K15,   K16,   KC_NO }, \
	{ KC_NO, KC_NO, KC_NO, K23,   K24,   K25,   K26,   K27 }, \
	{ K30,   K31,   KC_NO, K33,   K34,   K35,   KC_NO, K37 }, \
	{ K40,   K41,   KC_NO, K43,   K44,   K45,   K46,   K47 }, \
	{ K50,   KC_NO, KC_NO, K53,   KC_NO, K55,   KC_NO, K57 }  \
}

// Define the RGB matrix configuration
led_config_t g_led_config={{
    //key matrix to LED index
    { NO_LED, NO_LED, NO_LED,   0,    1,      2,    3, NO_LED },
    { NO_LED, NO_LED, NO_LED,   4,    5,      6,    7, NO_LED },
    { NO_LED, NO_LED, NO_LED,   8,    9,     10,   11,     12 },
    {  13,      14,   NO_LED,  15,   16,     17,  NO_LED,  18 },
    {  19,      20,   NO_LED,  21,   22,     23,   24,     25 },
    {  26,    NO_LED, NO_LED,  27, NO_LED,   28,  NO_LED,  29 }

    },{
        // LED index to physical position
    { 80,0  }, {112,0  }, {144,0  }, {176,0  }, { 80,17 }, {112,17 }, {144,17 }, {176,17 }, { 80,29 }, {112,29 },
    {144,29 }, {176,35 }, {224,29 }, {  0,41 }, { 32,41 }, { 80,41 }, {112,41 }, {144,41 }, {224,41 }, {  0,52 },
    { 32,58 }, { 80,52 }, {112,52 }, {144,52 }, {176,58 }, {224,52 }, {  0,64 }, { 96,64 }, {144,64 }, {224,64 }
    }
};
