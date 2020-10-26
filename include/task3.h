#ifndef TASK3_H
#define TASK3_H

#include <iostream>

template<typename T> T minArr(T& array) {

	size_t size = sizeof(array) / sizeof(array[0]);
	//std::cout << size << std::endl;
	unsigned min = INT_MAX;
	for (size_t i = 0; i<size; i++) {
		if (array[i] <= min) {
			min = array[i];
		}
	}
	return min;
}


#endif