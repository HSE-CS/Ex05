#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cstring>
#include "task3.h"
using namespace std;
int main()
{
	const int size = 6;
	int val[size] = { 4, 3, 2, 2, 2, -1 };
	cout << minArr(val);
}