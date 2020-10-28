#define TASK2_H
#include <iostream>

template<class T> int minArr(T &arg)
{
    int min = 0;
    for (int i = 0; i < (sizeof(arg) / sizeof(arg[0])); ++i) {
        if (arg[i] <= min) 
            min = arg[i];
    }
    return min;
}
