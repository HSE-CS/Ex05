#ifndef TASK2_H
#define TASK2_H
#include <iostream>
#include <string.h>

template <typename T> T averageArr(T* ptr, unsigned int size)
{
	T Sum = (T) 0;
	for (int i = 0; i < size; i++)
		Sum += ptr[i];

	return Sum / size;
}

#endif
