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
  _UMAIN,
  _LAYER1,
  _ULAYER1,
};

enum custom_keycodes {  //ALT-codes

    ae = SAFE_RANGE, //145
    oe, //0156
    å, //0197
    AE, //146
    OE, //0140
    Å, //0229



    ä, //0228
    ë, //0235
    ï, //0239
    ö, //0246
    ü, //0252
    ÿ, //0255
    Ä, //0196
    Ë, //0203
    Ï, //0207
    Ö, //0214
    Ü, //0220
    Ÿ, //0159 not_in_yet

    á, //0225
    é, //0233
    í, //0237
    ó, //0243
    ú, //0250
    ý, //0250
    Á, //0193
    É, //0201
    Í, //0205
    Ó, //0211
    Ú, //0218
    Ý, //0218

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


    €, //0128
    dollar, //36
    upside_down_exclamationmark, //0161
    upside_down_questionmark, //0191
    degree_sign, //0176
    ², //253
    ³, //0179 not yet implemented
    ª, //0170
    º, //0186
    µ, //0181
    plus_minus, //0177

    ç, //0231
    Ç, //0199
    ß, //223
    ø, //0248
    Ø, //0216
    þ, //0254
    Þ, //0222
    ð, //0240
    Ð, //0208
    quote_left, //0139
    quote_right, //0155
    double_quote_left, //0171
    double_quote_right, //0187
    š, //0154
    Š, //0138
    ž, //0158
    Ž, //0142
    ñ, //0241
    Ñ, //0209

};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* MAIN
 * .-------.                       .-------.
 * |   "   |-------.-------.-------|   ~   |
 * |-------|   '   |   ^   |   `   |-------|
 * |   A   |-------+-------+-------|   U   |
 * |-------|   E   |   I   |   O   |-------|
 * |  MOD  |-------+-------+-------|  Y|N  |
 * '-------'                       '-------'
 *
 */

[_MAIN] = LAYOUT(
    S(KC_QUOTE),
              KC_QUOTE,     S(KC_6),            KC_GRV,         S(KC_GRV),
    ª,
              € , upside_down_exclamationmark, degree_sign,     µ,
    TG(_UMAIN)                                                  //,ç
),

[_UMAIN] = LAYOUT(
    º,
              _______,      _______,       _______, _______,
    _______,
              dollar, upside_down_questionmark, _______, plus_minus,
    TG(_UMAIN)                                         //,Ç
),




[_LAYER1] = LAYOUT(
    š,
              quote_left, quote_right, ², ð,
    ž,
              ç ,         ß,           ø, þ,
    TG(_UMAIN)                            //,KC_Y
),

[_ULAYER1] = LAYOUT(
    Š,
              double_quote_left , double_quote_right, ³, Ð,
    Ž,
              Ç ,                   _______,          Ø, Þ,
    TG(_UMAIN)                                           //,KC_Y
),

};

const uint16_t PROGMEM ae_combo[] = {ª, €, COMBO_END};
const uint16_t PROGMEM oe_combo[] = {degree_sign, €, COMBO_END};
const uint16_t PROGMEM å_combo[] = {degree_sign, ª, COMBO_END};
const uint16_t PROGMEM AE_combo[] = {ª, €, COMBO_END};
const uint16_t PROGMEM OE_combo[] = {degree_sign, €, COMBO_END};
const uint16_t PROGMEM Å_combo[] = {degree_sign, ª, COMBO_END};


const uint16_t PROGMEM ä_combo[] = {ª, S(KC_QUOTE), COMBO_END};
const uint16_t PROGMEM ë_combo[] = {€, S(KC_QUOTE), COMBO_END};
const uint16_t PROGMEM ï_combo[] = {upside_down_exclamationmark, S(KC_QUOTE), COMBO_END};
const uint16_t PROGMEM ö_combo[] = {degree_sign, S(KC_QUOTE), COMBO_END};
const uint16_t PROGMEM ü_combo[] = {µ, S(KC_QUOTE), COMBO_END};
//const uint16_t PROGMEM ÿ_combo[] = {µ, S(KC_QUOTE), COMBO_END};
const uint16_t PROGMEM Ä_combo[] = {ª, S(KC_QUOTE), COMBO_END};
const uint16_t PROGMEM Ë_combo[] = {€, S(KC_QUOTE), COMBO_END};
const uint16_t PROGMEM Ï_combo[] = {upside_down_exclamationmark, S(KC_QUOTE), COMBO_END};
const uint16_t PROGMEM Ö_combo[] = {degree_sign, S(KC_QUOTE), COMBO_END};
const uint16_t PROGMEM Ü_combo[] = {µ, S(KC_QUOTE), COMBO_END};
//const uint16_t PROGMEM Ÿ_combo[] = {S(Y), S(KC_QUOTE), COMBO_END};

