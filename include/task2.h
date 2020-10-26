#pragma once
#include<cstring>
#include<iostream>

template<typename T, typename S>
T averageArr(T* point_array, S _size) {
	
	T _sum = 0;

	for (size_t i = 0; i < _size; ++i) {
		_sum += point_array[i];
	}

	return (_sum / _size);

}