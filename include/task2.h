#ifndef TASK2_H
#define TASK2_H

#include <iostream>
using namespace std;

template<typename T>
T averageArr(T* arr, const int size)
{
	for (int i = 1; i < size; i++)
		arr[0] += arr[i];
	return arr[0] / size;
}
#endif
