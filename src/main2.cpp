#include <iostream>
#include <task2.h>
int main()
{
    double arr[]{4, 3, 2, 2, 2, -1};
    std::cout <<  averageArr(arr, sizeof(arr)/sizeof(decltype(*arr))) << std::endl;
    return 0;
}

