/* ������� ������� ���� void ������ ������������ �������� � ��� ������ � 
�������� ������ �������.(����� ������ � ������� ��������) � ������� ��������� 
���� ��� ������� A( ), B( ). �������� ������� ����������� �������� � ������ 
������� ������ ������. 
*/ 

#include <iostream>
#include <iomanip>
#include <string.h>
#include <algorithm>
#include <Windows.h>
#include <sstream>
#include <math.h>
#include <vector>
using namespace std;
 
void getMatrixColumnMin(int **m, const size_t size, const size_t row, size_t& minIndex, int& minValue)
{
    for(size_t col = 0; col < size; ++col )
	{
        if( m[row][col] <= minValue)
		{
            minValue = m[row][col];
            minIndex = col;
        }
    }
}
 
void printMatrix(int **m, const size_t n){
    for(size_t row = 0; row < n; ++row)
	{
        for(size_t col = 0; col < n; ++col)
		{
            cout << m[row][col]<<" ";
        }
		cout << endl;
    }
    cout << endl;
}
 
 
int main()
{ 

		setlocale(LC_ALL, "Russian");
		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);

		int **a, **b;
		size_t n;
		cout <<"������ �������: ";
		cin >> n;

		srand((int)time(nullptr));

		a = new int *[n];
		b = new int *[n];
	
		for(size_t i = 0; i < n; ++i)
		{
			a[i] = new int[n];
			b[i] = new int[n];
	
			for(size_t j = 0; j < n; ++j)
			{
				a[i][j] = rand() % 99;
				b[i][j] = rand() % 99;
			}
		}
	
		cout << "����� �������:" << endl;
		cout << "������� a:" << endl;
		printMatrix(a, n);
		cout << "������� b:" << endl;
		printMatrix(b, n);
	
		int valueA = a[0][0], valueB = b[0][0];
		size_t indexA = 0, indexB = 0;
		size_t row = 0;
		//cout<<"enter column:";
		//cin>>col;
		
		getMatrixColumnMin(a, n, row, indexA, valueA);
		getMatrixColumnMin(b, n, row, indexB, valueB);
	
		cout << "matrix A, min = " << valueA << " index = " << indexA + 1 << endl;
		cout << "matrix B, min = " << valueB << " index = " << indexB + 1 << endl;
	
		a[row][indexA] = valueB;
		b[row][indexB] = valueA;
	
		cout << endl << "matrix after swap" << endl;
		printMatrix(a,n);
		printMatrix(b,n);
	
		for(size_t r = 0; r < n; ++r)
		{
			delete[] a[r];
			delete[] b[r];
		}
		delete[] a;
		delete[] b;
		
return 0;
}