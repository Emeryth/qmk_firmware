#include "split_util.h"
#include "matrix.h"
#include "keyboard.h"
#include "config.h"
#include "timer.h"
#include "transport.h"
#include "quantum.h"
#include "wait.h"

bool is_keyboard_left(void) {
    // Test pin SPLIT_HAND_PIN for High/Low, if low it's right hand
    setPinInputLow(SPLIT_HAND_PIN);
    return readPin(SPLIT_HAND_PIN);
}
