#pragma warning(disable : 4996)

#include <iostream>

#include "Polynomial2h.h"

int Polynomial::capacity = 100;
Term *Polynomial::termArray = new Term[100];
int Polynomial::free = 0;

int main(void) {
	int choice;


	Polynomial P1, P2, P3;
	cout << "Instruction:- \nExample:-\nP(x)=5x^3+3x^1\nEnter the Polynomial like\nP(x)=5x^3+0x^2+3x^1+0x^0\n";
	cout << "Enter Polynomial1:-" << endl;
	P1.GetData();
	cout << "Enter Polynomial2:-" << endl;
	P2.GetData();

	while (1) {
		cout << "\n****** Menu Selection ******" << endl;
		cout << "1: Addition\n2: Substraction\n3: Multiplication\n0: Exit" << endl;
		cout << "Enter your choice:";
		cin >> choice;
		switch (choice) {
		case 1:
			cout << "\n--------------- Addition ---------------\n";
			cout << "Polynomial1:";
			P1.Display();
			cout << "Polynomial2:";
			P2.Display();
			P3 = P1.Add(P2);
			P3.Display();
			cout << "----------------------------------------\n";
			break;
		case 2:

			cout << "\n------------- Substraction -------------\n";
			cout << "Polynomial1:";
			P1.Display();
			cout << "Polynomial2:";
			P2.Display();
			//P3.Substract(P1, P2);
			cout << "----------------------------------------\n";
			break;
		case 3:
			cout << "\n----------- Multiplication -------------\n";
			cout << "Polynomial1:";
			P1.Display();
			cout << "Polynomial2:";
			P2.Display();
			//P3.Multiply(P1, P2);
			cout << "----------------------------------------\n";
			break;
		case 0:
			cout << "Good Bye...!!!" << endl;
			exit(0);
		}
	}
	system("pause");
	return 0;
}
