#include <iostream>
#include "task1.h"

int main() {
    //test 1.1 done
    int a=5, b=6;
    bool result1 = less(a,b);
    std::cout << result1 << std::endl;

    //test 1.2 done
    char c = 'x', d = 'y';
    bool result2 = less(c,d);
    std::cout << result2 << std::endl;

    //test 1.3 done (total coping from theory)
    const char *str1 = "abba";
    const char *str2 = "baab";

    bool result3 = less(str2,str1);
    std::cout << result3;
    return 0;
}
