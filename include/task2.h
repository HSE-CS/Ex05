#ifndef TASK1_TASK2_H
#define TASK1_TASK2_H
template<class T> T averageArr(T* val, int n)
{
    T sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += val[i];
    }
    return sum/n;
}

#endif //TASK1_TASK2_H
