#include "task1.h"


using namespace std;


int main()
{

	int a = 2, b = 10;
	char x = 'o', y = 'z';
	bool result = ::less(a, b);
	cout << result << endl;
	result = ::less(x, y);
	cout << result << endl;
	const char* str1 = "abca";
	const char* str2 = "abcb";
	result = ::less(str1, str2);
	cout << result << endl;
	
	return 0;

}