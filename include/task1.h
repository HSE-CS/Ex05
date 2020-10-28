#include <cstring>

template<typename T>
bool less (T f, T s) { return f < s; }

template<>
bool less <const char*> (const char* f, const char* s) { return strcmp(f, s) < 0; }