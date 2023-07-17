//
// Created by corvu on 15.07.2023.
//

#include "Task5.h"

Task5::Task5() {}

bool Task5::isValidAmount(int amount) {
    return (amount % 100 == 0) && (amount <= 150000);
}

bool Task5::calculateBanknotes(int amount, int denomination, int& banknotes) {
    banknotes = amount / denomination;
    amount %= denomination;
    return (amount == 0);
}

void Task5::withdrawCash(int amount) {
    if (!isValidAmount(amount)) {
        std::cout << "Unable to withdraw exactly " << amount << " rubles." << std::endl;
        return;
    }

    int banknotes100, banknotes200, banknotes500, banknotes1000, banknotes2000, banknotes5000;
    int amountLeft = amount;

    banknotes5000 = amountLeft / 5000;
    amountLeft %= 5000;
    banknotes2000 = amountLeft / 2000;
    amountLeft %= 2000;
    banknotes1000 = amountLeft / 1000;
    amountLeft %= 1000;
    banknotes500 = amountLeft / 500;
    amountLeft %= 500;
    banknotes200 = amountLeft / 200;
    amountLeft %= 200;
    banknotes100 = amountLeft / 100;
    amountLeft %= 100;

    if (amountLeft == 0) {
        std::cout << "To withdraw " << amount << " rubles, you will need:" << std::endl;
        std::cout << "100 ruble banknotes: " << banknotes100 << std::endl;
        std::cout << "200 ruble banknotes: " << banknotes200 << std::endl;
        std::cout << "500 ruble banknotes: " << banknotes500 << std::endl;
        std::cout << "1000 ruble banknotes: " << banknotes1000 << std::endl;
        std::cout << "2000 ruble banknotes: " << banknotes2000 << std::endl;
        std::cout << "5000 ruble banknotes: " << banknotes5000 << std::endl;
    } else {
        std::cout << "Unable to withdraw exactly " << amount << " rubles." << std::endl;
    }
}

void Task5::run() {
    int amount;
    std::cout << "Enter the amount to withdraw: ";
    std::cin >> amount;

    withdrawCash(amount);
}
