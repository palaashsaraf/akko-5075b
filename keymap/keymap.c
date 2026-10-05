// Copyright 2024 yangzheng20003 (@yangzheng20003)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "rgb_record/rgb_record.h"

enum layers {
    _BL = 0,
    _FL,
    _MBL,
    _MFL,
    _FBL,
};

#define ______ HS_BLACK

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_BL] = LAYOUT( /* Base */
        KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_DEL,   KC_MUTE,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,  KC_HOME,  
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,  KC_PGUP,    
        KC_ESC,   KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,   KC_PGDN,          
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,  KC_UP,    KC_END,
        KC_LCTL,  KC_LCMD,  KC_LALT,                      KC_SPC,                                 KC_RALT,  MO(_FL),  KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

    [_FL] = LAYOUT( /* Base */
        _______,  KC_MYCM,  KC_MAIL,  KC_WSCH,  KC_WHOM,  KC_MSEL,  KC_MPLY,  KC_MPRV,  KC_MNXT,  KC_NO,     KC_NO,    KC_NO,   KC_NO,    RGB_MOD,  _______,
        EE_CLR,   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  RGB_SPD,  RGB_SPI,  _______,  _______,   
        _______,  _______,  HS_DIR,   KC_BT1,   KC_BT2,   KC_BT3,   KC_2G4,   KC_USB,   KC_INS,   _______,  KC_PSCR,  _______,  _______,  _______,  _______,  
        _______,  _______,  _______,  _______,  _______,  KC_ENCW,  _______,  _______,  _______,  RGB_TOG,  _______,  _______,            _______,  _______, 
        _______,            _______,  _______,  KC_CALC,  _______,  NK_TOGG,  _______,  KC_MUTE,  KC_VOLD,  KC_VOLU,  _______,  MO(_FBL), RGB_VAI,  _______,
        RL_MOD,   GU_TOGG,  _______,                      HS_BATQ,                                _______,  _______,  HS_CT_A,  RGB_SAI,  RGB_VAD,  RGB_SAD),

    [_MBL] = LAYOUT( /* Base */
        KC_ESC,   KC_BRID,  KC_BRIU,  KC_MCTL,  HS_SIRI,  _______,  _______,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  KC_DEL,   KC_MUTE,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,  KC_HOME,  
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,  KC_PGUP,    
        KC_ESC,   KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,   KC_PGDN,          
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,  KC_UP,    KC_END,
        KC_LCTL,  KC_LALT,  KC_LCMD,                      KC_SPC,                                 KC_RCMD,  MO(_MFL), KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

    [_MFL] = LAYOUT( /* Base */
        _______,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   RGB_MOD,  _______,
        EE_CLR,   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  RGB_SPD,  RGB_SPI,  _______,  _______,   
        _______,  _______,  HS_DIR,   KC_BT1,   KC_BT2,   KC_BT3,   KC_2G4,   KC_USB,   KC_INS,   _______,  KC_PSCR,  _______,  _______,  _______,   _______,  
        _______,  _______,  _______,  _______,  _______,  KC_ENCW,  _______,  _______,  _______,  RGB_TOG,  _______,  _______,            _______,  _______, 
        _______,            _______,  _______,  KC_CALC,  _______,  NK_TOGG,  _______,  KC_MUTE,  KC_VOLD,  KC_VOLU,  _______,  MO(_FBL), RGB_VAI,  _______,
        RL_MOD,   _______,  _______,                      HS_BATQ,                                _______,  _______,  HS_CT_A,  RGB_SAI,  RGB_VAD,  RGB_SAD),
    [_FBL] = LAYOUT( /* Base */ 
        QK_BOOT,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, 
        _______,  _______,  _______,  _______,  BT_TEST,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,
        _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,                      _______,                                _______,  _______,  _______,  _______,  _______,  _______)

};

	const uint16_t PROGMEM rgbrec_default_effects[RGBREC_CHANNEL_NUM][MATRIX_ROWS][MATRIX_COLS] = {
        [0] = LAYOUT(
            HS_GREEN, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
            ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
            ________, ________, HS_GREEN, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,           ________,
            ________, HS_GREEN, HS_GREEN, HS_GREEN, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
            ________,           ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, HS_GREEN, ________,
            ________, ________, ________,                     ________,                               ________, ________, ________, HS_GREEN, HS_GREEN, HS_GREEN),
     
         [1] = LAYOUT(
            ________, HS_RED,   HS_RED,   HS_RED,   ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
            ________, HS_RED,   HS_RED,   HS_RED,   HS_RED,   HS_RED,   ________, ________, ________, ________, ________, ________, ________, ________, ________,
            HS_RED,   HS_RED,   HS_RED,   HS_RED,   HS_RED,   ________, ________, ________, ________, ________, ________, ________, ________,           ________,
            ________, HS_RED,   HS_RED,   HS_RED,   ________, HS_RED,   ________, ________, ________, ________, ________, ________, ________, ________, ________,
            HS_RED,            ________, ________, ________, HS_RED,   ________, ________, ________, ________, ________, ________, ________, ________, ________,
            HS_RED,   ________, HS_RED,                       ________,                               ________, ________, ________, ________, ________, ________),
     
         [2] = LAYOUT(
            HS_BLUE,  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
            ________, HS_BLUE,  HS_BLUE,  HS_BLUE,  HS_BLUE,  HS_BLUE,  HS_BLUE,  HS_BLUE,  ________, ________, ________, ________, ________, ________, ________,
            ________, HS_BLUE,  HS_BLUE,  HS_BLUE,  HS_BLUE,  HS_BLUE,  ________, ________, ________, ________, ________, ________, ________,           ________,
            ________, HS_BLUE,  HS_BLUE,  HS_BLUE,  HS_BLUE,  HS_BLUE,  ________, ________, ________, ________, ________, ________, ________, ________, ________,
            ________,           ________, HS_BLUE,  HS_BLUE,  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
            ________, ________, ________,                     ________,                               ________, ________, ________, ________, ________, ________),
};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [1] = {ENCODER_CCW_CW(_______, _______)},
    [2] = {ENCODER_CCW_CW(_______, _______)},
    [3] = {ENCODER_CCW_CW(_______, _______)},
    [4] = {ENCODER_CCW_CW(_______, _______)},
};
#endif
// clang-format on

