/*
 * @author Stanislav Stoianov
 */

#ifndef TASK1_TASK3_H
#define TASK1_TASK3_H

template<typename T>
double minArr(T &arr) {
    auto min = *arr;
    for (auto item : arr) if (min > item) min = item;
    return (double) min;
}

#endif
