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
  _LAYER2,
  _LAYER3,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* MAIN
 * .-------.
 * |  MOD  |-------.-------.-------.-------.
 * |-------|  F19  |  F20  |  F21  |  F22  |
 * |  F18  |-------+-------+-------|-------|
 * |-------|  F14  |  F15  |  F16  |  F17  |
 * |  F13  |-------'-------'-------'-------'
 * '-------'
 *
 */

[_MAIN] = LAYOUT(
    MO(_LAYER1),
              KC_F19, KC_F20, KC_F21, KC_F22,
    KC_F18,
              KC_F14, KC_F15, KC_F16, KC_F17,
    KC_F13
),

[_LAYER1] = LAYOUT(
    _______,
              KC_PRINT_SCREEN, KC_MEDIA_STOP, KC_CALCULATOR, KC_VOLU,
    MO(_LAYER2),
              KC_MEDIA_PREV_TRACK, KC_MEDIA_PLAY_PAUSE, KC_MEDIA_NEXT_TRACK, KC_VOLD,
    KC_AUDIO_MUTE
),

[_LAYER2] = LAYOUT(
    _______,
              _______, _______, _______, QK_BOOT,
    _______,
              RGB_MODE_REVERSE, RGB_TOG, RGB_MODE_FORWARD, _______,
    MO(_LAYER3)
),

[_LAYER3] = LAYOUT(
    _______,
              RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI,
    _______,
              RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD,
    _______,
),
}
;

