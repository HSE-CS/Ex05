template <typename T>
T minArr(T &arr)
{
	T min = 9999999;
	T* p = &arr;
	for (int i = 0; i < sizeof(arr); i++)
	{
		if (p[i] < min)
			min = p[i];
	}
	return min;
}
