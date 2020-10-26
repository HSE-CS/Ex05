#include <iostream>
#include <cstring>
#include "task1.h"

//using namespace std;



int main() // less is alredy exist in std:: ,that's why we can't use it  
{
	char value1[] = "comp";
	const char * value1Ptr = value1;
	char value2[] = "compppp";
	const char * value2Ptr = value2;
	bool res = less(value1Ptr, value2Ptr);
	std::cout << res;
}

