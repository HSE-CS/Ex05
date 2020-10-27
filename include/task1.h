#ifndef TASK1_TASK1_H
#define TASK1_TASK1_H
#include <typeinfo>
#include <string.h>
template<class T>
bool less(T a, T b){
    if(typeid(a).name()[0]=='A'){
        return strcmp(a, b) < 0;
    }else{
        return a < b;
    }

}
#endif //TASK1_TASK1_H
