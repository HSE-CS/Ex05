#ifndef TASK1_TASK3_H
#define TASK1_TASK3_H

template<class T, std::size_t N>
T minArr(T (&mas)[N]){
    T min = mas[0];
    for (int i=1;i<N;i++){
        if(mas[i]<min)
            min = mas[i];
    }
    return min;
}

#endif