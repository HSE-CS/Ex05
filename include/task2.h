#ifndef TASK1
#define TASK1
template <typename T> T averageArr(T& ar, int n) {

	float result = 0;
	for (auto i : ar)
		result += i;

	return(result / n);
}
#endif