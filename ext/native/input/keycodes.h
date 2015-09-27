#pragma once

typedef enum _keycode_t {
	NKCODE_BUTTON_CROSS = 23, // trackpad or X button(Xperia Play) is pressed
	NKCODE_BUTTON_CROSS_PS3 = 96, // PS3 X button is pressed
	NKCODE_BUTTON_CIRCLE = 1004, // Special custom keycode generated from 'O' button by our java code. Or 'O' button if Alt is pressed (TODO)
	NKCODE_BUTTON_CIRCLE_PS3 = 97, // PS3 O button is pressed
	NKCODE_BUTTON_SQUARE = 99, // Square button(Xperia Play) is pressed
	NKCODE_BUTTON_TRIANGLE = 100, // 'Triangle button(Xperia Play) is pressed
	NKCODE_DPAD_UP = 19,
	NKCODE_DPAD_DOWN = 20,
	NKCODE_DPAD_LEFT = 21,
	NKCODE_DPAD_RIGHT = 22,
	NKCODE_DPAD_CENTER = 23,
	NKCODE_UNKNOWN = 0,
	NKCODE_SOFT_LEFT = 1,
	NKCODE_SOFT_RIGHT = 2,
	NKCODE_HOME = 3,
	NKCODE_BACK = 4,
	NKCODE_CALL = 5,
	NKCODE_ENDCALL = 6,
	NKCODE_0 = 7,
	NKCODE_1 = 8,
	NKCODE_2 = 9,
	NKCODE_3 = 10,
	NKCODE_4 = 11,
	NKCODE_5 = 12,
	NKCODE_6 = 13,
	NKCODE_7 = 14,
	NKCODE_8 = 15,
	NKCODE_9 = 16,
	NKCODE_STAR = 17,
	NKCODE_POUND = 18,
	NKCODE_VOLUME_UP = 24,
	NKCODE_VOLUME_DOWN = 25,
	NKCODE_POWER = 26,
	NKCODE_CAMERA = 27,
	NKCODE_CLEAR = 28,
	NKCODE_A = 29,
	NKCODE_B = 30,
	NKCODE_C = 31,
	NKCODE_D = 32,
	NKCODE_E = 33,
	NKCODE_F = 34,
	NKCODE_G = 35,
	NKCODE_H = 36,
	NKCODE_I = 37,
	NKCODE_J = 38,
	NKCODE_K = 39,
	NKCODE_L = 40,
	NKCODE_M = 41,
	NKCODE_N = 42,
	NKCODE_O = 43,
	NKCODE_P = 44,
	NKCODE_Q = 45,
	NKCODE_R = 46,
	NKCODE_S = 47,
	NKCODE_T = 48,
	NKCODE_U = 49,
	NKCODE_V = 50,
	NKCODE_W = 51,
	NKCODE_X = 52,
	NKCODE_Y = 53,
	NKCODE_Z = 54,
	NKCODE_COMMA = 55,
	NKCODE_PERIOD = 56,
	NKCODE_ALT_LEFT = 57,
	NKCODE_ALT_RIGHT = 58,
	NKCODE_SHIFT_LEFT = 59,
	NKCODE_SHIFT_RIGHT = 60,
	NKCODE_TAB = 61,
	NKCODE_SPACE = 62,
	NKCODE_SYM = 63,
	NKCODE_EXPLORER = 64,
	NKCODE_ENVELOPE = 65,
	NKCODE_ENTER = 66,
	NKCODE_DEL = 67,
	NKCODE_GRAVE = 68,
	NKCODE_MINUS = 69,
	NKCODE_EQUALS = 70,
	NKCODE_LEFT_BRACKET = 71,
	NKCODE_RIGHT_BRACKET = 72,
	NKCODE_BACKSLASH = 73,
	NKCODE_SEMICOLON = 74,
	NKCODE_APOSTROPHE = 75,
	NKCODE_SLASH = 76,
	NKCODE_AT = 77,
	NKCODE_NUM = 78,
	NKCODE_HEADSETHOOK = 79,
	NKCODE_FOCUS = 80,
	NKCODE_PLUS = 81,
	NKCODE_MENU = 82,
	NKCODE_NOTIFICATION = 83,
	NKCODE_SEARCH = 84,
	NKCODE_MEDIA_PLAY_PAUSE = 85,
	NKCODE_MEDIA_STOP = 86,
	NKCODE_MEDIA_NEXT = 87,
	NKCODE_MEDIA_PREVIOUS = 88,
	NKCODE_MEDIA_REWIND = 89,
	NKCODE_MEDIA_FAST_FORWARD = 90,
	NKCODE_MUTE = 91,
	NKCODE_PAGE_UP = 92,
	NKCODE_PAGE_DOWN = 93,
	NKCODE_PICTSYMBOLS = 94,
	NKCODE_SWITCH_CHARSET = 95,
	NKCODE_BUTTON_A = 96,
	NKCODE_BUTTON_B = 97,
	NKCODE_BUTTON_C = 98,
	NKCODE_BUTTON_X = 99,
	NKCODE_BUTTON_Y = 100,
	NKCODE_BUTTON_Z = 101,
	NKCODE_BUTTON_L1 = 102,
	NKCODE_BUTTON_R1 = 103,
	NKCODE_BUTTON_L2 = 104,
	NKCODE_BUTTON_R2 = 105,
	NKCODE_BUTTON_THUMBL = 106,
	NKCODE_BUTTON_THUMBR = 107,
	NKCODE_BUTTON_START = 108,
	NKCODE_BUTTON_SELECT = 109,
	NKCODE_BUTTON_MODE = 110,
	NKCODE_ESCAPE = 111,
	NKCODE_FORWARD_DEL = 112,
	NKCODE_CTRL_LEFT = 113,
	NKCODE_CTRL_RIGHT = 114,
	NKCODE_CAPS_LOCK = 115,
	NKCODE_SCROLL_LOCK = 116,
	NKCODE_META_LEFT = 117,
	NKCODE_META_RIGHT = 118,
	NKCODE_FUNCTION = 119,
	NKCODE_SYSRQ = 120,
	NKCODE_BREAK = 121,
	NKCODE_MOVE_HOME = 122,
	NKCODE_MOVE_END = 123,
	NKCODE_INSERT = 124,
	NKCODE_FORWARD = 125,
	NKCODE_MEDIA_PLAY = 126,
	NKCODE_MEDIA_PAUSE = 127,
	NKCODE_MEDIA_CLOSE = 128,
	NKCODE_MEDIA_EJECT = 129,
	NKCODE_MEDIA_RECORD = 130,
	NKCODE_F1 = 131,
	NKCODE_F2 = 132,
	NKCODE_F3 = 133,
	NKCODE_F4 = 134,
	NKCODE_F5 = 135,
	NKCODE_F6 = 136,
	NKCODE_F7 = 137,
	NKCODE_F8 = 138,
	NKCODE_F9 = 139,
	NKCODE_F10 = 140,
	NKCODE_F11 = 141,
	NKCODE_F12 = 142,
	NKCODE_NUM_LOCK = 143,
	NKCODE_NUMPAD_0 = 144,
	NKCODE_NUMPAD_1 = 145,
	NKCODE_NUMPAD_2 = 146,
	NKCODE_NUMPAD_3 = 147,
	NKCODE_NUMPAD_4 = 148,
	NKCODE_NUMPAD_5 = 149,
	NKCODE_NUMPAD_6 = 150,
	NKCODE_NUMPAD_7 = 151,
	NKCODE_NUMPAD_8 = 152,
	NKCODE_NUMPAD_9 = 153,
	NKCODE_NUMPAD_DIVIDE = 154,
	NKCODE_NUMPAD_MULTIPLY = 155,
	NKCODE_NUMPAD_SUBTRACT = 156,
	NKCODE_NUMPAD_ADD = 157,
	NKCODE_NUMPAD_DOT = 158,
	NKCODE_NUMPAD_COMMA = 159,
	NKCODE_NUMPAD_ENTER = 160,
	NKCODE_NUMPAD_EQUALS = 161,
	NKCODE_NUMPAD_LEFT_PAREN = 162,
	NKCODE_NUMPAD_RIGHT_PAREN = 163,
	NKCODE_VOLUME_MUTE = 164,
	NKCODE_INFO = 165,
	NKCODE_CHANNEL_UP = 166,
	NKCODE_CHANNEL_DOWN = 167,
	NKCODE_ZOOM_IN = 168,
	NKCODE_ZOOM_OUT = 169,
	NKCODE_TV = 170,
	NKCODE_WINDOW = 171,
	NKCODE_GUIDE = 172,
	NKCODE_DVR = 173,
	NKCODE_BOOKMARK = 174,
	NKCODE_CAPTIONS = 175,
	NKCODE_SETTINGS = 176,
	NKCODE_TV_POWER = 177,
	NKCODE_TV_INPUT = 178,
	NKCODE_STB_POWER = 179,
	NKCODE_STB_INPUT = 180,
	NKCODE_AVR_POWER = 181,
	NKCODE_AVR_INPUT = 182,
	NKCODE_PROG_RED = 183,
	NKCODE_PROG_GREEN = 184,
	NKCODE_PROG_YELLOW = 185,
	NKCODE_PROG_BLUE = 186,
	NKCODE_APP_SWITCH = 187,
	NKCODE_BUTTON_1 = 188,
	NKCODE_BUTTON_2 = 189,
	NKCODE_BUTTON_3 = 190,
	NKCODE_BUTTON_4 = 191,
	NKCODE_BUTTON_5 = 192,
	NKCODE_BUTTON_6 = 193,
	NKCODE_BUTTON_7 = 194,
	NKCODE_BUTTON_8 = 195,
	NKCODE_BUTTON_9 = 196,
	NKCODE_BUTTON_10 = 197,
	NKCODE_BUTTON_11 = 198,
	NKCODE_BUTTON_12 = 199,
	NKCODE_BUTTON_13 = 200,
	NKCODE_BUTTON_14 = 201,
	NKCODE_BUTTON_15 = 202,
	NKCODE_BUTTON_16 = 203,
	NKCODE_LANGUAGE_SWITCH = 204,
	NKCODE_MANNER_MODE = 205,
	NKCODE_3D_MODE = 206,
	NKCODE_CONTACTS = 207,
	NKCODE_CALENDAR = 208,
	NKCODE_MUSIC = 209,
	NKCODE_CALCULATOR = 210,
	NKCODE_ZENKAKU_HANKAKU = 211,
	NKCODE_EISU = 212,
	NKCODE_MUHENKAN = 213,
	NKCODE_HENKAN = 214,
	NKCODE_KATAKANA_HIRAGANA = 215,
	NKCODE_YEN = 216,
	NKCODE_RO = 217,
	NKCODE_KANA = 218,
	NKCODE_ASSIST = 219,

	// Ouya buttons. Just here for reference, they map straight to regular android buttons
	// and will be mapped the same way.
	NKCODE_OUYA_BUTTON_A = 97,
	NKCODE_OUYA_BUTTON_DPAD_DOWN = 20,
	NKCODE_OUYA_BUTTON_DPAD_LEFT = 21,
	NKCODE_OUYA_BUTTON_DPAD_RIGHT = 22,
	NKCODE_OUYA_BUTTON_DPAD_UP = 19,
	NKCODE_OUYA_BUTTON_L1 = 102,
	NKCODE_OUYA_BUTTON_L2 = 104,
	NKCODE_OUYA_BUTTON_L3 = 106,
	NKCODE_OUYA_BUTTON_MENU = 82,
	NKCODE_OUYA_BUTTON_O = 96,
	NKCODE_OUYA_BUTTON_R1 = 103,
	NKCODE_OUYA_BUTTON_R2 = 105,
	NKCODE_OUYA_BUTTON_R3 = 107,
	NKCODE_OUYA_BUTTON_U = 99,
	NKCODE_OUYA_BUTTON_Y = 100,

	// Extended keycodes, not available on Android
	NKCODE_EXT_PIPE = 1001,  // The key next to Z on euro 102-key keyboards.

	NKCODE_EXT_MOUSEBUTTON_1 = 1002,
	NKCODE_EXT_MOUSEBUTTON_2 = 1003,
	NKCODE_EXT_MOUSEBUTTON_3 = 1004,
	NKCODE_EXT_MOUSEWHEEL_UP = 1008,
	NKCODE_EXT_MOUSEWHEEL_DOWN = 1009
} keycode_t;

