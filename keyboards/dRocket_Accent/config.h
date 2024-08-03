// Copyright 2024 Nathan Autrique (@nathanautrique)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once


//THESE COMMENTED LINES ARE THERE WHEN STARTING A NEW KEYBOARD, BUT CAN PROBABLY JUST BE DELETED
/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT


//WAS NOT TESTED YET TO DELETE THIS, BUT I THINK YOU CAN JUST DELETE THIS, SINCE THE KEY MATRIX TO LED INDEX OF strafer.c gives the amount of leds
#define RGB_MATRIX_LED_COUNT 11
#define COMBO_ONLY_FROM_LAYER 0
