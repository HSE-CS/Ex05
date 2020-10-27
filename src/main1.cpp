#include <iostream>
#include "task1.h"

int main()
{
    int num1 = 102, num2 = 21;
    std::cout << "num1 = " << num1 << "; num2 = " << num2 << ";\n";
    std::cout << "answer: " << less(num1, num2) << "\n";

    double num3 = 10.2, num4 = 32.041;
    std::cout << "\nnum3 = " << num3 << "; num4 = " << num4 << ";\n";
    std::cout << "answer: " << less(num3, num4) << "\n";

    std::string num5 = "12345", num6 = "12645";
    std::cout << "\nnum5 = " << num5 << "; num6 = " << num6 << ";\n";
    std::cout << "answer: " << less(num5, num6) << "\n";

    return 0;
}