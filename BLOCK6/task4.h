//
// Created by corvu on 18.07.2023.
//
#include "iostream"
#ifndef BLOCK6_TASK4_H
#define BLOCK6_TASK4_H
void task4() {
    std::string num;
    std::cout << "num: ";
    std::cin >> num;

    if (std::stoi(num) < 0 || num.length() != 6) {
        task4();
    } else {
        int firstSumCombination = 0;
        int secondSumCombination = 0;

        for (int i = 0; i < num.length(); ++i) {
            if (i < 3) {
                firstSumCombination += static_cast<int>(num[i]);
            } else {
                secondSumCombination += static_cast<int>(num[i]);
            }
        }

        if (secondSumCombination == firstSumCombination) {
            std::cout << "Chastliviy biletik";
        } else {
            std::cout << "Ne fartit";
        }
    }
}

#endif //BLOCK6_TASK4_H
