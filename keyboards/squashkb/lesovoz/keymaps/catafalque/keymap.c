/*
Copyright 2022 Caleb Lightfoot
Copyright 2023 CRMSN_

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

                       █                  ▪▄█████            ▀██▄
                     ░░██                 ██▀░░███          ░░▀██                    █▄
  ▄██▀██•  ██▀███   ▪██████   ▀█████▄    ░███ ░░░█  ▄█████   ░███ . ████████ ▄████ ▀███  █▄████
 ███░░███ ░░░░░███ ░▀░███░  . ░░░░░██▄  █████▀█  • ░░░░░███  ░███  ███░░███ ░░███ ░███. ███▪░███
░███ ░░░ . ██▀███    ░███  •   ███████ ░░░███░      ███████ ▀░███ ░██  ░███  ░██  ░███ ░███████
░██▀   ██ ███▪░███ ▀ ░███ ███ ██ ░░███   ░███  ▀   ██▀░░██▀  ░██▀ ░███▪░███ •░███•░ ██ ░███░░░
░░██████ ░░████▀███  ░░█████ ░░███•████  ▀████    ░░▀███████ ▀███▄░░███████  ░░▀██████▄░░███▄██
 ░░░█▀░ . ░░░░░░█▀░    ░░░░░   ░░▀█░░░░  ░░░▀░      ░░░░░░░░ ░░░░░  ░░░░░██.  ░░░▀░░░░░• ░░█▀░░
     •                             •.           ▀                 ▀ •  ░███        ▪
                 .            .                                        █████         ▀
                      .                                              ░░▀█░░
                                     ..';:ccllllcc:;,..
                               ..;lxOKXWWWNXXKKKXNNNNNKOxl:.            ▪
                            .:d0NWWKOxoc:,'.......';:ldkKNWNOd:.
                         .:xXWN0xc,.                    .'cd0NWKx:.
                       .l0WW0o,.                            .,o0NW0l.
                     .oKWNx;.                                  .;xXWKl.
                    :0WNx,                                        'xNW0:
                  .dNWO;                                            ;OWNd.
                 'kWNd.                                              .dNWO'
                'OWXl.        .;.           ';'.           ';.        .oNWO'
               .kWNl        .c0WKo.       .oXWNO:.       ,dXWKl.       .oNWk.
              .oWWx.      .:0WN0XWKo'   .cKWNXNWNk;    ,xXWK0NW0c.      .kMWo.
              ,KMK,     .:OWNk;..oKWXd;:OWWk;.'c0WNx;;kNW0l..;kNWO:.     :XMK,
              oWWd.    ;kNWO:.    .oKWWWW0c.    .lKWWWW0l.    .:OWNO;    .kMWo
             .kMN:   ,xNW0c.       'kWWKl.        .dXMWx.       .:0WNk,   lWMk.
             .OMK, 'xXWKl.       .c0WXd.            ,kNW0c.       .c0WXd' :XMO.
             .OMXodXWKo.        ;OWNk,               .:OWNk;        .lKWXddXMO'
             .kMWWWXo.         'OMM0;                  :XMWk.         .oXWWWMO.
             .dWMNx'            'dXWKl.              .oKWKo.            'xNMWd.
              :XM0'               ,kNWO;           .c0WNd'               '0MNc
              .kMNl                .:0WNx'       .:OWNk,                 lNMk.
               ;XMK;                 .lKWKl.    ;kNW0:.                 ;KMX:
                lNM0,                  .dXW0c;cxNWKl.                  'OMNl
                .oNM0;                   ,kNWWWWXd.                   ,0MNl.
                 .cXMKc.                  .:0XKx'                   .cKWKc
                   ,OWNk,                   ...                    ,kNWk,
                    .cKWXd,                                      ,xXW0c.
                      .l0WNk:.                                .:kNW0l.
                        .:kNWKx:.                          ':xKWNOc.
                           'lkXWXOdc;..              ..;cdOXWNOo'
                              .:oOKNWNK0kxdoooooodxk0KNWNXOd:'
                                  .':ldxkOgKKKKKKgOkxdl:,.
                                         .uuQQQQQuu.                63 61 74 61 66 61 6C 71 75 65
*/

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
    KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,          KC_J,    KC_L,   KC_U,    KC_Y,    KC_SCLN,
  	KC_A,    KC_R,    KC_S,    KC_T,    KC_G,          KC_M,    KC_N,   KC_E,    KC_I,    KC_O,
  	KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,          KC_K,    KC_H,   KC_COMM, KC_DOT,  KC_SLSH,
  	KC_LCTL, KC_LGUI, KC_LALT, XXXXXXX, KC_BSPC,       XXXXXXX, KC_SPC, XXXXXXX, MO(1), MO(2)
    ),

    [1] = LAYOUT(
    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,          KC_6,     KC_7,     KC_8,     KC_9,     KC_0,
    KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,       KC_CIRC,  KC_AMPR,  KC_ASTR,  KC_EQL,   KC_MINS,
    KC_BSLS, KC_SCLN, KC_LCBR, KC_LBRC, KC_LPRN,       KC_RPRN,  KC_RBRC,  KC_RCBR,  KC_QUOT,  KC_GRV,
  	_______, _______, _______, _______, _______,       _______,  _______,  _______,  _______,  _______
    ),

    [2] = LAYOUT(
  	_______, _______, _______, _______, _______,       _______, _______, _______, _______, QK_BOOT,
  	_______, _______, _______, _______, _______,       KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______,
  	_______, _______, _______, _______, _______,       _______, _______, _______, _______, _______,
  	_______, _______, _______, _______, _______,       _______, _______, _______, _______, _______
    ),

    [3] = LAYOUT(
  	_______, _______, _______, _______, _______,       _______, _______, _______, _______, _______,
  	_______, _______, _______, _______, _______,       _______, _______, _______, _______, _______,
  	_______, _______, _______, _______, _______,       _______, _______, _______, _______, _______,
  	_______, _______, _______, _______, _______,       _______, _______, _______, _______, _______
    ),

};

// LED animation on startup
#define INITIAL_INTERVAL 800
#define INTERVAL_MUL 0.9
#define MINIMUM_INTERVAL 10
bool led1 = true;
int interval = INITIAL_INTERVAL;
void swap_led(void) {
  writePin(LED1, led1);
  writePin(LED2, !led1);
  led1 = !led1;
}
uint32_t led_anim(uint32_t trigger_time, void *cb_arg) {
  interval *= INTERVAL_MUL;
  if (interval < MINIMUM_INTERVAL) {
    writePin(LED1, false);
    writePin(LED2, false);
    return 0;
  } else {
    swap_led();
    return interval;
  }
}
void keyboard_post_init_user(void) {
  swap_led();
  defer_exec(INITIAL_INTERVAL, led_anim, NULL);
}

// Turn on LED2 when layer is changed
layer_state_t layer_state_set_user(layer_state_t state) {
  writePin(LED1, state);
  writePinLow(LED2);
  return state;
}

// Turn on LED1 when certain key is pressed
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case KC_ENT:
    case KC_BSPC:
    case KC_DEL:
      writePinLow(LED1);
      writePin(LED2, record->event.pressed);
      break;
  }
  return true;
}
