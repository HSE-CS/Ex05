#include "task1.h"
#include <iostream>
#include <string>
#include <cstring>


int main() {

	int a = { 1000 }, b = { 10000 };
	double c = { 1.203 }, d = { 1.204 };
	char str1[] = "aaa", str2[] = "aab";

	std::cout <<"less <int>\n" << less<int>(a, b) << std::endl;
	std::cout << less<int>(a, a) << std::endl;
	std::cout << less<int>(b, a) << std::endl;

	std::cout << "less <double>\n"<< less<double>(c, d) << std::endl;
	std::cout << less<double>(c, c) << std::endl;
	std::cout << less<double>(d, c) << std::endl;


	std::cout <<"less <const char*>\n"<< less<const char*>(str1, str2) << std::endl;
	std::cout << less<const char*>(str1, str1) << std::endl;
	std::cout << less<const char*>(str2, str1) << std::endl;

}