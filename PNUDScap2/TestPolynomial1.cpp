#include<iostream>

#include "Polynomial1.h"

void main()
{
	Polynomial a(0, 1);
	Polynomial b(2, 5);
	a.Init();
	a.Output();
	Polynomial c = a.Add(b);
	a.Output();
	a.Add(c);
	a.Output();

	system("pause");
}