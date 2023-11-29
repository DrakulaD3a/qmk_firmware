// Copyright 2022 beekeeb
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H
#include "keymap_czech.h"

enum layers {
    DefaultLayer,
    NumLayer,
    NavLayer,
    CzechLayer,
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │ | │ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │ + │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Esc│ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │ = │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │ _ │ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │ - │
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │Num├───┐           ┌───┤Nav│
      *               └───┤Tab├───┐   ┌───┤Ent├───┘
      *                   └───┤Spc│   │Bsp├───┘
      *                       └───┘   └───┘
      */
    [DefaultLayer] = LAYOUT_split_3x6_3(
        KC_PIPE, KC_Q,         KC_W,         KC_E,         KC_R,         KC_T,          KC_Y,    KC_U,         KC_I,         KC_O,         KC_P,            KC_PPLS,
        KC_ESC,  GUI_T(KC_A),  ALT_T(KC_S),  CTL_T(KC_D),  LSFT_T(KC_F), KC_G,          KC_H,    RSFT_T(KC_J), CTL_T(KC_K),  ALT_T(KC_L),  GUI_T(KC_SCLN),  KC_PEQL,
        KC_UNDS, KC_Z,         KC_X,         KC_C,         KC_V,         KC_B,          KC_N,    KC_M,         KC_COMM,      KC_DOT,       KC_SLSH,         KC_PMNS,

                                             MO(NumLayer), KC_TAB, KC_SPC,                  KC_BSPC,  KC_ENT,  MO(NavLayer)
    ),

     /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │ | │ 1 │ 2 │ 3 │ 4 │ 5 │       │ 6 │ 7 │ 8 │ 9 │ 0 │ ` │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Esc│ ! │ @ │ # │ $ │ % │       │ ^ │ & │ * │ \ │ : │ " │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │ _ │ ~ │ < │ { │ [ │ ( │       │ ) │ ] │ } │ > │ ? │ ' │
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │Num├───┐           ┌───┤Nav│
      *               └───┤Tab├───┐   ┌───┤Ent├───┘
      *                   └───┤Spc│   │Bsp├───┘
      *                       └───┘   └───┘
      */
    [NumLayer] = LAYOUT_split_3x6_3(
        KC_PIPE, KC_1,         KC_2,         KC_3,         KC_4,         KC_5,          KC_6,    KC_7,         KC_8,         KC_9,         KC_0,            KC_GRV,
        KC_ESC,  KC_EXLM,      KC_AT,        KC_HASH,      KC_DLR,       KC_PERC,       KC_CIRC, KC_AMPR,      KC_ASTR,      KC_BSLS,      KC_COLN,         KC_DQUO,
        KC_UNDS, KC_TILD,      KC_LABK,      KC_LCBR,      KC_LBRC,      KC_LPRN,       KC_RPRN, KC_RBRC,      KC_RCBR,      KC_RABK,      KC_QUES,         KC_QUOT,

                                                  _______, KC_TAB, KC_SPC,                  KC_BSPC,  KC_ENT,  MO(CzechLayer)
    ),

     /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │ 󰃠 │F1 │F2 │F3 │F4 │F5 │       │F6 │F7 │F8 │F9 │F10│ 󰝝 │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Esc│F11│   │   │   │   │       │ ← │ ↓ │ ↑ │ → │F12│ 󰝟 │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │ 󰃞 │   │   │   │   │ 󰚥 │       │ 󰉁 │   │   │   │   │ 󰝞 │
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │Num├───┐           ┌───┤Nav│
      *               └───┤Tab├───┐   ┌───┤Ent├───┘
      *                   └───┤Spc│   │Bsp├───┘
      *                       └───┘   └───┘
      */
    [NavLayer] = LAYOUT_split_3x6_3(
        KC_BRIU, KC_F1,         KC_F2,        KC_F3,        KC_F4,        KC_F5,        KC_F6,   KC_F7,        KC_F8,        KC_F9,        KC_F10,          KC_VOLU,
        KC_ESC,  KC_F11,       _______,      _______,      _______,      _______,       KC_LEFT, KC_DOWN,      KC_UP,        KC_RIGHT,     KC_F12,          KC_MUTE,
        KC_BRID, _______,      _______,      _______,      _______,      QK_BOOT,       QK_MAKE, _______,      _______,      _______,      _______,         KC_VOLD,

                                           MO(CzechLayer), KC_TAB, KC_SPC,                  KC_BSPC,  KC_ENT,  _______
    ),

     /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │ | │   │ é │ ě │ ř │ T │       │ ý │ U │ í │ O │   │ + │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Esc│ á │ š │ D │   │   │       │   │   │   │   │ ; │ = │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │ _ │ ž │   │ č │   │   │       │ N │   │ ´ │ ˇ │ / │ - │
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │Num├───┐           ┌───┤Nav│
      *               └───┤Tab├───┐   ┌───┤Ent├───┘
      *                   └───┤Spc│   │Bsp├───┘
      *                       └───┘   └───┘
      */
    [CzechLayer] = LAYOUT_split_3x6_3(
        KC_PIPE, _______,      CZ_EACU,      CZ_ECAR,      CZ_RCAR,      KC_T,          CZ_YACU, KC_U,         CZ_IACU,      KC_O,         _______,         KC_PPLS,
        KC_ESC,  CZ_AACU,      CZ_SCAR,      KC_D,         _______,      _______,       _______, _______,      _______,      _______,      KC_SCLN,         KC_PEQL,
        KC_UNDS, CZ_ZCAR,      _______,      CZ_CCAR,      _______,      _______,       KC_N,    _______,      CZ_ACUT,      CZ_CARN,      KC_SLSH,         KC_PMNS,

                                                  _______, KC_TAB, KC_SPC,                  KC_BSPC,  KC_ENT,  _______
    ),

};
