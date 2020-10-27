#include "task2.h"
#define size 5

int main()
{
    char mass[size] = {'k','b','f','a','g'};
    float res = averageArr(mass,size);
    std::cout << res;
    return 0;
}