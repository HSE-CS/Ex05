#ifndef TASK1_TASK1_H
#define TASK1_TASK1_H

template<typename T>
bool less(T a, T b) {
    if (a < b)
        return true;
    else if (a > b)
        return false;
}

template<>
bool less<const char*>(const char* a, const char* b) {
    return strcmp(a, b) < 0;
}

#endif //TASK1_TASK1_H
