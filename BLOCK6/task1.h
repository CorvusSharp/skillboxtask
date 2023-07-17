//
// Created by corvu on 18.07.2023.
//

#ifndef BLOCK6_TASK1_H
#define BLOCK6_TASK1_H
#include "iostream"
void task1() {
    int hour;
    std::cout << "Kotoriy chas?\n";
    std::cin >> hour;
    if (hour >= 0 && hour <= 23) {
        if (hour == 0) {
            hour = 24;
        }
    } else {
        task1();
    }
    for (int i = 1; i < hour + 1; ++i) {
        std::cout << i << " : KyKy\n";
    }
}
#endif //BLOCK6_TASK1_H
