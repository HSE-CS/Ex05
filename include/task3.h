#include <iostream>

template<typename T> auto minArr(T &a)
{
    auto min = a[0];
    for(int i = 1; i < sizeof(a)/sizeof(a[0]); i++)
    {
        if(a[i] < min)
            min = a[i];
    }
    return min;
}