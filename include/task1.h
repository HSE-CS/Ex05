#pragma once
#define TASK1_H
#ifdef TASK1_H

template <typename T>
bool less(T a, T b) {
    return a < b;
}
template<>
bool less< char*>(char* a, char* b) {
    return strcmp(a, b) < 0;
    }
#endif // TASK1_H
