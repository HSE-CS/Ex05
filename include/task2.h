#ifndef TASK2_H
#define TASK2_H
#define _CRT_SECURE_NO_WARNINGS_
#include <iostream>
#include <string.h>
#include <string>
using namespace std;

template<typename T>
double averageArr(T * Arr, size_t ArrSize)
{
	T Sum = 0;
	for (int i = 0; i < ArrSize; ++i) {
		Sum = Sum + Arr[i];
	}
	return Sum / ArrSize;
}
#endif TASK2_H
