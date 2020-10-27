#include "task1.h"

int main()
{
    int a = 2, b = 3;
    double c = 2.7, d = 1.8;
    const char str[] = "abba";
    const char str2[] = "baab";
    char x = 'a';
    char y = 'b';
    std::cout << less(a, b) << std::endl << less(c, d) << std::endl << less(str, str2) << std::endl << less(x, y);
    return 0;
}
