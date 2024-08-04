/* Copyright 2015-2021 Jack Humbert
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

/// S U P E R M E G A   A L T + T A B
bool is_alt_tab_active = false;

enum custom_keycodes {
  AT_L = QK_KB_0,
  AT_R,

};

/// L A Y E R S
enum preonic_layers {
  _BASE,
  _LOWER,
  _RAISE,
  _FN,
  _GAME,
  _I,
  _II,
  _III,
  _CFG
};

enum preonic_keycodes {
  BASE = SAFE_RANGE,
  LOWER,
  RAISE,
  FN,
  GAME,
  I,
  II,
  III,
  CFG
};

/// M A P S
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* BASE ∝
 *  -----------------------------------------------------------------------.
 * (  ∈ ))     |     |     |     |     |     |     |     |     |     |     |
 * |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
 * |     |     |     |     |     |     |     |     |     |     |     |     |
 * |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
 * |     |     |     |     |     |     |     |     |     |     |     |     |
 * |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
 * |     |     |     |     |     |     |     |     |     |     |     |     |
 * |-----------------------------------------------------------------------|
 * |     |     |     |     |           |                 |     |     |     |
 * `-----------------------------------------------------------------------'
 */
[_BASE] = LAYOUT_preonic_grid(
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
),

/* LOWER ∝
 *  -----------------------------------------------------------------------.
 * (  ∈ ))     |     |     |     |     |     |     |     |     |     |     |
 * |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
 * |     |     |     |     |     |     |     |     |     |     |     |     |
 * |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
 * |     |     |     |     |     |     |     |     |     |     |     |     |
 * |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
 * |     |     |     |     |     |     |     |     |     |     |     |     |
 * |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
 * |     |     |     |     |     |     |     |     |     |     |     |     |
 * `-----------------------------------------------------------------------'
 */
[_LOWER] = LAYOUT_preonic_grid(
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
),


/* RAISE ∝
 *  -----------------------------------------------------------------------.
 * (  ∈ ))     |     |     |     |     |     |     |     |     |     |     |
 * |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
 * |     |     |     |     |     |     |     |     |     |     |     |     |
 * |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
 * |     |     |     |     |     |     |     |     |     |     |     |     |
 * |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
 * |     |     |     |     |     |     |     |     |     |     |     |     |
 * |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
 * |     |     |     |     |     |     |     |     |     |     |     |     |
 * `-----------------------------------------------------------------------'
 */
[_RAISE] = LAYOUT_preonic_grid(
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
),

/* FN ∝
 *  -----------------------------------------------------------------------.
 * (  ∈ ))     |     |     |     |     |     |     |     |     |     |     |
 * |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
 * |     |     |     |     |     |     |     |     |     |     |     |     |
 * |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
 * |     |     |     |     |     |     |     |     |     |     |     |     |
 * |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
 * |     |     |     |     |     |     |     |     |     |     |     |     |
 * |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
 * |     |     |     |     |     |     |     |     |     |     |     |     |
 * `-----------------------------------------------------------------------'
 */
[_FN] = LAYOUT_preonic_grid(
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
),

/* GAME ∝
 *  -----------------------------------------------------------------------.
 * (  G  )     |     |     |     |     |     |     |     |     |     |     |
 * |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
 * |     |     |     |     |     |     |     |     |     |     |     |     |
 * |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
 * |     |     |     |     |     |     |     |     |     |     |     |     |
 * |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
 * |     |     |     |     |     |     |     |     |     |     |     |     |
 * |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
 * |     |     |     |     |     |     |     |     |     |     |     |     |
 * `-----------------------------------------------------------------------'
 */
[_GAME] = LAYOUT_preonic_grid(
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
),


