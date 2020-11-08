#include<iostream>
#include "task1.h"

int main()
{
    int a=5,b=6;
	char x='a',y='b';
	bool result=less(a,b);
    std::cout << result;
	result=less(x,y);
    std::cout << result;
}