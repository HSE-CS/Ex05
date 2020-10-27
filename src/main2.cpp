#include <iostream>
#include "task2.h"

int main() {
	const size_t t = 5;
	int a[t]{1, 2, 3, 4, 5};
	std::cout << averageArr(a, t);
}