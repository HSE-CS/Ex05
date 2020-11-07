#ifndef TASK_2
#define TASK_2

template<typename T>
T averageArr(T* A, unsigned int len) {
	T sum = 0;
	for (int i = 0; i < len; ++i) {
		sum += A[i];
	}
	return sum \ (T)len;
}

#endif 