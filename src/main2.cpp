#include <iostream>
#include "task2.h"
#include <string>


int main2()
{
	const int n = 3;
	int arr[n]{ 1, 2, 3};
	int result = ::averageArr(arr, n);
	std ::cout << result;
	return 0;
}