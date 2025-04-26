/*
 * Copyright 2021 Quentin LEBASTARD <qlebastard@gmail.com>
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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_split_4x6_5(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,              KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    TG(1),
        KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,              KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_CAPS,
        KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,              KC_H, KC_J,    KC_K,    KC_L,    KC_SCLN,    KC_ENT,
        KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,              KC_N, KC_M,  KC_COMM, KC_DOT,    KC_SLSH,    KC_NO,
                             OSM(MOD_LSFT), KC_LGUI, OSL(3), KC_ENT, KC_SPC, KC_BSPC, KC_LALT, KC_LGUI, KC_ESC, KC_LGUI
    ),

    [1] = LAYOUT_split_4x6_5(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_F,    KC_P,    KC_D,    KC_L,    KC_X,             KC_SCLN, KC_U,    KC_O,    KC_Y,    KC_B,    KC_Z,
        KC_TRNS, LCTL_T(KC_S),    LALT_T(KC_N),    LGUI_T(KC_T),    LSFT_T(KC_H),    KC_K,             KC_QUOT, LSFT_T(KC_A),    LGUI_T(KC_E),    LALT_T(KC_I),    LCTL_T(KC_C),    KC_Q,
        KC_TRNS, KC_V,    KC_W,    KC_G,    KC_M,    KC_J,             KC_EQL, KC_MINS,  KC_COMM, KC_DOT, KC_SLSH,  KC_TRNS,
                             KC_TRNS, LT(2, KC_R), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),

    [2] = LAYOUT_split_4x6_5(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_HOME, KC_UP,   KC_END,  KC_TRNS, KC_TRNS,
        KC_TRNS, KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT, KC_TRNS,          KC_LEFT, KC_DOWN,   KC_UP, KC_RIGHT, KC_TRNS, KC_TRNS,
        KC_TRNS, G(KC_Z), G(KC_X), G(KC_C), G(KC_V), KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, QK_BOOT,
                             KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),

    [3] = LAYOUT_split_4x6_5(
        KC_TRNS, S(KC_1), S(KC_2), S(KC_3), S(KC_4), S(KC_5),          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, S(KC_7), S(KC_LBRC), S(KC_MINS), S(KC_RBRC), KC_GRV, S(KC_7), S(8), S(KC_SCLN), S(KC_BSLS), KC_BSLS, KC_TRNS,
        KC_TRNS, S(KC_6), S(KC_9), KC_EQL, S(KC_0), S(KC_SLSH),        S(KC_GRV), KC_MINS, KC_QUOT, S(KC_QUOT), KC_SCLN, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_LBRC, S(KC_EQL), KC_RBRC, KC_TRNS,       KC_TRNS, S(KC_COMM), KC_MINS, S(KC_DOT), KC_SLSH, KC_TRNS,
                             KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    )
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM =
    LAYOUT_split_4x6_5(
        'L', 'L', 'L', 'L', 'L', 'L',  'R', 'R', 'R', 'R', 'R', 'R',
        'L', 'L', 'L', 'L', 'L', 'L',  'R', 'R', 'R', 'R', 'R', 'R',
        'L', 'L', 'L', 'L', 'L', 'L',  'R', 'R', 'R', 'R', 'R', 'R',
        'L', 'L', 'L', 'L', 'L', 'L',  'R', 'R', 'R', 'R', 'R', 'R',
             '*', '*', '*', '*','*','*','*','*', '*', '*'
    );
