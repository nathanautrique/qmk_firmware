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
    ALPHA = SAFE_RANGE, //945
    BETA, //946
    GAMMA, //947
    DELTA, //948
    EPSILON, //949
    ZETA, //950
    ETA, // 951
    THETA, //952
    IOTA, //953
    KAPPA, //954
    LAMBDA, //955
    MU, //956
    NU, //957
    XI, //958
    OMICRON, //959
    PI, //960
    RHO, //961
    SIGMA, //963
    TAU, //964
    UPSILON, //965
    PHI, //966
    CHI, //967
    PSI, //968
    OMEGA, //969
    U_ALPHA, //A
    U_BETA, //B
    U_GAMMA, //915
    U_DELTA, //916
    U_EPSILON, //E
    U_ZETA, //Z
    U_ETA, // H
    U_THETA, //920
    U_IOTA, //I
    U_KAPPA, //K
    U_LAMBDA, //923
    U_MU, //M
    U_NU, //N
    U_XI, //926
    U_OMICRON, //O
    U_PI, //928
    U_RHO, //R
    U_SIGMA, //961
    U_TAU, //T
    U_UPSILON, //Y
    U_PHI, //934
    U_CHI, //X
    U_PSI, //936
    U_OMEGA, //937
};

bool shiftPressed;

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
              EPSILON, ZETA, ETA, THETA,
    MO(_LAYER2),
              ALPHA, BETA, GAMMA, DELTA,
    MO(_LAYER1)
),

[_LAYER1] = LAYOUT(
    TG(_UMAIN),
              NU, XI, OMICRON, PI,
    MO(_LAYER3),
              IOTA , KAPPA, LAMBDA, MU,
    _______
),

[_LAYER2] = LAYOUT(
    TG(_UMAIN),
              PHI, CHI, PSI, OMEGA,
    _______,
              RHO,  SIGMA, TAU, UPSILON,
    MO(_LAYER3)
),

[_LAYER3] = LAYOUT(
    QK_BOOT,
              KC_ESCAPE, _______, _______, ALPHA,
    _______,
              KC_NUM_LOCK, RGB_MODE_REVERSE, RGB_TOG, RGB_MODE_FORWARD,
    _______
),



[_UMAIN] = LAYOUT(
    TG(_UMAIN),
              S(KC_E), S(KC_Z), S(KC_H), U_THETA,
    MO(_ULAYER2),
              S(KC_A), S(KC_B), U_GAMMA, U_DELTA,
    MO(_ULAYER1)
),

[_ULAYER1] = LAYOUT(
    TG(_UMAIN),
              S(KC_N), U_XI, S(KC_O), U_PI,
    MO(_LAYER3),
              S(KC_I) , S(KC_K), U_LAMBDA, S(KC_M),
    _______
),

[_ULAYER2] = LAYOUT(
    TG(_UMAIN),
              U_PHI, S(KC_X), U_PSI, U_OMEGA,
    _______,
              S(KC_R),  U_SIGMA, S(KC_T), S(KC_Y),
    MO(_LAYER3)
)

};

const uint16_t PROGMEM enterCombo[] = {KC_KP_1, KC_KP_6, COMBO_END};
const uint16_t PROGMEM escapeCombo[] = {KC_KP_2, KC_KP_7, COMBO_END};
const uint16_t PROGMEM deleteCombo[] = {KC_KP_3, KC_KP_8, COMBO_END};
const uint16_t PROGMEM backspaceCombo[] = {KC_KP_4, KC_KP_9, COMBO_END};

const uint16_t PROGMEM copyCombo[] = {KC_KP_1, KC_KP_7, COMBO_END};
const uint16_t PROGMEM pasteCombo[] = {KC_KP_2, KC_KP_8, COMBO_END};
const uint16_t PROGMEM cutCombo[] = {KC_KP_3, KC_KP_9, COMBO_END};

const uint16_t PROGMEM undoCombo[] = {KC_KP_2, KC_KP_6, COMBO_END};
const uint16_t PROGMEM redoCombo[] = {KC_KP_3, KC_KP_7, COMBO_END};
const uint16_t PROGMEM findCombo[] = {KC_KP_4, KC_KP_8, COMBO_END};

const uint16_t PROGMEM testCombo[] = {LT(_LAYER2, KC_KP_5), LT(_LAYER1, KC_KP_0), COMBO_END};

combo_t key_combos[] = {
    COMBO(enterCombo, KC_ENTER),
    COMBO(backspaceCombo, KC_BACKSPACE),
    COMBO(escapeCombo, KC_ESC),
    COMBO(deleteCombo, KC_DEL),

    COMBO(copyCombo, LCTL(KC_C)),
    COMBO(pasteCombo, LCTL(KC_V)),
    COMBO(cutCombo, LCTL(KC_X)),

    COMBO(undoCombo, LCTL(KC_Z)),
    COMBO(redoCombo, LCTL(KC_Y)),
    COMBO(findCombo, LCTL(KC_F)),

    COMBO(testCombo, LT(_LAYER3, KC_ENTER)),
};

