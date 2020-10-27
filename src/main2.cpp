#include <iostream>
#include "task2.h"

int main() {
	const size_t size = 15;
	int ar[size] = {1, 2, 3, 4, 5, 6, 7};

	std::cout << averageArr(ar, size);

	return 0;
}