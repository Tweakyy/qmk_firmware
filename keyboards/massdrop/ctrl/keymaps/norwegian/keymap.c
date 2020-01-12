#include QMK_KEYBOARD_H

/* ------------------------- Definitions: Made by Tweaky ------------------------- */
#define AE_L M(0)
#define AE_U M(1)
#define OE_L M(2)
#define OE_U M(3)
#define AA_L M(4)
#define AA_U M(5)
#define ALT_TAB LALT(KC_TAB)
/* ------------------------- Definitions: Made by Tweaky (END) ------------------------- */

/* ------------------------- Custom Keycodes: Made by Tweaky ------------------------- */
/*
enum custom_keycodes {
    SFT_MO1 = SAFE_RANGE,
};
*/
/* ------------------------- Custom Keycodes: Made by Tweaky (END) ------------------------- */

enum ctrl_keycodes {
    L_BRI = SAFE_RANGE, //LED Brightness Increase
    L_BRD,              //LED Brightness Decrease
    L_EDG_I,            //LED Edge Brightness Increase
    L_EDG_D,            //LED Edge Brightness Decrease
    L_EDG_M,            //LED Edge lighting mode
    L_PTN,              //LED Pattern Select Next
    L_PTP,              //LED Pattern Select Previous
    L_PSI,              //LED Pattern Speed Increase
    L_PSD,              //LED Pattern Speed Decrease
    L_T_MD,             //LED Toggle Mode
    L_T_ONF,            //LED Toggle On / Off
    L_ON,               //LED On
    L_OFF,              //LED Off
    L_T_BR,             //LED Toggle Breath Effect
    L_T_PTD,            //LED Toggle Scrolling Pattern Direction and effect
    U_T_AGCR,           //USB Toggle Automatic GCR control
    DBG_TOG,            //DEBUG Toggle On / Off
    DBG_MTRX,           //DEBUG Toggle Matrix Prints
    DBG_KBD,            //DEBUG Toggle Keyboard Prints
    DBG_MOU,            //DEBUG Toggle Mouse Prints
    DBG_FAC,            //DEBUG Factory light testing (All on white)
    MD_BOOT             //Restart into bootloader after hold timeout
};

#define TG_NKRO MAGIC_TOGGLE_NKRO //Toggle 6KRO / NKRO mode

keymap_config_t keymap_config;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT( //Normal Layout
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,             KC_PSCR, KC_SLCK, KC_PAUS, \
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,   KC_INS,  KC_HOME, KC_PGUP, \
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,   KC_DEL,  KC_END,  KC_PGDN, \
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,                                        \
        LM(1, MOD_LSFT), KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, LM(1, MOD_LSFT),              KC_UP,            \
        KC_LCTL, KC_LGUI, KC_LALT,                   KC_SPC,                             KC_RALT, _______, KC_APP,  KC_RCTL,            KC_LEFT, KC_DOWN, KC_RGHT  \
    ),
    [1] = LAYOUT( // Shift Layout
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,            _______, _______, _______, \
        NO_SCTN, KC_EXLM, KC_DQUO, _______, _______, _______, KC_AMPR, _______, KC_LPRN, KC_RPRN, _______, KC_QUES, OSL(2),  _______,   _______  _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______, _______  _______, \    
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                                       \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                              _______,          \
        _______, _______, _______,                   _______,                            _______, _______, _______, _______,            _______, _______, _______  \
    ),
    [2] = LAYOUT( // Alt Layout
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,            _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                                       \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                              _______,          \
        _______, _______, _______,                   _______,                            _______, _______, _______, _______,            _______, _______, _______  \
    ),
    [3] = LAYOUT( // other lower case
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,            _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______, \
        _______, _______, _______, NO_ELOL, _______, _______, _______, NO_ULOL, NO_ILOL, NO_OLOL, _______, _______, _______, _______,   _______, _______, _______, \
        _______, NO_ALOL, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                                       \
        LM(2, MOD_LSFT), _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, LM(2, MOD_LSFT),              _______,          \
        _______, _______, _______,                   _______,                            _______, _______, _______, _______,            _______, _______, _______  \
    ),
    [4] = LAYOUT( // other upper case
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,            _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______, \
        _______, _______, _______, NO_ELOU, _______, _______, _______, NO_ULOU, NO_ILOU, NO_OLOU, _______, _______, _______, _______,   _______, _______, _______, \
        _______, NO_ALOU, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                                       \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                              _______,          \
        _______, _______, _______,                   _______,                            _______, _______, _______, _______,            _______, _______, _______  \
    ),
    /*
    [X] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,            _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                                       \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                              _______,          \
        _______, _______, _______,                   _______,                            _______, _______, _______, _______,            _______, _______, _______  \
    ),
    */
};

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {
};

// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {
};

#define MODS_SHIFT (get_mods() & MOD_BIT(KC_LSHIFT) || get_mods() & MOD_BIT(KC_RSHIFT))
#define MODS_CTRL (get_mods() & MOD_BIT(KC_LCTL) || get_mods() & MOD_BIT(KC_RCTRL))
#define MODS_ALT (get_mods() & MOD_BIT(KC_LALT) || get_mods() & MOD_BIT(KC_RALT))

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    static uint32_t key_timer;
    static uint8_t scroll_effect = 0;

    switch (keycode) {
        case L_BRI:
            if (record->event.pressed) {
                if (LED_GCR_STEP > LED_GCR_MAX - gcr_desired) gcr_desired = LED_GCR_MAX;
                else gcr_desired += LED_GCR_STEP;
                if (led_animation_breathing) gcr_breathe = gcr_desired;
            }
            return false;
        case L_BRD:
            if (record->event.pressed) {
                if (LED_GCR_STEP > gcr_desired) gcr_desired = 0;
                else gcr_desired -= LED_GCR_STEP;
                if (led_animation_breathing) gcr_breathe = gcr_desired;
            }
            return false;
        case L_EDG_M:
            if (record->event.pressed) {
                led_edge_mode++;
                if (led_edge_mode > LED_EDGE_MODE_MAX) {
                    led_edge_mode = LED_EDGE_MODE_ALL;
                }
            }
            return false;
        case L_EDG_I:
            if (record->event.pressed) {
                led_edge_brightness += 0.1;
                if (led_edge_brightness > 1) { led_edge_brightness = 1; }
            }
            return false;
        case L_EDG_D:
            if (record->event.pressed) {
                led_edge_brightness -= 0.1;
                if (led_edge_brightness < 0) { led_edge_brightness = 0; }
            }
            return false;
        case L_PTN:
            if (record->event.pressed) {
                if (led_animation_id == led_setups_count - 1) led_animation_id = 0;
                else led_animation_id++;
            }
            return false;
        case L_PTP:
            if (record->event.pressed) {
                if (led_animation_id == 0) led_animation_id = led_setups_count - 1;
                else led_animation_id--;
            }
            return false;
        case L_PSI:
            if (record->event.pressed) {
                led_animation_speed += ANIMATION_SPEED_STEP;
            }
            return false;
        case L_PSD:
            if (record->event.pressed) {
                led_animation_speed -= ANIMATION_SPEED_STEP;
                if (led_animation_speed < 0) led_animation_speed = 0;
            }
            return false;
        case L_T_MD:
            if (record->event.pressed) {
                led_lighting_mode++;
                if (led_lighting_mode > LED_MODE_MAX_INDEX) led_lighting_mode = LED_MODE_NORMAL;
            }
            return false;
        case L_T_ONF:
            if (record->event.pressed) {
                I2C3733_Control_Set(!I2C3733_Control_Get());
            }
            return false;
        case L_ON:
            if (record->event.pressed) {
                I2C3733_Control_Set(1);
            }
            return false;
        case L_OFF:
            if (record->event.pressed) {
                I2C3733_Control_Set(0);
            }
            return false;
        case L_T_BR:
            if (record->event.pressed) {
                led_animation_breathing = !led_animation_breathing;
                if (led_animation_breathing) {
                    gcr_breathe = gcr_desired;
                    led_animation_breathe_cur = BREATHE_MIN_STEP;
                    breathe_dir = 1;
                }
            }
            return false;
        case L_T_PTD:
            if (record->event.pressed) {
                scroll_effect++;
                if (scroll_effect == 1) {               //Patterns with scroll move horizontal (Right to left)
                    led_animation_direction = 1;
                    led_animation_orientation = 0;
                    led_animation_circular = 0;
                } else if (scroll_effect == 2) {        //Patterns with scroll move vertical (Top to bottom)
                    led_animation_direction = 1;
                    led_animation_orientation = 1;
                    led_animation_circular = 0;
                } else if (scroll_effect == 3) {        //Patterns with scroll move vertical (Bottom to top)
                    led_animation_direction = 0;
                    led_animation_orientation = 1;
                    led_animation_circular = 0;
                } else if (scroll_effect == 4) {        //Patterns with scroll explode from center
                    led_animation_direction = 0;
                    led_animation_orientation = 0;
                    led_animation_circular = 1;
                } else if (scroll_effect == 5) {        //Patterns with scroll implode on center
                    led_animation_direction = 1;
                    led_animation_orientation = 0;
                    led_animation_circular = 1;
                } else {                                //Patterns with scroll move horizontal (Left to right)
                    scroll_effect = 0;
                    led_animation_direction = 0;
                    led_animation_orientation = 0;
                    led_animation_circular = 0;
                }
            }
            return false;
        case U_T_AGCR:
            if (record->event.pressed && MODS_SHIFT && MODS_CTRL) {
                TOGGLE_FLAG_AND_PRINT(usb_gcr_auto, "USB GCR auto mode");
            }
            return false;
        case DBG_FAC:
            if (record->event.pressed && MODS_SHIFT && MODS_CTRL) {
                led_lighting_mode = LED_MODE_NORMAL;
                led_edge_brightness = 1;
                led_edge_mode = LED_EDGE_MODE_ALL;
                led_animation_breathing = 0;
                led_animation_id = 7; //led_programs.c led_setups leds_white index
                gcr_desired = LED_GCR_MAX;
                I2C3733_Control_Set(1);
            }
            return false;
        case DBG_TOG:
            if (record->event.pressed) {
                TOGGLE_FLAG_AND_PRINT(debug_enable, "Debug mode");
            }
            return false;
        case DBG_MTRX:
            if (record->event.pressed) {
                TOGGLE_FLAG_AND_PRINT(debug_matrix, "Debug matrix");
            }
            return false;
        case DBG_KBD:
            if (record->event.pressed) {
                TOGGLE_FLAG_AND_PRINT(debug_keyboard, "Debug keyboard");
            }
            return false;
        case DBG_MOU:
            if (record->event.pressed) {
                TOGGLE_FLAG_AND_PRINT(debug_mouse, "Debug mouse");
            }
            return false;
        case MD_BOOT:
            if (record->event.pressed) {
                key_timer = timer_read32();
            } else {
                if (timer_elapsed32(key_timer) >= 500) {
                    reset_keyboard();
                }
            }
            return false;
        /* ------------------------- Custom Keys: Made by Tweaky ------------------------- */
        case NO_SCTN: // §
            if (record->event.pressed) {
                SEND_STRING("§");
            }
            return false
        case NO_CUR: // ¤
            if (record->event.pressed) {
                SEND_STRING("¤")
            }
            return false
        case NO_SLS: // /
            if (record->event.pressed) {
                SEND_STRING("/")
            }
            return false
        case NO_EQL: // =
            if (record->event.pressed) {
                SEND_STRING("=")
            }
            return false
        
        
        
        
        
        
        case NO_: // 
            if (record->event.pressed) {
                SEND_STRING("")
            }
            return false
        case NO_: //
            if (record->event.pressed) {
                SEND_STRING("")
            }
            return false
        case NO_: //
            if (record->event.pressed) {
                SEND_STRING("")
            }
            return false
        case NO_: //
            if (record->event.pressed) {
                SEND_STRING("")
            }
            return false
        
        
        
        
        
        
        
        case NO_ELOL: // è
            if (record->event.pressed) {
                SEND_STRING("è")
            }
            return false
        case NO_ULOL: // ù
            if (record->event.pressed) {
                SEND_STRING("ù")
            }
            return false
        case NO_ILOL: // ì
            if (record->event.pressed) {
                SEND_STRING("ì")
            }
            return false
        case NO_OLOL: // ò
            if (record->event.pressed) {
                SEND_STRING("ò")
            }
            return false
        case NO_ALOL: // à
            if (record->event.pressed) {
                SEND_STRING("à")
            }
            return false
        case NO_ELOU: // È
            if (record->event.pressed) {
                SEND_STRING("è")
            }
            return false
        case NO_ULOU: // Ù
            if (record->event.pressed) {
                SEND_STRING("Ù")
            }
            return false
        case NO_ILOU: // Ì
            if (record->event.pressed) {
                SEND_STRING("Ì")
            }
            return false
        case NO_OLOU: // Ò
            if (record->event.pressed) {
                SEND_STRING("Ò")
            }
            return false
        case NO_ALOU: // À
            if (record->event.pressed) {
                SEND_STRING("À")
            }
            return false
        /* ------------------------- Custom Keycodes: Made by Tweaky (END) ------------------------- */
        default:
            return true; //Process all other keycodes normally
    }
}

