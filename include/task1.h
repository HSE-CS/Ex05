#include <iostream>

template < typename T >
bool less(T& a, T& b){
	if (a < b) {
		return true;
	}
	else return false;
}