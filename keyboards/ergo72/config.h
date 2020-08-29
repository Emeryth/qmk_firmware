/*
Copyright 2020 Andrzej Surowiec<emeryth@emeryth.net>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xCAFE
#define PRODUCT_ID      0x0FAD
#define DEVICE_VER      0x0001
#define MANUFACTURER    Emeryth.net
#define PRODUCT         Ergo72 Keyboard
#define DESCRIPTION     Ergo72 Keyboard

/* key matrix size */
#define MATRIX_ROWS 14
#define MATRIX_COLS 6

#define MATRIX_COL_PINS { B5, B4, B3, B2, B1, B0 }
#define MATRIX_ROW_PINS { A0, A1, A2, A3, A4, A5, A6 }
#define UNUSED_PINS

#define DIODE_DIRECTION COL2ROW

#define DEBOUNCE 5

#define MOUSEKEY_INTERVAL       20
#define MOUSEKEY_DELAY          0
#define MOUSEKEY_TIME_TO_MAX    60
#define MOUSEKEY_MAX_SPEED      7
#define MOUSEKEY_WHEEL_DELAY 0

#define TAPPING_TOGGLE  1
#define TAPPING_FORCE_HOLD_PER_KEY

#define TAPPING_TERM    200
#define IGNORE_MOD_TAP_INTERRUPT 

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define SPLIT_HAND_PIN B15
#define SOFT_SERIAL_PIN B6
#define SERIAL_USE_MULTI_TRANSACTION
#define SELECT_SOFT_SERIAL_SPEED 1
#define SERIAL_USART_DRIVER SD1
#define SERIAL_USART_TX_PAL_MODE 0
