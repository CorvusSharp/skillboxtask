//
// Created by corvu on 15.07.2023.
//

#ifndef UNTITLED5_TASK4_H
#define UNTITLED5_TASK4_H
#include "iostream"

class Task4 {
private:
    int box1Len;
    int box1Width;
    int box1Height;
    int box2Len;
    int box2Width;
    int box2Height;

public:
    Task4(int A, int B, int C, int M,int N,int K);

    bool canCheck() const;

    bool run();
};


#endif //UNTITLED5_TASK4_H
