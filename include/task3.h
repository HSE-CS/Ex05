template<typename T, size_t n>
T minArr(T(&a)[n]) {
	T min = a[0];
	for (size_t i = 0; i < n; ++i) {
		if (min > a[i]) {
			min = a[i];
		}
	}
	return min;
}