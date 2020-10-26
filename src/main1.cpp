#include "task1.h"

#include <typeinfo>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iterator>
using namespace std;


int main()
{
	const char* str1 = "abba";
	const char* str2 = "baab";
	bool result = ::less(str2, str1);
	cout << result;
}
