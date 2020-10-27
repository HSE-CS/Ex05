#ifndef TASK3_H
#define TASK3_H

template<typename T, unsigned int arrSize> T minArr(T (&initialArray)[arrSize])
{
	T min{initialArray[0]};

	for (auto item : initialArray) {
		if (item < min) {
			min = item;
		}
	}

	return min;
}

#endif
