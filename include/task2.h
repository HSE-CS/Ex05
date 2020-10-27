#ifndef TASK1_TASK2_H
#define TASK1_TASK2_H
template<class T>
int averageArr(T* arr, int size){
    T sum = arr[0];
    for (int i = 1; i < size; ++i) {
        sum += arr[i];
    }
    return sum/size;
}
#endif //TASK1_TASK2_H
