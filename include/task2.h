#ifdef TASK2_H
#define TASK2_H

template <typename T>
T averageArr(T& arg, int size ) {
	T sum = 0;
	for (int i = 0; i < size; i++) {
		sum = sum + arg[i];
	}
	return sum / size;
}

#endif // TASK2_H