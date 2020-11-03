#ifndef TASK3_H
#define TASK3_H

template <class T, size_t size> T minArr(T(&arr)[size]) 
{
    T low = arr[0];
    for (T item : arr) 
    {
        if (low > item) low = item;
    }
    return low;
}

#endif 
