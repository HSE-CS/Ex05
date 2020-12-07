
template <typename T>
double averageArr(T* firstEl, int size) {
    double sum = 0;
    for (int i = 0; i < size; i++)
        sum += *(firstEl + i);
    return sum / size;
}
