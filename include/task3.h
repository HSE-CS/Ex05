#ifndef TASK3_H
#define TASK3_H

#include<iostream>
template<typename T, size_t len>
T minArr(T (&arr)[len])
{
	T min = arr[0];

	for (int i = 1; i < len; i++)
		if (arr[i] < min)
			min = arr[i];

	return min;
}
#endif TASK3_H
