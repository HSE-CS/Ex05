#pragma once
#ifndef TASK3_TASK3_H
#define TASK3_TASK3_H

template <typename T, unsigned int size >
T minArr(T(&arr)[size]) {
	T min = arr[0];
	for (int i = 1; i < size; i++) {
		if (min > arr[i]) {
			min = arr[i];
		}
	}
	return min;
}

#endif 