#include "task1.h"

using namespace std;

int main() {

	if (::less(1, 2)) printf("true");
	if (::less(1.25, 1.36)) printf("true");
	if (::less("aaaaaa", "ffffff")) printf("true");

	return 0;
}