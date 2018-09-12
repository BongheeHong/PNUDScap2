#include "SparseMatrix.h"

void main()
{
	int val[8] = { 15, 22, -15, 11, 3, -6, 91, 28 };
	int val2[5] = { 1, 2, 1, 3, 1 };
	int val3[3] = { 1, 1, 1 };
	SparseMatrix a;
	a.Init2(val2);
	SparseMatrix b;
	b.Init3(val3);
	a.Output();
	b.Output();
	SparseMatrix c = a.Multiply(b);
	c.Output();

	system("pause");
}
