#ifndef TASK1
#define TASK1
template <typename T> int minArr(T ar) {

	int min = *ar[0];
	for (auto i : *ar)
		if (i < min)
			min = i;

	return min;
}
#endif