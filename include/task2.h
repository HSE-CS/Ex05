#ifndef TASK2_H
#define TASK2_H

template<typename T, typename T2> T averageArr(T* arr, T2 n) {
	
	T2 average = { 0 };

	for (size_t i = 0; i < n; ++i) {
		average += array[i];
	}
	return average/n;
}

#endif // TASK2_H
