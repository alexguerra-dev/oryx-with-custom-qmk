#include QMK_KEYBOARD_H
#include "version.h"

enum custom_keycodes {
  RGB_SLD = EZ_SAFE_RANGE,
  ORYX_SL_TOGG,
  HSV_86_255_128,
  HSV_172_255_255,
};


enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
  DANCE_5,
  DANCE_6,
  DANCE_7,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    ALL_T(KC_EQUAL),KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_MEH,                                         KC_MEH,         KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           ALL_T(KC_MINUS),
    MT(MOD_LALT, KC_TAB),KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           LALT(LGUI(LCTL(LSFT(KC_SCLN)))),                                KC_TRANSPARENT, KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           MT(MOD_RALT, KC_BSLS),
    MT(MOD_LCTL, KC_ESCAPE),KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        MT(MOD_RCTL, KC_QUOTE),
    SC_LSPO,        KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           TD(DANCE_0),                                    TD(DANCE_1),    KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       SC_RSPC,
    TT(1),          KC_GRAVE,       CW_TOGG,        KC_LEFT,        KC_RIGHT,                                                                                                       KC_DOWN,        KC_UP,          KC_LBRC,        KC_RBRC,        TT(2),
                                                                                                    MT(MOD_LGUI, KC_ESCAPE),MT(MOD_LCTL, KC_ESCAPE),MT(MOD_RCTL, KC_ESCAPE),MT(MOD_RGUI, KC_ESCAPE),
                                                                                                                    MT(MOD_LALT, KC_ESCAPE),MT(MOD_RALT, KC_ESCAPE),
                                                                                    KC_BSPC,        KC_DELETE,      MO(3),          MO(3),          KC_ENTER,       KC_SPACE
  ),
  [1] = LAYOUT_ergodox_pretty(
    KC_ESCAPE,      KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_LCBR,        KC_RCBR,        KC_PIPE,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_UP,          KC_7,           KC_8,           KC_9,           KC_ASTR,        KC_F12,
    KC_TRANSPARENT, KC_HASH,        KC_DLR,         KC_LPRN,        KC_RPRN,        KC_GRAVE,                                                                       KC_DOWN,        KC_4,           KC_5,           KC_6,           KC_PLUS,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_PERC,        KC_CIRC,        KC_LBRC,        KC_RBRC,        KC_TILD,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_AMPR,        KC_1,           KC_2,           KC_3,           KC_BSLS,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_EQUAL,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_DOT,         KC_0,           KC_EQUAL,       KC_TRANSPARENT,
                                                                                                    RGB_MODE_FORWARD,RGB_VAI,        KC_TRANSPARENT, RGB_SLD,
                                                                                                                    HSV_86_255_128, TOGGLE_LAYER_COLOR,
                                                                                    RGB_VAD,        HSV_172_255_255,KC_TRANSPARENT, KC_TRANSPARENT, RGB_HUD,        KC_TRANSPARENT
  ),
  [2] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_UP,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_TRANSPARENT,                                                                 KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_UP,       KC_MS_RIGHT,    KC_TRANSPARENT, KC_MEDIA_PLAY_PAUSE,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT, ORYX_SL_TOGG,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_WH_LEFT,  KC_MS_WH_RIGHT,                                                                                                 KC_MS_WH_DOWN,  KC_MS_WH_UP,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_MS_BTN3,     KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN3,
                                                                                                                    KC_MS_WH_UP,    KC_MS_WH_UP,
                                                                                    KC_MS_BTN1,     KC_MS_BTN2,     KC_MS_WH_DOWN,  KC_MS_WH_DOWN,  KC_MS_BTN2,     KC_MS_BTN1
  ),
  [3] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, TD(DANCE_2),    TD(DANCE_3),    TD(DANCE_4),    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TD(DANCE_5),    KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_LEFT,        KC_TRANSPARENT, KC_TRANSPARENT, TD(DANCE_7),    KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TD(DANCE_6),    KC_TRANSPARENT,                                                                 LALT(LCTL(KC_LEFT)),LALT(LCTL(KC_DOWN)),LALT(LCTL(KC_UP)),LALT(LCTL(KC_RIGHT)),KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, LALT(KC_F3),    KC_TRANSPARENT, KC_TRANSPARENT, LALT(KC_F1),    LALT(KC_F2)
  ),
};




rgblight_config_t rgblight_config;
bool disable_layer_color = 0;

bool suspended = false;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case ORYX_SL_TOGG:
      if (record->event.pressed) {
        wait_ms(10);
        toggle_smart_layer();
      }
      break;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
    case TOGGLE_LAYER_COLOR:
      if (record->event.pressed) {
        disable_layer_color ^= 1;
      }
      return false;
    case HSV_86_255_128:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          rgblight_mode(1);
          rgblight_sethsv(86,255,128);
        #endif
      }
      return false;
    case HSV_172_255_255:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          rgblight_mode(1);
          rgblight_sethsv(172,255,255);
        #endif
      }
      return false;
  }
  return true;
}

