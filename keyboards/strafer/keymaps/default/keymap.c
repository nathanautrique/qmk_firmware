/* Copyright 2022
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
  _LOWER,
  _RESET,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Main
 * .------.
 * |  ESC |------.------.------.------.------.
 * |------|   1  |   2  |   3  |   4  |   5  |
 * | CAPS |------+------+------+------+------|            
 * |------|   Q  |   W  |   E  |   R  |   T  |       
 * |  TAB |------+------+------+------+------|
 * |------|   A  |   S  |   D  |   F  |   G  |
 * | SHFT |------+------+------+------+---------.
 * |------|   Z  |   X  |   C  |::|   M  |   I  |             
 * | CTRL |------'------'------|--------------------.
 * '------'                    |   V  | SPACE |  B  | 
 *                             '--------------------'
 * 
 */

[_MAIN] = LAYOUT(
    KC_ESC, 
              KC_1, KC_2, KC_3, KC_4, KC_5,
    KC_TAB, 
              KC_Q, KC_W, KC_E, KC_R, KC_T,
    MO(_LOWER), 
              KC_A, KC_S, KC_D, KC_F, KC_G,
    KC_LSFT, 
                                    KC_M, KC_I,
              KC_Z, KC_X, KC_C,     
    KC_LCTL,
                                  KC_V, KC_SPC, KC_B
),

[_LOWER] = LAYOUT(
  KC_LGUI, 
              KC_6,    KC_7,    KC_8,   KC_9,   KC_0,    
  MO(_RESET), 
              KC_F1,    KC_F2,    KC_F3,    KC_F4,   KC_F5,         
  _______, 
              KC_F6,    KC_F7,    KC_F8,    KC_F9,   KC_F10,  
  KC_LSFT,
                                                KC_F11, KC_F12,
              KC_N,     KC_O,     KC_P,       
  KC_LCTL,
                                          KC_LALT,   KC_H,   KC_J  
),

[_RESET] = LAYOUT(
  QK_BOOT, 
              RGB_TOG, RGB_MODE_FORWARD, RGB_HUI, RGB_SAD, RGB_VAI, 
  _______, 
              _______,  RGB_MODE_REVERSE, RGB_HUD, RGB_SAI, RGB_VAD,   
  _______, 
              _______, _______, _______, _______, _______,   
  _______, 
                                                KC_VOLU, KC_VOLD,
              _______, _______, _______,        
  _______,
                                            _______, _______, _______  
)
};

