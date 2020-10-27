#ifndef TASK1_TASK_H
#define TASK1_TASK_H

#include <string>

template <typename T>
bool less(T object1, T object2)
{
    return object1 < object2;
}

template <> bool less(const char* object1, const char* object2)
{
    return strcmp(object1, object2) < 0;
}

#endif //TASK1_TASK_H