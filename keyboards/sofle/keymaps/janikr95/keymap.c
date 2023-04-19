#include QMK_KEYBOARD_H

enum sofle_layers {
    /* _M_XYZ = Mac Os, _W_XYZ = Win/Linux */
    _BASE,
    _DVORAK,
    _PUNCT,
    _MEDIA,
    _ADJUST
};

enum custom_keycodes { KC_BASE = SAFE_RANGE, KC_PUNCT, KC_PRVWD, KC_NXTWD, KC_LSTRT, KC_LEND, KC_DLINE };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE]   = LAYOUT(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_EQL, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_DEL, KC_BSPC, LSFT_T(KC_A), KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, RSFT_T(KC_SCLN), KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_MUTE, KC_NO, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_LGUI, KC_LALT, KC_LCTL, LT(2,KC_SPC), MO(3), KC_ENT, LT(2,KC_SPC), KC_RALT, LCA_T(KC_BSPC), KC_RGUI),
	[_DVORAK] = LAYOUT(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_EQL, KC_TAB, KC_QUOT, KC_COMM, KC_DOT, KC_P, KC_Y, KC_F, KC_G, KC_C, KC_R, KC_L, KC_DEL, KC_BSPC, LSFT_T(KC_A), KC_O, KC_E, KC_U, KC_I, KC_D, KC_H, KC_T, KC_N, RSFT_T(KC_S), KC_SLSH, KC_LSFT, KC_SCLN, KC_Q, KC_J, KC_K, KC_X, KC_MUTE, KC_NO, KC_B, KC_M, KC_W, KC_V, KC_Z, KC_RSFT, KC_LGUI, KC_LALT, KC_LCTL, LT(2,KC_SPC), MO(3), KC_ENT, LT(2,KC_SPC), KC_RALT, LCA_T(KC_BSPC), KC_RGUI),
	[_PUNCT] = LAYOUT(KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_AMPR, KC_AT, KC_EQL, KC_ASTR, KC_MINS, KC_UNDS, KC_NO, LCTL(KC_LEFT), KC_UP, LCTL(KC_RGHT), LCTL(KC_BSPC), KC_DEL, KC_NUHS, KC_LBRC, KC_LT, KC_LPRN, KC_LCBR, KC_EXLM, KC_NO, KC_LEFT, KC_DOWN, KC_RGHT, LCTL(KC_DEL), KC_NO, KC_TRNS, KC_DLR, KC_PERC, KC_CIRC, KC_HASH, KC_QUES, KC_TRNS, KC_NO, KC_PGUP, KC_HOME, KC_INS, KC_END, KC_PGDN, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS),
	[_MEDIA] = LAYOUT(KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_GRV, KC_GRV, LCTL(KC_X), LCTL(KC_C), LCTL(KC_V), LSFT(KC_F6), KC_NO, KC_P7, KC_P8, KC_P9, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, LCTL(KC_Y), CW_TOGG, KC_NO, KC_P4, KC_P5, KC_P6, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_MPRV, KC_MPLY, KC_MNXT, KC_ENT, KC_TRNS, KC_TRNS, KC_NO, KC_P1, KC_P2, KC_P3, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P0, KC_TRNS, KC_TRNS),
	[_ADJUST] = LAYOUT(KC_NO, DF(0), DF(1), TO(0), TO(1), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_BTN1, KC_MS_U, KC_BTN2, KC_TRNS, KC_NO, KC_NO, KC_RBRC, KC_GT, KC_RPRN, KC_RCBR, KC_CAPS, KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_R, KC_TRNS, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};

#ifdef OLED_ENABLE

static void render_logo(void) {
    static const char PROGMEM qmk_logo[] = {0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94, 0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4, 0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4, 0};

    oled_write_P(qmk_logo, false);
}

static void print_status_narrow(void) {
    // Print current mode
    // oled_write_ln_P(PSTR(""), false);
    // if (keymap_config.swap_lctl_lgui) {
    //     oled_write_ln_P(PSTR("MAC"), false);
    // } else {
    //     oled_write_ln_P(PSTR("WIN"), false);
    // }

    // oled_write_P(PSTR("\n\n"), false);
    oled_write_ln_P(PSTR("LAYER"), false);
    if (get_highest_layer(layer_state) == _BASE || get_highest_layer(layer_state) == _DVORAK) {
        switch (get_highest_layer(default_layer_state)) {
            case _BASE:
                oled_write_P(PSTR("Qwrty\n"), false);
                break;
            case _DVORAK:
                oled_write_P(PSTR("Dvrk\n"), false);
                break;
            default:
                oled_write_ln_P(PSTR("Undef"), false);
        }
    } else {
        switch (get_highest_layer(layer_state)) {
            case _PUNCT:
                oled_write_P(PSTR("Punct\n"), false);
                break;
            case _MEDIA:
                oled_write_P(PSTR("Media\n"), false);
                break;
            case _ADJUST:
                oled_write_P(PSTR("Adj\n"), false);
                break;
            default:
                oled_write_ln_P(PSTR("Undef"), false);
        }
    }

    oled_write_P(PSTR("\n\n"), false);
    led_t led_usb_state = host_keyboard_led_state();
    oled_write_ln_P(PSTR("CPSLK"), led_usb_state.caps_lock);
    if (is_caps_word_on()) {
        oled_write_ln_P(PSTR("CWord"), false);
    }
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (is_keyboard_master()) {
        return OLED_ROTATION_270;
    }
    return rotation;
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        print_status_narrow();
    } else {
        render_logo();
    }
    return false;
}

#endif

layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state, _PUNCT, _MEDIA, _ADJUST);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_BASE:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_BASE);
            }
            return false;
        case KC_PUNCT:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_PUNCT);
            }
            return false;
        case KC_PRVWD:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    register_mods(mod_config(MOD_LALT));
                    register_code(KC_LEFT);
                } else {
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_LEFT);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LALT));
                    unregister_code(KC_LEFT);
                } else {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_LEFT);
                }
            }
            break;
        case KC_NXTWD:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    register_mods(mod_config(MOD_LALT));
                    register_code(KC_RIGHT);
                } else {
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_RIGHT);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LALT));
                    unregister_code(KC_RIGHT);
                } else {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_RIGHT);
                }
            }
            break;
        case KC_LSTRT:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    // CMD-arrow on Mac, but we have CTL and GUI swapped
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_LEFT);
                } else {
                    register_code(KC_HOME);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_LEFT);
                } else {
                    unregister_code(KC_HOME);
                }
            }
            break;
        case KC_LEND:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    // CMD-arrow on Mac, but we have CTL and GUI swapped
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_RIGHT);
                } else {
                    register_code(KC_END);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_RIGHT);
                } else {
                    unregister_code(KC_END);
                }
            }
            break;
        case KC_DLINE:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_BSPC);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_BSPC);
            }
            break;
        case KC_COPY:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_C);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_C);
            }
            return false;
        case KC_PASTE:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_V);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_V);
            }
            return false;
        case KC_CUT:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_X);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_X);
            }
            return false;
            break;
        case KC_UNDO:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_Z);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_Z);
            }
            return false;
    }
    return true;
}

#ifdef ENCODER_ENABLE

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    } else if (index == 1) {
        if (clockwise) {
            tap_code(KC_PGDN);
        } else {
            tap_code(KC_PGUP);
        }
    }
    return true;
}

#endif
