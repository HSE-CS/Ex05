#include "task3.h"
#include <iostream>

#define n 6 

int main() {

	int val[n] = { 4, 3, 2, 2, 2, -1 };

	int result = ::minArr<int>(val);

	std::cout << result << std::endl;

	return 0;
}
