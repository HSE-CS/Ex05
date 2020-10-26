template <typename T, size_t n>
T minArr(T (&arr)[n])
{
	T min = 9999999;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}
	return min;
}
