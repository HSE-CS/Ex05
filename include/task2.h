#pragma once
#include<iostream>
#include<cstring>

template<typename T, typename S>
T averageArr(T* arr, S size){
	sum = 0;
	for(int i=0;i<size;i++){
		sum += arr[i];
	}
	return(sum/size);
}