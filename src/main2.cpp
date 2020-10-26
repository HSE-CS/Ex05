#include"task2.h"

int main() {

	const unsigned int _size = 6;

	int a[_size]{ 4, 3, 2, 2, 2, -1 };

	std::cout << averageArr(a, _size) << std::endl;

	return 0;
}