//
// Created by Алексей Трутнев on 26.10.2020.
//

#ifndef EX05_TASK2_H
#define EX05_TASK2_H

template <typename T>
double averageArr(const T * array, int size){
    double sum = {0.};
    for (auto i = 0; i < size; ++i) sum += array[i];
//    for (size_t i = 0; i < size; ++i) sum += array[i];
    return sum / size;
}

#endif //EX05_TASK2_H
