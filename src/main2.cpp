#include <iostream>
#include <cmath>
#include <algorithm>
#include "task2.h"

int main() {

	const size_t n = 5;
	int array_1[n]{ 1,2,3,4,5};
	double array_2[n]{ 1.1,2.2,3.3,4.4,5.5 };
	double result = averageArr(array_1, n);
	std::cout << result << std::endl;
	result = averageArr(array_2, n);
	std::cout << result << std::endl;
	
	return 0;
}