const uint16_t PROGMEM á_combo[] = {ª, KC_QUOTE, COMBO_END};
const uint16_t PROGMEM é_combo[] = {€, KC_QUOTE, COMBO_END};
const uint16_t PROGMEM í_combo[] = {upside_down_exclamationmark, KC_QUOTE, COMBO_END};
const uint16_t PROGMEM ó_combo[] = {degree_sign, KC_QUOTE, COMBO_END};
const uint16_t PROGMEM ú_combo[] = {µ, KC_QUOTE, COMBO_END};
//const uint16_t PROGMEM ý_combo[] = {KC_Y, KC_QUOTE, COMBO_END};
const uint16_t PROGMEM Á_combo[] = {ª, KC_QUOTE, COMBO_END};
const uint16_t PROGMEM É_combo[] = {€, KC_QUOTE, COMBO_END};
const uint16_t PROGMEM Í_combo[] = {upside_down_exclamationmark, KC_QUOTE, COMBO_END};
const uint16_t PROGMEM Ó_combo[] = {degree_sign, KC_QUOTE, COMBO_END};
const uint16_t PROGMEM Ú_combo[] = {µ, KC_QUOTE, COMBO_END};
const uint16_t PROGMEM Ú_combo[] = {µ, KC_QUOTE, COMBO_END};
//const uint16_t PROGMEM Ý_combo[] = {S(KC_Y), KC_QUOTE, COMBO_END};


const uint16_t PROGMEM â_combo[] = {ª, S(KC_6), COMBO_END};
const uint16_t PROGMEM ê_combo[] = {€, S(KC_6), COMBO_END};
const uint16_t PROGMEM î_combo[] = {upside_down_exclamationmark, S(KC_6), COMBO_END};
const uint16_t PROGMEM ô_combo[] = {degree_sign, S(KC_6), COMBO_END};
const uint16_t PROGMEM û_combo[] = {µ, S(KC_6), COMBO_END};
const uint16_t PROGMEM Â_combo[] = {ª, S(KC_6), COMBO_END};
const uint16_t PROGMEM Ê_combo[] = {€, S(KC_6), COMBO_END};
const uint16_t PROGMEM Î_combo[] = {upside_down_exclamationmark, S(KC_6), COMBO_END};
const uint16_t PROGMEM Ô_combo[] = {degree_sign, S(KC_6), COMBO_END};
const uint16_t PROGMEM Û_combo[] = {µ, S(KC_6), COMBO_END};


const uint16_t PROGMEM à_combo[] = {ª, KC_GRV, COMBO_END};
const uint16_t PROGMEM è_combo[] = {€, KC_GRV, COMBO_END};
const uint16_t PROGMEM ì_combo[] = {upside_down_exclamationmark, KC_GRV, COMBO_END};
const uint16_t PROGMEM ò_combo[] = {degree_sign, KC_GRV, COMBO_END};
const uint16_t PROGMEM ù_combo[] = {µ, KC_GRV, COMBO_END};
const uint16_t PROGMEM À_combo[] = {ª, KC_GRV, COMBO_END};
const uint16_t PROGMEM È_combo[] = {€, KC_GRV, COMBO_END};
const uint16_t PROGMEM Ì_combo[] = {upside_down_exclamationmark, KC_GRV, COMBO_END};
const uint16_t PROGMEM Ò_combo[] = {degree_sign, KC_GRV, COMBO_END};
const uint16_t PROGMEM Ù_combo[] = {µ, KC_GRV, COMBO_END};

//const uint16_t PROGMEM testCombo[] = {LT(_LAYER2, KC_KP_5), LT(_LAYER1, KC_KP_0), COMBO_END};

