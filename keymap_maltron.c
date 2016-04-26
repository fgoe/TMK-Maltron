#include "keymap_common.h"
// Maltron DE
const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty */
    KEYMAP(
          F1,   F2,   F3,  F4,  F5,  F6,   ESC, NUMLOCK, KP_7,   KP_8,     KP_9,    KP_SLASH, PAUS,  F7,   F8,   F9,  F10,  F11,  F12,  \
           1,    2,    3,   4,   5,   6,  CAPS,     EQL, KP_4,   KP_5,     KP_6, KP_ASTERISK, VOLU,   7,    8,    9,    0, MINS,  EQL,  \
         TAB,    Q,    W,   E,   R,   T,  PSCR,    SLCK, KP_1,   KP_2,     KP_3,    KP_MINUS, VOLD,   Y,    U,    I,    O,    P, LBRC,  \
        LCTL,    A,    S,   D,   F,   G,  PAUS,     INS, KP_0, KP_DOT, KP_ENTER,     KP_PLUS, MUTE,   H,    J,    K,    L, SCLN, RSFT,  \
        LSFT,    Z,    X,   C,   V,   B,   DEL,    HOME,  END,             PGUP,        PGDN,  DEL,   N,    M, COMM,  DOT, SLSH, RSFT,  \
              RALT, LEFT,RGHT, FN0,       BSPC,     DEL, LALT,             RALT,         ENT,  SPC,       FN0,   UP, DOWN, NUBS, \
						         LCTL,             RCTL ),
    /* 1: media keys */
    KEYMAP(
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     \
        TRNS,TRNS,DOWN,RGHT,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     \
             TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,TRNS,     TRNS,TRNS,TRNS,     TRNS,TRNS,TRNS,TRNS,          \
						TRNS,     TRNS ),
};
const uint16_t PROGMEM fn_actions[] = {
    /* QWERTZ Layout */
    [0] = ACTION_LAYER_MOMENTARY(1),  // to Fn overlay
};

