#include <string.h>

template<class T, size_t n> T minArr(T(&arg)[n])
{

    T min = arg[0];
    for (unsigned int i = 1; i < n; i++) {
        if (arg[i] < min) {
            min = arg[i];
        }
    }
    return min;

}

