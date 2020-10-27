#ifndef TASK1_TASK2_H
#define TASK1_TASK2_H
template<class T> int averageArr(T & val, T n)
{
    T sum = 0;
    int kol = 0;
    for(int i = 0; i < n; i++)
    {
        sum += val[i];
        kol++;
    }
    return sum<int>/kol;
}

#endif //TASK1_TASK2_H
