#ifndef TASK3_H
#define TASK3_H

template<typename T, size_t n>
T minArr(T (&val)[n]) {
	T min = val[0];
	for (int i = 0; i < n; i++) {
		if (min > val[i]) min = val[i];
	}
	return min;
}

#endif