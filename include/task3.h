#include <iostream>

template <typename T, size_t N>
T minArr(T (&arr)[N]) {

	T min_elem = arr[0];
	for (size_t i = 1; i < N; i++) {

		if (min_elem > arr[i]){
			min_elem = arr[i];
		}
	}

	return min_elem;
}