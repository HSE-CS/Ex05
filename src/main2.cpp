#include <iostream>
#include <cstring>
#include"task2.h"

int main() {

	const unsigned int size = 3;

	int a[size]{ -1, 0, 1 };

	std::cout << averageArr(a, size);

	return 0;
}