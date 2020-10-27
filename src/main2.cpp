#include <iostream>
#include "task2.h"

int main() {
	const size_t n = 5;
	int arr[n]{ 6, 9, 8, 3, 12 };
	int result = averageArr(arr, n);
	std::cout << result;
}