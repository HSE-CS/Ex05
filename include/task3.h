#include <iostream>
#ifndef TASK1_TASK3_H
#define TASK1_TASK3_H
template<class T, std::size_t n> T minArr(T (& val)[n])
{
    T min = val[0];
    for (int i = 0; i < n; i++) {
        if (val[i] < min) min = val[i];
    }

    return min;

}

#endif //TASK1_TASK3_H

