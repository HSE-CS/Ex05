#include "task1.h"
#include <iostream>

int main() {
	int a = 1;
	int b = 2;
	char s1[] = "strok";
	char s2[] = "not strok";

	std::cout << less(a, b) << '\n';
	std::cout << less(b, a) << '\n';
	std::cout << less(s1, s2) << '\n';
	return 0;
}

