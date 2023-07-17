//
// Created by corvu on 15.07.2023.
//
#include <algorithm>
#include "task4.h"
bool Task4::canCheck() const {
    int box1Dim[3] = {box1Len, box1Width, box1Height};
    int box2Dim[3] = {box2Len, box2Width, box2Height};

    for (int i = 0; i < 3; i++) {
        std::swap(box2Dim[i], box2Dim[(i + 1) % 3]);
        bool check = true;
        for (int j = 0; j < 3; j++) {
            if (box1Dim[j] > box2Dim[j]) {
                check = false;
                break;
            }
        }
        if (check) {
            return true;
        }
    }
    return false;
}


    bool Task4::run(){
        int A, B, C, M, N, K;
        std::cout << "input size 1 box (A B C): ";
        std::cin >> A >> B >> C;

        std::cout << "input size 2box (M N K): ";
        std::cin >> M >> N >> K;

        Task4 task4(A, B, C, M, N, K);

        if (task4.canCheck()) {
            std::cout << "1st box in 2th box \n";
        } else {
            std::cout << "1st box not in 2th box\n";
        }
    return false;
}

Task4::Task4(int A, int B, int C, int M,int N,int K) {
    box1Len = 0;
    box1Width = 0;
    box1Height = 0;
    box2Len = 0;
    box2Width = 0;
    box2Height = 0;
}
