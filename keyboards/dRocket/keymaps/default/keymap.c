/* Copyright 2023
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

enum layers {
  _MAIN,
  _LAYER1,
  _LAYER2
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* MAIN
 * .-------.
 * |  .    |-------.-------.-------.-------.
 * |-------|   7   |   8   |   9   |   0   |
 * |  6    |-------+-------+-------+-------+
 * |-------|   2   |   3   |   4   |   5   |
 * |  1    |-------+-------+-------+-------+
 * |-------|
 *
 */

[_MAIN] = LAYOUT(
    MO(_LAYER1),
              KC_KP_7, KC_KP_8, KC_KP_9, KC_KP_0,
    KC_KP_6,
              KC_KP_2, KC_KP_3, KC_KP_4, KC_KP_5,
    KC_KP_1
),

[_LAYER1] = LAYOUT(
    _______,
              KC_KP_PLUS, KC_KP_MINUS, KC_KP_ASTERISK, KC_KP_SLASH,
    MO(_LAYER2),
              KC_KP_EQUAL, _______, _______, KC_KP_ENTER,
    KC_KP_DOT
),

[_LAYER2] = LAYOUT(
    _______,
              _______, _______, _______, _______,
    _______,
              _______, RGB_MODE_REVERSE, RGB_TOG, RGB_MODE_FORWARD,
    QK_BOOT
)

};

