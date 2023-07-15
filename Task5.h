//
// Created by corvu on 15.07.2023.
//
#include "iostream"

#ifndef UNTITLED5_TASK5_H
#define UNTITLED5_TASK5_H

class Task5 {
public:
    Task5();
    void withdrawCash(int amount);
    void run();
    bool isValidAmount(int amount);
    bool calculateBanknotes(int amount, int denomination, int& banknotes);
};


#endif //UNTITLED5_TASK5_H
