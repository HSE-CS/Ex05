#include "task2.h"

int main(){
    int *a = new int[10]{10, 23, 123, 123543, 123, 11, 0, -9516, 99, 10};
    cout << averageArr(a, 10) << endl;
    double *a2 = new double[5]{1.0, 10.5, 9849.166541, -1651.54, 0.0};
    cout << averageArr(a2, 5) << endl;
    return 0;
}