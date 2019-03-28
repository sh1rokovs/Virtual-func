#include "Header.h"
#include <iostream>

using namespace std;

int main()
{
	Ninja n;
	Monster m;
	Enemy *e1 = &n;
	Enemy *e2 = &m;

	e1->attack();
	e2->attack();
}