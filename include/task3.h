#ifndef TASK3_H
#define TASK3_H

template <typename T, int length>
 T minArr(T (&arr)[length]) {
	 T min = INT_MAX;
	for (T it : arr)
	{
		if (it < min) min = it;
	}
	return min;
}

#endif
