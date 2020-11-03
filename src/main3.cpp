#include <iostream>
#include "task3.h"
using namespace std;
int main(){
    const size_t n = 6;
    int val[n]{4, 3, 2, 2, 2, -1};
    int result=minArr(val);
    cout << result<<endl;
    return 0;
}
