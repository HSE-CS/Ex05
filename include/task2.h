#ifndef TASK2_H
#define TASK2_H

#include <iostream>
using namespace std;

template <typename T>
float averageArr(T arr, const unsigned int size) 
{
	float sum = 0;
	for (int i = 0; i < size; i++) 
	{
		sum = sum + arr[i];
	}
	return (sum / size);
}

#endif