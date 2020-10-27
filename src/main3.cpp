#include "task3.h"
#include <iostream>

int main()
{
	int arr1[10] = { 5, 3, 2, 10, 6, 7, 9, 1, 8, 4 };

	double arr2[10] = { 5.2, 3.3, 2.2, 10.1, 1.101, 7.7, 1.11, 1.1, 8.8, 4.4 };

	std::cout << minArr(arr1) << " " << minArr(arr2) << std::endl;
}