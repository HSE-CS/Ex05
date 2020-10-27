#include <string.h>

template<class T> T averageArr(T* arg, unsigned int n)
{

    T sum = 0;
    for (unsigned int i = 0; i < n; i++) {
        sum = sum + arg[i];
    }
    return sum / n;

}

