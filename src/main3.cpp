#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cstring>
#include "task3.h"
using namespace std;
int main()
{
	const int size = size_world;
	setlocale(0, "ru-RU");
	int my_mass[size] = { 8,4,3,4,5,2,0,7,5,1 };
	cout <<" min value: " << minArr(my_mass) <<endl;
}