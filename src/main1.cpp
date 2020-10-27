#include <iostream>
#include "task1.h"

int main()
{
    int i1 = -23;
    int i2 = 5;
    float f1 = 0.53f;
    float f2 = 0.228f;
    const char s1[] = "wasd";
    const char s2[] = "qwerty";
    
    bool res1 = less(i1, i2);
    bool res2 = less(f1, f2);
    bool res3 = less(s1, s2);
    
    return 0;
}