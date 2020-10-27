#include <string.h>

template<class T> bool less(T a, T b)
{
    return a < b;
}
template<> bool less<const char*>(const char* a, const char* b)
{
    return strcmp(a, b) < 0;
}

template<class T> T averageArr(T& arg, unsigned int n)
{
    
    T sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + arg[i];
    }
    return sum / n;
    
}
