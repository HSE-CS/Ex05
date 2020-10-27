#include <iostream>
#include <cmath>
#include <cstring>


template <typename T>
bool less(T a1, T a2) {
    if (a1 < a2)
        return true;
}
template<> bool less(const char* a1, const char* a2) {
    return (strcmp(a1, a2) < 0 ? true : false);
}