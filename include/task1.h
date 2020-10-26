//
// Created by Алексей Трутнев on 26.10.2020.
//

#ifndef EX05_TASK1_H
#define EX05_TASK1_H

#include <string>

template<class T>
bool less(T arg1, T arg2){
    return arg1 < arg2;
}

template<typename T>
bool less(const T arg1, const T arg2){
    return strcmp(arg1, arg2) < 0;
}

#endif //EX05_TASK1_H
