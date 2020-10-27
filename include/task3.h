#ifndef TASK3_H
#define TASK3_H

template <typename T, size_t size>
T minArr(const T (&arr)[size]) {
	T min = arr[0];
	for (int i = 0; i < size; i++) {
		if (min > arr[i]) min = arr[i];
	}
	return min;
}

#endif

