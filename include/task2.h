#include <iostream>
#include <typeinfo>
#include <vector>

template <typename OUT>

OUT averageArr(OUT* a, int n) {
	OUT sum = 0;
	for (int i = 0; i < n; ++i) {
		sum += (OUT)a[i];
	}
	return sum / (OUT)n;
}