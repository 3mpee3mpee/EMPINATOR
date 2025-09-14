    #pragma once

// corneGLP keymap configuration for boardsource/unicorne

// Increase maximum number of layers
#define DYNAMIC_KEYMAP_LAYER_COUNT 8

// RGB Matrix configuration
#ifdef RGB_MATRIX_ENABLE
#    define RGB_MATRIX_KEYPRESSES           // Enable keypress effects
#    define RGB_MATRIX_FRAMEBUFFER_EFFECTS  // Enable frame buffer effects
#    undef RGB_MATRIX_DEFAULT_MODE
#    define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_SOLID_COLOR
#    define RGB_MATRIX_DEFAULT_HUE 191      // Purple hue (191 is approximately 260° in 0-255 range)
#    define RGB_MATRIX_DEFAULT_SAT 32       // 32% saturation
#    define ENABLE_RGB_MATRIX_SOLID_COLOR   // Enable solid color mode
#endif

// RGB Light configuration
#ifdef RGBLIGHT_ENABLE
#    define RGBLIGHT_LED_COUNT 42
#    define RGBLIGHT_SPLIT
#endif

// OLED configuration
#ifdef OLED_ENABLE
#    define OLED_TIMEOUT 30000
#endif

// Encoder configuration
#ifdef ENCODER_ENABLE
#    define ENCODER_DIRECTION_FLIP
#    define ENCODER_RESOLUTION 4
#endif

// Split keyboard configuration
#ifdef SPLIT_KEYBOARD
#    define SPLIT_USB_DETECT
#    define SPLIT_USB_TIMEOUT 2000
#    define SPLIT_USB_TIMEOUT_POLL 10
#endif

// Debounce configuration
#define DEBOUNCE 5

// Tapping configuration
#define TAPPING_TERM 200
#define TAPPING_TERM_PER_KEY
#define PERMISSIVE_HOLD
#define TAPPING_FORCE_HOLD

// Leader key configuration
#ifdef LEADER_ENABLE
#    define LEADER_TIMEOUT 300
#    define LEADER_PER_KEY_TIMING
#endif

// Combo configuration
#ifdef COMBO_ENABLE
#    define COMBO_TERM 50
#endif

// Mouse key configuration
#ifdef MOUSEKEY_ENABLE
#    define MOUSEKEY_DELAY 0
#    define MOUSEKEY_INTERVAL 16
#    define MOUSEKEY_WHEEL_DELAY 0
#    define MOUSEKEY_MAX_SPEED 6
#    define MOUSEKEY_TIME_TO_MAX 64
#endif

// WPM configuration
#ifdef WPM_ENABLE
#    define WPM_LAUNCH_CONTROL
#    define WPM_ALLOW_COUNT_REGRESSION
#    define WPM_ESTIMATED_WORD_SIZE 5
#    define WPM_SMOOTHING 0.0487
#endif

// Caps Word configuration
#ifdef CAPS_WORD_ENABLE
#    define CAPS_WORD_IDLE_TIMEOUT 5000
#endif

// Auto Shift configuration
#ifdef AUTO_SHIFT_ENABLE
#    define AUTO_SHIFT_TIMEOUT 175
#    define AUTO_SHIFT_NO_SETUP
#endif

// Key Override configuration
#ifdef KEY_OVERRIDE_ENABLE
#    define KEY_OVERRIDE_REPEAT
#endif

// Bootmagic configuration
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0

// Magic key configuration
#define MAGIC_KEY_SWITCH_LAYER_WITH_FKEYS
#define MAGIC_KEY_SWITCH_LAYER_WITH_NKEYS
#define MAGIC_KEY_SWITCH_LAYER_WITH_CUSTOM

// Debug configuration
#define DEBUG_MATRIX_SCAN_RATE
#define DEBUG_MATRIX_SCAN_RATE_ENABLE
