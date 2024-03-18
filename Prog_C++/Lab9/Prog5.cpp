#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <Windows.h>
#include <sstream>
#include <cmath>




using namespace std;

void In_data(double **A, const size_t m )
{
    int n = m;
    for(int i = 0; i < m; i++)
    {
        A[i] = new double [m];
        for(int j = 0; j < n; j++)
        {
            A[i][j] = rand() % 9 + 1;
        }
    }
}

void Print(double **A, int m)
{
    int n = m;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << setw( 4 ) << A[i][j] << ' ';
        }
        cout << endl;
    }
}

int Sled_sum(double **A, int m)
{
    int sum = 0;
    int n = m;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == j)
            {
                sum += A[i][j];
            }
        }
    }
    return sum;
}

void Matrix_square(double **A, double **Z, int m)
{
    for(int i = 0; i < m ; i++)
    {
        for(int j = 0; j < m; j++)
        {
            for(int k = 0; k < m; k++)
            {    
                Z[i][j] += A[i][k] * A[k][j];
            }
        }
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    const size_t m = 5;
    double** A = new double *[m];
    double** B = new double *[m];
    double** C = new double *[m];  

    cout << "Матрица А:" << endl;
    In_data(A, m);
    Print(A, m);
    cout << endl;

    cout << "Матрица B:" << endl;
    In_data(B, m);
    Print(B, m);
    cout << endl;

    cout << "Матрица C:" << endl;
    In_data(C, m);
    Print(C, m);
    cout << endl;

    int *sum = new int [2];
    sum[0] = Sled_sum(A, m);
    sum[1] = Sled_sum(B, m);
    sum[2] = Sled_sum(C, m);
    cout << "След. матрицы А = " << sum[0] << endl << "След. матрицы B = " << sum[1] << endl
         << "След. матрицы C = " << sum[2] << endl << endl;

    auto min = min_element(sum, sum + 2);
    cout << "Минимальная = " <<*min << endl;

     double** Z = new double *[m];
     for(int i = 0; i < m ; i++)
    {
        Z[i] = new double [m];
        for(int j = 0; j < m; j++)
        {
            Z[i][j] = 0;
        }
    }

    if(*min == sum[0])
    {
        Matrix_square(A, Z, m);
        Print(Z, m);
    }
    else if(*min == sum[1])
    {
        Matrix_square(B, Z, m);
        Print(Z, m);
    }
    else
    {
        Matrix_square(C, Z, m);
        Print(Z, m);
    }

}