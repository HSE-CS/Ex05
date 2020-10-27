#include "task1.h"
#include <iostream>
#include <string>
#include <string.h>


int main() {

    const char* str1 = "abba";
    const char* str2 = "baab";
    std::cout << less(str2, str1);

    int a = 5, b = 6;
    std::cout << less(a, b);

    return 0;
}