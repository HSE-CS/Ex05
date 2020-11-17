<<<<<<< HEAD
#pragma once
#ifndef TASK_3
#define TASK_3

template<class T> int minArr(T& mass)
{
	int elenent_min = mass[0];
	for (int x = 0; x < (sizeof(mass) / sizeof(mass[0])); x++)if (elenent_min > mass[x]) elenent_min = mass[x];
	return elenent_min;
}
#endif // !TASK_3
=======
#include <iostream>
template <typename T, size_t size>
T minArr(T (&array)[size]){
    T res = array[0];
    for (size_t i = {0}; i < size; ++i) if (array[i] < res) res = array[i];
    return res;
}
>>>>>>> 2ce3b7f6962f4fbc560a4d79681365483cd63024
