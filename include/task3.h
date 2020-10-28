#ifndef TASK3_H
#define TASK3_H

#include <cstring>
#include <string>

template<class T> int minArr(T& a)
{
	int min = a[0];
	for (size_t i = 0; i < (sizeof(a) / sizeof(a[0])); ++i)
	{
		if (a[i] < min)
			min = a[i];
	}
	return(min);
}

#endif