// akko's published source calls these but never defines them
void md_rf_send_carrier(uint8_t channel, uint8_t power, uint8_t mode) {}
void md_rf_send_stop(void) {}
uint32_t suspend_timer;

const key_override_t caps_override =
    ko_make_with_layers_and_negmods(MOD_MASK_SHIFT, KC_ESC, KC_CAPS, ~0, MOD_MASK_CAG);

const key_override_t *key_overrides[] = {
    &caps_override,
};

// side lights start off after a settings reset
static bool settings_reset;

void eeconfig_init_user(void) {
    settings_reset = true;
}

void keyboard_post_init_user(void) {
    if (settings_reset) {
        settings_reset = false;
        rgblight_disable();
    }
}

// pressed keys flash catppuccin mocha yellow, hold, then ease back to the base color
#define FLASH_HUE  29   // mocha yellow, 41 degrees
#define FLASH_SAT  170
#define FLASH_GAIN 3    // flash brightness = base brightness x 3
#define FLASH_HOLD 150  // ms at full flash color
#define FLASH_FADE 700  // ms to fade back

static uint8_t mix(uint8_t a, uint8_t b, uint8_t t) {
    return a + (b - a) * t / 255;
}

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    if (rgb_matrix_get_mode() != RGB_MATRIX_SOLID_COLOR) return true;

    uint16_t val = rgb_matrix_get_val() * FLASH_GAIN;
    if (val > 255) val = 255;

    RGB base  = hsv_to_rgb(rgb_matrix_get_hsv());
    RGB flash = hsv_to_rgb((HSV){FLASH_HUE, FLASH_SAT, val});

    for (uint8_t i = 0; i < g_last_hit_tracker.count; i++) {
        uint8_t  led  = g_last_hit_tracker.index[i];
        uint16_t tick = g_last_hit_tracker.tick[i];
        if (led < led_min || led >= led_max || tick >= FLASH_HOLD + FLASH_FADE) continue;

        uint8_t t = 0;
        if (tick > FLASH_HOLD) {
            uint16_t x = (tick - FLASH_HOLD) * 255 / FLASH_FADE;
            t = x * x / 255;
        }
        rgb_matrix_set_color(led, mix(flash.r, base.r, t),
                                  mix(flash.g, base.g, t),
                                  mix(flash.b, base.b, t));
    }
    return true;
}

// shift + knob changes display brightness; knob alone stays volume
bool encoder_update_user(uint8_t index, bool clockwise) {
    const uint8_t mods = get_mods();
    if (!(mods & MOD_MASK_SHIFT)) return true;

    del_mods(MOD_MASK_SHIFT);
    send_keyboard_report();
    tap_code_delay(clockwise ? KC_BRIU : KC_BRID, 10);
    set_mods(mods);
    send_keyboard_report();
    return false;
}
