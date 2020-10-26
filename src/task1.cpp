//
// Created by Алексей Трутнев on 26.10.2020.
//

#include "task1.h"
#include <string.h>

template<class T>
bool less(T arg1, T arg2){
    return arg1 < arg2;
}
template<> bool less<const char *>(const char * arg1, const char * arg2){
    return strcmp(arg1, arg2);
}