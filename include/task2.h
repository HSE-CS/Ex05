#pragma once
template<typename T>
double averageArr(T arr, const size_t size)
{
    auto tmp = *arr;
    decltype(tmp) sum{0};
    for (int i{0}; i < size; i++)
        sum += *arr++; 
    return (double)sum/(double)size;
}

