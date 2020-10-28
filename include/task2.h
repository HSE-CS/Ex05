#ifndef TASK2_H
#define TASK2_H

#include <cstring>
#include <string>

template<class T> T averageArr(T* arg, unsigned int n)
{
	T sum = 0;
	for (size_t i = 0; i < n; ++i)
	{
		sum += arg[i];
	}
	return T(sum / n);
}

#endif