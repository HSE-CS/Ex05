#include "task1.h"


using namespace std;


int main()
{
	int a = 2, b = 10;
	char x = 'o', y = 'z';
	bool result = less1(a, b);
	cout << result << endl;
	result = less1(x, y);
	cout << result << endl;
	const char* str1 = "abcd";
	const char* str2 = "abcd";
	result = less1(str2, str1);
	cout << result << endl;
	return 0;
}