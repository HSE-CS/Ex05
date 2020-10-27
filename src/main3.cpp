#include <iostream>
#include "task3.h"

int main() {
	const size_t size = 7;
	int ar[size] = { 1, 2, 3, 4, -5, 6, 7 };

	std::cout << minArr(ar);

	return 0;
}