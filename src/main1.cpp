#include "task1.h"


int main() {
    std::cout << less(3, 2) << std::endl;
    std::cout << less("abc", "bcd") << std::endl;
    std::cout << less(1, 2) << std::endl;
    std::cout << less("abc", "abc") << std::endl;
    std::cout << less("bcd", "abc") << std::endl;

    return 0;
}
