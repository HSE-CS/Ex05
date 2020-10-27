#include "../include/task1.h"
#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	int b = 5;
	cout << Less((char*)("aaa"), (char*)("aab")) << endl;
	cout << Less(a, b) << endl;
	cout << Less(0.6, 0.5) << endl;

	return 0;
}