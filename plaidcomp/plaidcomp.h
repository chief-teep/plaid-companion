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

#pragma once

#include "quantum.h"

#define ortho_3x3( \
	k00, k01, k02, \
	k03, k04, k05, \
	k06, k07, k08  \
) \
{ \
	{ k00, k01, k02 }, \
	{ k03, k04, k05 }, \
	{ k06, k07, k08 }  \
}

// Used to create a keymap using only KC_ prefixed keys
#define KC_KEYMAP( \
	k00, k01, k02, \
	k03, k04, k05, \
	k06, k07, k08  \
	) \
	LAYOUT_plaid_comp( \
		KC_##k00, KC_##k01, KC_##k02, \
		KC_##k03, KC_##k04, KC_##k05, \
		KC_##k06, KC_##k07, KC_##k08  \
    )

#define KEYMAP LAYOUT_plaid_comp
#define LAYOUT_ortho_3x3 LAYOUT_plaid_comp
#define LAYOUT_kc_ortho_3x3 KC_KEYMAP
#define KC_LAYOUT_ortho_3x3 KC_KEYMAP
