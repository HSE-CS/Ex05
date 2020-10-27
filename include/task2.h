#ifndef TEST_TASK2_H
#define TEST_TASK2_H
template <typename T>
T averageArr(T *first_item, int arr_len){
    T average = 0;
    for (int i = 0; i < arr_len; i++){
        average += first_item[i];
    }
    T result = average / arr_len;
    return result;
}
#endif //TEST_TASK2_H