/* ------------------------- Macro: Made by Tweaky ------------------------- */
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
    if (record->event.pressed) {
        switch(id) {
            case 0: //æ
                return MACRO(D(LALT), T(P1), T(P4), T(P5), U(LALT), END);
            case 1: //Æ
                return MACRO(D(LALT), T(P1), T(P4), T(P6), U(LALT), END);
            case 2: //ø
                return MACRO(D(LALT), T(P0), T(P2), T(P4), T(P8), U(LALT), END);
            case 3: //Ø
                return MACRO(D(LALT), T(P0), T(P2), T(P1), T(P6), U(LALT), END);
            case 4: //å
                return MACRO(D(LALT), T(P0), T(P2), T(P2), T(P9), U(LALT), END);
            case 5: //Å
                return MACRO(D(LALT), T(P1), T(P4), T(P3), U(LALT), END);
            /*
            case 6: //HOLD Shift and M(1)
                return MACRO(D(LSFT), D(MO(1)), END);
            case 7: //RELEASE Shift and M(2)
                return MACRO(U(LSFT), U(MO(1)), END);
            */
        }
    }
    return MACRO_NONE;
};
/* ------------------------- Macro: Made by Tweaky (END) ------------------------- */

/* ------------------------- UNICODEMAP: Made by Tweaky ------------------------- */
// Unicode documentation: https://github.com/qmk/qmk_firmware/blob/master/docs/feature_unicode.md



