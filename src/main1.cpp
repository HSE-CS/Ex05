#include "task1.h"
#include <iostream>

int main()
{
	int num1 = 10;
	int num2 = 101010;

	float num3 = 0.25f;
	float num4 = 0.1f;

	double num5 = 3.14;
	double num6 = 3.1416;

	char strHello[] = "hello";
	char strWorld[] = "world";

	char ch1 = 'a';
	char ch2 = 'A';

	std::cout << less(num1, num2) << " " << less(num3, num4) << " " << less(num5, num6) << " " << less(strHello, strWorld) << " " << less(ch1, ch2) << std::endl;
}