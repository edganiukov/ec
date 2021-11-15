// SPDX-License-Identifier: GPL-3.0-only

// Default layout

#include <board/keymap.h>

uint16_t __code KEYMAP[KM_LAY][KM_OUT][KM_IN] = {
LAYOUT(
    K_ESC, K_F1, K_F2, K_F3, K_F4, K_F5, K_F6, K_F7, K_F8, K_F9, K_F10, K_F11, K_F12, K_PRINT_SCREEN, K_INSERT, K_DEL, K_HOME, K_END, K_PGUP, K_PGDN,
    K_TICK, K_1, K_2, K_3, K_4, K_5, K_6, K_7, K_8, K_9, K_0, K_MINUS, K_EQUALS, K_BKSP, K_NUM_LOCK, K_NUM_SLASH, K_NUM_ASTERISK, K_NUM_MINUS,
    K_TAB, K_Q, K_W, K_E, K_R, K_T, K_Y, K_U, K_I, K_O, K_P, K_BRACE_OPEN, K_BRACE_CLOSE, K_BACKSLASH, K_NUM_7, K_NUM_8, K_NUM_9, K_NUM_PLUS,
    K_CAPS, K_A, K_S, K_D, K_F, K_G, K_H, K_J, K_K, K_L, K_SEMICOLON, K_QUOTE, K_ENTER, K_NUM_4, K_NUM_5, K_NUM_6,
    K_LEFT_SHIFT, K_Z, K_X, K_C, K_V, K_B, K_N, K_M, K_COMMA, K_PERIOD, K_SLASH, K_RIGHT_SHIFT, K_UP, K_NUM_1, K_NUM_2, K_NUM_3, K_NUM_ENTER,
    K_LEFT_CTRL, KT_FN, K_LEFT_SUPER, K_LEFT_ALT, K_SPACE, K_RIGHT_ALT, K_APP, K_RIGHT_CTRL, K_LEFT, K_DOWN, K_RIGHT, K_NUM_0, K_NUM_PERIOD
),
LAYOUT(
    K_ESC, K_TOUCHPAD, K_DISPLAY_TOGGLE, K_MUTE, K_F4, K_VOLUME_DOWN, K_VOLUME_UP, K_DISPLAY_MODE, K_BRIGHTNESS_DOWN, K_BRIGHTNESS_UP, K_CAMERA_TOGGLE, K_AIRPLANE_MODE, K_SUSPEND, K_PRINT_SCREEN, K_SCROLL_LOCK, K_DEL, K_HOME, K_END, K_PAUSE, K_PAUSE,
    K_PLAY_PAUSE, K_FAN_TOGGLE, K_2, K_3, K_4, K_5, K_6, K_7, K_8, K_9, K_0, K_MINUS, K_EQUALS, K_BKSP, K_NUM_LOCK, K_KBD_COLOR, K_KBD_TOGGLE, K_KBD_DOWN,
    K_TAB, K_Q, K_W, K_E, K_R, K_T, K_Y, K_U, K_I, K_O, K_P, K_BRACE_OPEN, K_BRACE_CLOSE, K_BACKSLASH, K_NUM_7, K_NUM_8, K_NUM_9, K_KBD_UP,
    K_CAPS, K_A, K_S, K_D, K_F, K_G, K_H, K_J, K_K, K_L, K_SEMICOLON, K_QUOTE, K_ENTER, K_NUM_4, K_NUM_5, K_NUM_6,
    K_LEFT_SHIFT, K_Z, K_X, K_C, K_V, K_B, K_N, K_M, K_COMMA, K_PERIOD, K_SLASH, K_RIGHT_SHIFT, K_UP, K_NUM_1, K_NUM_2, K_NUM_3, K_NUM_ENTER,
    K_LEFT_CTRL, KT_FN, K_LEFT_SUPER, K_LEFT_ALT, K_SPACE, K_RIGHT_ALT, K_APP, K_RIGHT_CTRL, K_LEFT, K_DOWN, K_RIGHT, K_NUM_0, K_NUM_PERIOD
)
};
