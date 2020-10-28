#include <iostream>
using namespace std;
#define Print { if(res == 1) cout << "True\n"; else cout << "False\n"; }
template <typename T>
bool Less(T value1, T value2)
{
	return value1 < value2;
}
int main()
{
	bool res;
	res = Less(5, 6);
	Print
	res = Less("abcd", "abcd");
	Print
	res = Less(5.5, 5.5);
	Print
	res = Less('A', 'B');
	Print
}