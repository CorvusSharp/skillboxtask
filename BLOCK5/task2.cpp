#include "Task2.h"
Task2::Task2() {}

void Task2::run() {
    short day;
    std::cout << "input num: ";
    std::cin >> day;

    if (day >= 1 && day <= 31) {
        if (isWeekend(day)) {
            std::cout << "free day\n";
        } else {
            std::cout << "work day\n";
        }
    } else {
        std::cout << "inccorect day \n";
    }
}

bool Task2::isWeekend(short day) {
    // Проверка на выходной день
    return (day % 7 == 0 || day % 7 == 6) ? true : ((day >= 1 && day <= 5) || (day >= 8 && day <= 10));
}