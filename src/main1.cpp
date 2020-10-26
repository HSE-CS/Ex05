#include "task1.h"
#include <iostream>

int main(){
    char *str1 = "asd";
    char *str2 = "blob";
    
    long long l1 = 99;
    long long l2 = 77777777777777;
    
    char c1 = 0;
    char c2 = -1;
    
    std::cout << less(str1, str2) << ' ' << less(l1, l2) << ' ' << less(c1, c2) << std::endl;

    return 0;
}