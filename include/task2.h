#pragma once
#define TASK2_H
#ifdef TASK2_H
template <class T> int averageArr(T* arg, unsigned size ) {
	T sum = 0;
	for (int i = 0; i < size; i++) {
		sum = sum + arg[i];
	}
	return sum / size;
}

#endif // TASK2_H