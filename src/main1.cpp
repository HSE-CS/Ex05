//#include"../include/task1.h"
#include "task1.h"
#include<iostream>

int main() {
	int a = 5, b = 10;
	std::cout << less(b, a)<<"\n";

	std::string s1 = "abce";
	std::string s2 = "abcd";

	std::cout << less(s1, s2)<<"\n";
	char c1[] = "Ksek";
	char c2[] = "Keka";

	


	std::cout << less(c2, c1) << "\n";
	double a1 = 5.99, b1 = 10.01;
	std::cout << less(a1, b1) << "\n";

	return 0;
}