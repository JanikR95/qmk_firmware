#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_EQL, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_DEL, KC_BSPC, LSFT_T(KC_A), KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, RSFT_T(KC_SCLN), KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_MUTE, KC_NO, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_LGUI, KC_LALT, KC_LCTL, LT(2,KC_SPC), MO(4), KC_ENT, LT(3,KC_SPC), KC_RALT, LCA_T(KC_BSPC), KC_RGUI),
	[1] = LAYOUT(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_EQL, KC_TAB, KC_QUOT, KC_COMM, KC_DOT, KC_P, KC_Y, KC_F, KC_G, KC_C, KC_R, KC_L, KC_DEL, KC_BSPC, LSFT_T(KC_A), KC_O, KC_E, KC_U, KC_I, KC_D, KC_H, KC_T, KC_N, RSFT_T(KC_S), KC_SLSH, KC_LSFT, KC_SCLN, KC_Q, KC_J, KC_K, KC_X, KC_MUTE, KC_NO, KC_B, KC_M, KC_W, KC_V, KC_Z, KC_RSFT, KC_LGUI, KC_LALT, KC_LCTL, LT(2,KC_SPC), MO(4), KC_ENT, LT(3,KC_SPC), KC_RALT, LCA_T(KC_BSPC), KC_RGUI),
	[2] = LAYOUT(KC_ESC, KC_0, KC_9, KC_8, KC_7, KC_6, KC_5, KC_4, KC_3, KC_2, KC_1, KC_EQL, KC_TAB, KC_P, KC_O, KC_I, KC_U, KC_Y, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_DEL, KC_BSPC, KC_SCLN, KC_L, KC_K, KC_J, KC_H, KC_H, KC_J, KC_K, KC_L, RSFT_T(KC_SCLN), KC_QUOT, KC_LSFT, KC_SLSH, KC_DOT, KC_COMM, KC_M, KC_N, KC_MUTE, KC_NO, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_ENT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[3] = LAYOUT(KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_AMPR, KC_AT, KC_EQL, KC_ASTR, KC_MINS, KC_UNDS, KC_NO, LCTL(KC_LEFT), KC_UP, LCTL(KC_RGHT), LCTL(KC_BSPC), KC_DEL, KC_NUHS, KC_LBRC, KC_LT, KC_LPRN, KC_LCBR, KC_EXLM, KC_NO, KC_LEFT, KC_DOWN, KC_RGHT, LCTL(KC_DEL), KC_NO, KC_TRNS, KC_DLR, KC_PERC, KC_CIRC, KC_HASH, KC_QUES, KC_TRNS, KC_NO, KC_PGUP, KC_HOME, KC_INS, KC_END, KC_PGDN, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS),
	[4] = LAYOUT(KC_NO, KC_NO, KC_NO, LALT(KC_F4), KC_NO, KC_NO, KC_NO, KC_NUM, KC_PSLS, KC_PAST, KC_PMNS, KC_F12, KC_GRV, KC_GRV, LCTL(KC_X), LCTL(KC_C), LCTL(KC_V), LSFT(KC_F6), KC_NO, KC_P7, KC_P8, KC_P9, KC_PPLS, KC_DEL, KC_TRNS, KC_NO, KC_NO, RCS(KC_J), LCTL(KC_Y), CW_TOGG, KC_NO, KC_P4, KC_P5, KC_P6, KC_PCMM, KC_BSPC, KC_TRNS, KC_NO, KC_MPRV, KC_MPLY, KC_MNXT, KC_ENT, KC_TRNS, KC_TRNS, KC_NO, KC_P1, KC_P2, KC_P3, KC_PEQL, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P0, KC_P0, KC_PDOT, KC_COMM),
	[5] = LAYOUT(KC_NO, DF(0), DF(1), TO(0), TO(1), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_BTN1, KC_MS_U, KC_BTN2, KC_TRNS, KC_NO, KC_NO, KC_RBRC, KC_GT, KC_RPRN, KC_RCBR, KC_CAPS, KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_R, KC_TRNS, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[6] = LAYOUT(KC_NO, DF(0), DF(1), TO(0), TO(1), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_BTN1, KC_MS_U, KC_BTN2, KC_TRNS, KC_NO, KC_NO, KC_RBRC, KC_GT, KC_RPRN, KC_RCBR, KC_CAPS, KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_R, KC_TRNS, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)



