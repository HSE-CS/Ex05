#include "task2.h"
#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>


int main()
{
	const size_t n = 6;
	//int* arr = new int[n];
	int arr[n]{ 4, 3, 2, 2, 2, -1 };
	std::cout << averageArr(&arr[0], n);
}