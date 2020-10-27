#include "../include/task1.h"
#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	int b = 5;
	cout << Ex05::less((char*)("aaa"), (char*)("aab")) << endl;
	cout << Ex05::less(a, b) << endl;
	cout << Ex05::less(0.6, 0.5) << endl;

	return 0;
}