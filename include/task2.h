#include <typeinfo>
#include <cstring>
template<typename T>
T averageArr(T* massiv,size_t size_massiv)
{
    T summa = 0;
    for (size_t i=0;i<size_massiv;i++){
        summa+=massiv[i];

    }
    return (summa/size_massiv);
}