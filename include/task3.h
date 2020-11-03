#include <typeinfo>
#include <cstring>
template<typename T, size_t size_massiv>
T minArr(T (&massiv)[size_massiv]){
    T min=massiv[0];
    for(size_t i=0;i<size_massiv;i++){
        if (min>massiv[i]) min=massiv[i];
    }
    return min;
}