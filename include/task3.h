#ifndef TASK_3
#define TASK_3

template<typename T, unsigned int len>
T minArr( T (&A) [len]) {
	T min = A[0];
	for (unsigned int i = 1; i < len; ++i) {
		if (A[i] - min < (T)0.00000) {
			min = A[i];
		}
	}
	return min;
}

#endif
