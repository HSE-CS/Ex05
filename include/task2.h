#ifndef TASK2_H
#define TASK2_H

#include<iostream>
template<typename T>
T averageArr(T* arr, int size)
{
	T result=0;
	for (int i = 0; i < size; i++)
		result += arr[i];
	return result / size;
}


#endif TASK2_H