/*
enum unicode_names {
    AE_L,
    AE_U,
    OE_L,
    OE_U,
    AA_L,
    AA_U
};
*/

/*
const uint32_t PROGMEM unicode_map[] = {
    [AE] = XP(0xE6, 0xC6), //æ Æ
    [OE] = XP(0xF8, 0xD8), //ø Ø
    [AA] = XP(0xE5, 0xC5), //å Å
};
*/

/*
const uint32_t PROGMEM unicode_map[] = {
    [AE_L] = 0xE6, // æ 
    [AE_U] = 0xC6, // Æ
    [OE_L] = 0xF8, // ø
    [OE_U] = 0xD8, // Ø
    [AA_L] = 0xE5, // å
    [AA_U] = 0xC5, // Å
};
*/



/* 0X...
æ   0xE6
Æ   0xC6
ø   0xF8
Ø   0xD8
å   0xE5
Å   0xC5
*/
/* Hex/UTF-32
æ   00E6 0020
Æ   000A 00C6
ø   000A 00F8
Ø   000A 00D8
å   000A 00E5
Å   000A 00C5
*/  

/* ------------------------- Made by Tweaky (END) ------------------------- */

led_instruction_t led_instructions[] = {
    //LEDs are normally inactive, no processing is performed on them
    //Flags are used in matching criteria for an LED to be active and indicate how to color it
    //Flags can be found in tmk_core/protocol/arm_atsam/led_matrix.h (prefixed with LED_FLAG_)
    //LED IDs can be found in config_led.h in the keyboard's directory
    //Examples are below
    
    //All LEDs use the user's selected pattern (this is the factory default)
     { .flags = LED_FLAG_USE_ROTATE_PATTERN },

    //Specific LEDs use the user's selected pattern while all others are off
    // { .flags = LED_FLAG_MATCH_ID | LED_FLAG_USE_ROTATE_PATTERN, .id0 = 0xFFFFFFFF, .id1 = 0xAAAAAAAA, .id2 = 0x55555555, .id3 = 0x11111111 },

    //Specific LEDs use specified RGB values while all others are off
    // { .flags = LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .id0 = 0xFF, .id1 = 0x00FF, .id2 = 0x0000FF00, .id3 = 0xFF000000, .r = 75, .g = 150, .b = 225 },
    
    //All LEDs use the user's selected pattern
    //On layer 1, all key LEDs (except the top row which keeps active pattern) are red while all edge LEDs are green
    //When layer 1 is active, key LEDs use red    (id0  32 -  17: 1111 1111 1111 1111 0000 0000 0000 0000 = 0xFFFF0000) (except top row 16 - 1)
    //When layer 1 is active, key LEDs use red    (id1  64 -  33: 1111 1111 1111 1111 1111 1111 1111 1111 = 0xFFFFFFFF)
    //When layer 1 is active, key LEDs use red    (id2  87 -  65: 0000 0000 0111 1111 1111 1111 1111 1111 = 0x007FFFFF)
    //When layer 1 is active, edge LEDs use green (id2  95 -  88: 1111 1111 1000 0000 0000 0000 0000 0000 = 0xFF800000)
    //When layer 1 is active, edge LEDs use green (id3 119 -  96: 0000 0000 1111 1111 1111 1111 1111 1111 = 0x00FFFFFF)
    // { .flags = LED_FLAG_USE_ROTATE_PATTERN },
    // { .flags = LED_FLAG_MATCH_ID | LED_FLAG_MATCH_LAYER | LED_FLAG_USE_RGB, .id0 = 0xFFFF0000, .id1 = 0xFFFFFFFF, .id2 = 0x007FFFFF, .r = 255, .layer = 1 },
    // { .flags = LED_FLAG_MATCH_ID | LED_FLAG_MATCH_LAYER | LED_FLAG_USE_RGB, .id2 = 0xFF800000, .id3 = 0x00FFFFFF, .g = 127, .layer = 1 },

    //All key LEDs use red while edge LEDs use the active pattern
    //All key LEDs use red     (id0  32 -   1: 1111 1111 1111 1111 1111 1111 1111 1111 = 0xFFFFFFFF)
    //All key LEDs use red     (id1  64 -  33: 1111 1111 1111 1111 1111 1111 1111 1111 = 0xFFFFFFFF)
    //All key LEDs use red     (id2  87 -  65: 0000 0000 0111 1111 1111 1111 1111 1111 = 0x007FFFFF)
    //Edge uses active pattern (id2  95 -  88: 1111 1111 1000 0000 0000 0000 0000 0000 = 0xFF800000)
    //Edge uses active pattern (id3 119 -  96: 0000 0000 1111 1111 1111 1111 1111 1111 = 0x00FFFFFF)
    // { .flags = LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .id0 = 0xFFFFFFFF, .id1 = 0xFFFFFFFF, .id2 = 0x007FFFFF, .r = 255 },
    // { .flags = LED_FLAG_MATCH_ID | LED_FLAG_USE_ROTATE_PATTERN , .id2 = 0xFF800000, .id3 = 0x00FFFFFF },

    //end must be set to 1 to indicate end of instruction set
     { .end = 1 }
};
