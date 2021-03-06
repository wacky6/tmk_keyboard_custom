#include "keymap_common.h"
#include "action_layer.h"
#include "action_tapping.h"

// Wacky keymap
#ifdef KEYMAP_SECTION_ENABLE
const uint8_t keymaps[KEYMAPS_COUNT][MATRIX_ROWS][MATRIX_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
#else
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
#endif

    /* Layer 0: Basic keymap
     * BkspDel:      Ctrl+Alt / Shift  -> Del
     *               otherwise,        -> Bksp
     * Fn0:          Fn0 Layer
     * ESC/Fn7:      Shift + ESC = ~
     *               Fn0 + ESC = `
     * LShift/Fn6:   Shift hack
     * ,-----------------------------------------------------------.
     * |ESC|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|BkspDel|
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|    \|
     * |-----------------------------------------------------------|
     * |Ctrl  |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return  |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|  Up  |Del|
     * |-----------------------------------------------------------|
     * |Fn0|Gui |Alt |      Space             |Fn0 |Left|Down|Righ |
     * `-----------------------------------------------------------'
     */
    KEYMAP(
        FN7, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, FN28, \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS, \
       LCTL, A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,NO,  ENT,  \
       LSFT, NO,  Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,DEL, UP,   \
        FN0, LGUI,LALT,          SPC,                     FN0, LEFT,DOWN,RGHT),

    #define MAC_OVERLAY (1)
    /* Layer MAC_OVERLAY: Mac Overlay
     * Fn0 + Tab to toggle this layer
     * ,-----------------------------------------------------------.
     * |   |   |   |   |   |   |   |   |   |   |   |   |   |       |
     * |-----------------------------------------------------------|
     * |     |   |    |   |   |   |   |   |   |   |   |   |   |    |
     * |-----------------------------------------------------------|
     * | CAPS |   |   |   |   |   |   |   |   |   |   |   |        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |   |   |   |   |   |      |   |
     * |-----------------------------------------------------------|
     * |Ctrl|Alt | Cmd|                        |    |    |    |    |
     * `-----------------------------------------------------------'
     */
    KEYMAP(
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        CAPS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        LCTL,LALT,LGUI,          TRNS,                    TRNS,TRNS,TRNS,TRNS),

    // #define GAME_OVERLAY (2)
    // This layer is deprecated!
    /* ,-----------------------------------------------------------.
     * |   |   |   |   |   |   |   |   |   |   |   |   |   |       |
     * |-----------------------------------------------------------|
     * |     |   |    |   |   |   |   |   |   |   |   |   |   |    |
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   |   |   |   |   |   |   |        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |   |   |   |   |   |      |   |
     * |-----------------------------------------------------------|
     * |    |    |    |                        |   |    |     |    |
     * `-----------------------------------------------------------'
     */
    KEYMAP(
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS),

    /* Layer 3: Fn0 Layer
     *
     * Fn3:      Mac/Win (GUI-Alt/Alt-GUI) switch
     * Fn4:      Fn0 Fn1 Combo Layer
     * WRef:     Web Refresh
     * MPr/MNX:  Media Previous/Next Track
     * Calc:     Calculator (Windows)
     * ,-----------------------------------------------------------.
     * |GRV| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Delete |
     * |-----------------------------------------------------------|
     * |Fn3 |   |PgUp|   |WRef|   |   |PgU|Up |PgD|Psc|MPr|MNx|Calc|
     * |-----------------------------------------------------------|
     * |CapsLk|Hom|PgD|End|   |   |   |Lef|Dwn|Rig|   |   | Ctl+Ent|
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |   |   |Vo-|Vo+|Mute|PgUp |   |
     * |-----------------------------------------------------------|
     * |    |    |    |     Backlight          |    |Home|PgDn| End|
     * `-----------------------------------------------------------'
     */
    KEYMAP(
        GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10,  F11, F12, DEL, \
        FN3, NO,  PGUP,NO,  WREF,NO,  NO,PGUP,  UP,PGDN, PSCR, MPRV,MNXT,CALC, \
        CAPS,HOME,PGDN,END, NO,  NO,  NO,LEFT,DOWN,RGHT,   NO,   NO,  NO, FN8, \
        TRNS,NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,VOLD, VOLU, MUTE, ESC,PGUP, \
        TRNS,TRNS,TRNS,          FN2,                    TRNS, HOME,PGDN,END   ),

    // This layer is deprecated
    // #define LAYER_FN1 (4)
    /* Layer LAYER_FN1: Fn1 Layer
     * SFT_DEL:       Shift + Del
     * Fn5:           Fn0 Fn1 Combo Layer
     * mLB/RB:        mouse Left/Right Btn
     * mUp/Lf/Dn/Ri:  mouse Up/Left/Down/Right
     * msU/msD:       mouse wheel Up/Down
     * ,-----------------------------------------------------------.
     * |   |   |   |   |   |   |   |   |   |   |   |   |   |SFT_DEL|
     * |-----------------------------------------------------------|
     * |     |mLB|mUp |mRB|   |   |   |   |   |   |   |   |   |    |
     * |-----------------------------------------------------------|
     * |      |mLf|mDn|mRi|   |   |   |   |   |   |   |   |        |
     * |-----------------------------------------------------------|
     * |        |msU|msD|   |   |   |   |   |   |   |   | PgUp|    |
     * |-----------------------------------------------------------|
     * |    |    |    |                        | Fn5|Home|PgDn|End |
     * `-----------------------------------------------------------'
     */
    KEYMAP(
        NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO, NO,   NO,  NO,   NO,  \
        NO,  BTN1,MS_U,BTN2,NO,  NO,  NO,  NO,  NO,  NO, NO,   NO,  NO,   NO,  \
        NO,  MS_L,MS_D,MS_R,NO,  NO,  NO,  NO,  NO,  NO, NO,   NO,  NO,   NO, \
        NO,  WH_U,WH_D,NO,  NO,  NO,  NO,  NO,  NO,  NO, NO,   NO,  TRNS, PGUP, \
        NO,  NO,  NO,          NO,                       NO ,HOME,  PGDN, END),

    // this layer is deprecated
    /* Layer 5: Fn0 + Fn1 Combo
     * dangerous or boring commands
     * 
     * Pwr: Power button   [Dangerous!]
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
        NO,  NO,  NO,          NO,                     TRNS,   NO,  NO,  NO),
};

enum macro_id {
    SHL_EXEC_PREV,
    SHL_HELP,
    CTRL_ENTER
};

enum function_id {
    BKSPDEL,
    ESC_TILD,
    // SFT_DEL,
    // SUPER_FN1,
    APPL_BRI_UP,
    APPL_BRI_DN,
    // LCTL_ESC,
    // RSFT_UP,
    // RALT_LEFT,
    // RGUI_DOWN,
    // RCTL_RIGHT,
    // RGUI_LEFT,
    // RALT_DOWN,
    SUPER_RSFT
};

/*
 * Fn action definition
 */
#ifdef KEYMAP_SECTION_ENABLE
const uint16_t fn_actions[FN_ACTIONS_COUNT] __attribute__ ((section (".keymap.fn_actions"))) = {
#else
const uint16_t fn_actions[] PROGMEM = {
#endif
    [0] = ACTION_LAYER_MOMENTARY(3),         // Fn0 Layer
    [1] = ACTION_FUNCTION(SUPER_RSFT),       // Tap: Toggle Game/Arrow Overlay, Hold: Fn1 Layer
    [2] = ACTION_BACKLIGHT_TOGGLE(),         // Backlight, if impl. in the future
    [3] = ACTION_LAYER_TOGGLE(MAC_OVERLAY),  // Mac overlay
    [4] = ACTION_LAYER_MOMENTARY(5),         // Fn 1+0 Combo, dangerous actions
    [7] = ACTION_FUNCTION(ESC_TILD),         // Sft + ESC = ~
    [8] = ACTION_MACRO(CTRL_ENTER),
    // [5] = ACTION_LAYER_MOMENTARY(5),         // Fn 1+0 Combo, dangerous actions
    // [14] = ACTION_FUNCTION(APPL_BRI_UP),     // Apple Brightness Up
    // [15] = ACTION_FUNCTION(APPL_BRI_DN),     // Apple Brightness Down
    // [16] = ACTION_FUNCTION(RSFT_UP),
    // [17] = ACTION_FUNCTION(RALT_LEFT),
    // [18] = ACTION_FUNCTION(RGUI_DOWN),
    // [19] = ACTION_FUNCTION(RCTL_RIGHT),
    // [20] = ACTION_LAYER_TOGGLE(GAME_OVERLAY),        // Game/Arrow Overlay
    // [21] = ACTION_FUNCTION(RGUI_LEFT),   // Mac overlay RGUI/Left
    // [22] = ACTION_FUNCTION(RALT_DOWN),   // Mac overlay RALT/Down
    // [23] = ACTION_FUNCTION(LCTL_ESC),
    // [27] = ACTION_FUNCTION(SFT_DEL),    // Fn1 + Bksp -> Shift+Del
    [28] = ACTION_FUNCTION(BKSPDEL),    // Under windows: Ctrl Alt Bksp -> Ctrl+Alt+Del,
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

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    if (!record->event.pressed)
        return MACRO_NONE;
    switch (id) {
        case SHL_HELP:
            return MACRO( T(MINS), T(MINS), T(H), T(E), T(L), T(P), \
                          T(SPC),  D(LSFT), T(BSLS), U(LSFT), T(SPC), \
                          T(L), T(E), T(S), T(S), T(ENT), END );
        case SHL_EXEC_PREV:
            return MACRO( T(UP), T(ENT), END );
        case CTRL_ENTER:
            return MACRO( D(LCTL), T(ENT), U(LCTL), END );
        default:
            return MACRO_NONE;
    }
}


/*
#define PRESS_TIME(mods) (record->event.time - press_time[mods])
#define TAP_THRESHOLD        (200)
void mods_tap_lctl_esc(keyrecord_t *record) {
    static uint16_t press_time;
    press_time = record->event.time;
    if (record->event.pressed) {
        register_code(KC_LCTL);
    }else{
        unregister_code(KC_LCTL);
        if (record->event.time - press_time < TAP_THRESHOLD) {
            register_code(KC_ESC);
            unregister_code(KC_ESC);
        }
    }
}
*/
/*
void super_arrow(keyrecord_t *record, uint8_t modifier, uint8_t tap_key) {
    static uint16_t press_time[256];
    static uint16_t release_time;
    static bool in_streak;
    if (record->event.pressed) {
        new_key_pressed = false;
        press_time[modifier] = record->event.time;
        if (record->event.time - release_time < TAP_THRESHOLD || in_streak) {
            register_code(tap_key);
            in_streak = true;
        }else
            register_code(modifier);
    }else{
        unregister_code(modifier);
        unregister_code(tap_key);
        if (PRESS_TIME(modifier) < TAP_THRESHOLD && !new_key_pressed && !in_streak) {
            register_code(tap_key);
            unregister_code(tap_key);
            release_time = record->event.time;
        }
        if (in_streak) {
            release_time = record->event.time;
            in_streak = false;
        }
    }
}
*/
#define MODS_SHIFT_MASK (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT))
#define MODS_CTRL_MASK  (MOD_BIT(KC_LCTL) | MOD_BIT(KC_RCTL))
#define MODS_ALT_MASK   (MOD_BIT(KC_LALT) | MOD_BIT(KC_RALT))
#define LAYER_MAC (layer_state & (1UL<<MAC_OVERLAY))
void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    static uint8_t registered_bksp;
    static uint8_t registered_esc;
    static uint16_t fn1_press_time;
    int ctrl_alt, shift;
    switch (id) {
        case BKSPDEL:
            if (record->event.pressed) {
                ctrl_alt = (get_mods() & MODS_CTRL_MASK) && (get_mods() & MODS_ALT_MASK);
                shift    = (get_mods() & MODS_SHIFT_MASK);
                registered_bksp = (ctrl_alt || shift) ? KC_DEL : KC_BSPC;
                register_code(registered_bksp);
            }else {
                unregister_code(registered_bksp);
            }
        break;
        case ESC_TILD:
            if (record->event.pressed) {
                shift = (get_mods() & MODS_SHIFT_MASK);
                registered_esc = shift ? KC_GRV : KC_ESC;
                register_code(registered_esc);
            }else{
                unregister_code(registered_esc);
            }
        break;
        /*
        case SFT_DEL:
            if (record->event.pressed) {
                register_code(KC_LSFT);
                register_code(KC_DEL);
            }else{
                unregister_code(KC_LSFT);
                unregister_code(KC_DEL);
            }
        break;
        */
        case SUPER_RSFT:
            if (record->event.pressed) {
                fn1_press_time = record->event.time;
                register_code(KC_RSFT);
            }else{
                uint16_t pressed = record->event.time - fn1_press_time;
                unregister_code(KC_RSFT);
                if (pressed < TAPPING_TERM) {
                    register_code(KC_CAPS);
                    unregister_code(KC_CAPS);
                }
            }
        break;
        /*
        case APPL_BRI_UP:
            if (!LAYER_MAC) return;
            if (record->event.pressed) {
                register_code(KC_PAUS);
            }else{
                unregister_code(KC_PAUS);
            }
        break;
        case APPL_BRI_DN:
            if (!LAYER_MAC) return;
            if (record->event.pressed) {
                register_code(KC_SLCK);
            }else{
                unregister_code(KC_SLCK);
            }
        break;
        */
        /*
        case LCTL_ESC:
            mods_tap_lctl_esc(record);
        break;
        case RSFT_UP:
            super_arrow(record, KC_RSHIFT, KC_UP);
        break;
        case RALT_LEFT:
            super_arrow(record, KC_RALT, KC_LEFT);
        break;
        case RGUI_DOWN:
            super_arrow(record, KC_RGUI, KC_DOWN);
        break;
        case RCTL_RIGHT:
            super_arrow(record, KC_RCTL, KC_RIGHT);
        break;
        case RGUI_LEFT:
            super_arrow(record, KC_RGUI, KC_LEFT);
        break;
        case RALT_DOWN:
            super_arrow(record, KC_RALT, KC_DOWN);
        break;
        */
    }
}
