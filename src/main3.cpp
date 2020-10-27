#include <iostream>
#include "task3.h"

int main() {
	const size_t t = 5;
	int a[t]{ 1, 2, 3, 4, -1 };
	std::cout << minArr(a);
}