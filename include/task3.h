#include <iostream>
#include <typeinfo>
#include <vector>

template <typename T, size_t sizeofmas>

T minArr(T (&a)[sizeofmas]) {
	T min = a[0];
	for (int i = 1; i < sizeofmas; ++i) {
		if (min > a[i])
			min = a[i];
	}
	return min;
}

