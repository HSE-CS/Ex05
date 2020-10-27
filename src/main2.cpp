//
// Created by Vadim Makarov on 27.10.2020.
//

#include <iostream>
#include "task2.h"

using namespace std;

int main(){

    const size_t n = 6;
    int val[n]{4, 3, 2, 2, 2, -1};

    cout << ::averageArr(val, n) << endl;
}

