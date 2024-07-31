/* Copyright 2023 nathanautrique
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
#include "drocket_greek.h"

led_config_t g_led_config = {
    {
        // Key Matrix to LED Index
        {  0,  1,  2,  3,  4},
        {  5,  6,  7,  8, 9},
        { 10, NO_LED, NO_LED, NO_LED, NO_LED},

        // Key Matrix visualized:
        // 0,
        //      1,   2,   3,   4,  5,
        // 6,
        //      7,   8,   9,  10, 11,
        // 12

    }, {
        // LED Index to Physical Position { 0..224, 0..64 } || {Col_Position, ROW_POSITION}. FORMULAS: x = 224 / (NUMBER_OF_COLS - 1) * COL_POSITION ||| y =  64 / (NUMBER_OF_ROWS - 1) * ROW_POSITION
        {  0,  0},
                    { 37,  6}, { 75,  6}, { 112,  6}, { 149,  6},
        {  0, 13},
                    { 37, 19}, { 75, 19}, { 112, 19}, { 149, 19},
        {  0, 26}

    }, {
        // LED Index to Flag
        1,
            4,  4,  4,  4,
        1,
            4,  4,  4,  4,
        1
    }
};
