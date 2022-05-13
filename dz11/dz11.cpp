#include <iostream>
#include <string>
#include "animals.h"
using namespace std;
int main()
{
	string l = "max";
	Parrot a(l);
	a.stopFlying();
	a.printname();
	return 0;
}

