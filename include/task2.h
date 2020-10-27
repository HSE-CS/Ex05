#pragma once

#ifndef TASK2_TASK2_H
#define TASK2_TASK2_H

template <typename T>
T averageArr(T* a, unsigned int size) {
	T sum = 0;
	for (int i = 0; i < size;i++) {
		sum += a[i];
	}
	sum /= size;
	return sum;
}


#endif //TASK2_TASK2_H