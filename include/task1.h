#ifndef TEST_TASK1_H
#define TEST_TASK1_H

template <typename T>
bool less(T first, T second){
    if (first < second)
        return true;
    return false;
}

template<>
bool less<const char *>(const char *first, const char *second) {
    return strcmp(first, second) < 0;
}
#endif //TEST_TASK1_H
