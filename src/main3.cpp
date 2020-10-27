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
	const size_t n = 10;
	int val[n]{ 4, 3, 2, 2, 2, 5, 5, 10, 323, -1};
	int result = ::minArr(val);
	cout << result << endl;
	return 0;
}