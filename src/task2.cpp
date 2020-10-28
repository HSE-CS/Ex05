#include <iostream>
using namespace std;
double averageArr(int* mass, int size)
{
	int summ = 0;
	for (int x = 0; x < size; x++)
	{
		summ += mass[x];
		if (x == 7) return (double)summ / (double)8;
	}
}
int main()
{
	const int size = 8;
	int my_mass[size] = {3,3,4,5,2,5,4,4};
	cout << averageArr(my_mass, size);
}