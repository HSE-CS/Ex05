#pragma once
template<typename T>
auto minArr(T& arr)
{
    auto min = *arr;
    for (auto item:arr)
        if (item < min)
            min = item;
    return min;
}

