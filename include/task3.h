#ifndef TASK1_TASK3_H
#define TASK1_TASK3_H

template < typename T >
int minArr(T arr)
{
    int min = arr[0];
    for(int i = 0; i < 6; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

#endif //TASK1_TASK3_H
