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
        CZ_PIPE, CZ_Q,         CZ_W,         CZ_E,         CZ_R,         CZ_T,          CZ_Y,    CZ_U,         CZ_I,         CZ_O,         CZ_P,            CZ_PLUS,
        KC_ESC,  GUI_T(CZ_A),  ALT_T(CZ_S),  CTL_T(CZ_D),  LSFT_T(CZ_F), CZ_G,          CZ_H,    RSFT_T(CZ_J), CTL_T(CZ_K),  ALT_T(CZ_L),  GUI_T(CZ_SCLN),  CZ_EQL,
        CZ_UNDS, CZ_Z,         CZ_X,         CZ_C,         CZ_V,         CZ_B,          CZ_N,    CZ_M,         CZ_COMM,      CZ_DOT,       CZ_SLSH,         CZ_MINS,

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
        CZ_PIPE, CZ_1,         CZ_2,         CZ_3,         CZ_4,         CZ_5,          CZ_6,    CZ_7,         CZ_8,         CZ_9,         CZ_0,            CZ_GRV,
        KC_ESC,  CZ_EXLM,      CZ_AT,        CZ_HASH,      CZ_DLR,       CZ_PERC,       CZ_CIRC, CZ_AMPR,      CZ_ASTR,      CZ_BSLS,      CZ_COLN,         CZ_DQUO,
        CZ_UNDS, CZ_TILD,      CZ_LABK,      CZ_LCBR,      CZ_LBRC,      CZ_LPRN,       CZ_RPRN, CZ_RBRC,      CZ_RCBR,      CZ_RABK,      CZ_QUES,         CZ_QUOT,

                                                  _______, KC_TAB, KC_SPC,                  KC_BSPC,  KC_ENT,  MO(CzechLayer)
    ),

     /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │ 󰃠 │F1 │F2 │F3 │F4 │F5 │       │F6 │F7 │F8 │F9 │F10│ 󰝝 │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Esc│F11│   │   │   │   │       │ ← │ ↓ │ ↑ │ → │F12│ 󰝟 │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │ 󰃞 │   │   │   │   │   │       │   │   │   │   │   │ 󰝞 │
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
        KC_BRID, _______,      _______,      _______,      _______,      _______,       _______, _______,      _______,      _______,      _______,         KC_VOLD,

                                           MO(CzechLayer), KC_TAB, KC_SPC,                  KC_BSPC,  KC_ENT,  _______
    ),

     /*
      * TODO: Háčky a čárky u T, U, O, D a N
      *
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
        CZ_PIPE, _______,      CZ_EACU,      CZ_ECAR,      CZ_RCAR,      KC_T,          CZ_YACU, KC_U,         CZ_IACU,      KC_O,         _______,         CZ_PLUS,
        KC_ESC,  CZ_AACU,      CZ_SCAR,      KC_D,         _______,      _______,       _______, _______,      _______,      _______,      _______,         CZ_EQL,
        CZ_UNDS, CZ_ZCAR,      _______,      CZ_CCAR,      _______,      _______,       KC_N,    _______,      CZ_ACUT,      CZ_CARN,      _______,         CZ_MINS,

                                                  _______, KC_TAB, KC_SPC,                  KC_BSPC,  KC_ENT,  _______
    ),

};
