#include <iostream>
#include "task2.h"
int main()
{
        const size_t n = 6;
        int val[n]{4, 3, 2, 2, 2, -1};
        int result = averageArr(val, n);
        std::cout << result; //2


        return 0;
};
