#include <iostream>
#include <algorithm>
#include <string>
#include "task1.h"

int main()
{
	std:: string str1 = "asde";
	std:: string str2 = "asded";
	
	if (less(str1,str2) == true)
	{
		std::cout << "true" << std::endl;
	}
	
	return 0;
}
