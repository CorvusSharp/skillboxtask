//
// Created by corvu on 18.07.2023.
//

#ifndef BLOCK6_TASK2_H
#define BLOCK6_TASK2_H

#include <string>
#include <iostream>

void task2(){
    std::string num;
    std::cout<<"NUMB: ";
    std::cin>>num;
    if(std::stoll(num) <0){

        std::cout<<"len: "<< num.length()-1;
    } else{
        std::cout<<"len: "<< num.length();
    }

}
#endif //BLOCK6_TASK2_H
