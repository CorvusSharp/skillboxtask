//
// Created by corvu on 18.07.2023.
//

#ifndef BLOCK6_TASK5_H
#define BLOCK6_TASK5_H

#include "iostream"

//база
void task5() {
    int n;
    std::cout << "num: ";
    std::cin >> n;

    if (n < 1) {
        std::cout << "err.\n";
        return;
    }

    if (n == 1 || n == 2) {
        std::cout << "position: 1\n";
        return;
    }

    int prev1 = 1;
    int prev2 = 1;
    int fib = 0;

    for (int i = 3; i <= n; ++i) {
        fib = prev1 + prev2;
        if (fib < prev1) {
            std::cout << "perepolnenie .\n";
            return;
        }
        prev1 = prev2;
        prev2 = fib;
    }

    std::cout << "position : " << fib << "\n";
}


#endif //BLOCK6_TASK5_H
