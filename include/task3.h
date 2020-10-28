//
// Created by User on 29.10.2020.
//

#ifndef TASK1_TASK3_H
#define TASK1_TASK3_H

#include <bits/stdc++.h>

using namespace std;

namespace Ex05 {

    template<class T, int length>
    int minArr(T (&array)[length]) {
        for (int i = 1; i < length; ++i) {
            array[0] = min(array[0], array[i]);
        }
        return array[0];
    }

}

#endif //TASK1_TASK3_H
