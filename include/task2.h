#ifndef TASK1_TASK2_H
#define TASK1_TASK2_H

template<class T>
T averageArr(T* mas, int size){
    T sum =0;
    for (int i=0;i<size;i++){
        sum+=mas[i];
    }
    return sum/size;
}

#endif