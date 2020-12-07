#include "task1.h"
#include <iostream>

int main()
{
    const char *str1="abba";
    const char *str2="baab";
    std::cout << less(str2, str1);
    return 0;
}