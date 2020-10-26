#ifndef TASK2_H
#define TASK2_H

#include <string.h>
#include <string>

template<class T>
T averageArr(T* a, unsigned int size)
{
	T sum = 0;
	for (unsigned int i = 0; i < size; ++i) {
		sum += a[i];
	}
	return T(sum / size);
}


#endif
