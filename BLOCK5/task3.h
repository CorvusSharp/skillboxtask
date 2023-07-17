//
// Created by corvu on 15.07.2023.
//

#ifndef UNTITLED5_TASK3_H
#define UNTITLED5_TASK3_H
#include "task3.h"
#include "iostream"

class Task3{
private:
    short day;
    short startDayOfWeek;
public:
    Task3();
    bool isWeekend() const;
    void run();
};

#endif //UNTITLED5_TASK3_H
