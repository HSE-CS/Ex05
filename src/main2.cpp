#include "task2.h"

int main()
{
	const size_t n = 6;
	int a[n]{ 4, 3, 2, 2, 2, -1 };
	std::cout << averageArr(a, n) << std::endl;
	
	return 0;
}