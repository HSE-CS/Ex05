#include <iostream>
using namespace std;
#include "task1.h"


template <class T>
T Less(T a, T b)
{
	if (a < b) return true;
}

int main()
{
	int i1=1, i2=9;
	cout << Less(i1, i2) << "\n"<<endl;	
	char c1 = 'f', c2 = 'q';
	cout << Less(c1, c2) << "\n";
	return 0;
}