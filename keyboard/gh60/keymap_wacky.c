#include "keymap_common.h"
#include "action_layer.h"

// Wacky keymap
#ifdef KEYMAP_SECTION_ENABLE
const uint8_t keymaps[KEYMAPS_COUNT][MATRIX_ROWS][MATRIX_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
#else
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
#endif

    /* Layer 0: Basic keymap
     * `~X: Hold Ctrl, press `/~  ->  ESC
     * BkspDel: Hold Ctrl,Alt, press BkspDel    -> Ctrl+Alt+Del
     * ,-----------------------------------------------------------.
     * |`~X|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|BkspDel|
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|    \|
     * |-----------------------------------------------------------|
     * |Caps  |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return  |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /| Up   |Fn1|
     * |-----------------------------------------------------------|
     * |Ctrl|Gui |Alt |      Space             |Alt |Fn0 |Gui |Ctrl|
     * `-----------------------------------------------------------'
     */
    KEYMAP(
       FN29, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, FN28, \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS, \
       CAPS, A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,NO,  ENT,  \
       LSFT, NO,  Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,FN1, UP, \
       LCTL, LGUI,LALT,          SPC,                     RALT,FN0, LEFT,RIGHT),

    #define MAC_OVERLAY (1)
    /* Layer MAC_OVERLAY: Mac Overlay
     * ,-----------------------------------------------------------.
     * |   |   |   |   |   |   |   |   |   |   |   |   |   |       |
     * |-----------------------------------------------------------|
     * |     |   |    |   |   |   |   |   |   |   |   |   |   |    |
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   |   |   |   |   |   |   |        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |   |   |   |   |   |      |   |
     * |-----------------------------------------------------------|
     * |    |Alt | Cmd|                        |Cmd|     |    |    |
     * `-----------------------------------------------------------'
     */
    KEYMAP(
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,LALT,LGUI,          TRNS,                    RGUI,TRNS,TRNS,TRNS),\

    /* Layer 2: Fn0 Layer
     * A29: Switch App, ref: hhbk-hasu
     * ,-----------------------------------------------------------.
     * |ESC| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Delete |
     * |-----------------------------------------------------------|
     * |Fn3 |PgU|Up |PgD|WRef|   |   |   |Ins|   |Psc|MNx|MPr|Calc |
     * |-----------------------------------------------------------|
     * |      |Lef|Dow|Rig|   |   |   |   |   |   |Hom|PgU|        |
     * |-----------------------------------------------------------|
     * |        |Hom|End|   |   |   |   |   |   |End|PgD|RShift|Fn4|
     * |-----------------------------------------------------------|
     * |    |    |    |     Backlight          |Mute|    |Vol-|Vol+|
     * `-----------------------------------------------------------'
     */
    KEYMAP(
        ESC, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, DEL,  \
        FN3, PGUP,UP,  PGDN,WREF,NO,  NO,  NO, INS,  NO, NO,   MPRV,MNXT,CALC,  \
        NO,  LEFT,DOWN,RGHT,NO,  NO,  NO,  NO,  NO,  NO, HOME, PGUP,NO,  NO, \
        NO,  HOME,END, NO,  NO,  NO,  NO,  NO,  NO,  NO, END,  PGDN,FN4, RSFT, \
        NO,  NO,  NO,          FN2,                      MUTE,TRNS,VOLD, VOLU),

    /* Layer 3: Fn1 Layer
     * SFT_DEL: Send Shift+Del
     * ,-----------------------------------------------------------.
     * |   |   |   |   |   |   |   |   |   |   |   |   |   |SFT_DEL|
     * |-----------------------------------------------------------|
     * |     |mLB|mUp |mRB|   |   |   |   |   |   |   |   |   |    |
     * |-----------------------------------------------------------|
     * |      |mLf|mDn|mRi|   |   |   |   |   |   |   |   |        |
     * |-----------------------------------------------------------|
     * |        |msU|msD|   |   |   |   |   |   |   |   |  Up |    |
     * |-----------------------------------------------------------|
     * |    |    |    |                        |    | Fn5|Down|    |
     * `-----------------------------------------------------------'
     */
    KEYMAP(
        NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO, NO,   NO,  NO, FN27,  \
        NO,  BTN1,MS_U,BTN2,NO,  NO,  NO,  NO,  NO,  NO, NO,   NO,  NO,   NO,  \
        NO,  MS_L,MS_D,MS_R,NO,  NO,  NO,  NO,  NO,  NO, NO,   NO,  NO,   NO, \
        NO,  WH_U,WH_D,NO,  NO,  NO,  NO,  NO,  NO,  NO, NO,   NO,  TRNS, UP, \
        NO,  NO,  NO,          NO,                       NO,  FN5,  DOWN, NO),

    /* Layer 4: Fn0 + Fn1 Combo
     * A31: Fn31 -> Action: <Up><Enter>  (shell, exec previous command)
     * A30: Fn30 -> Action: --help | less<Enter>  (shell, get help & less)
     * ,-----------------------------------------------------------.
     * |Pwr|A31|   |   |   |   |   |   |   |   |   |   |   |       |
     * |-----------------------------------------------------------|
     * |     |   |    |   |   |   |   |   |   |   |   |   |   |    |
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   |A30|   |   |   |   |   |        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |   |   |   |   |   |      |   |
     * |-----------------------------------------------------------|
     * |    |    |    |                        |    |    |    |    |
     * `-----------------------------------------------------------'
     */
    KEYMAP(
        PWR, FN31,NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO, NO,   NO,  NO,  NO,  \
        NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO, NO,   NO,  NO,  NO,  \
        NO,  NO,  NO,  NO,  NO,  NO,  FN30,NO,  NO,  NO, NO,   NO,  NO,  NO, \
        NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO, NO,   NO,  TRNS,NO, \
        NO,  NO,  NO,          NO,                       NO, TRNS,  NO,  NO),
};

