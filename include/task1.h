#include <cstring>

template<typename T>
bool less(T a, T b) {
    return a < b;
}

template<>
bool less(char *a, char *b) {
    if (strcmp(a, b) < 0) {
        return true;
    }else{
        return false;
    }
}
