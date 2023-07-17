//
// Created by corvu on 18.07.2023.
//
#include "iostream"

#ifndef BLOCK6_TASK3_H
#define BLOCK6_TASK3_H
void task3() {
    std::string name;
    long int sum;
    std::cout << "NAME: ";
    std::cin >> name;
    std::cout << "SUM: ";
    std::cin >> sum;
    if (sum < 0) {
        puts("suma menshe 0");
        task3();
    } else {
        long int curentDuty = sum;
        while (true) {
            long int deposit;
            while (true) {
                std::cout << "ckolko vnosim?: ";
                std::cin >> deposit;
                if (deposit >= 1) {
                    break;
                }
            }
            curentDuty -= deposit;
            if (curentDuty <= 0) {
                std::cout << "Dolg pogashen. Ostatok na c4ety: " << abs(curentDuty) << "\n";
                break;
            }
            std::cout << name + " dolzhen: " << curentDuty << "\n";
        }
    }
}
#endif //BLOCK6_TASK3_H
