#include <iostream>
template <class Type> bool less(Type a, Type b);
template<> bool less<const char*>(const char* a, const char* b);