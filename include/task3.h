#include <iostream>

template <typename T, size_t sizeArr>
T minArr(T(&arr)[sizeArr]) {
    T res_min = arr[0];
    for (int i = 1; i < sizeArr; i++)
		if (arr[i] < res_min)
			res_min = arr[i];
            
    return res_min;
}
