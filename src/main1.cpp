#include <iostream>
#include <task1.h>
int main()
{
    std::cout << less(5, 6) << std::endl;
    std::cout << less("a", "b") << std::endl;
    const char* str1 = "abba";
    const char* str2 = "baab";
    std::cout << less(str2, str1) << std::endl;
    return 0;
}

