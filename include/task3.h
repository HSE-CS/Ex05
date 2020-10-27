#ifndef TEST_TASK3_H
#define TEST_TASK3_H
template <typename T>
auto minArr(T &arr){
    auto min = arr[0];
    int arr_len = sizeof(arr) / sizeof(min);
    for (int i = 0; i < arr_len; i++){
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}

#endif //TEST_TASK3_H
