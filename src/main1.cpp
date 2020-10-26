#include <iostream>
#include "task1.h"
//using namespace std;


int main() {
	int a = 1, b = 2;
	double c = 3.134, d = 3.1333;
	const char* str_1 =  "a", *str_2 = "z";
	std::cout << less(a, b) << '\n' <<
	less(c, d) << '\n' <<
	less(str_1, str_2);

	return 0;
}