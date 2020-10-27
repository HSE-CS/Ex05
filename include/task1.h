#include <cstring>

template<typename T>
bool less(T a, T b) {
    return a < b;
}

template<>
bool less<const char*>(const char* a, const char* b) {
    return std::strcmp(a, b) < 0
}