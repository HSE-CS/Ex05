#ifndef TASK2_H
#define TASK2_H

template <typename T>
double averageArr(const T& arr, int size) {
	double sum = 0;
	for (const auto& el : arr) {
		sum += el;
	}
	return sum/size;
}

#endif
