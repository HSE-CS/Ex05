#include <iostream>

template<typename T>
float averageArr(T tar, int size)
{
    float res=0;
    for(int i=0;i<size;i++)
    {
        res+=tar[i];
    }
    return res;
}