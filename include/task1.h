#include <iostream>
#include <algorithm>

#endif //TASK1_TASK3_H
template<typename T, int n>
T minArr(T(&arr)[n]) {
    T c = arr[0];
    for (int i = 1; i < n; i++) {
        if (c > arr[i]) {
            c = arr[i];
        }
    }
    return c;
}