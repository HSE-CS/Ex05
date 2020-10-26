#ifndef TASK3_H
#define TASK3_H

#include <iostream>

template<typename T, size_t n> T minArr(T (&array)[n]) {
	
	size_t size = sizeof(array) / sizeof(array[0]);
	//std::cout << size << std::endl;
	T min = 99999999;
	for (size_t i = 0; i<size; i++) {
		if (array[i] <= min) {
			min = array[i];
		}
	}
	return min;
}


#endif