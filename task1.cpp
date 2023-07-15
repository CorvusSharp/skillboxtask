#include "task1.h"


bool Task1::checkSpeed() {
    if (speed >= 750 && speed <= 850)
        return true;
    else return false;
}


bool Task1::checkHigh() {
    if (height >= 9000 && height <= 9500)
        return true;
    else return false;
}

bool Task1::inputSpeed() {
    puts("input speed:");
    std::cin >> speed;
    {
        if (speed > 0 && checkSpeed()) {
            puts("speed corect");
            return true;
        }
    }
    puts("speed not correct\n");
    return false;
}

short Task1::inputHeight() {
    puts("input height:");
    std::cin >> height;
    if (height > 0 && checkHigh()) {
        puts("height correct");
        return true;
    }
    puts("high not correct");
    return false;
}



Task1::Task1(short speed, short height) : speed(speed), height(height) {
}
