#include<iostream>

#include "Polynomial1.h"

void main()
{
	Polynomial a(0, 1);
	Polynomial b(2, 5);
	a.Init();
	cout << "----------------------------" << endl;
	std::cout << "Polynomial (a): " << std::endl;
	a.Output();

	cout << "----------------------------" << endl;
	std::cout << "Polynomial (b): " << std::endl;
	b.Output();


	Polynomial c = a.Add(b);
	cout << "----------------------------" << endl;
	std::cout << "Polynomial (a+b = c): " << std::endl;
	a.Output();

	cout << "----------------------------" << endl;
	std::cout << "Polynomial (a+c): " << std::endl;
	a.Add(c);
	a.Output();

	system("pause");
}