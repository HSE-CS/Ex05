#include <iostream>
#ifndef TASK1_TASK3_H
#define TASK1_TASK3_H
template<class T> int minArr(T & val)
{
    std::cout << sizeof(val) << "\n";
    std::cout << typeid(val).name() << "\n";
    return 1;

}

#endif //TASK1_TASK3_H
