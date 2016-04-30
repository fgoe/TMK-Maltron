#include "keymap_common.h"
// Maltron DE
const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty */
    KEYMAP(
          F1,   F2,   F3,  F4,  F5,  F6,   ESC, NUMLOCK, KP_7,   KP_8,     KP_9,    KP_SLASH, WAKE,  F7,   F8,   F9,  F10,  F11,  F12,  \
           1,    2,    3,   4,   5,   6,  CAPS,     EQL, KP_4,   KP_5,     KP_6, KP_ASTERISK, VOLU,   7,    8,    9,    0, MINS,  EQL,  \
         TAB,    Q,    W,   E,   R,   T,  PSCR,    SLCK, KP_1,   KP_2,     KP_3,    KP_MINUS, VOLD,   Y,    U,    I,    O,    P, LBRC,  \
        LCTL,    A,    S,   D,   F,   G,  PAUS,     INS, KP_0, KP_DOT, KP_ENTER,     KP_PLUS, MUTE,   H,    J,    K,    L, SCLN, QUOT,  \
        LSFT,    Z,    X,   C,   V,   B,   DEL,    HOME,  END,             PGUP,        PGDN,  DEL,   N,    M, COMM,  DOT, SLSH, RSFT,  \
              NUBS, LEFT,RGHT, FN0,       BSPC,     DEL, LALT,             RALT,         ENT,  SPC,       FN0,   UP, DOWN, NUBS, \
						         LCTL,             RCTL ),
    /* 1: media keys */
    KEYMAP(
        TRNS,     TRNS,    TRNS,TRNS,TRNS,        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,SLEP,       TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     \
        TRNS,     TRNS,    TRNS,TRNS,TRNS,        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,       TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     \
        TRNS,     TRNS,    TRNS,TRNS,TRNS,        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,       TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     \
        TRNS,     FN10,    FN11,FN12,FN13,  NONUS_HASH,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,       FN15,FN16,FN17,FN18,FN19,TRNS,     \
        TRNS,     TRNS,    TRNS,TRNS,TRNS,        FN20,TRNS,TRNS,TRNS,     TRNS,TRNS,TRNS,KP_ASTERISK,TRNS,TRNS,TRNS,TRNS,TRNS,     \
                  TRNS,    TRNS,TRNS,TRNS,             TRNS,TRNS,TRNS,     TRNS,TRNS,TRNS,       TRNS,TRNS,TRNS,TRNS,          \
				 		                 TRNS,     TRNS ),
};
const uint16_t PROGMEM fn_actions[] = {
    /* QWERTZ Layout */
    [0] = ACTION_LAYER_MOMENTARY(1),  // to Fn overlay
    [10]  =  ACTION_MODS_KEY(MOD_RALT,          KC_8),       // FN10  = RAlt+8 = [
    [11]  =  ACTION_MODS_KEY(MOD_RALT,          KC_9),       // FN11  = RAlt+9 = ]
    [12]  =  ACTION_MODS_KEY(MOD_RALT,          KC_7),       // FN12  = RAlt+7 = {
    [13]  =  ACTION_MODS_KEY(MOD_RALT,          KC_0),       // FN13  = RAlt+0 = }
    [14]  =  ACTION_MODS_KEY(MOD_LSFT,          KC_NUBS),    // FN14  = LSft+< = >
    [15]  =  ACTION_MODS_KEY(MOD_RALT,          KC_0),       // FN15  = RAlt+0 = =
    [16]  =  ACTION_MODS_KEY(MOD_LSFT,          KC_7),       // FN16  = RAlt+0 = /
    [17]  =  ACTION_MODS_KEY(MOD_RALT,          KC_MINS),    // FN17  = RAlt+0 = \"
    [18]  =  ACTION_MODS_KEY(MOD_LSFT,          KC_8),       // FN18  = RAlt+0 = (
    [19]  =  ACTION_MODS_KEY(MOD_LSFT,          KC_9),       // FN19  = RAlt+0 = )
    [20]  =  ACTION_MODS_KEY(MOD_RALT,          KC_NUBS),    // FN20  = RAlt+0 = |
};

