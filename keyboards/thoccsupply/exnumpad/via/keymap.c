// Copyright 2025 THOCC SUPPLY (@thoccsupply)
/* SPDX-License-Identifier: GPL-2.0-or-later */
#include QMK_KEYBOARD_H
#include config.h
#include <stdint.h>

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Layer 0
    * ,-------------------------------------------------.
    * |       |      |  ESC |  F2  |  F4  | PSCR |      |
    * |-------+------+------+------+------|------|------|
    * |       |      | NUM  |  /   |  *   |  -   |      |
    * |----ENCODER---+------+------+------|------|------|
    * |       |      |  7   |  8   |  9   |      | INS  |
    * |-------+------+------+------+------| PLUS |------|
    * | HOME  | END  |  4   |  5   |  6   |      | DEL  |
    * |-------+------+------+------+------|------|------|
    * | PGUP  |      |  1   |  2   |  3   |      |COPY  |
    * |-------+ ENT  +------+------+------| ENT  |------|
    * | PGDN  |      |      0      |  .   |      |PASTE |
    * `-------------------------------------------------'
    *
    * Layer 1
    * ,-----------------------------------.
    * |      |      |      |      |      |
    * |-------+------+------+------+------|
    * |      |      |      |      |      |
    * |-------+------+------+------+------|
    * |      |      |      |      |      |
    * |-------+------+------+------+------|
    * |      |      |      |      |      |
    * |-------+------+------+------+------|
    * |      |      |      |      |      |
    * |-------+------+------+------+------|
    * |      	 	 	 	 	 	 	|
    * `-----------------------------------'
    */

 [0] = LAYOUT_default(
                        KC_ESC,  KC_F2,   KC_F4,   KC_PSCR,
                        KC_NUM,  KC_PSLS, KC_PAST, KC_PMNS,
                        KC_P7,   KC_P8,   KC_P9,   KC_PPLS,   KC_INS,
  KC_HOME, KC_END,      KC_P4,   KC_P5,   KC_P6,              KC_DEL,
  KC_PGUP, KC_PENT,     KC_P1,   KC_P2,   KC_P3,   KC_PENT,   KC_COPY,
  KC_PGDN,                   KC_P0,        KC_PDOT,            KC_PAST
 ),
 [1] = LAYOUT_default(
                        _______, _______, _______, _______,
                        _______, _______, _______, _______,
                        _______, _______, _______, _______, _______,
  _______, _______,     _______, _______, _______,          _______,
  _______, _______,     _______, _______, _______, _______, _______,
  _______,                  _______,      _______,          _______
    ),
 };
// clang-format on

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
	[0] = { ENCODER_CCW_CW(KC_VOLU, KC_VOLD) },
	[1] = { ENCODER_CCW_CW(KC_PGUP, KC_PGDN) },
	[2] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
	[3] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
};
#endif
