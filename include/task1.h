//
// Created by Алексей Трутнев on 26.10.2020.
//

#include <string>

template<typename T>
bool less(T arg1, T arg2){
    return arg1 < arg2;
}

template<>
bool less<char *>(char * arg1, char * arg2){
    return strcmp(arg1, arg2) < 0;
}
