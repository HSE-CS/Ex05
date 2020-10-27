#include <stdio.h>
#include <iostream>
#include "task1.h"

int main()
{

    char* s1 = "Hello";
    char* s2 = "HelloWorld";

    int n1 = 123;
    int n2 = 1000;

    bool bl;

    bl = less(n1, n2);
    std::cout<<bl<<std::endl;

    bl = less(s1,s2);
    std::cout<<bl<<std::endl;
}
