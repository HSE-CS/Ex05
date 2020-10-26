#include "task2.h"
#include <iostream>

#define n 6 

int main() {
	int val[n] = { 4, 3, 2, 2, 2, -1 };
	std::cout<< ::averageArr<int>(val, n)<<std::endl;
	return 0;
}