#include QMK_KEYBOARD_H
#include "split_util.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_ergodox(KC_EQL, KC_1, KC_2, KC_3, KC_4, KC_5, KC_LBRC, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, TT(1), KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, TO(0), KC_GRV, KC_LCTL, KC_LGUI, KC_LALT, LT(2,KC_ESC), KC_HOME, KC_END, KC_INS, KC_SPC, KC_DEL, KC_NO, KC_RBRC, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, TT(1), KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, LCA_T(KC_CAPS), KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_RALT, TT(2), KC_RCTL, KC_NO, KC_PENT, KC_APP, KC_NO, KC_PGUP, KC_PGDN, KC_BSPC, KC_ENT),
	[1] = LAYOUT_ergodox(KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_TRNS, KC_EXLM, KC_AT, KC_LCBR, KC_RCBR, KC_PIPE, KC_TRNS, KC_TRNS, KC_HASH, KC_DLR, KC_LPRN, KC_RPRN, KC_GRV, KC_TRNS, KC_PERC, KC_CIRC, KC_LBRC, KC_RBRC, KC_TILD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS, KC_TRNS, KC_UP, KC_P7, KC_P8, KC_P9, KC_ASTR, KC_TRNS, KC_DOWN, KC_P4, KC_P5, KC_P6, KC_PLUS, KC_TRNS, KC_TRNS, KC_AMPR, KC_P1, KC_P2, KC_P3, KC_BSLS, KC_TRNS, KC_P0, KC_DOT, KC_TRNS, KC_EQL, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[2] = LAYOUT_ergodox(KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_TRNS, KC_WH_U, KC_MS_U, KC_WH_D, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_R, KC_TRNS, KC_TRNS, KC_TRNS, KC_BTN1, KC_BTN3, KC_BTN2, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_PSCR, KC_TRNS, KC_TRNS, KC_PGUP, KC_UP, KC_PGDN, KC_VOLU, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_VOLD, KC_TRNS, KC_TRNS, KC_MPLY, KC_MSTP, KC_MPRV, KC_MNXT, KC_MUTE, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};

bool get_tapping_force_hold(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(2,KC_ESC):
            return true;
        default:
            return false;
    }
}

#ifdef OLED_DRIVER_ENABLE
void oled_task_user(void) {
    if (!isLeftHand){
    // Host Keyboard Layer Status
        oled_write_P(PSTR("Layer: "), false);

        switch (get_highest_layer(layer_state)) {
            case 0:
                oled_write_P(PSTR("Default\n\n"), false);
                break;
            case 1:
                oled_write_P(PSTR("Symbol\n\n"), false);
                break;
            case 2:
                oled_write_P(PSTR("Fn\n\n"), false);
                break;
            default:
                // Or use the write_ln shortcut over adding '\n' to the end of your string
                oled_write_ln_P(PSTR("Undefined"), false);
        }

        // Host Keyboard LED Status
        led_t led_state = host_keyboard_led_state();
        oled_write_P(led_state.num_lock ? PSTR("NUM ") : PSTR("    "), false);
        oled_write_P(led_state.caps_lock ? PSTR("CAP ") : PSTR("    "), false);
        oled_write_P(led_state.scroll_lock ? PSTR("SCR ") : PSTR("    "), false);
    }
}
#endif
