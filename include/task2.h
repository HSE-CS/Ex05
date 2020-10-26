#ifndef TASK2_H
#define TASK2_H

template<typename T, typename T2> T averageArr(T* arr, T2 n) {
	
	T average = { 0 };

	for (unsigned i = 0; i < n; ++i) {
		average += arr[i];
	}
	return average/n;
}

#endif // TASK2_H
