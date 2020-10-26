//
// Created by Алексей Трутнев on 26.10.2020.
//

#ifndef EX05_TASK1_H
#define EX05_TASK1_H

#include <string.h>
#include <string>

template<class T> bool less(T arg1, T arg2);
template<> bool less<const char *>(const char * arg1, const char * arg2);

#endif //EX05_TASK1_H
