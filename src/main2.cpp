#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include "task2.h"
#include <string>

using namespace std;


int main()
{
	
	const size_t n = 6;
	int val[n]{ 4, 3, 2, 2, 2, 5 };
	double val2[n]{ 4.2, 3.3, 2.2, 2.3, 2.1, 5.4 };
	int result = ::averageArr(val, n);
	double result2 = ::averageArr(val2, n);

	
    return 0;
}