uint8_t layer_state_set_user(uint8_t state) {
    uint8_t layer = biton(state);
    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
      case 1:
        ergodox_right_led_1_on();
        break;
      case 2:
        ergodox_right_led_2_on();
        break;
      case 3:
        ergodox_right_led_3_on();
        break;
      case 4:
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        break;
      case 5:
        ergodox_right_led_1_on();
        ergodox_right_led_3_on();
        break;
      case 6:
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        break;
      case 7:
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        break;
      default:
        break;
    }
    switch (layer) {
      case 0:
        if(!disable_layer_color) {
          rgblight_enable_noeeprom();
          rgblight_mode_noeeprom(1);
          rgblight_sethsv_noeeprom(188,255, rgblight_config.val);
        }
        break;
      case 1:
        if(!disable_layer_color) {
          rgblight_enable_noeeprom();
          rgblight_mode_noeeprom(1);
          rgblight_sethsv_noeeprom(41,255, rgblight_config.val);
        }
        break;
      case 2:
        if(!disable_layer_color) {
          rgblight_enable_noeeprom();
          rgblight_mode_noeeprom(1);
          rgblight_sethsv_noeeprom(188,255, rgblight_config.val);
        }
        break;
      case 3:
        if(!disable_layer_color) {
          rgblight_enable_noeeprom();
          rgblight_mode_noeeprom(1);
          rgblight_sethsv_noeeprom(0,245, rgblight_config.val);
        }
        break;
      default:
        if(!disable_layer_color) {
          rgblight_config.raw = eeconfig_read_rgblight();
          if(rgblight_config.enable == true) {
            rgblight_enable();
            rgblight_mode(rgblight_config.mode);
            rgblight_sethsv(rgblight_config.hue, rgblight_config.sat, rgblight_config.val);
          }
          else {
            rgblight_disable();
          }
        }
        break;
    }
    return state;
};

void keyboard_post_init_user(void) {
  layer_state_set_user(layer_state);
}


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[8];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(LSFT(KC_V)));
        tap_code16(LCTL(LSFT(KC_V)));
        tap_code16(LCTL(LSFT(KC_V)));
    }
    if(state->count > 3) {
        tap_code16(LCTL(LSFT(KC_V)));
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(LCTL(LSFT(KC_V))); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_C)); break;
        case DOUBLE_HOLD: register_code16(LCTL(KC_X)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(LSFT(KC_V))); register_code16(LCTL(LSFT(KC_V)));
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(LCTL(LSFT(KC_V))); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_C)); break;
        case DOUBLE_HOLD: unregister_code16(LCTL(KC_X)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(LSFT(KC_V))); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(KC_Z));
        tap_code16(LCTL(KC_Z));
        tap_code16(LCTL(KC_Z));
    }
    if(state->count > 3) {
        tap_code16(LCTL(KC_Z));
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(LCTL(KC_Z)); break;
        case DOUBLE_TAP: register_code16(LCTL(LSFT(KC_Z))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_Z)); register_code16(LCTL(KC_Z));
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_Z)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(LSFT(KC_Z))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_Z)); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(KC_1));
        tap_code16(LALT(KC_1));
        tap_code16(LALT(KC_1));
    }
    if(state->count > 3) {
        tap_code16(LALT(KC_1));
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(LALT(KC_1)); break;
        case DOUBLE_TAP: register_code16(LALT(KC_1)); register_code16(LALT(KC_1)); break;
        case DOUBLE_HOLD: register_code16(LALT(LSFT(KC_1))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(KC_1)); register_code16(LALT(KC_1));
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(LALT(KC_1)); break;
        case DOUBLE_TAP: unregister_code16(LALT(KC_1)); break;
        case DOUBLE_HOLD: unregister_code16(LALT(LSFT(KC_1))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(KC_1)); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(tap_dance_state_t *state, void *user_data);
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void on_dance_3(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(KC_2));
        tap_code16(LALT(KC_2));
        tap_code16(LALT(KC_2));
    }
    if(state->count > 3) {
        tap_code16(LALT(KC_2));
    }
}

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(LALT(KC_2)); break;
        case DOUBLE_TAP: register_code16(LALT(KC_2)); register_code16(LALT(KC_2)); break;
        case DOUBLE_HOLD: register_code16(LALT(LSFT(KC_2))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(KC_2)); register_code16(LALT(KC_2));
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(LALT(KC_2)); break;
        case DOUBLE_TAP: unregister_code16(LALT(KC_2)); break;
        case DOUBLE_HOLD: unregister_code16(LALT(LSFT(KC_2))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(KC_2)); break;
    }
    dance_state[3].step = 0;
}
void on_dance_4(tap_dance_state_t *state, void *user_data);
void dance_4_finished(tap_dance_state_t *state, void *user_data);
void dance_4_reset(tap_dance_state_t *state, void *user_data);

