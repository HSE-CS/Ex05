#include "task1.h"


//using namespace std;


int main()
{

	int a = 2, b = 10;
	char x = 'o', y = 'z';
	const char* str1 = "abca";
	const char* str2 = "abcb";
	bool result = less(a, b);
	printf("%d\n", result);
	result = less(x, y);
	printf("%d\n", result);
	result = less(str1, str2);
	printf("%d\n", result);
	
	return 0;

}