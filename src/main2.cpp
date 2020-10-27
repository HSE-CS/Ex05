#include <iostream>
#include "task2.h"

int main(){
    int N = 5;
    int *arr = new int(N);
    for(int i = 0; i < N; i++){
        arr[i] = (i + 1) * (i + 1);
    }

    std::cout << averageArr(arr, N);
    return 0;
}
