//
// Created by corvu on 15.07.2023.
//

#include "task3.h"

Task3::Task3() {
    day = 0;
    startDayOfWeek = 0;
}

bool Task3::isWeekend() const {
    if (startDayOfWeek < 1 || startDayOfWeek > 7) {
        std::cout << "err nor correct day of week \n";
        return false;
    }

    if (day < 1 || day > 31) {
        std::cout << "err not correct day \n";
        return false;
    }

    short dayOfWeek = (day + startDayOfWeek - 2) % 7 + 1;

    return (dayOfWeek == 6 || dayOfWeek == 7) || ((day >= 1 && day <= 5) || (day >= 8 && day <= 10));
}

void Task3::run() {
    std::cout << "num fay of week: ";
    std::cin >> startDayOfWeek;

    std::cout << "input num day: ";
    std::cin >> day;

    if (isWeekend()) {
        std::cout << "free day\n";
    } else {
        std::cout << "job day\n";
    }
}