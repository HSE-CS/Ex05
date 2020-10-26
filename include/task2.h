#ifndef TASK2_H
#define TASK2_H

template <typename T> T averageArr(T (&array)[n], size_t n) {
	
	T average = { 0 };

	for (size_t i = 0; i < n; ++i) {
		average += array[i];
	}
	return average/n;
}

#endif // TASK2_H