enum AndroidJoystickAxis {
	// Field descriptor #15 I
	JOYSTICK_AXIS_X = 0,
	JOYSTICK_AXIS_Y = 1,
	JOYSTICK_AXIS_PRESSURE = 2,
	JOYSTICK_AXIS_SIZE = 3,
	JOYSTICK_AXIS_TOUCH_MAJOR = 4,
	JOYSTICK_AXIS_TOUCH_MINOR = 5,
	JOYSTICK_AXIS_TOOL_MAJOR = 6,
	JOYSTICK_AXIS_TOOL_MINOR = 7,
	JOYSTICK_AXIS_ORIENTATION = 8,
	JOYSTICK_AXIS_VSCROLL = 9,
	JOYSTICK_AXIS_HSCROLL = 10,
	JOYSTICK_AXIS_Z = 11,
	JOYSTICK_AXIS_RX = 12,
	JOYSTICK_AXIS_RY = 13,
	JOYSTICK_AXIS_RZ = 14,
	JOYSTICK_AXIS_HAT_X = 15,
	JOYSTICK_AXIS_HAT_Y = 16,
	JOYSTICK_AXIS_LTRIGGER = 17,
	JOYSTICK_AXIS_RTRIGGER = 18,
	JOYSTICK_AXIS_THROTTLE = 19,
	JOYSTICK_AXIS_RUDDER = 20,
	JOYSTICK_AXIS_WHEEL = 21,
	JOYSTICK_AXIS_GAS = 22,
	JOYSTICK_AXIS_BRAKE = 23,
	JOYSTICK_AXIS_DISTANCE = 24,
	JOYSTICK_AXIS_TILT = 25,

