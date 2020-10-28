//
// Created by jmax on 27.10.2020.
//

#ifndef EX_05_TASK1_H
#define EX_05_TASK1_H

template <typename T, int len>
T minArr(T (& arr)[len]){
    T minValue = arr[0];
    for(int i = 0; i < len; i++){
        minValue = arr[i] < minValue ? arr[i] : minValue;
    }
    return minValue;
}

#endif //EX_05_TASK1_H
