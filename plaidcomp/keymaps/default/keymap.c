/* Copyright 2019 Takuya Urakawa (dm9records.com)
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


enum plaidcomp_layers {
  _MAIN,
  _LOWER,
  _RAISE,
  _ADJUST
};

enum plaidcomp_keycodes {
  MAIN = SAFE_RANGE,
};

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


[_MAIN] = LAYOUT_plaid_comp(
    KC_MPRV, KC_MPLY, KC_MNXT,
    _______, _______, _______,
    KC_MUTE, LOWER  , RAISE
),



[_LOWER] = LAYOUT_plaid_comp(
    KC_ACL0, KC_ACL1, KC_ACL2,
    _______, _______, _______,
    KC_MUTE, _______, _______
),



[_RAISE] = LAYOUT_plaid_comp(
    KC_BTN2, KC_MS_U, KC_BTN1,
    KC_MS_L, KC_MS_D, KC_MS_R,
    KC_MUTE, _______, _______
),



[_ADJUST] = LAYOUT_plaid_comp(
    _______, _______, _______,
    _______, _______, _______,
    _______, _______, _______
)

}

/* Rotary encoder control */

bool encoder_update_user(uint8_t index, bool clockwise) {

    if (index == 0) {
        tap_code(KC_VOLU);
    } else {
        tap_code(KC_VOLD);
    }
    return true;
}