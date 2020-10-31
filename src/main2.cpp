#include <iostream>
#include "task2.h"
using namespace std;

int main()
{
	const int size = 8;
	int my_mass[size] = { 3,3,4,5,2,5,4,4 };
	cout << averageArr(my_mass, size);
}
