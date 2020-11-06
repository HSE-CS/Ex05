#include <typeinfo>
#include <cstring>
template<class T>
bool less(T firstNumber, T secondNumber)
{
    return firstNumber < secondNumber;
}
template<>
bool less<const char*>(const char* firsrString, const char* secondString)
{
    return strcmp(firsrString, secondString) < 0;
}
#endif //TASK1_TASK1_H