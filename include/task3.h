#pragma once
#ifndef TASK_3_H
const int size_world = 10;
template<class T> T MinArr(T* mass)
{
	int size = size_world;
	T elenent_min = mass[0];
	for (int x = 0; x < size; x++)if (elenent_min > mass[x]) elenent_min = mass[x];
	return elenent_min;
}
#endif // !TASK_3_H

