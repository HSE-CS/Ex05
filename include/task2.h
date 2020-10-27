#ifndef TASK2_H
#define TASK2_H

#include <string.h>
#include <iostream>

template <typename T> double averageArr(T *a, int size)
{
	int count = 0, sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += a[i];
		count += 1;
	}
	return(sum / count);
}

#endif