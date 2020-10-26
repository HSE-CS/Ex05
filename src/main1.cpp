#include"task1.h"

//using namespace std; при использовании, less неоднозначно определено

int main() {

	char x[] = { "HeDINg" };
	char y[] = { "H" };

	std::cout << less(x, y) << std::endl;

	return 0;
}