#include "task2.h"
#include <iostream>

using namespace std;

int main()
{
    const size_t n = 6;
    int val[n]{4, 3, 2, 2, 2, -1};
    cout << averageArr(val, n);
    return 0;
}