void on_dance_4(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(KC_3));
        tap_code16(LALT(KC_3));
        tap_code16(LALT(KC_3));
    }
    if(state->count > 3) {
        tap_code16(LALT(KC_3));
    }
}

void dance_4_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: register_code16(LALT(KC_3)); break;
        case DOUBLE_TAP: register_code16(LALT(KC_3)); register_code16(LALT(KC_3)); break;
        case DOUBLE_HOLD: register_code16(LALT(LSFT(KC_3))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(KC_3)); register_code16(LALT(KC_3));
    }
}

void dance_4_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP: unregister_code16(LALT(KC_3)); break;
        case DOUBLE_TAP: unregister_code16(LALT(KC_3)); break;
        case DOUBLE_HOLD: unregister_code16(LALT(LSFT(KC_3))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(KC_3)); break;
    }
    dance_state[4].step = 0;
}
void on_dance_5(tap_dance_state_t *state, void *user_data);
void dance_5_finished(tap_dance_state_t *state, void *user_data);
void dance_5_reset(tap_dance_state_t *state, void *user_data);

void on_dance_5(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(KC_T));
        tap_code16(LALT(KC_T));
        tap_code16(LALT(KC_T));
    }
    if(state->count > 3) {
        tap_code16(LALT(KC_T));
    }
}

void dance_5_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP: register_code16(LALT(KC_T)); break;
        case DOUBLE_TAP: register_code16(LALT(KC_T)); register_code16(LALT(KC_T)); break;
        case DOUBLE_HOLD: register_code16(LSFT(KC_T)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(KC_T)); register_code16(LALT(KC_T));
    }
}

void dance_5_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
        case SINGLE_TAP: unregister_code16(LALT(KC_T)); break;
        case DOUBLE_TAP: unregister_code16(LALT(KC_T)); break;
        case DOUBLE_HOLD: unregister_code16(LSFT(KC_T)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(KC_T)); break;
    }
    dance_state[5].step = 0;
}
void on_dance_6(tap_dance_state_t *state, void *user_data);
void dance_6_finished(tap_dance_state_t *state, void *user_data);
void dance_6_reset(tap_dance_state_t *state, void *user_data);

void on_dance_6(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_HOME);
        tap_code16(KC_HOME);
        tap_code16(KC_HOME);
    }
    if(state->count > 3) {
        tap_code16(KC_HOME);
    }
}

void dance_6_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[6].step = dance_step(state);
    switch (dance_state[6].step) {
        case SINGLE_TAP: register_code16(KC_HOME); break;
        case DOUBLE_TAP: register_code16(LSFT(KC_HOME)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_HOME); register_code16(KC_HOME);
    }
}

void dance_6_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[6].step) {
        case SINGLE_TAP: unregister_code16(KC_HOME); break;
        case DOUBLE_TAP: unregister_code16(LSFT(KC_HOME)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_HOME); break;
    }
    dance_state[6].step = 0;
}
void on_dance_7(tap_dance_state_t *state, void *user_data);
void dance_7_finished(tap_dance_state_t *state, void *user_data);
void dance_7_reset(tap_dance_state_t *state, void *user_data);

void on_dance_7(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(KC_O));
        tap_code16(LALT(KC_O));
        tap_code16(LALT(KC_O));
    }
    if(state->count > 3) {
        tap_code16(LALT(KC_O));
    }
}

void dance_7_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[7].step = dance_step(state);
    switch (dance_state[7].step) {
        case SINGLE_TAP: register_code16(LALT(KC_O)); break;
        case DOUBLE_TAP: register_code16(LALT(KC_O)); register_code16(LALT(KC_O)); break;
        case DOUBLE_HOLD: register_code16(LALT(LSFT(KC_O))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(KC_O)); register_code16(LALT(KC_O));
    }
}

void dance_7_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[7].step) {
        case SINGLE_TAP: unregister_code16(LALT(KC_O)); break;
        case DOUBLE_TAP: unregister_code16(LALT(KC_O)); break;
        case DOUBLE_HOLD: unregister_code16(LALT(LSFT(KC_O))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(KC_O)); break;
    }
    dance_state[7].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
        [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_4, dance_4_finished, dance_4_reset),
        [DANCE_5] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_5, dance_5_finished, dance_5_reset),
        [DANCE_6] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_6, dance_6_finished, dance_6_reset),
        [DANCE_7] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_7, dance_7_finished, dance_7_reset),
};
