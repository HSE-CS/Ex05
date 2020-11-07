template <typename T, size_t size>
T minArr(const T (&arr)[size])
{
    T minEl = *arr;
    for (size_t i = 0; i < size; i++) {
        if(*(arr + i) < minEl)
            minEl = *(arr + i);
    }
    return  minEl;
}