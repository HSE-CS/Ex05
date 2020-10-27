#include "task2.h"
#include <iostream>

int main()
{
	int arr1[7] = { 1, 2, 3, 5, 8, 13, 24 };

	float arr2[5] = { 0.5f, 1.5f, 3.3f, 4.7f, 5.0f };

	double arr3[5] = { 1.1, 1.5, 3.2, 3.3, 5.7 };

	std::cout << averageArr(arr1, 7) << " " << averageArr(arr2, 5) << " " << averageArr(arr3, 5) << " " << std::endl;
}