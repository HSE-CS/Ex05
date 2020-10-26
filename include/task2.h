#include <string.h>
#include <string>


template<class T>
double averageArr(T *a, int size)
{
  double everage = 0;
  for (int i = 0; i < size; i++)
    everage += i[a];
  everage = everage / size;
  return everage;
}
