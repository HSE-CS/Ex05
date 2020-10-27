#include "task3.h"
#include <iostream>
using namespace std;

int main() {
    const unsigned long int size = 5;

    int array[size] = { 10, 2, 1, 2, -23 };
    cout << minArr(array) << endl;

    float arrayf[size] = { 1.1, 2.123, 1.00001, 2.323, 323 };
    cout << minArr(arrayf) << endl;

    return 0;