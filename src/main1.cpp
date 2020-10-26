#include <iostream>
#include <algorithm>
#include <string>
#include "task1.h"

int main()
{
	char str1[] = "asde";
	char str2[] = "asded";
	
	if (less(str1,str2) == true)
	{
		std::cout << "true" << std::endl;
	}
	
	return 0;
}
