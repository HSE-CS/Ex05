//
// Created by islam on 15.09.2020.
//

#ifndef WORK_TASK1_H
#define WORK_TASK1_H

#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <string>


template<class T> bool less(T a1, T a2){
    if (a1 < a2)
        return true;
    else
        return false;
}

template <> bool less<char*>(char* a1, char* a2){
    return strcmp(a1, a2) < 0;
}



#endif //WORK_TASK1_H
