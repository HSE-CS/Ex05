#ifndef TASK_2
#define TASK_2
template <typename T> double averageArr(T *ar, int n) {

	float result = 0;
	for (int i = 0; i < n; i++)
		result += ar[i];

	return(result / n);
}
#endif