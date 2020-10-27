#include <iostream>


template <typename T>
T averageArr(T* arr, size_t len_arr) {

	T summa_arr = 0;
	

	for (int i = 0; i < len_arr; i++) {
		summa_arr += arr[i];
	}

	T len = (T)len_arr;

	return summa_arr / len;
}