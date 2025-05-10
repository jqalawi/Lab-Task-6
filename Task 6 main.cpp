#include "mbed.h"
#include "arm_book_lib.h"
#include "smart_home_system.h"

int main() {
    smartHomeSystemInit();
    while (true) {
        smartHomeSystemUpdate();
    }
}
