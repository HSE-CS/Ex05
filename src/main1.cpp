#include "task1.h"

int main() {

	int a = 5;
	int b = 10;

	std::cout << less(a, b) << std::endl;

	const char* str1 = "hellooo";
	const char* str2 = "helloo";

	std::cout << less(str1, str2) << std::endl;

	return 0;
}
