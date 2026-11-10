/*
 * keymap xyue: iteration from yuex
 *
 * Keymap framekwork: tmk_core/doc/keymap.md
 * Keycode available: tmk_core/doc/keycode.txt
 */
#include "keymap_common.h"


#ifdef KEYMAP_SECTION_ENABLE
const action_t fn_actions[] __attribute__ ((section (".keymap.fn_actions"))) = {
#else
const action_t fn_actions[] PROGMEM = {
#endif
    [0]  = ACTION_KEY(KC_NO),
    [1]  = ACTION_LAYER_TAP_KEY(1, KC_SPACE),
    [2]  = ACTION_LAYER_MOMENTARY(2),
    [3]  = ACTION_MODS_ONESHOT(MOD_LSFT),
    [4]  = ACTION_MODS_ONESHOT(MOD_RSFT),
};


#ifdef KEYMAP_SECTION_ENABLE
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
#else
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
#endif
    /* xyue's default layer
     * ,------------------------------------------------------------.
     * | ` | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0 | - | = |DEL|BSPC|
     * |------------------------------------------------------------|
     * | Tab | Q | W | E | R | T | Y | U | I | O | P | [ | ] |    \ |
     * |------------------------------------------------------------|
     * | Ctrl | A | S | D | F | G | H | J | K | L | ; | ' |   Enter |
     * |------------------------------------------------------------|
     * | Shift | Z | X | C | V | B | N | M | , | . | / | Shift | Fn |
     * `------------------------------------------------------------'
     *       |Gui| Alt |        Space(Fn)      | Alt |Gui|
     *       `-------------------------------------------'
     */
    [0] = \
    KEYMAP( GRV,   1,   2,   3,   4,   5,   6,   7,   8,   9,   0,MINS, EQL, DEL,BSPC, \
            TAB,   Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,LBRC,RBRC,BSLS,      \
           LCTL,   A,   S,   D,   F,   G,   H,   J,   K,   L,SCLN,QUOT, ENT,           \
            FN3,   Z,   X,   C,   V,   B,   N,   M,COMM, DOT,SLSH, FN4,  FN2,          \
                LGUI,LALT,           FN1,               RALT,RGUI),

    /* xyue's fn layer
     * ,------------------------------------------------------------.
     * |ESC| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|   |    |
     * |------------------------------------------------------------|
     * |     |   |   |END|   |   |   |   |   |   |PGU|PGU|PGD|      |
     * |------------------------------------------------------------|
     * |      |HME|   |   |   |   | < | v | ^ | > |   |   |         |
     * |------------------------------------------------------------|
     * |        |   |   |   |   |   |PGD|   |   |   |   |      |    |
     * `------------------------------------------------------------'
     *       |   |     |                       |     |   |
     *       `-------------------------------------------'
     */
    [1] = \
    KEYMAP(ESC ,  F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9, F10, F11, F12,TRNS,TRNS, \
           TRNS,TRNS,TRNS, END,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PGUP,PGUP,PGDN,TRNS,      \
           TRNS,HOME,TRNS,TRNS,TRNS,TRNS,LEFT,DOWN,  UP,RGHT,TRNS,TRNS,TRNS,           \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PGDN,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,           \
           TRNS,TRNS,          TRNS,               TRNS,TRNS),

    /* hhkb's fn Layer
     * ,------------------------------------------------------------.
     * |ESC| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|   |    |
     * |------------------------------------------------------------|
     * |     |F14|F15|   |   |   |   |   |PSC|SLK|PUS| ^ |   |      |
     * |------------------------------------------------------------|
     * | CAPS |VLD|VLU|MTE|PLY|   | * | / |HME|PGU| < | > |         |
     * |------------------------------------------------------------|
     * |        |PRV|NXT|   |   |   | + | - |END|PGD| v |      |    |
     * `------------------------------------------------------------'
     *       |   |     |                       |     |   |
     *       `-------------------------------------------'
     */
    [2] = \
    KEYMAP(ESC ,  F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9, F10, F11, F12,TRNS,TRNS, \
           TRNS, F14, F15,TRNS,TRNS,TRNS,TRNS,TRNS,PSCR,SLCK,PAUS,  UP,TRNS,TRNS,      \
           CAPS,VOLD,VOLU,MUTE,MPLY,TRNS,PAST,PSLS,HOME,PGUP,LEFT,RGHT,TRNS,           \
           TRNS,MPRV,MNXT,TRNS,TRNS,TRNS,PPLS,PMNS, END,PGDN,DOWN,TRNS,TRNS,           \
                TRNS,TRNS,          TRNS,               TRNS,TRNS),

};
