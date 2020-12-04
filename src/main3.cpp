#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include "task3.h"

int main() {

	const size_t n = 5;

	int array_1[n]{ 1, 0, -1, 5, 10 };
	int result_1 = minArr(array_1);
	std::cout << result_1 << std::endl;

	double array_2[n]{ 1.5, 5, -3.5, 10.1, -3 };
	double result_2 = minArr(array_2);
	std::cout << result_2 << std::endl;
	
	return 0;
}