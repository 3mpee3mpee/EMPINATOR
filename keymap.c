#include QMK_KEYBOARD_H

// Layer names for better readability
enum layers {
    _BASE = 0,
    _NUM_SYM,
    _NAV,
    _FN,
    _MOUSENAV,
    _GAMING1,
    _GAMING2
};

// Custom keycodes
enum custom_keycodes {
    KC_MAKE = SAFE_RANGE,
    KC_RESET,
    KC_RGB_T
};

// Layer definitions
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * Default Layer
     * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
     * │Tab│ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │Bsp│
     * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
     * │Ctl│ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ' │Esc
     * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
     * │Sft│ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │Sft│
     * └───┴───┴───┼───┼───┼───┼───┼───┼───┼───┼───┼───┴───┴───┘
     *             │GUI│Nav│Spc│   │Ent│Num│Alt│
     *             └───┴───┴───┘   └───┴───┴───┘
     */
    [_BASE] = LAYOUT_split_3x6_3(
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,          KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,          KC_H,    KC_J,    KC_K,    KC_L,    KC_QUOT, KC_ESC,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,          KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                                            KC_LGUI, MO(_NAV), KC_SPC,        KC_ENT,  MO(_NUM_SYM), KC_RALT
    ),

    /*
     * Num_Sym Layer
     * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
     * │     _ │ & │ * │ - │ + │       │   │   │ 7 │ 8 │ 9 │   │
     * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
     * │ = │ $ │ % │ ^ │ \ │ ` │       │ 0 │ 4 │ 5 │ 6 │   │   │
     * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
     * │ - │ ! │ @ │ # │ | │ ~ │       │GUI│SFT│ 1 │ 2 │ 3 │   │
     * └───┴───┴───┼───┼───┼───┼───┼───┼───┼───┼───┼───┴───┴───┘
     *             │   │   │   │   │   │   │   │   │
     *             └───┴───┴───┘   └───┴───┴───┘
     */
    [_NUM_SYM] = LAYOUT_split_3x6_3(
        KC_NO,   KC_UNDS, KC_AMPR, KC_ASTR, KC_MINS, KC_PLUS,       KC_7,    KC_8,    KC_9,    KC_NO,   KC_NO,   KC_NO,
        KC_EQL,  KC_DLR,  KC_PERC, KC_CIRC, KC_BSLS, KC_GRV,        KC_0,    KC_4,    KC_5,    KC_6,    KC_NO,   KC_NO,
        KC_MINS, KC_EXLM, KC_AT,   KC_HASH, KC_PIPE, KC_TILD,       KC_LGUI, KC_LSFT, KC_1,    KC_2,    KC_3,    KC_NO,
                                            KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS
    ),

    /*
     * Nav Layer
     * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
     * │Tab│ 1 │2  │3  │ 4 │ 5 │       │ 6 │ 7 │ 8 │ 9 │ 0 │Bsp│
     * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
     * │Mse│Gui│Alt│Sft│Ctl│   │       │ ← │ ↓ │ ↑ │ → │   │GAMING LAYER TOGGLE│
     * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
     * │   │   │   │   │   │   │       │PG UP│PG DOWN│DEL│ HOME  │END  │   │
     * └───┴───┴───┼───┼───┼───┼───┼───┼───┼───┼───┼───┴───┴───┘
     *             │LGUI   │   │   │   │   │   │   │ LEFT ALT  │
     *             └───┴───┴───┘   └───┴───┴───┘
     */
    [_NAV] = LAYOUT_split_3x6_3(
        KC_TAB,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,          KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
        TG(_MOUSENAV),   KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, KC_NO,         KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_NO,   TG(_GAMING1),
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,         KC_PGUP, KC_PGDN, KC_DEL,  KC_HOME, KC_END,  KC_NO,
                                            KC_LGUI, TG(_MOUSENAV), KC_TRNS,       KC_TRNS, KC_LALT,   KC_TRNS
    ),

    /*
     * Fn Layer
     * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
     * │F18│F15│F7 │F8 │F9 │F12│       │BT0│Vol│Mut│Vol│BT │Rst│
     * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
     * │F17│F14│F4 │F5 │F6 │F11│       │BT1│Prv│Ply│Nxt│Out│Rst│
     * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
     * │F16│F13│F1 │F2 │F3 │F10│       │BT2│   │   │   │Out│Rst│
     * └───┴───┴───┼───┼───┼───┼───┼───┼───┼───┼───┼───┴───┴───┘
     *             │   │   │   │   │   │   │   │   │
     *             └───┴───┴───┘   └───┴───┴───┘
     */
    [_FN] = LAYOUT_split_3x6_3(
        KC_F18,  KC_F15,  KC_F7,   KC_F8,   KC_F9,   KC_F12,        KC_NO,   KC_VOLU, KC_MUTE, KC_VOLD, KC_NO,   QK_BOOT,
        KC_F17,  KC_F14,  KC_F4,   KC_F5,   KC_F6,   KC_F11,        KC_NO,   KC_MPRV, KC_MPLY, KC_MNXT, KC_NO,   QK_BOOT,
        KC_F16,  KC_F13,  KC_F1,   KC_F2,   KC_F3,   KC_F10,        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   QK_BOOT,
                                            KC_LGUI, KC_NO, KC_TRNS,       KC_TRNS, KC_TRNS, KC_LALT
    ),

    /*
     * MouseNav Layer
     * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
     * │   │   │   │   │   │   │       │   │   │   │   │   │   │
     * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
     * │Mse│   │   │   │   │   │       │   │   │   │   │   │   │
     * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
     * │   │   │   │   │   │   │       │   │   │   │   │   │   │
     * └───┴───┴───┼───┼───┼───┼───┼───┼───┼───┼───┼───┴───┴───┘
     *             │   │   │   │   │   │   │   │   │
     *             └───┴───┴───┘   └───┴───┴───┘
     */
    [_MOUSENAV] = LAYOUT_split_3x6_3(
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,         KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   TG(_MOUSENAV),
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   MS_BTN3,   KC_NO,         MS_LEFT,   MS_DOWN,   MS_UP,   MS_RGHT,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,         MS_WHLL,   MS_WHLD,   MS_WHLU,   MS_WHLR,   KC_NO,   KC_NO,
                                            KC_TRNS, MS_BTN4, MS_BTN1,       MS_BTN2, MS_BTN5, KC_TRNS
    ),

    /*
     * Gaming1 Layer
     * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
     * │Esc│ T │ Q │ W │ E │ R │       │   │   │   │   │   │   │
     * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
     * │Tab│Sft│ A │ S │ D │ F │       │   │   │   │   │   │   │
     * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
     * │Ctl│ Z │ X │ C │ V │   │       │   │   │   │   │   │   │
     * └───┴───┴───┼───┼───┼───┼───┼───┼───┼───┼───┼───┴───┴───┘
     *             │   │   │   │   │   │   │   │   │
     *             └───┴───┴───┘   └───┴───┴───┘
     */
    [_GAMING1] = LAYOUT_split_3x6_3(
        KC_ESC,  KC_T,    KC_Q,    KC_W,    KC_E,    KC_R,          KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_TAB,  KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,          KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_I,    KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,         KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
                                            MS_WHLD,   MO(_GAMING2),   KC_SPC,        TO(_GAMING1),   KC_NO,   KC_NO
    ),

    /*
     * Gaming2 Layer
     * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
     * │   │ 6 │ 7 │   │ 8 │ 9 │       │   │   │   │   │   │   │
     * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
     * │   │   │   │   │ 0 │   │       │   │   │   │   │   │   │
     * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
     * │   │ 1 │ 2 │ 3 │ 4 │ 5 │       │   │   │   │   │   │   │
     * └───┴───┴───┼───┼───┼───┼───┼───┼───┼───┼───┼───┴───┴───┘
     *             │   │   │   │   │   │   │   │   │
     *             └───┴───┴───┘   └───┴───┴───┘
     */
    [_GAMING2] = LAYOUT_split_3x6_3(
        KC_NO,   KC_6,    KC_7,    KC_NO,   KC_8,    KC_9,          KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_0,    KC_NO,         KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,          KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
                                            KC_NO,   KC_NO,   KC_NO,         KC_NO,   KC_NO,   KC_NO
    )
};

