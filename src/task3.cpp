#include <iostream>
using namespace std;
const int size_world = 10;

template<class T> T MinArr(T* mass)
{
	int size = size_world;
	T elenent_min = mass[0];
	for (int x = 0; x < size; x++)if (elenent_min > mass[x]) elenent_min = mass[x];
	return elenent_min;
}

int main()
{
	const int size = size_world;
	setlocale(0, "ru-RU");
	int my_mass[size] = { 8,4,3,4,5,2,0,7,5,1 };
	cout <<" Минимальное значение: " << MinArr(my_mass) <<endl;
}