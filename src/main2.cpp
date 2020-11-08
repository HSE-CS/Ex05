#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cstring>
#include "task2.h"
using namespace std;

int main()
{
	const int size = 8;
	int my_mass[size] = { 1,2,3,4,5,6,7,8 };
	cout << averageArr(my_mass, size);
}