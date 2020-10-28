template <typename T>
T averageArr(T *arr, int l){
    T answ = 0;
    for (int i = 0; i < l; i++) answ += arr[i];
    answ /= l;
    return answ;
}