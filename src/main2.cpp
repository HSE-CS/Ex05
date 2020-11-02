#include "task2.h"
#include <iostream>

int main() {
	long long x[] = { 0, 33, 444, 55, 444, 12, 442, 55 };

	std::cout << averageArr(x, sizeof(x) / sizeof(*x)) << std::endl;

	return 0;
}