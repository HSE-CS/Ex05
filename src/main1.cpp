#include "task1.h"
#include <iostream>

int main() {
    int n1 = 5;
    int n2 = 10;
    double n3 = 4.8;
    double n4 = 2.58;
    char str1[] = "Atom";
    char str2[] = "Clion";
    std::cout << less(n1, n2) << '\n';
    std::cout << less(n2, n1) << '\n';
    std::cout << less(n3, n4) << '\n';
    std::cout << less(n4, n3) << '\n';
    std::cout << less(str1, str2) << '\n';
    std::cout << less(str2, str1) << '\n';
    return 0;
}

