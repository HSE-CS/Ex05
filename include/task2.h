#ifndef TASK2_H
#define TASK2_H

template<class T>
T averageArr(T* arr, int size) {
	T sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	return sum / size;
}

#endif