combo_t key_combos[] = {
    COMBO(ae_combo, ae),
    COMBO(oe_combo, oe),
    COMBO(å_combo, å),
    COMBO(AE_combo, AE),
    COMBO(OE_combo, OE),
    COMBO(Å_combo, Å),

    COMBO(ä_combo, ä),
    COMBO(ë_combo, ë),
    COMBO(ï_combo, ï),
    COMBO(ö_combo, ö),
    COMBO(ü_combo, ü),
    // COMBO(ÿ_combo, ÿ),
    COMBO(Ä_combo, Ä),
    COMBO(Ë_combo, Ë),
    COMBO(Ï_combo, Ï),
    COMBO(Ö_combo, Ö),
    COMBO(Ü_combo, Ü),
    // COMBO(Ÿ_combo, Ÿ),

    COMBO(á_combo, á),
    COMBO(é_combo, é),
    COMBO(í_combo, í),
    COMBO(ó_combo, ó),
    COMBO(ú_combo, ú),
    // COMBO(ý_combo, ý),
    COMBO(Á_combo, Á),
    COMBO(É_combo, É),
    COMBO(Í_combo, Í),
    COMBO(Ó_combo, Ó),
    COMBO(Ú_combo, Ú),
    // COMBO(Ý_combo, Ý),

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

    //COMBO(testCombo, LT(_LAYER3, €NTER)),
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
    case å:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_9) SS_TAP(X_KP_7)));
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
    case Å:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_2) SS_TAP(X_KP_9)));
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
    // case ÿ:
    //   if (record->event.pressed) {
            // SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_5) SS_TAP(X_KP_5)));
    //   }
    //   break;
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
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) rSS_TAP(X_KP_2) SS_TAP(X_KP_2) SS_TAP(X_KP_0)));
      }
      break;
    // case Ÿ:
    //   if (record->event.pressed) {
            // SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_5) SS_TAP(X_KP_9)));
    //   }
    //   break;





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
    // case ý:
    //   if (record->event.pressed) {
            // SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_5) SS_TAP(X_KP_3)));
    //   }
    //   break;
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
    // case Ý:
    //   if (record->event.pressed) {
            // SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_2) SS_TAP(X_KP_1)));
    //   }
    //   break;




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



    case €:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_2) SS_TAP(X_KP_8)));
      }
      break;
    case dollar:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_3) SS_TAP(X_KP_6)));
      }
      break;
    case upside_down_exclamationmark:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_6) SS_TAP(X_KP_1)));
      }
      break;
    case upside_down_questionmark:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_9) SS_TAP(X_KP_1)));
      }
      break;
    case degree_sign:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_7) SS_TAP(X_KP_6)));
      }
      break;
    case ²:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_2) SS_TAP(X_KP_5) SS_TAP(X_KP_3)));
      }
      break;
    case ³:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_7) SS_TAP(X_KP_9)));
      }
      break;
    case ª:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_7) SS_TAP(X_KP_0)));
      }
      break;
    case º:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_8) SS_TAP(X_KP_6)));
      }
      break;
    case µ:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_8) SS_TAP(X_KP_1)));
      }
      break;
    case plus_minus:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_7) SS_TAP(X_KP_7)));
      }
      break;




    case ç:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_3) SS_TAP(X_KP_1)));
      }
      break;
    case Ç:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_9) SS_TAP(X_KP_9)));
      }
      break;
    case ß:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_2) SS_TAP(X_KP_2) SS_TAP(X_KP_3)));
      }
      break;
    case ø:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_4) SS_TAP(X_KP_8)));
      }
      break;
    case Ø:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_1) SS_TAP(X_KP_6)));
      }
      break;
    case þ:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_5) SS_TAP(X_KP_4)));
      }
      break;
    case Þ:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_2) SS_TAP(X_KP_2)));
      }
      break;
    case ð:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_4) SS_TAP(X_KP_0)));
      }
      break;
    case Ð:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_0) SS_TAP(X_KP_8)));
      }
      break;
    case quote_left:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_3) SS_TAP(X_KP_9)));
      }
      break;
    case quote_right:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_5) SS_TAP(X_KP_5)));
      }
      break;
    case double_quote_left:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_7) SS_TAP(X_KP_1)));
      }
      break;
    case double_quote_right:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_8) SS_TAP(X_KP_7)));
      }
      break;
    case š:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_5) SS_TAP(X_KP_4)));
      }
      break;
    case Š:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_3) SS_TAP(X_KP_8)));
      }
      break;
    case ž:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_5) SS_TAP(X_KP_8)));
      }
      break;
    case Ž:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_4) SS_TAP(X_KP_2)));
      }
      break;
    case ñ:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_4) SS_TAP(X_KP_1)));
      }
      break;
    case Ñ:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_0) SS_TAP(X_KP_9)));
      }
      break;

  }
  return true;
};


bool rgb_matrix_indicators_user(void) {
    switch (get_highest_layer(layer_state)) {
        case _MAIN:
        case _LAYER1:
            rgb_matrix_set_color_all(255,255,255);
            return true;
            break;
        case _UMAIN:
        case _ULAYER1:
            rgb_matrix_set_color_all(25, 50, 255);
            return true;
            break;
        default:
            return false;
            break;
    }
}

;

