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
  _UMAIN,
  _ULAYER1,
  _ULAYER2,
};

enum custom_keycodes {  //ALT-codes

    ae = SAFE_RANGE, //145
    oe, //0156
    AE, //146
    OE, //0140


    ä, //0228
    ë, //0235
    ï, //0239
    ö, //0246
    ü, //0252
    Ä, //0196
    Ë, //0203
    Ï, //0207
    Ö, //0214
    Ü, //0220

    á, //0225
    é, //0233
    í, //0237
    ó, //0243
    ú, //0250
    Á, //0193
    É, //0201
    Í, //0205
    Ó, //0211
    Ú, //0218

    â, //0226
    ê, //0234
    î, //0238
    ô, //0244
    û, //0251
    Â, //0194
    Ê, //0202
    Î, //0206
    Ô, //0212
    Û, //0219

    à, //0224
    è, //0232
    ì, //0236
    ò, //0242
    ù, //0249
    À, //0192
    È, //0200
    Ì, //0204
    Ò, //0210
    Ù, //0217
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* MAIN
 * .-------.
 * |       |-------.-------.-------.-------.
 * |-------|       |       |       |       |
 * |       |-------+-------+-------+-------+
 * |-------|       |       |       |       |
 * |       |-------+-------+-------+-------+
 * |-------|
 *
 */

[_MAIN] = LAYOUT(
    TG(_UMAIN),
              KC_QUOTE, S(KC_6), KC_GRV, S(KC_GRV),
    S(KC_QUOTE),
              KC_E, KC_I, KC_O, KC_U ,
    KC_A
),

[_LAYER1] = LAYOUT(
    TG(_UMAIN),
              _______, _______, _______, _______,
    MO(_LAYER3),
              _______ , _______, _______, _______,
    _______
),

[_LAYER2] = LAYOUT(
    TG(_UMAIN),
              _______ , _______, _______, _______,
    _______,
              _______ , _______, _______, _______,
    MO(_LAYER3)
),

[_LAYER3] = LAYOUT(
    QK_BOOT,
              KC_ESCAPE, _______, _______, _______,
    _______,
              KC_NUM_LOCK, RGB_MODE_REVERSE, RGB_TOG, RGB_MODE_FORWARD,
    _______
),



[_UMAIN] = LAYOUT(
    TG(_UMAIN),
              _______, _______, _______, _______,
    _______,
              S(KC_E), S(KC_I), S(KC_O), S(KC_U),
    S(KC_A)
),

[_ULAYER1] = LAYOUT(
    TG(_UMAIN),
              _______ , _______, _______, _______,
    MO(_LAYER3),
              _______ , _______, _______, _______,
    _______
),

[_ULAYER2] = LAYOUT(
    TG(_UMAIN),
              _______ , _______, _______, _______,
    _______,
              _______ , _______, _______, _______,
    MO(_LAYER3)
)

};

const uint16_t PROGMEM ae_combo[] = {KC_A, KC_E, COMBO_END};
const uint16_t PROGMEM oe_combo[] = {KC_O, KC_E, COMBO_END};
const uint16_t PROGMEM AE_combo[] = {S(KC_A), S(KC_E), COMBO_END};
const uint16_t PROGMEM OE_combo[] = {S(KC_O), S(KC_E), COMBO_END};

const uint16_t PROGMEM ä_combo[] = {KC_A, S(KC_QUOTE), COMBO_END};
const uint16_t PROGMEM ë_combo[] = {KC_E, S(KC_QUOTE), COMBO_END};
const uint16_t PROGMEM ï_combo[] = {KC_I, S(KC_QUOTE), COMBO_END};
const uint16_t PROGMEM ö_combo[] = {KC_O, S(KC_QUOTE), COMBO_END};
const uint16_t PROGMEM ü_combo[] = {KC_U, S(KC_QUOTE), COMBO_END};
const uint16_t PROGMEM Ä_combo[] = {S(KC_A), S(KC_QUOTE), COMBO_END};
const uint16_t PROGMEM Ë_combo[] = {S(KC_E), S(KC_QUOTE), COMBO_END};
const uint16_t PROGMEM Ï_combo[] = {S(KC_I), S(KC_QUOTE), COMBO_END};
const uint16_t PROGMEM Ö_combo[] = {S(KC_O), S(KC_QUOTE), COMBO_END};
const uint16_t PROGMEM Ü_combo[] = {S(KC_U), S(KC_QUOTE), COMBO_END};

