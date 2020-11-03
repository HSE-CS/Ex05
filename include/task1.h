#include <typeinfo>
#include <cstring>
template<class T>
bool less(T firstNumb, T secondNumb)
{
    return firstNumb < secondNumb;
}
template<> bool less <const char*>(const char* string1, const char* string2)
{
    return strcmp(string1, string2) < 0;
}
