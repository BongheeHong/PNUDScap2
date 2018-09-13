#include<iostream>
#include <chrono>  // for high_resolution_clock

#define ROWS 200
#define COLS 200

using namespace std;

void print(int (*tab)[COLS], int rows, int cols)
{
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << *(*tab + i * cols + j) << " ";
		}
		cout << endl;
	}
}

//Program 1.34: square matrix multi
void Multiply(const int (*in1)[COLS], const int (*in2)[COLS], int (*out)[COLS], int actualSize)
{
	for (int i = 0; i < actualSize; i++)
		for (int j = 0; j < actualSize; j++)
		{
			out[i][j] = 0;
			for (int k = 0; k < actualSize; k++)
				out[i][j] += in1[i][k] * in2[k][j];
		}
}

int main(void){
	int a[ROWS][COLS] = { 0 };
	int b[ROWS][COLS] = { 0 };
	int c[ROWS][COLS] = { 0 };

	for (int i = 1; i <= ROWS; i++) {
		// Record start time
		auto start = chrono::high_resolution_clock::now();

		Multiply(a, b, c, i);
		//print(c, i, i);

		// Record end time
		auto finish = chrono::high_resolution_clock::now();
		// get elapsed time
		chrono::duration<double> elapsed = finish - start;
		cout << "Row and Col size = " << i << ". Elapsed time: " << elapsed.count() << " s\n";
	}
	
	
	system("pause");
	return 0;
}