#ifndef TASK2_H
#define TASK2_H
#include <string.h>

template<typename T> T averageArr(T* initialArray, unsigned int arraySize)
{
	T sum{0};

	for (int i = 0; i < arraySize; i++) {
		sum += initialArray[i];
	}

	return sum / arraySize;
}

#endif