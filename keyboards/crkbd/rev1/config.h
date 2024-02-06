/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#ifdef RGB_MATRIX_ENABLE
#    define RGB_MATRIX_LED_COUNT 54
#    define RGB_MATRIX_SPLIT \
        { 27, 27 }
#    define SPLIT_TRANSPORT_MIRROR
#endif

// https://docs.qmk.fm/#/tap_hold?id=hold-on-other-key-press
#define HOLD_ON_OTHER_KEY_PRESS
#define QUICK_TAP_TERM 0
#define OLED_FONT_H "keyboards/crkbd/lib/glcdfont.c"

#define PERMISSIVE_HOLD_PER_KEY
#define TAPPING_TERM_PER_KEY


// #define QUICK_TAP_TERM_PER_KEY
// uint16_t get_quick_tap_term(uint16_t keycode, keyrecord_t *record) {
//     switch (keycode) {
//         case LT(1, KC_SPC):
//             return 0;
//         default:
//             return QUICK_TAP_TERM;
//     }
// }