const uint16_t PROGMEM á_combo[] = {KC_A, KC_QUOTE, COMBO_END};
const uint16_t PROGMEM é_combo[] = {KC_E, KC_QUOTE, COMBO_END};
const uint16_t PROGMEM í_combo[] = {KC_I, KC_QUOTE, COMBO_END};
const uint16_t PROGMEM ó_combo[] = {KC_O, KC_QUOTE, COMBO_END};
const uint16_t PROGMEM ú_combo[] = {KC_U, KC_QUOTE, COMBO_END};
const uint16_t PROGMEM Á_combo[] = {S(KC_A), KC_QUOTE, COMBO_END};
const uint16_t PROGMEM É_combo[] = {S(KC_E), KC_QUOTE, COMBO_END};
const uint16_t PROGMEM Í_combo[] = {S(KC_I), KC_QUOTE, COMBO_END};
const uint16_t PROGMEM Ó_combo[] = {S(KC_O), KC_QUOTE, COMBO_END};
const uint16_t PROGMEM Ú_combo[] = {S(KC_U), KC_QUOTE, COMBO_END};


const uint16_t PROGMEM â_combo[] = {KC_A, S(KC_6), COMBO_END};
const uint16_t PROGMEM ê_combo[] = {KC_E, S(KC_6), COMBO_END};
const uint16_t PROGMEM î_combo[] = {KC_I, S(KC_6), COMBO_END};
const uint16_t PROGMEM ô_combo[] = {KC_O, S(KC_6), COMBO_END};
const uint16_t PROGMEM û_combo[] = {KC_U, S(KC_6), COMBO_END};
const uint16_t PROGMEM Â_combo[] = {S(KC_A), S(KC_6), COMBO_END};
const uint16_t PROGMEM Ê_combo[] = {S(KC_E), S(KC_6), COMBO_END};
const uint16_t PROGMEM Î_combo[] = {S(KC_I), S(KC_6), COMBO_END};
const uint16_t PROGMEM Ô_combo[] = {S(KC_O), S(KC_6), COMBO_END};
const uint16_t PROGMEM Û_combo[] = {S(KC_U), S(KC_6), COMBO_END};


const uint16_t PROGMEM à_combo[] = {KC_A, KC_GRV, COMBO_END};
const uint16_t PROGMEM è_combo[] = {KC_E, KC_GRV, COMBO_END};
const uint16_t PROGMEM ì_combo[] = {KC_I, KC_GRV, COMBO_END};
const uint16_t PROGMEM ò_combo[] = {KC_O, KC_GRV, COMBO_END};
const uint16_t PROGMEM ù_combo[] = {KC_U, KC_GRV, COMBO_END};
const uint16_t PROGMEM À_combo[] = {S(KC_A), KC_GRV, COMBO_END};
const uint16_t PROGMEM È_combo[] = {S(KC_E), KC_GRV, COMBO_END};
const uint16_t PROGMEM Ì_combo[] = {S(KC_I), KC_GRV, COMBO_END};
const uint16_t PROGMEM Ò_combo[] = {S(KC_O), KC_GRV, COMBO_END};
const uint16_t PROGMEM Ù_combo[] = {S(KC_U), KC_GRV, COMBO_END};

//const uint16_t PROGMEM testCombo[] = {LT(_LAYER2, KC_KP_5), LT(_LAYER1, KC_KP_0), COMBO_END};

combo_t key_combos[] = {
    COMBO(ae_combo, ae),
    COMBO(oe_combo, oe),
    COMBO(AE_combo, AE),
    COMBO(OE_combo, OE),

    COMBO(ä_combo, ä),
    COMBO(ë_combo, ë),
    COMBO(ï_combo, ï),
    COMBO(ö_combo, ö),
    COMBO(ü_combo, ü),
    COMBO(Ä_combo, Ä),
    COMBO(Ë_combo, Ë),
    COMBO(Ï_combo, Ï),
    COMBO(Ö_combo, Ö),
    COMBO(Ü_combo, Ü),

    COMBO(á_combo, á),
    COMBO(é_combo, é),
    COMBO(í_combo, í),
    COMBO(ó_combo, ó),
    COMBO(ú_combo, ú),
    COMBO(Á_combo, Á),
    COMBO(É_combo, É),
    COMBO(Í_combo, Í),
    COMBO(Ó_combo, Ó),
    COMBO(Ú_combo, Ú),

    COMBO(â_combo, â),
    COMBO(ê_combo, ê),
    COMBO(î_combo, î),
    COMBO(ô_combo, ô),
    COMBO(û_combo, û),
    COMBO(Â_combo, Â),
    COMBO(Ê_combo, Ê),
    COMBO(Î_combo, Î),
    COMBO(Ô_combo, Ô),
    COMBO(Û_combo, Û),

    COMBO(à_combo, à),
    COMBO(è_combo, è),
    COMBO(ì_combo, ì),
    COMBO(ò_combo, ò),
    COMBO(ù_combo, ù),
    COMBO(À_combo, À),
    COMBO(È_combo, È),
    COMBO(Ì_combo, Ì),
    COMBO(Ò_combo, Ò),
    COMBO(Ù_combo, Ù),

    //COMBO(testCombo, LT(_LAYER3, KC_ENTER)),
};

