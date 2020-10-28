#include <iostream>
#include <cstring>

template<typename T, typename S>
T averageArr(T* a, S size) {

	T sum = 0;
	for (size_t i = 0; i < size; i++) {
		sum = sum + a[i];
	}
	sum = sum / size;
	
	return sum;
}