/* I ∝
 *  -----------------------------------------------------------------------.
 * (  ∈ ))     |     |     |     |     |     |     |     |     |     |     |
 * |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
 * |     |     |     |     |     |     |     |     |     |     |     |     |
 * |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
 * |     |     |     |     |     |     |     |     |     |     |     |     |
 * |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
 * |     |     |     |     |     |     |     |     |     |     |     |     |
 * |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
 * |     |     |     |     |     |     |     |     |     |     |     |     |
 * `-----------------------------------------------------------------------'
 */
[_I] = LAYOUT_preonic_grid(
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
),
/* II ∝
 *  -----------------------------------------------------------------------.
 * (  ∈ ))     |     |     |     |     |     |     |     |     |     |     |
 * |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
 * |     |     |     |     |     |     |     |     |     |     |     |     |
 * |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
 * |     |     |     |     |     |     |     |     |     |     |     |     |
 * |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
 * |     |     |     |     |     |     |     |     |     |     |     |     |
 * |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
 * |     |     |     |     |     |     |     |     |     |     |     |     |
 * `-----------------------------------------------------------------------'
 */
[_II] = LAYOUT_preonic_grid(
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
),

/* III ∝
 *  -----------------------------------------------------------------------.
 * (  ∈ ))     |     |     |     |     |     |     |     |     |     |     |
 * |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
 * |     |     |     |     |     |     |     |     |     |     |     |     |
 * |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
 * |     |     |     |     |     |     |     |     |     |     |     |     |
 * |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
 * |     |     |     |     |     |     |     |     |     |     |     |     |
 * |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
 * |     |     |     |     |     |     |     |     |     |     |     |     |
 * `-----------------------------------------------------------------------'
 */
[_III] = LAYOUT_preonic_grid(
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
),

/* CFG ∝
 *  -----------------------------------------------------------------------.
 * (  ∈ ))     |     |     |     |     |     |     |     |     |     |     |
 * |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
 * |     |     |     |     |     |     |     |     |     |     |     |     |
 * |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
 * |     |     |     |     |     |     |     |     |     |     |     |     |
 * |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
 * |     |     |     |     |     |     |     |     |     |     |     |     |
 * |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
 * |     |     |     |     |     |     |     |     |     |     |     |     |
 * `-----------------------------------------------------------------------'
 */
[_CFG] = LAYOUT_preonic_grid(
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
),

};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [_BASE] =   { ENCODER_CCW_CW(KC_VOLU, KC_VOLD) },
    [_LOWER] =   { ENCODER_CCW_CW(_______, _______) },
    [_RAISE] =   { ENCODER_CCW_CW(_______, _______) },
    [_FN] =   { ENCODER_CCW_CW(_______, _______) },
    [_GAME] =   { ENCODER_CCW_CW(_______, _______) },
    [_I] =   { ENCODER_CCW_CW(_______, _______) },
    [_II] =   { ENCODER_CCW_CW(_______, _______) },
    [_III] =   { ENCODER_CCW_CW(_______, _______) },
    [_CFG] =   { ENCODER_CCW_CW(_______, _______) },

};
#endif

/// key processing
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {               // This will do most of the grunt work with the keycodes.
    case AT_R:
      if (record->event.pressed) {
        if (!is_alt_tab_active) {
          is_alt_tab_active = true;
          register_code(KC_LALT);
        }
        register_code(KC_TAB);
      } else {
        unregister_code(KC_TAB);
      }
      break;
      case AT_L:
        if (record->event.pressed) {
          if (!is_alt_tab_active) {
            is_alt_tab_active = true;
            register_code(KC_LALT);
          }
          register_code(KC_LSFT);
          register_code(KC_TAB);
        } else {
          unregister_code(KC_TAB);
          unregister_code(KC_LSFT);
        }
        break;
  }
  return true;
}

void matrix_scan_user(void) {
    switch (get_highest_layer(layer_state)) {
        case 0:
            if (is_alt_tab_active) {
                unregister_code(KC_LALT);
                is_alt_tab_active = false;
            }
            break;
        default:
            break;
    }
}
