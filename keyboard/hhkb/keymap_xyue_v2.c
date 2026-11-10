/*
 * keymap xyue: iteration from yuex
 *
 * Keymap framekwork: tmk_core/doc/keymap.md
 * Keycode available: tmk_core/doc/keycode.txt
 */
#include "keymap_common.h"

#define FN_PLACEHOLDER ACTION_KEY(KC_NO)
#define LAYER_PLACEHOLDER \
    KEYMAP(  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO, \
             NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,      \
             NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,           \
             NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,           \
                  NO,  NO,            NO,                 NO,  NO)

/*
 * Fn action definition
 */
#ifdef KEYMAP_SECTION_ENABLE
const action_t fn_actions[] __attribute__ ((section (".keymap.fn_actions"))) = {
#else
const action_t fn_actions[] PROGMEM = {
#endif
    /*  defines behavior of FN\d keymap
     *
     *  -- key combo, alt + tab
     *  ACTION_MODS_KEY(MOD_LALT, KC_TAB)
     *
     *  -- multi-modifier, alt + shift
     *  ACTION_MODS(MOD_ALT | MOD_LSFT)
     *
     *  -- dual-role, hold as mod, tap as key
     *  ACTION_MODS_TAP_KEY(MOD_RCTL, KC_ENT)
     *
     *  -- set to default layer and activate it
     *  ACTION_DEFAULT_LAYER_SET(layer)
     *
     *  -- turn on layer when holding, off when released
     *  ACTION_LAYER_MOMENTARY(layer)
     *
     *  -- turn on layer with first tap, off with next
     *  ACTION_LAYER_TOGGLE(layer)
     *
     *  -- turn on layer when holding, tap as key
     *  ACTION_LAYER_TAP_KEY(layer, key)
     *
     *  -- turn on layer when holding, toggle with taps
     *  -- defined in config.h
     *  ACTION_LAYER_TAP_TOGGLE(layer)
     * 
     *  ACTION_MODS_ONESHOT(MOD_LSFT)
     */
    // /* FN0 */ [0]  = ACTION_LAYER_TAP_KEY(1, KC_SPACE),
    // /* FN1 */ [1]  = ACTION_LAYER_MOMENTARY(2),
    /* [2]  = ACTION_LAYER_TAP_TOGGLE(2), */
    /* [3]  = ACTION_LAYER_TAP_TOGGLE(3), */
    /* [4]  = ACTION_LAYER_MOMENTARY(4), */
    /* [5]  = ACTION_LAYER_MOMENTARY(5), */
    /* [6]  = ACTION_LAYER_MOMENTARY(6), */
    /* [7]  = ACTION_LAYER_MOMENTARY(7), */

    /* FN0 */   [0] = ACTION_DEFAULT_LAYER_SET(0),
    /* FN1 */   [1] = ACTION_DEFAULT_LAYER_SET(1),
    /* FN2 */   [2] = FN_PLACEHOLDER,
    /* FN3 */   [3] = FN_PLACEHOLDER,
    /* FN4 */   [4] = FN_PLACEHOLDER,
    /* FN5 */   [5] = FN_PLACEHOLDER,
    /* FN6 */   [6] = FN_PLACEHOLDER,
    /* FN7 */   [7] = FN_PLACEHOLDER,
    /* FN8 */   [8] = FN_PLACEHOLDER,
    /* FN9 */   [9] = FN_PLACEHOLDER,
    /* FN10 */ [10] = ACTION_LAYER_TAP_KEY(10, KC_SPACE),
    /* FN11 */ [11] = ACTION_LAYER_TAP_KEY(11, KC_SPACE),
    /* FN12 */ [12] = FN_PLACEHOLDER,
    /* FN13 */ [13] = FN_PLACEHOLDER,
    /* FN14 */ [14] = FN_PLACEHOLDER,
    /* FN15 */ [15] = FN_PLACEHOLDER,
    /* FN16 */ [16] = FN_PLACEHOLDER,
    /* FN17 */ [17] = FN_PLACEHOLDER,
    /* FN18 */ [18] = FN_PLACEHOLDER,
    /* FN19 */ [19] = FN_PLACEHOLDER,
    /* FN20 */ [20] = FN_PLACEHOLDER,
    /* FN21 */ [21] = FN_PLACEHOLDER,
    /* FN22 */ [22] = FN_PLACEHOLDER,
    /* FN23 */ [23] = FN_PLACEHOLDER,
    /* FN24 */ [24] = FN_PLACEHOLDER,
    /* FN25 */ [25] = FN_PLACEHOLDER,
    /* FN26 */ [26] = FN_PLACEHOLDER,
    /* FN27 */ [27] = FN_PLACEHOLDER,
    /* FN28 */ [28] = FN_PLACEHOLDER,
    /* FN29 */ [29] = ACTION_MODS_ONESHOT(MOD_LSFT),
    /* FN30 */ [30] = ACTION_MODS_ONESHOT(MOD_RSFT),
    /* FN31 */ [31] = ACTION_LAYER_MOMENTARY(31),

};


#ifdef KEYMAP_SECTION_ENABLE
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
#else
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
#endif
    /* hhkb's default layer
     * ,------------------------------------------------------------.
     * |  `|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|DEL|BSPC|
     * |------------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|     \|
     * |------------------------------------------------------------|
     * |Ctrl  |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|    Enter|
     * |------------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift | Fn0|
     * `------------------------------------------------------------'
     *       |Alt|Gui  |        Space(Fn)      |Gui  |Alt|
     *       `-------------------------------------------'
     */
    [0] = \
    KEYMAP( GRV,   1,   2,   3,   4,   5,   6,   7,   8,   9,   0,MINS, EQL, DEL,BSPC, \
            TAB,   Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,LBRC,RBRC,BSLS,      \
           LCTL,   A,   S,   D,   F,   G,   H,   J,   K,   L,SCLN,QUOT, ENT,           \
           FN29,   Z,   X,   C,   V,   B,   N,   M,COMM, DOT,SLSH,FN30,FN31,           \
                LALT,LGUI,          FN10,               RGUI,RALT),

    /* xyue's default layer
     * ,------------------------------------------------------------.
     * |  `|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|DEL|BSPC|
     * |------------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|     \|
     * |------------------------------------------------------------|
     * |Ctrl  |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|    Enter|
     * |------------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift | Fn0|
     * `------------------------------------------------------------'
     *       |Gui|Alt  |        Space(Fn)      |Alt  |Gui|
     *       `-------------------------------------------'
     */
    [1] = \
    KEYMAP( GRV,   1,   2,   3,   4,   5,   6,   7,   8,   9,   0,MINS, EQL, DEL,BSPC, \
            TAB,   Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,LBRC,RBRC,BSLS,      \
           LCTL,   A,   S,   D,   F,   G,   H,   J,   K,   L,SCLN,QUOT, ENT,           \
           FN29,   Z,   X,   C,   V,   B,   N,   M,COMM, DOT,SLSH,FN30,FN31,           \
                LGUI,LALT,          FN11,               RALT,RGUI),

    [2] = LAYER_PLACEHOLDER,
    [3] = LAYER_PLACEHOLDER,
    [4] = LAYER_PLACEHOLDER,
    [5] = LAYER_PLACEHOLDER,
    [6] = LAYER_PLACEHOLDER,
    [7] = LAYER_PLACEHOLDER,
    [8] = LAYER_PLACEHOLDER,
    [9] = LAYER_PLACEHOLDER,

    /* hhkb's fn layer
     * ,------------------------------------------------------------.
     * |ESC| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|   |    |
     * |------------------------------------------------------------|
     * |     |   |   |   |   |   |   |   |PSC|SLK|PUS| ^ |   |      |
     * |------------------------------------------------------------|
     * |      |VLD|VLU|MTE|PLY|   | * | / |HME|PGU| < | > |         |
     * |------------------------------------------------------------|
     * |        |   |   |   |   |   | + | - |END|PGD| v |      |    |
     * `------------------------------------------------------------'
     *       |   |     |                       |     |   |
     *       `-------------------------------------------'
     */
    [10] = \
    KEYMAP(ESC ,  F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9, F10, F11, F12,TRNS,TRNS, \
           CAPS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PSCR,SLCK,PAUS,  UP,TRNS,TRNS,      \
           TRNS,VOLD,VOLU,MUTE,MPLY,TRNS,PAST,PSLS,HOME,PGUP,LEFT,RGHT,PENT,           \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PPLS,PMNS,END, PGDN,DOWN,TRNS,TRNS,           \
           TRNS,TRNS,          TRNS,               TRNS,TRNS),

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
    [11] = \
    KEYMAP(ESC ,  F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9, F10, F11, F12,TRNS,TRNS, \
           TRNS,TRNS,TRNS, END,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PGUP,PGUP,PGDN,TRNS,      \
           TRNS,HOME,TRNS,TRNS,TRNS,TRNS,LEFT,DOWN,  UP,RGHT,TRNS,TRNS,TRNS,           \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PGDN,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,           \
           TRNS,TRNS,          TRNS,               TRNS,TRNS),
    
    [12] = LAYER_PLACEHOLDER,
    [13] = LAYER_PLACEHOLDER,
    [14] = LAYER_PLACEHOLDER,
    [15] = LAYER_PLACEHOLDER,
    [16] = LAYER_PLACEHOLDER,
    [17] = LAYER_PLACEHOLDER,
    [18] = LAYER_PLACEHOLDER,
    [19] = LAYER_PLACEHOLDER,
    [20] = LAYER_PLACEHOLDER,
    [21] = LAYER_PLACEHOLDER,
    [22] = LAYER_PLACEHOLDER,
    [23] = LAYER_PLACEHOLDER,
    [24] = LAYER_PLACEHOLDER,
    [25] = LAYER_PLACEHOLDER,
    [26] = LAYER_PLACEHOLDER,
    [27] = LAYER_PLACEHOLDER,
    [28] = LAYER_PLACEHOLDER,
    [29] = LAYER_PLACEHOLDER,
    [30] = LAYER_PLACEHOLDER,

    /* Meta Layer
     * ,------------------------------------------------------------.
     * |FN2|FN1|FN2|   |   |   |   |   |   |   |   |   |   |   |    |
     * |------------------------------------------------------------|
     * |     |F14|F15|   |   |   |   |   |   |   |   |   |   |      |
     * |------------------------------------------------------------|
     * |      |VLD|VLU|MTE|PLY|   |   |   |   |   |   |   |         |
     * |------------------------------------------------------------|
     * |        |PRV|NXT|   |   |   |   |   |   |   |   |      |    |
     * `------------------------------------------------------------'
     *       |   |     |                       |     |   |
     *       `-------------------------------------------'
     */
    [31] = \
    KEYMAP( FN1, FN0, FN1,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO, \
             NO, F14, F15,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,      \
             NO,VOLD,VOLU,MUTE,MPLY,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,           \
             NO,MPRV,MNXT,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,FN31,           \
                  NO,  NO,            NO,                 NO,  NO),
};
