#include <iostream>
#include <stdio.h>
#include "task3.h"
using namespace std;
int main()
{
	const int size = size_world;
	setlocale(0, "ru-RU");
	int my_mass[size] = { 8,4,3,4,5,2,0,7,5,1 };
	cout <<" Минимальное значение: " << minArr(my_mass) <<endl;
}