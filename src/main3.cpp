//
// Created by sharg on 27.10.2020.
//
#include "task3.h"
#include <iostream>
using namespace std;

int main() {
    const unsigned long int arraySize = 5;

    int array[arraySize] = { 10, 2, 1, 2, -23 };
    cout << minArr(array) << endl;

    float arrayFloat[arraySize] = { 1.1, 2.123, 1.00001, 2.323, 323 };
    cout << minArr(arrayFloat) << endl;

    return 0;
}