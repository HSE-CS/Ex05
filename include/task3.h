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

