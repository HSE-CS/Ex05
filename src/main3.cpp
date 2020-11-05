#include "task1.h"
#include "task2.h"
#include "task3.h"
#include <iostream>
#include <typeinfo>


int main() {
	int a = 0;
	int b = 1;
	less(a, b);
	int mas[3] = { 5, 7, 8 };
	std::cout << averageArr(mas, 2) << "\n";
	std::cout << minArr(mas) << "\n";
}