//define modifiers
#define MODS_SHIFT_MASK  (MOD_BIT(KC_LSFT)|MOD_BIT(KC_RSFT))

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (keyboard_report->mods & MODS_SHIFT_MASK) {
      shiftPressed = true;
  }
  else{
    shiftPressed = false;
    }

  switch (keycode) {
    case ALPHA:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_9) SS_TAP(X_KP_4) SS_TAP(X_KP_5)));
      }
      break;
    case BETA:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_9) SS_TAP(X_KP_4) SS_TAP(X_KP_6)));
      }
      break;
    case GAMMA:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_9) SS_TAP(X_KP_4) SS_TAP(X_KP_7)));
      }
      break;
    case DELTA:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_9) SS_TAP(X_KP_4) SS_TAP(X_KP_8)));
      }
      break;
    case EPSILON:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_9) SS_TAP(X_KP_4) SS_TAP(X_KP_9)));
      }
      break;
    case ZETA:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_9) SS_TAP(X_KP_5) SS_TAP(X_KP_0)));
      }
      break;
    case ETA:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_9) SS_TAP(X_KP_5) SS_TAP(X_KP_1)));
      }
      break;
    case THETA:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_9) SS_TAP(X_KP_5) SS_TAP(X_KP_2)));
      }
      break;


    case IOTA:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_9) SS_TAP(X_KP_5) SS_TAP(X_KP_3)));
      }
      break;
    case KAPPA:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_9) SS_TAP(X_KP_5) SS_TAP(X_KP_4)));
      }
      break;
    case LAMBDA:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_9) SS_TAP(X_KP_5) SS_TAP(X_KP_5)));
      }
      break;
    case MU:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_9) SS_TAP(X_KP_5) SS_TAP(X_KP_6)));
      }
      break;
    case NU:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_9) SS_TAP(X_KP_5) SS_TAP(X_KP_7)));
      }
      break;
    case XI:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_9) SS_TAP(X_KP_5) SS_TAP(X_KP_8)));
      }
      break;
    case OMICRON:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_9) SS_TAP(X_KP_5) SS_TAP(X_KP_9)));
      }
      break;
    case PI:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_9) SS_TAP(X_KP_6) SS_TAP(X_KP_0)));
      }
      break;



    case RHO:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_9) SS_TAP(X_KP_6) SS_TAP(X_KP_1)));
      }
      break;
    case SIGMA:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_9) SS_TAP(X_KP_6) SS_TAP(X_KP_3)));
      }
      break;
    case TAU:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_9) SS_TAP(X_KP_6) SS_TAP(X_KP_4)));
      }
      break;
    case UPSILON:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_9) SS_TAP(X_KP_6) SS_TAP(X_KP_5)));
      }
      break;
    case PHI:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_9) SS_TAP(X_KP_6) SS_TAP(X_KP_6)));
      }
      break;
    case CHI:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_9) SS_TAP(X_KP_6) SS_TAP(X_KP_7)));
      }
      break;
    case PSI:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_9) SS_TAP(X_KP_6) SS_TAP(X_KP_8)));
      }
      break;
    case OMEGA:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_9) SS_TAP(X_KP_6) SS_TAP(X_KP_9)));
      }
      break;

/////////////////UPPERCASE///////////////


    case U_GAMMA:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_9) SS_TAP(X_KP_1) SS_TAP(X_KP_5)));
      }
      break;
    case U_DELTA:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_9) SS_TAP(X_KP_1) SS_TAP(X_KP_6)));
      }
      break;
    case U_THETA:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_9) SS_TAP(X_KP_2) SS_TAP(X_KP_0)));
      }
      break;


    case U_LAMBDA:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_9) SS_TAP(X_KP_2) SS_TAP(X_KP_3)));
      }
      break;
    case U_XI:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_9) SS_TAP(X_KP_2) SS_TAP(X_KP_6)));
      }
      break;
    case U_PI:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_9) SS_TAP(X_KP_2) SS_TAP(X_KP_8)));
      }
      break;



    case U_SIGMA:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_9) SS_TAP(X_KP_6) SS_TAP(X_KP_1)));
      }
      break;
    case U_PHI:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_9) SS_TAP(X_KP_3) SS_TAP(X_KP_4)));
      }
      break;
    case U_PSI:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_9) SS_TAP(X_KP_3) SS_TAP(X_KP_6)));
      }
      break;
    case U_OMEGA:
      if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_KP_9) SS_TAP(X_KP_3) SS_TAP(X_KP_7)));
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

