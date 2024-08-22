#include QMK_KEYBOARD_H
#include "keymap_swedish.h"

/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
        [0] = LAYOUT(
        KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5,                                       KC_6, KC_7, KC_8, KC_9, KC_0, KC_GRV,
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T,                                       KC_Y, KC_U, KC_I, KC_O, KC_P, SE_ARNG,
        KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G,                                      KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
        KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_LBRC,                     KC_RBRC, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, SE_PLUS,
                    KC_LALT, KC_LGUI, KC_SPC, LT(MO(1), KC_ESC),            KC_ENT, KC_BSPC, MO(2), KC_RGUI),

        [1] = LAYOUT(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, LSFT(KC_0), KC_TRNS,
        KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,                                 KC_F7, KC_F8, KC_F9, KC_F10, LSFT(KC_PSCR), KC_F12,
        KC_GRV, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC,                           KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_RPRN, SE_QUOT,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_NO, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE,
                    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                     KC_TRNS, MO(3), KC_TRNS, KC_TRNS),

        [2] = LAYOUT(
        KC_TRNS, LGUI(KC_1), LGUI(KC_2), LGUI(KC_3), LGUI(KC_4), LGUI(KC_5),        LGUI(KC_6), LGUI(KC_7), LGUI(KC_8), LGUI(KC_9), KC_NO, KC_GRV,
        KC_1, LSFT(KC_1), LSFT(KC_2), LSFT(KC_3), LSFT(KC_5), LSFT(KC_6),           KC_7, SE_GRV, SE_ACUT, KC_9, KC_0, KC_TRNS,
        KC_TRNS, KC_TRNS, SE_AT, SE_DLR, SE_PERC, SE_ASTR,                            RALT(KC_8), RALT(KC_9), LSA(KC_8), LSA(KC_9), KC_NO, KC_NO,
        KC_NO, KC_NO, SE_LABK, SE_RABK, SE_PIPE, KC_NO, KC_NO,              SE_LPRN, SE_LPRN, SE_RPRN, SE_BSLS, LSFT(KC_9), LSFT(KC_7), KC_TRNS,
                    KC_TRNS, KC_TRNS, TG(3), KC_TRNS,                       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

        [3] = LAYOUT(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                   KC_7, KC_8, KC_9, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                   KC_4, KC_5, KC_6, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                   KC_1, KC_2, KC_3, RGB_HUI, RGB_SAI, RGB_VAI,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                    KC_NO, KC_NO, KC_0, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD,
                     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)