enum macro_id {
    SHL_EXEC_PREV,
    SHL_HELP
};

enum function_id {
    BKSPDEL,
    SFT_DEL,
    TRK_ESC
};

/*
 * Fn action definition
 */
#ifdef KEYMAP_SECTION_ENABLE
const uint16_t fn_actions[FN_ACTIONS_COUNT] __attribute__ ((section (".keymap.fn_actions"))) = {
#else
const uint16_t fn_actions[] PROGMEM = {
#endif
    /* Poker2 Layout */
    [0] = ACTION_LAYER_MOMENTARY(2),  // Fn0 Layer
    [1] = ACTION_LAYER_MOMENTARY(3),  // Fn1 Layer
    [2] = ACTION_BACKLIGHT_TOGGLE(),  // Backlight, if impl. in the future
    [3] = ACTION_LAYER_TOGGLE(1),     // Mac overlay
    [4] = ACTION_LAYER_MOMENTARY(4),  // Fn 1+0 Combo, dangerous actions
    [5] = ACTION_LAYER_MOMENTARY(4),  // Fn 1+0 Combo, dangerous actions
    [27] = ACTION_FUNCTION(SFT_DEL),    // Fn1 + Bksp -> Shift+Del
    [28] = ACTION_FUNCTION(BKSPDEL),    // Under windows: Ctrl Alt Bksp -> Ctrl+Alt+Del,
    [29] = ACTION_FUNCTION(TRK_ESC),    // Ctrl ESC will send ES
    [30] = ACTION_MACRO(SHL_HELP),      // equiv: --help | less <Enter>
    [31] = ACTION_MACRO(SHL_EXEC_PREV)  // equiv: <Up><Enter>
};

#ifdef KEYMAP_IN_EEPROM_ENABLE
uint16_t keys_count(void) {
    return sizeof(keymaps) / sizeof(keymaps[0]) * MATRIX_ROWS * MATRIX_COLS;
}

uint16_t fn_actions_count(void) {
    return sizeof(fn_actions) / sizeof(fn_actions[0]);
}
#endif

#define is_mac (layer_state & 1UL<<MAC_OVERLAY)
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    switch (id) {
        case SHL_HELP:
            return (record->event.pressed ?
                MACRO( T(MINS), T(MINS), T(H), T(E), T(L), T(P), \
                       T(SPC),  D(LSFT), T(BSLS), U(LSFT), T(SPC), \
                       T(L), T(E), T(S), T(S), T(ENT), END ) :
                    MACRO_NONE );
        case SHL_EXEC_PREV:
            return (record->event.pressed ?
                MACRO( T(UP), T(ENT), END ) :
                MACRO_NONE );
        default:
            return MACRO_NONE;
    }
    return MACRO_NONE;
}

#define MODS_SHIFT_MASK (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT))
#define MODS_CTRL_MASK  (MOD_BIT(KC_LCTL))
#define MODS_CTRL_ALT_MASK (MOD_BIT(KC_LCTL) | MOD_BIT(KC_LALT))
void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    static uint8_t registered_bksp, registered_tilde;
    switch (id) {
        case BKSPDEL:
            if (record->event.pressed) {
                if ((get_mods() & MODS_CTRL_ALT_MASK) == MODS_CTRL_ALT_MASK)
                    registered_bksp = KC_DEL;
                else
                    registered_bksp = KC_BSPC;
                register_code(registered_bksp);
            }else {
                unregister_code(registered_bksp);
            }
        break;
        case SFT_DEL:
            if (record->event.pressed) {
                register_code(KC_LSFT);
                register_code(KC_DEL);
            }else{
                unregister_code(KC_LSFT);
                unregister_code(KC_DEL);
            }
        break;
        case TRK_ESC:
            if (record->event.pressed) {
                if ((get_mods() & MODS_CTRL_MASK) == MODS_CTRL_MASK)
                    registered_tilde = KC_ESC;
                else
                    registered_tilde = KC_GRV;
                if (registered_tilde == KC_ESC) unregister_code(KC_LCTL);
                register_code(registered_tilde);
            }else{
                unregister_code(registered_tilde);
                if (registered_tilde == KC_ESC) register_code(KC_LCTL);
            }
            break;
        break;
    }
}