// Combo definitions
enum combo_events {
    COMBO_LT,     // W + E = <
    COMBO_LBRC,   // E + R = [
    COMBO_TILD,   // A + S = ~
    COMBO_GRV,    // S + D = `
    COMBO_LPRN,   // D + F = (
    COMBO_PIPE,   // X + C = |
    COMBO_LCBR,   // C + V = {
    COMBO_ASTR,   // E + I = *
    COMBO_PLUS,   // R + U = +
    COMBO_DLR,    // D + K = $
    COMBO_EQL,    // F + J = =
    COMBO_AMPR,   // G + H = &
    COMBO_EXLM,   // C + , = !
    COMBO_MINS,   // V + M = -
    COMBO_UNDS,   // B + N = _
    COMBO_RBRC,   // U + I = ]
    COMBO_GT,     // I + O = >
    COMBO_RPRN,   // J + K = )
    COMBO_COLON,  // K + L = :
    COMBO_BSLS,   // L + ' =            
    COMBO_RCBR,   // M + , = }
    COMBO_SCLN,   // , + . = ;
    COMBO_CAPS,   // LEFT SHIFT + RIGHT SHIFT = CAPSLOCK
    COMBO_COUNT
};

// Combo key sequences
const uint16_t PROGMEM combo_lt[] = {KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM combo_lbrc[] = {KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM combo_tild[] = {KC_A, KC_S, COMBO_END};
const uint16_t PROGMEM combo_grv[] = {KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM combo_lprn[] = {KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM combo_pipe[] = {KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM combo_lcbr[] = {KC_C, KC_V, COMBO_END};
const uint16_t PROGMEM combo_astr[] = {KC_E, KC_I, COMBO_END};
const uint16_t PROGMEM combo_plus[] = {KC_R, KC_U, COMBO_END};
const uint16_t PROGMEM combo_dlr[] = {KC_D, KC_K, COMBO_END};
const uint16_t PROGMEM combo_eql[] = {KC_F, KC_J, COMBO_END};
const uint16_t PROGMEM combo_ampr[] = {KC_G, KC_H, COMBO_END};
const uint16_t PROGMEM combo_exlm[] = {KC_C, KC_COMMA, COMBO_END};
const uint16_t PROGMEM combo_mins[] = {KC_V, KC_M, COMBO_END};
const uint16_t PROGMEM combo_unds[] = {KC_B, KC_N, COMBO_END};
const uint16_t PROGMEM combo_rbrc[] = {KC_U, KC_I, COMBO_END};
const uint16_t PROGMEM combo_gt[] = {KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM combo_rprn[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM combo_colon[] = {KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM combo_bsls[] = {KC_L, KC_QUOT, COMBO_END};
const uint16_t PROGMEM combo_rcbr[] = {KC_M, KC_COMMA, COMBO_END};
const uint16_t PROGMEM combo_scln[] = {KC_COMMA, KC_DOT, COMBO_END};
const uint16_t PROGMEM combo_caps[] = {KC_LSFT, KC_RSFT, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    // New combos
    [COMBO_LT] = COMBO(combo_lt, KC_LT),
    [COMBO_LBRC] = COMBO(combo_lbrc, KC_LBRC),
    [COMBO_TILD] = COMBO(combo_tild, KC_TILD),
    [COMBO_GRV] = COMBO(combo_grv, KC_GRV),
    [COMBO_LPRN] = COMBO(combo_lprn, KC_LPRN),
    [COMBO_PIPE] = COMBO(combo_pipe, KC_PIPE),
    [COMBO_LCBR] = COMBO(combo_lcbr, KC_LCBR),
    [COMBO_ASTR] = COMBO(combo_astr, KC_ASTR),
    [COMBO_PLUS] = COMBO(combo_plus, KC_PLUS),
    [COMBO_DLR] = COMBO(combo_dlr, KC_DLR),
    [COMBO_EQL] = COMBO(combo_eql, KC_EQL),
    [COMBO_AMPR] = COMBO(combo_ampr, KC_AMPR),
    [COMBO_EXLM] = COMBO(combo_exlm, KC_EXLM),
    [COMBO_MINS] = COMBO(combo_mins, KC_MINS),
    [COMBO_UNDS] = COMBO(combo_unds, KC_UNDS),
    [COMBO_RBRC] = COMBO(combo_rbrc, KC_RBRC),
    [COMBO_GT] = COMBO(combo_gt, KC_GT),
    [COMBO_RPRN] = COMBO(combo_rprn, KC_RPRN),
    [COMBO_BSLS] = COMBO(combo_bsls, KC_BSLS),
    [COMBO_COLON] = COMBO(combo_colon, KC_COLON),
    [COMBO_RCBR] = COMBO(combo_rcbr, KC_RCBR),
    [COMBO_SCLN] = COMBO(combo_scln, KC_SCLN),
    [COMBO_CAPS] = COMBO(combo_caps, KC_CAPS)
};

/* Bongocat animation copied from the evo70 by customMK, slight modifications to make it standalone */
#ifdef OLED_ENABLE
#include "matrix.h"
#include OLED_FONT_H

extern matrix_row_t matrix[MATRIX_ROWS];

#define ANIM_FRAME_DURATION 100
#define IDLE_FRAMES 5
#define IDLE_TIMEOUT 750
#define SLEEP_TIMEOUT 15000

static bool OLED_redraw = true;

static const uint8_t bongofont[] PROGMEM = { \
    0xC1, 0xC1, 0xC2, 0x04, 0x08, 0x10, \
    0xC0, 0x38, 0x04, 0x03, 0x00, 0x00, \
    0xA0, 0x22, 0x24, 0x14, 0x12, 0x12, \
    0xA0, 0x21, 0x22, 0x12, 0x11, 0x11, \
    0x83, 0x7C, 0x41, 0x41, 0x40, 0x40, \
    0x82, 0x82, 0x84, 0x08, 0x10, 0x20, \
    0x80, 0x80, 0x00, 0x00, 0x00, 0x00, \
    0x80, 0x70, 0x19, 0x06, 0x00, 0x00, \
    0x80, 0x70, 0x0C, 0x03, 0x00, 0x00, \
    0x80, 0x00, 0x30, 0x30, 0x00, 0xC0, \
    0x80, 0x00, 0x30, 0x30, 0x00, 0x00, \
    0x49, 0x88, 0x08, 0x08, 0x08, 0x00, \
    0x44, 0x84, 0x04, 0x04, 0x00, 0x00, \
    0x40, 0x80, 0x00, 0x00, 0x00, 0x00, \
    0x40, 0x40, 0x20, 0x20, 0x20, 0x20, \
    0x3C, 0xC2, 0x01, 0x01, 0x02, 0x02, \
    0x35, 0x01, 0x8A, 0x7C, 0x00, 0x00, \
    0x20, 0x40, 0x80, 0x00, 0x00, 0x00, \
    0x20, 0x21, 0x22, 0x12, 0x11, 0x11, \
    0x20, 0x20, 0x10, 0x10, 0x10, 0x10, \
    0x1E, 0xE1, 0x00, 0x00, 0x01, 0x01, \
    0x1C, 0xE2, 0x01, 0x01, 0x02, 0x02, \
    0x18, 0x64, 0x82, 0x02, 0x02, 0x02, \
    0x18, 0x60, 0x80, 0x00, 0x00, 0x00, \
    0x18, 0x18, 0x1B, 0x03, 0x00, 0x40, \
    0x18, 0x06, 0x05, 0x98, 0x99, 0x84, \
    0x12, 0x0B, 0x08, 0x08, 0x08, 0x08, \
    0x11, 0x09, 0x08, 0x08, 0x08, 0x08, \
    0x10, 0x10, 0xD0, 0x11, 0x0F, 0x21, \
    0x10, 0x10, 0x10, 0x11, 0x0F, 0x01, \
    0x10, 0x08, 0x08, 0x04, 0x04, 0x04, \
    0x10, 0x08, 0x04, 0x02, 0x02, 0x04, \
    0x0C, 0x30, 0x40, 0x80, 0x00, 0x00, \
    0x0C, 0x0C, 0x0D, 0x01, 0x00, 0x40, \
    0x08, 0xE8, 0x08, 0x07, 0x10, 0x24, \
    0x08, 0x30, 0x40, 0x80, 0x00, 0x00, \
    0x08, 0x08, 0x08, 0x07, 0x00, 0x00, \
    0x08, 0x08, 0x04, 0x02, 0x02, 0x02, \
    0x08, 0x04, 0x02, 0x01, 0x01, 0x02, \
    0x05, 0x05, 0x09, 0x09, 0x10, 0x10, \
    0x04, 0x38, 0x40, 0x80, 0x00, 0x00, \
    0x04, 0x04, 0x08, 0x08, 0x10, 0x10, \
    0x04, 0x04, 0x04, 0x04, 0x04, 0x04, \
    0x04, 0x04, 0x02, 0x01, 0x00, 0x00, \
    0x02, 0x02, 0x81, 0x80, 0x80, 0x00, \
    0x02, 0x02, 0x04, 0x04, 0x08, 0x08, \
    0x02, 0x02, 0x02, 0x01, 0x01, 0x01, \
    0x02, 0x02, 0x01, 0x00, 0x00, 0x00, \
    0x01, 0xE1, 0x1A, 0x06, 0x09, 0x31, \
    0x01, 0x01, 0x02, 0x04, 0x08, 0x10, \
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, \
    0x00, 0x80, 0x80, 0x00, 0x00, 0x00, \
    0x00, 0x80, 0x40, 0x40, 0x20, 0x20, \
    0x00, 0x00, 0x80, 0x80, 0x40, 0x40, \
    0x00, 0x00, 0x60, 0x60, 0x00, 0x81, \
    0x00, 0x00, 0x01, 0x01, 0x00, 0x40, \
    0x00, 0x00, 0x00, 0x00, 0x00, 0x18, \
    0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, \
    0x00, 0x00, 0x00, 0x00, 0x00, 0x03, \
    0x00, 0x00, 0x00, 0x00, 0x00, 0x01, \
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00}; 


static const uint8_t bongo_line_x[] = {51, 49, 48, 57};
static const uint8_t bongo_line_y[] = {0, 8, 16, 24};
static const uint8_t bongo_line_len[] = {5, 7, 8, 6};

const uint8_t bongo_line_data[8][26] PROGMEM = {
    { //idle1
    60, 52, 19, 30, 35, \
    22, 47, 51, 60, 9, 0, 17, \
    1, 57, 33, 3, 27, 41, 29, 50, \
    45, 36, 60, 60, 60, 60}, \
    { //idle2
    60, 52, 19, 30, 35, \
    22, 47, 51, 60, 9, 0, 17, \
    1, 57, 33, 3, 27, 41, 29, 50, \
    45, 36, 60, 60, 60, 60}, \
    { //idle3
    60, 53, 14, 31, 23, \
    15, 43, 60, 60, 54, 5, 13, \
    7, 56, 24, 2, 26, 39, 29, 50, \
    45, 36, 60, 60, 60, 60}, \
    { //idle4
    6, 52, 19, 38, 32, \
    20, 47, 51, 60, 9, 0, 17, \
    8, 57, 33, 3, 27, 41, 29, 50, \
    45, 36, 60, 60, 60, 60}, \
    { //idle5
    60, 52, 19, 37, 40, \
    21, 47, 51, 60, 9, 0, 17, \
    8, 57, 33, 3, 27, 41, 29, 50, \
    45, 36, 60, 60, 60, 60}, \
    { //prep
    6, 52, 19, 38, 32, \
    20, 44, 51, 60, 10, 48, 16, \
    8, 25, 4, 18, 27, 42, 46, 50, \
    60, 60, 60, 60, 60, 60}, \
    { //tap1
    6, 52, 19, 38, 32, \
    20, 44, 51, 60, 10, 49, 17, \
    8, 25, 4, 18, 27, 41, 28, 11, \
    60, 60, 60, 60, 58, 59}, \
    { //tap2
    6, 52, 19, 38, 32, \
    20, 47, 51, 60, 10, 48, 16, \
    8, 60, 55, 3, 27, 42, 46, 50, \
    45, 34, 12, 60, 60, 60}
};

enum anin_states { sleep, idle, prep, tap };
uint8_t anim_state = idle;
uint32_t idle_timeout_timer = 0;
uint32_t anim_timer = 0;
uint8_t current_idle_frame = 0;
uint8_t current_tap_frame = 6;
uint8_t last_bongo_frame = 12;

void write_bongochar_at_pixel_xy(uint8_t x, uint8_t y, uint8_t data, bool invert) {
    uint8_t i, j, temp;
    for (i = 0; i < 6 ; i++) { // 6 = font width
        temp = pgm_read_byte(&bongofont[data * 6]+i);
        for (j = 0; j < 8; j++) {  // 8 = font height
            if (temp & 0x01) {
                oled_write_pixel(x + i, y + j, !invert);
            } else {
                oled_write_pixel(x + i, y + j, invert);
            }
            temp >>= 1;
        }
    }
}

bool is_key_down(void) {
    for (uint8_t i = 0; i < MATRIX_ROWS; i++) {
        if (matrix[i] > 0) {
            return true;
        }
    }
    return false;
}

void eval_anim_state(void) {
    bool key_down;
    key_down = is_key_down();

    switch (anim_state) {
        case sleep:
            if(key_down) { anim_state = tap; }
            break; 
        case idle:
            if(key_down) { anim_state = tap; }
            else if (timer_elapsed32(idle_timeout_timer) >= SLEEP_TIMEOUT) //prep to idle
                {
                    anim_state = sleep;
                    current_idle_frame = 0;
                }
            break;
        case prep:
            if(key_down) { anim_state = tap; }
            else if (timer_elapsed32(idle_timeout_timer) >= IDLE_TIMEOUT) //prep to idle
                {
                    anim_state = idle;
                    current_idle_frame = 0;
                }
            break;
        case tap:
            if (!key_down)
            {
                anim_state = prep;
                idle_timeout_timer = timer_read32();
            }
            break;
        default:
            break;
    }
}

void draw_bongo_table(void) {
    //draws the table edge for bongocat, this edge doesn't change during the animation
    uint8_t i;
    uint8_t y = 31;
    uint8_t j = 0;
    for (i = 17; i < 57; i++) {
        oled_write_pixel(i, y, true); //every five horizontal pixels, move up one pixel to make a diagonal line
        if (j == 4) {
            --y;
            j=0;
        } else {
            j++;
        }
    }

    y=15;
    j=0;
    for (i = 91; i < 128; i++) {

        oled_write_pixel(i, y, true); //every four horizontal pixels, move up one pixel to make a diagonal line
        if (j == 3) {
            --y;
            j=0;
        } else {
            j++;
        }
    }


}


void draw_bongocat_frame(int framenumber) {
    //only redraw if the animation frame has changed
    if (framenumber != last_bongo_frame) {
        last_bongo_frame = framenumber;
        uint8_t i, j, current_bongochar = 0;
        for (i = 0; i < 4; i++) {
            for (j = 0; j < bongo_line_len[i]; j++) {
                write_bongochar_at_pixel_xy(bongo_line_x[i] + j*6, bongo_line_y[i], pgm_read_byte(&bongo_line_data[framenumber][current_bongochar]), false);
                current_bongochar++;
            }
        }
    }

}

bool is_new_tap(void) {
    static matrix_row_t old_matrix[MATRIX_ROWS] = {0};
    bool new_tap = false;
    for (uint8_t i = 0; i < MATRIX_ROWS; i++) {
        if (i < MATRIX_ROWS) {  // Ensure we don't go out of bounds
            if (matrix[i] > old_matrix[i]) { // more 1's detected, there was a new tap
                new_tap = true;
            }
            old_matrix[i] = matrix[i];
        }
    }
    return new_tap;
}

void draw_bongocat(void) {
    static bool already_tapped = false;
    if (is_new_tap()) {
        already_tapped = false;
    };
    eval_anim_state();
    switch (anim_state) {
        case sleep:
            draw_bongocat_frame(4);
            break;
        case idle:       
            draw_bongocat_frame(4 - current_idle_frame);
            if (timer_elapsed32(anim_timer) > ANIM_FRAME_DURATION) {
                current_idle_frame = (current_idle_frame + 1) % 5;
                anim_timer = timer_read32();
            }
            break;
        case prep:
            draw_bongocat_frame(5);
            already_tapped = false;
            break;
        case tap:
            draw_bongocat_frame(current_tap_frame);
            if (already_tapped == false) {
                if (current_tap_frame == 6) {
                    current_tap_frame = 7;
                }
                else {
                    current_tap_frame = 6;
                }
            }
            already_tapped = true;
            break;
        default:
            draw_bongocat_frame(4);
            already_tapped = false;
            break;

    }
}

bool oled_task_user(void) {

    if (OLED_redraw){
        oled_clear();
        last_bongo_frame = 12; //force a redraw
        draw_bongo_table();
        OLED_redraw = false;
    }
    draw_bongocat();
    return false;
}

#endif

// RGB Matrix initialization
void keyboard_post_init_user(void) {
    // Enable RGB Matrix effects
    rgb_matrix_enable();
    // Set default effect (you can change this to any effect you like)
    rgb_matrix_mode(RGB_MATRIX_SOLID_COLOR);
    // Set your desired color (RGB: 193, 174, 255)
    rgb_matrix_sethsv(260, 32, 100);  // 260° (purple hue), 32% saturation, 100% brightness
}

// Layer state handling
layer_state_t layer_state_set_user(layer_state_t state) {
    static bool fn_activated = false;
    
    // Check if we're coming from a state where FN was activated
    if (fn_activated && !(state & (1 << _NAV)) && !(state & (1 << _NUM_SYM))) {
        // If both NAV and NUM_SYM are released, deactivate FN layer
        state &= ~((layer_state_t)1 << _FN);
        fn_activated = false;
    }
    // Check if both NAV and NUM_SYM are being pressed
    else if ((state & (1 << _NAV)) && (state & (1 << _NUM_SYM))) {
        // Activate FN layer and remember we did this
        state |= (layer_state_t)1 << _FN;
        fn_activated = true;
    }
    
    return state;
}

// Custom keycode handling
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_MAKE:
            if (!record->event.pressed) {
                SEND_STRING("make " QMK_KEYBOARD ":" QMK_KEYMAP ":flash\n");
            }
            return false;
        case KC_RESET:
            if (!record->event.pressed) {
                SEND_STRING("make " QMK_KEYBOARD ":" QMK_KEYMAP ":flash\n");
            }
            return false;
        case KC_RGB_T:
            if (!record->event.pressed) {
                rgblight_toggle();
            }
            return false;
    }
    return true;
}

