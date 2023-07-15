#ifndef UNTITLED5_TASK1_H
#define UNTITLED5_TASK1_H
#endif //UNTITLED5_TASK1_H
#include <iostream>


class Task1{
public:

    Task1(short speed = 0, short height = 0);
    bool checkSpeed();
    bool checkHigh();
    bool inputSpeed();
    short inputHeight();

private:
    short speed, height;
};



