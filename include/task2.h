#include<iostream>

template<class T>
double averageArr(T arr, int n)
{
	int sum = 0;
	for(int i = 0; i< n;i++)
	{
		sum += arr[i];
	}
	return sum/n;
}
