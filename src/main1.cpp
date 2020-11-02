#include "task1.h"
#include<iostream>

void less() {
	return;
}

int main() {
	int a = 5, b = 10;
	std::cout << less(b, a) << "\n";

	std::string c1 = "abce";
	std::string c2 = "abcd";

	std::cout << less(c1, c2) << "\n";
	char v1[] = "Ksek";
	char v2[] = "Keka";




	std::cout << less(v2, v1) << "\n";
	double t1 = 5.99, b1 = 10.01;
	std::cout << less(t1, b1) << "\n";


	std::cout << typeid(t1).name() << "\n";


	return 0;
} 