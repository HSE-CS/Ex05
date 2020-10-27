#ifndef TASK3_H
#define TASK3_H

template <typename T, int len>
T minArr(T (& arr)[len]){
    T minValue = arr[0];
    for(int i = 0; i < len; i++){
        minValue = arr[i] < minValue ? arr[i] : minValue;
    }
    return minValue;
}

#endif // TASK3_H_INCLUDED
