#include <iostream>
#include "task2.h"
using namespace std;
int main() {
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    cout << averageArr(arr1, sizeof(arr1)/sizeof(int)) << endl;
    return 0;
}