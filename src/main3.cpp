#include "task3.h"
#include <iostream>


int main() {
	const size_t n = 5;
	double a1[n] = {2.6,3.2,4.3,5.4,-7.8};
	int a2[n] = {1,2,0,3,66};
	std::cout << minArr(a1) << '\n';
	std::cout << minArr(a2) << '\n';
	return 0;
}

