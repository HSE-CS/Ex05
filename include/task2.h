#include <iostream>

template < typename T >
T averageArr(T* array[], int size) {
	T& sum = 0;
	for (int i = 0; i < size) {
		sum += array[i];
	}
	return sum;
}

