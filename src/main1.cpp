#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
#include "task1.h"

using namespace std;

int main (){
	char s1[] = "game";
	char s2[] = "gaaaaame";
	bool res = less(*s1,*s2);
	cout << res<<endl;
	int x=5,y=3;
	res=less(x,y)
	cout<<res;
	return 0;
}