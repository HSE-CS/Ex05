#ifndef TASK2_H
#define TASK2_H

#include <cstring>
#include <string>

template<class T> int averageArr(T& arg, const size_t n)
{
	double sum = 0;
	for (size_t i = 0; i < n; ++i)
	{
		sum += arg[i];
	}
	return(sum / n);
}

#endif