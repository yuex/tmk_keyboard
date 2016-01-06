/*
 * yuex's Layout
 */
#include "keymap_common.h"


/*
 * Fn action definition
 */
#ifdef KEYMAP_SECTION_ENABLE
const uint16_t fn_actions[] __attribute__ ((section (".keymap.fn_actions"))) = {
#else
const uint16_t fn_actions[] PROGMEM = {
#endif
    /*  FN# keycode
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
     */
    [0]  = ACTION_LAYER_TAP_KEY(1, KC_SPACE),
    [1]  = ACTION_LAYER_MOMENTARY(1),
    /* [2]  = ACTION_LAYER_TAP_TOGGLE(2), */
    /* [3]  = ACTION_LAYER_TAP_TOGGLE(3), */
    /* [4]  = ACTION_LAYER_MOMENTARY(4), */
    /* [5]  = ACTION_LAYER_MOMENTARY(5), */
    /* [6]  = ACTION_LAYER_MOMENTARY(6), */
    /* [7]  = ACTION_LAYER_MOMENTARY(7), */

    [8]  = ACTION_MODS_ONESHOT(MOD_LSFT),
    [9]  = ACTION_MODS_ONESHOT(MOD_RSFT),

};


#ifdef KEYMAP_SECTION_ENABLE
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
#else
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
#endif
    /* Layer 0: Default Layer
     * ,------------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Del|BDel|
     * |------------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|     \|
     * |------------------------------------------------------------|
     * |Ctrl  |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|    Enter|
     * |------------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |   `|
     * `------------------------------------------------------------'
     *       |Gui|Alt  |       Space(Fn1)      |Alt  |Gui|
     *       `-------------------------------------------'
     */
    [0] = \
    KEYMAP( ESC,   1,   2,   3,   4,   5,   6,   7,   8,   9,   0,MINS, EQL, DEL,BSPC, \
            TAB,   Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,LBRC,RBRC,BSLS,      \
           LCTL,   A,   S,   D,   F,   G,   H,   J,   K,   L,SCLN,QUOT, ENT,           \
           LSFT,   Z,   X,   C,   V,   B,   N,   M,COMM, DOT,SLSH, FN9, GRV,           \
                LGUI,LALT,           FN0,               RALT,RGUI),

    /* Layer 1: Yuex Layer
     * ,------------------------------------------------------------.
     * |  `| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|   |    |
     * |------------------------------------------------------------|
     * |     |HME|MSU|END|   |   |   |MTE|VDW|VUP|   |PgU|PgD| Print|
     * |------------------------------------------------------------|
     * |      |MSL|MSD|MSR|WHD|   |Lft|Dwn| Up|Rgt|F12|  `|   Insert|
     * |------------------------------------------------------------|
     * |        |WHL|   |WHR|   |WHU|   |BT1|AL2|BT2|AL1|      |SLEP|
     * `------------------------------------------------------------'
     *       |   |     |                       |     |   |
     *       `-------------------------------------------'
     */
    [1] = \
    KEYMAP( GRV,  F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9, F10, F11, F12,TRNS,TRNS, \
           TRNS,HOME,MS_U, END,TRNS,TRNS,TRNS,MUTE,VOLD,VOLU,TRNS,PGUP,PGDN,PSCR,      \
           TRNS,MS_L,MS_D,MS_R,WH_D,TRNS,LEFT,DOWN,  UP,RGHT, F12, GRV, INS,           \
           TRNS,WH_L,TRNS,WH_R,TRNS,WH_U,TRNS,BTN1,ACL2,BTN2,ACL1,TRNS,SLEP,           \
                TRNS,TRNS,          TRNS,               TRNS,TRNS),

    /* Layer #: TRNS */
    KEYMAP(TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,      \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,           \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,           \
                TRNS,TRNS,          TRNS,               TRNS,TRNS),

    /* Layer #:   NO */
    KEYMAP(  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO, \
             NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,      \
             NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,           \
             NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,           \
                  NO,  NO,            NO,                 NO,  NO),

};
