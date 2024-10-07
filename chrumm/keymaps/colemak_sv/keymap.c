#include QMK_KEYBOARD_H
#include "version.h"

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE = 0,
    _FN,
    _ALTGR,
    _FN2,
    _FN3,
    _FN4
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
        KC_ESC,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_MINS,    KC_DEL,
        KC_TAB,     KC_Q,       KC_W,       KC_F,       KC_P,       KC_G,       KC_J,       KC_L,       KC_U,       KC_Y,       KC_SCLN,    KC_LBRC,    KC_PGUP,
        KC_LSFT,    KC_A,       KC_R,       KC_S,       KC_T,       KC_D,       KC_H,       KC_N,       KC_E,       KC_I,       KC_O,       KC_QUOT,    KC_PGDN,
        KC_NUBS,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_K,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_UP,      KC_ENT,
        KC_LCTL,                KC_LGUI,    KC_LALT,    MO(1),      KC_SPC,     KC_BSPC,    KC_RALT,    KC_BSLS,    MO(3),      KC_LEFT,    KC_DOWN,    KC_RIGHT
    ),
    [_FN] = LAYOUT(
        QK_BOOT,    KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,      KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,     KC_F12,
        _______,    _______,    KC_BTN1,    KC_MS_UP,   KC_BTN3,    KC_WH_U,    KC_VOLU,    KC_HOME,    KC_UP,      KC_END,     KC_PGUP,    _______,    _______,
        _______,    _______,    KC_MS_L,    KC_MS_D,    KC_MS_R,    KC_WH_D,    KC_VOLD,    KC_LEFT,    KC_DOWN,    KC_RIGHT,   KC_PGDN,    _______,    _______,
        _______,    _______,    KC_WH_L,    _______,    KC_WH_R,    _______,    KC_MUTE,    KC_MPRV,    KC_MPLY,    KC_MNXT,    RALT(KC_RBRC),_______,  _______,
        _______,                _______,    _______,    MO(1),      _______,    _______,    _______,    KC_EQL,     _______,    _______,    _______,    _______
    ),
    [_ALTGR] = LAYOUT(
        KC_ESC,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_MINS,    KC_DEL,
        KC_TAB,     KC_Q,       KC_W,       KC_F,       KC_P,       KC_G,       KC_J,       KC_L,       KC_U,       KC_Y,       KC_SCLN,    KC_LBRC,    KC_SPC,
        KC_LSFT,    KC_A,       KC_R,       KC_S,       KC_T,       KC_D,       KC_H,       KC_N,       KC_E,       KC_I,       KC_O,       KC_QUOT,    KC_SPC,
        KC_NUBS,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_K,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_UP,      KC_ENT,
        KC_LCTL,                KC_LGUI,    KC_LALT,    MO(1),      KC_SPC,     KC_BSPC,    KC_SPC,     KC_SPC,     KC_SPC,     KC_LEFT,    KC_DOWN,    KC_RIGHT
    ),
    [_FN2] =  LAYOUT(
        KC_ESC,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_MINS,    KC_DEL,
        KC_TAB,     KC_Q,       KC_W,       KC_F,       KC_P,       KC_G,       KC_J,       KC_L,       KC_U,       KC_Y,       KC_SCLN,    KC_LBRC,    KC_SPC,
        KC_LSFT,    KC_A,       KC_R,       KC_S,       KC_T,       KC_D,       KC_H,       KC_N,       KC_E,       KC_I,       KC_O,       KC_QUOT,    KC_SPC,
        KC_NUBS,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_K,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_UP,      KC_ENT,
        KC_LCTL,                KC_LGUI,    KC_LALT,    MO(1),      KC_SPC,     KC_BSPC,    KC_SPC,     KC_SPC,     KC_SPC,     KC_LEFT,    KC_DOWN,    KC_RIGHT
    ),
     [_FN3] =  LAYOUT(
        _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,     _______,   _______,    _______,
        _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,     _______,   _______,    _______,
        _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,     _______,   _______,    _______,
        _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,     _______,   _______,    _______,
        _______,                _______,    _______,    MO(1),      _______,    _______,    _______,    _______,    _______,     _______,   _______,    _______
    ),
     [_FN4] =  LAYOUT(
        _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,     _______,   _______,    _______,
        _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,     _______,   _______,    _______,
        _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,     _______,   _______,    _______,
        _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,     _______,   _______,    _______,
        _______,                _______,    _______,    MO(1),      _______,    _______,    _______,    _______,    _______,     _______,   _______,    _______
    )
};


// Different Layer can generate different encoder signals
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [_BASE]         = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [_FN]           = { ENCODER_CCW_CW(_______, _______) },
    [_ALTGR]        = { ENCODER_CCW_CW(_______, _______) },
    [_FN2]          = { ENCODER_CCW_CW(_______, _______) },
    [_FN3]          = { ENCODER_CCW_CW(_______, _______) },
    [_FN4]          = { ENCODER_CCW_CW(_______, _______) }
};
#endif

// The same goes for the encoder switch, if it exists
#if defined(DIP_SWITCH_ENABLE)
const uint16_t PROGMEM encoder_switch_map[][NUM_ENCODERS][2] = {
    [_BASE]         = { {KC_MUTE, KC_NO}   },
    [_FN]           = { {KC_MUTE, KC_MUTE} },
    [_ALTGR]        = { {KC_MUTE, KC_NO}   },
    [_FN2]          = { {KC_MUTE, KC_NO }  },
    [_FN3]          = { {KC_MUTE, KC_NO }  },
    [_FN4]          = { {KC_MUTE, KC_NO }  }
};

bool dip_switch_update_user(uint8_t index, bool active) {
    if (active) {
        tap_code(encoder_switch_map[get_highest_layer(layer_state)][index][0]);
    } else {
        tap_code(encoder_switch_map[get_highest_layer(layer_state)][index][1]);
    }

    return true;
}
#endif