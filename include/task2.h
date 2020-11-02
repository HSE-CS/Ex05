#include <iostream>
template<typename T>
T averageArr(T* tar, int size)
{
    T res = 0;
    for(int i=0; i<size; i++)
    {
        res += tar[i];
    }
    return res/size;
}
