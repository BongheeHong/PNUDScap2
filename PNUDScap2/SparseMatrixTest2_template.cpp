#include "SparseMatrix2_template.h"

void main()
{
	int val[8] = { 15, 22, -15, 11, 3, -6, 91, 28 };
	int val2[5] = { 1, 2, 1, 3, 1 };
	int val3[3] = { 1, 1, 1 };
	/*SparseMatrix<int> a;
	a.Init2(val2);
	SparseMatrix<int> b;
	b.Init3(val3);
	a.Output();
	b.Output();
	SparseMatrix<int> c = a.Multiply(b);
	c.Output();*/

	SparseMatrix<int> a;
	a.Init2(val2);
	cout << "Sparse matrix a, row=3, col=3" << endl;
	a.Output();
	a.OutputToMatrice();
	cout << "-----------------------------" << endl;

	cout << "Sparse matrix b, row=3, col=4" << endl;
	SparseMatrix<int> b;
	b.Init3(val3);
	b.Output();
	b.OutputToMatrice();
	cout << "-----------------------------" << endl;

	cout << "transpose matrix a" << endl;
	SparseMatrix<int> transposeOfMatrixA = a.Transpose();
	transposeOfMatrixA.Output();
	transposeOfMatrixA.OutputToMatrice();
	cout << "-----------------------------" << endl;

	cout << "fast transpose matrix b" << endl;
	SparseMatrix<int> fastTransposeOfMatrixB = b.FastTranspose();
	fastTransposeOfMatrixB.Output();
	fastTransposeOfMatrixB.OutputToMatrice();
	cout << "-----------------------------" << endl;

	cout << "matrix a multiply matrix b (axb)" << endl;
	SparseMatrix<int> c = a.Multiply(b);
	c.Output();
	c.OutputToMatrice();
	cout << "-----------------------------" << endl;
	system("pause");
}
