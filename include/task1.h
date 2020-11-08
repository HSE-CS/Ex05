/*#include <iostream>

template <typename T>
bool less(T a, T b){
    return (a < b);
}

template <>
bool less<const char*>(const char* a, const char* b) {
    int i = 0;
    while (a[i] != '\0' || b[i] != '\0') {
        if (a[i] == b[i]) {
            i++;
            continue;
        }
        return (a[i] < b[i]);
} */
#include <cstring>

template <typename T>
bool less(T a, T b) {
    return a < b;
}

template <>
bool less<const char*> (const char* a, const char* b)
{
    return strcmp(a, b) < 0;
}