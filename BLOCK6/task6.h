//
// Created by corvu on 18.07.2023.
//

#ifndef BLOCK6_TASK6_H
#define BLOCK6_TASK6_H
#include "iostream"

void task6() {
    int initialDeposit;
    int desiredAmount;
    int interestRate;

    std::cout << "deposit: ";
    std::cin >> initialDeposit;

    std::cout << "rate: ";
    std::cin >> interestRate;

    std::cout << "amount: ";
    std::cin >> desiredAmount;

    if (initialDeposit >= desiredAmount) {
        std::cout << "vklad bolshe zhelaemoi summi.\n";
        return;
    }
    int years = 0;
    while (initialDeposit < desiredAmount) {
        int interest = (initialDeposit * interestRate) / 100;
        initialDeposit += interest;
        years++;
    }

    std::cout << "zhdem : " << years << " let \n";
}

#endif //BLOCK6_TASK6_H
