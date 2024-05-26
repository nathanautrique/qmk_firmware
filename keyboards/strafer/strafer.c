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
#include "strafer.h"

led_config_t g_led_config = {
    {
        // Key Matrix to LED Index
        {  0,  1,  2,  3,  4,  5,  6},
        {  7,  8,  9, 10, 11, 12, 13},
        { 14, 15, 16, 17, 18, 19, 20},
        { 21, 22, 23, 24, 25, 26, 27}

        // Key Matrix visualized:
        // 0,
        //      1,   2,   3,   4,  5,
        // 6,
        //      7,   8,   9,  10, 11,
        // 12,
        //     13,  14,  15,  16,  17
        // 18,
        //                      19,  20
        //     21,  22,  23,
        // 24,                25,  26,  27

    }, {
        // LED Index to Physical Position { 0..224, 0..64 } || {Col_Position, ROW_POSITION}. FORMULAS: x = 224 / (NUMBER_OF_COLS - 1) * COL_POSITION ||| y =  64 / (NUMBER_OF_ROWS - 1) * ROW_POSITION
        {  0,  0},
                    { 37,  6}, { 75,  6}, { 112,  6}, { 149,  6}, {187,  6},
        {  0, 13},
                    { 37, 19}, { 75, 19}, { 112, 19}, { 149, 19}, {187, 19},
        {  0, 26},
                    { 37, 32}, { 75, 32}, { 112, 32}, { 149, 32}, {187, 32},
        {  0, 38},
                                                            {168,  45}, { 205,  45},
                    { 37, 51}, { 75, 51}, { 112, 51},
        {  0, 58},
                                                        { 149, 64}, {187, 64}, {224, 64}


    }, {
        // LED Index to Flag
        4,
            4,  4,  4,  4,  4,
        4,
            4,  4,  4,  4,  4,
        4,
            4,  4,  4,  4,  4,
        4,                4,  4,
            1,  1,  1,

        1,              1,  1,  1
    }
};


/*
void suspend_power_down_kb(void) {
    rgb_matrix_set_suspend_state(true);
    suspend_power_down_user();
}

void suspend_wakeup_init_kb(void) {
    rgb_matrix_set_suspend_state(false);
    suspend_wakeup_init_user();
}*/
