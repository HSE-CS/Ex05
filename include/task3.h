#ifndef TASK1
#define TASK1
template <typename T> T minArr(T ar) {
	T min = *ar[0];
	for (auto i : *ar)
		if (i < min)
			min = i;

	return min;
}
#endif