#include <iostream>
#include "task1.h"

int main() {
    const char *str1="abba";
    const char *str2="baab";
    bool result=less(str2,str1);

    std::cout<<result<<std::endl;

}
