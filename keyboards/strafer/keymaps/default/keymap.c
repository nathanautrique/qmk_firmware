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
  _FUNC,
  _MULT,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* MAIN
 * .-------.
 * |  ESC  |-------.-------.-------.-------.-------.
 * |-------|   1   |   2   |   3   |   4   |   5   |
 * |  CAPS |-------+-------+-------+-------+-------|
 * |-------|   Q   |   W   |   E   |   R   |   T   |
 * |  FN   |-------+-------+-------+-------+-------|
 * |-------|   A   |   S   |   D   |   F   |   G   |
 * |  SHFT |-------+-------+-------+-------+----------.
 * |-------|   Z   |   X   |   C   |::|   V   |   B   |
 * |  CTRL |-------'-------'------------------------------.
 * '-------'                      |   N   | SPACE |   M   |
 *                                '-----------------------'
 *
 */

[_MAIN] = LAYOUT(
    KC_ESC,
              KC_1, KC_2, KC_3, KC_4, KC_5,
    KC_TAB,
              KC_Q, KC_W, KC_E, KC_R, KC_T,
    MO(_FUNC),
              KC_A, KC_S, KC_D, KC_F, KC_G,
    KC_LSFT,
              KC_Z, KC_X, KC_C,      KC_V, KC_B
    KC_LCTL,
                                 KC_N, KC_SPC, KC_M
),

//---------------------------------------------------------------------

/* FUNC
 * .-------.
 * |  GUI  |-------.-------.-------.-------.-------.
 * |-------|   6   |   7   |   8   |   9   |   0   |
 * |  TAB  |-------+-------+-------+-------+-------|
 * |-------|   Y   |   U   |   I   |   O   |   P   |
 * |       |-------+-------+-------+-------+-------|
 * |-------|   H   |   J   |   K   |   L   |   ;   |
 * |  MULT |-------+-------+-------+-------+----------.
 * |-------|   ,   |   .   |   /   |::|   -   |   =   |
 * |  CTRL |-------'-------'-------------------------------.
 * '-------'                      |   ALT  | SPACE |  BSPC |
 *                                '------------------------'
 *
 */

[_FUNC] = LAYOUT(
  KC_LGUI,
              KC_6,    KC_7,    KC_8,   KC_9,   KC_0,
  KC_TAB,
              KC_Y,    KC_U,    KC_I,   KC_O,   KC_P,
  _______,
              KC_H,    KC_J,    KC_K,   KC_L,   KC_SCLN,
  MO(_MULT),
              KC_COMM, KC_DOT,  KC_SLSH,     KC_MINS,  KC_EQL,
  KC_LCTL,
                                        KC_LALT,  KC_ENT,  KC_BSPC

),




//---------------------------------------------------------------------

/* FUNC
 * .-------.
 * |   `   |-------.-------.-------.-------.-------.
 * |-------|   F1  |   F2  |   F3  |   F4  |   F5  |
 * |  TAB  |-------+-------+-------+-------+-------|
 * |-------|       |       |       | VAL-D | VAL-I |
 * |       |-------+-------+-------+-------+-------|
 * |-------| PREV  |  PLAY | NEXT  | SAT-D | SAT-I |
 * | MULT  |-------+-------+-------+-------+----------.
 * |-------| VOL-D |  MUTE | VOL-UP|::| HUE-D | HUE-I |
 * | RESET |-------'-------'-------------------------------.
 * '-------'                      | MODE-R | TOGG | MODE-F |
 *                                '------------------------'
 *
 */

[_MULT] = LAYOUT(
  KC_GRV,
              KC_F1,    KC_F2,  KC_F3,    KC_F4, KC_F5,
  _______,
              _______,  _______, _______, RGB_VAD, RGB_VAI,
  _______,
              KC_MPRV, KC_MPLY,  KC_MNXT,  RGB_SAD, RGB_SAI,
  _______,
             KC_VOLD,  KC_MUTE,  KC_VOLU,        RGB_HUD, RGB_HUI,
QK_BOOT
                                    RGB_MODE_REVERSE, RGB_TOG, RGB_MODE_FORWARD

)
};

