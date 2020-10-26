#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include "task3.h"
#include <string>

using namespace std;


int main()
{
	const size_t n = 6;
	int val[n]{ 4, 3, 2, 2, 2, 5 };
	int result = ::minArr(val);
	return 0;
}