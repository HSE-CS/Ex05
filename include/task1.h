#ifndef TASK1_TASK1_H
#define TASK1_TASK1_H

#include <iostream>

template<typename T>
bool Less(T a, T b){
    if (a > b)
        return true;
    else
        return false;

}

template<>
bool Less(char* a, char* b){
    int i=0;
    while(a[i] != '\0' || b[i] != '\0'){
        if (a[i] == b[i]){
            i++;
            continue;
        }
        if (a[i] > b[i])
            return true;
        else
            return false;
    }
}


#endif //TASK1_TASK1_H