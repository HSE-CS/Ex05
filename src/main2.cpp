//
// Created by sharg on 27.10.2020.
//
#include "task2.h"
#include <iostream>
using namespace std;

int main() {
    const unsigned long int arraySize = 5;

    int array[arraySize] = { 1, 2, 1, 2, 1 };
    cout << averageArr(array, arraySize) << endl;

    float arrayFloat[arraySize] = { 1, 2, 1, 2, 1 };
    cout << averageArr(arrayFloat, arraySize) << endl;

    return 0;
}