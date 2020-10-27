#include <iostream>

template < typename T >
T minArr(T array[], int size) {
	T min = 10000;
	for (int i = 0; i < size; ++i) {
		if (array[i] < min) {
			min = array[i];
		}
	}
	return min;
}