	// Ouya axises. Just here for reference, they map straight to regular android axises
	// and will be mapped the same way.
	JOYSTICK_OUYA_AXIS_L2 = 17,
	JOYSTICK_OUYA_AXIS_LS_X = 0,
	JOYSTICK_OUYA_AXIS_LS_Y = 1,
	JOYSTICK_OUYA_AXIS_R2 = 18,
	JOYSTICK_OUYA_AXIS_RS_X = 11,
	JOYSTICK_OUYA_AXIS_RS_Y = 14,

	// Relative mouse axis for PC.
	JOYSTICK_AXIS_MOUSE_REL_X = 26,
	JOYSTICK_AXIS_MOUSE_REL_Y = 27,

	// Getting these on Ouya, no clue what they are.
	JOYSTICK_AXIS_OUYA_UNKNOWN1 = 32,
	JOYSTICK_AXIS_OUYA_UNKNOWN2 = 33,
	JOYSTICK_AXIS_OUYA_UNKNOWN3 = 34,
	JOYSTICK_AXIS_OUYA_UNKNOWN4 = 35,

	// Mobile device accelerometer/gyro
	JOYSTICK_AXIS_ACCELEROMETER_X = 40,
	JOYSTICK_AXIS_ACCELEROMETER_Y = 41,
	JOYSTICK_AXIS_ACCELEROMETER_Z = 42,

	JOYSTICK_AXIS_MAX = 44
};
