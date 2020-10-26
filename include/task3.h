#ifndef TASK3_H
#define TASK3_H
#define _CRT_SECURE_NO_WARNINGS_
#include <iostream>
using namespace std;

template<class T>
auto minArr(T & Arr)
{
	auto min = Arr[0];
	//cout << typeid(Arr).name();
	//cout << sizeof(Arr);
	for (int i = 1; i < sizeof(Arr) / sizeof(Arr[0]); ++i) {
		if (min > Arr[i]) min = Arr[i];
	}
	return min;
}
#endif TASK3_H