/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U
#define ENCODER_MAP_KEY_DELAY 10
#define ENCODER_A_PINS { GP2 }
#define ENCODER_B_PINS { GP3 }
#define ENCODER_RESOLUTION 4

#define LAYOUT_exnumpad( \
	               K03, K04, K05, K06,      \
	                                        \
	               K23, K24, K25, K26,      \
	               K33, K34, K35, K36, K37, \
	K40, K41,      K43, K44, K45,      K47, \
	K50, K51,      K53, K54, K55, K56, K57, \
	K60,           K63,      K65,      K67  \
) { \
	{ KC_NO, KC_NO, KC_NO, K03,   K04,   K05,   K06,   KC_NO }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ KC_NO, KC_NO, KC_NO, K23,   K24,   K25,   K26,   KC_NO }, \
	{ KC_NO, KC_NO, KC_NO, K33,   K34,   K35,   K36,   K37 }, \
	{ K40,   K41,   KC_NO, K43,   K44,   K45,   KC_NO, K47 }, \
	{ K50,   K51,   KC_NO, K53,   K54,   K55,   K56,   K57 }, \
	{ K60,   KC_NO, KC_NO, K63,   KC_NO, K65,   KC_NO, K67 }  \
}

#define XXX NO_LED(\
{ XXX, XXX, XXX,   0,   1,   2,   3, XXX },\
{ XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX },\
{ XXX, XXX, XXX,   4,   5,   6,   7, XXX },\
{ XXX, XXX, XXX,   8,   9,  10,  11,  12 },\
{  13,  14, XXX,  15,  16,  17, XXX,  18 },\
{  19,  20, XXX,  21,  22,  23,  24,  25 },\
{  26, XXX, XXX,  27, XXX,  28, XXX,  29 },\
)
/* LED coordinates output
{ 80,0  }, {112,0  }, {144,0  }, {176,0  }, { 80,17 }, {112,17 }, {144,17 }, {176,17 }, { 80,29 }, {112,29 },
{144,29 }, {176,35 }, {224,29 }, {  0,41 }, { 32,41 }, { 80,41 }, {112,41 }, {144,41 }, {224,41 }, {  0,52 },
{ 32,58 }, { 80,52 }, {112,52 }, {144,52 }, {176,58 }, {224,52 }, {  0,64 }, { 96,64 }, {144,64 }, {224,64 },

*/
