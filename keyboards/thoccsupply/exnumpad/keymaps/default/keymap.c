/* SPDX-License-Identifier: GPL-2.0-or-later */

#include QMK_KEYBOARD_H

enum layer_names {
    _BASE,
    _FN
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//base layer
 [_BASE] = LAYOUT_exnumpad(
                        KC_ESC,  KC_F2,   KC_F4,   KC_PSCR,
                        KC_NUM,  KC_PSLS, KC_PAST, KC_PMNS,
                        KC_P7,   KC_P8,   KC_P9,   KC_PPLS,   KC_INS,
  KC_HOME, KC_END,      KC_P4,   KC_P5,   KC_P6,              KC_DEL,
  KC_PGUP, KC_PENT,     KC_P1,   KC_P2,   KC_P3,   KC_PENT,   KC_COPY,
  KC_TAB,                   KC_P0,        KC_PDOT,            KC_PAST
 ),
 [_FN] = LAYOUT_exnumpad(
                        _______, _______, _______, _______,
                        _______, _______, _______, _______,
                        _______, _______, _______, _______, _______,
  _______, _______,     _______, _______, _______,          _______,
  _______, _______,     _______, _______, _______, _______, _______,
  _______,                  _______,      _______,          _______
    ),
 };
// clang-format on

/* `ENCODER_MAP_ENABLE = yes` must be added to the rules.mk at the KEYMAP level. See QMK docs. */
/* Remove the following code if you do not enable it in your keymap (e.g. default keymap). */
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
	[0] = { ENCODER_CCW_CW(KC_VOLU, KC_VOLD) },
	[1] = { ENCODER_CCW_CW(KC_PGUP, KC_PGDN) },
	[2] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
	[3] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
};
#endif