//define modifiers
#define MODS_SHIFT_MASK  (MOD_BIT(KC_LSFT)|MOD_BIT(KC_RSFT))

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case ae:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_1) SS_TAP(X_KP_4) SS_TAP(X_KP_5)));
      }
      break;
    case oe:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_5) SS_TAP(X_KP_6)));
      }
      break;
    case AE:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_1) SS_TAP(X_KP_4) SS_TAP(X_KP_6)));
      }
      break;
    case OE:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_4) SS_TAP(X_KP_0)));
      }
      break;




    case ä:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_2) SS_TAP(X_KP_8)));
      }
      break;
    case ë:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_3) SS_TAP(X_KP_5)));
      }
      break;
    case ï:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_3) SS_TAP(X_KP_9)));
      }
      break;
    case ö:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_4) SS_TAP(X_KP_6)));
      }
      break;
    case ü:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_5) SS_TAP(X_KP_2)));
      }
      break;
    case Ä:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_9) SS_TAP(X_KP_6)));
      }
      break;
    case Ë:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_0) SS_TAP(X_KP_3)));
      }
      break;
    case Ï:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_0) SS_TAP(X_KP_7)));
      }
      break;

    case Ö:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_1) SS_TAP(X_KP_4)));
      }
      break;
    case Ü:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_2) SS_TAP(X_KP_0)));
      }
      break;





    case á:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_2) SS_TAP(X_KP_5)));
      }
      break;
    case é:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_3) SS_TAP(X_KP_3)));
      }
      break;
    case í:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_3) SS_TAP(X_KP_7)));
      }
      break;
    case ó:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_4) SS_TAP(X_KP_3)));
      }
      break;
    case ú:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_5) SS_TAP(X_KP_0)));
      }
      break;
    case Á:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_9) SS_TAP(X_KP_3)));
      }
      break;
    case É:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_0) SS_TAP(X_KP_1)));
      }
      break;
    case Í:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_0) SS_TAP(X_KP_5)));
      }
      break;

    case Ó:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_1) SS_TAP(X_KP_1)));
      }
      break;
    case Ú:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_2) SS_TAP(X_KP_0)));
      }
      break;




    case â:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_2) SS_TAP(X_KP_6)));
      }
      break;
    case ê:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_3) SS_TAP(X_KP_4)));
      }
      break;
    case î:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_3) SS_TAP(X_KP_8)));
      }
      break;
    case ô:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_4) SS_TAP(X_KP_4)));
      }
      break;
    case û:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_5) SS_TAP(X_KP_1)));
      }
      break;
    case Â:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_9) SS_TAP(X_KP_4)));
      }
      break;
    case Ê:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_0) SS_TAP(X_KP_2)));
      }
      break;
    case Î:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_0) SS_TAP(X_KP_6)));
      }
      break;

    case Ô:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_1) SS_TAP(X_KP_2)));
      }
      break;
    case Û:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_2) SS_TAP(X_KP_1)));
      }
      break;





    case à:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_2) SS_TAP(X_KP_4)));
      }
      break;
    case è:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_3) SS_TAP(X_KP_2)));
      }
      break;
    case ì:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_3) SS_TAP(X_KP_6)));
      }
      break;
    case ò:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_4) SS_TAP(X_KP_2)));
      }
      break;
    case ù:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_4) SS_TAP(X_KP_9)));
      }
      break;
    case À:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_9) SS_TAP(X_KP_2)));
      }
      break;
    case È:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_0) SS_TAP(X_KP_0)));
      }
      break;
    case Ì:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_0) SS_TAP(X_KP_4)));
      }
      break;

    case Ò:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_1) SS_TAP(X_KP_0)));
      }
      break;
    case Ù:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_1) SS_TAP(X_KP_9)));
      }
      break;

  }
  return true;
};


bool rgb_matrix_indicators_user(void) {
    switch (get_highest_layer(layer_state)) {
        case _MAIN:
        case _LAYER1:
        case _LAYER2:
        case _LAYER3:
            rgb_matrix_set_color_all(255,255,255);
            return true;
            break;
        case _UMAIN:
        case _ULAYER1:
        case _ULAYER2:
            rgb_matrix_set_color_all(25, 50, 255);
            return true;
            break;
        default:
            return false;
            break;
    }
}

;

