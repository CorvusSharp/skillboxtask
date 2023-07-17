#include <iostream>
#include "task1.h"
#include "task2.h"
#include "task3.h"
#include "task4.h"
#include "Task5.h"
#include "task6.h"

void testTask1() {
    puts("______TASK1______");
    Task1 task1;
    task1.inputSpeed();
    task1.inputHeight();
}

void testTask2() {
    puts("______TASK2______");
    Task2 task2;
    task2.run();
}

void testTask3() {
    puts("______TASK3______");
    Task3 task3;
    task3.run();
}

void testTask4() {
    puts("______TASK4______");
    Task4 task4(0, 0, 0, 0, 0, 0);
    task4.run();
}

void testTask5() {
    puts("______TASK5______");
    Task5 task5;
    task5.run();
}
void testTask6() {
    puts("______TASK5______");
    Task6 task6;
    task6.run();
}
int main() {
    //testTask1();
 //   testTask2();
  //  testTask3();
  //  testTask4();
  // testTask5();
    testTask6();
}