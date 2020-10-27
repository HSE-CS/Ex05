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


    const size_t n = 6;
    int val[n]{ 4, 3, 2, 2, 2, -1 };
    std::cout << averageArr(val, n);


    return 0;
}