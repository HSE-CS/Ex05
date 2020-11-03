#include <iostream>
#include <string>
#include <cstring>
#include "task1.h"



int main (){
  char s1[] = "game";
	char s2[] = "gaaaaame";
	bool res = less(*s1,*s2);
	std::cout << res<<std::endl;
	int x=5,y=3;
	res=less(x,y);
	std::cout<<res;
	return 0;
}
