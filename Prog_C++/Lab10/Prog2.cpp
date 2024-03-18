#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <Windows.h>
#include <sstream>
#include <math.h>
#include <vector>

using namespace std;

void In_data( int *a, int n)
{
    const int MIN_VALUE = +1;
    const int MAX_VALUE = +10;

    for(int i = 0; i < n; i++)
    {
            a[i] = MIN_VALUE + rand() % ( MAX_VALUE - MIN_VALUE + 1 );
    }
}

void Print(int *a, int n)
{
    for(int i = 0; i < n; i++)
    {
            cout << a[i] << " "; 
    }
}

void Min(int *a, int n, int &min)
{
    min = a[0];
    for(int i = 0; i < n - 1; i++)
    {
        if(min >= a[i + 1])
        {
            min = a[i + 1];
        }
    }
}

void Max(int *a, int n, int &max)
{
    max = a[0];
    for(int i = 0; i < n - 1; i++)
    {
        if(max <= a[i + 1])
        {
            max = a[i + 1];
        }
    }
}

void Sort_decrease (int *a, int n)//��������
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if( a[j] > a[j + 1])
            {  
                temp = a[j];
                a[j] = a[ j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void Sort_increases(int *a, int n)//�����������
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if( a[j] < a[j + 1])
            {  
                temp = a[j];
                a[j] = a[ j + 1];
                a[j + 1] = temp;
            }
        }
    }
}


int main()
{
    srand(time(nullptr));
    setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    int n, mina, maxb;
    cout << "������� ������ �������: ";
    cin >> n;
    cout << endl;

    int* a = new int[n]; 
    int* b = new int[n];
    In_data(a, n);
    In_data(b, n);

    cout << "������ a = ";
    Print(a, n);
    cout << endl;

    cout << "������ b = ";
    Print(b, n);
    cout << endl;

    Sort_increases(a, n);
    Sort_decrease(b, n);

    cout << "��������������� �� ����������� ������ a = ";
    Print(a, n);
    cout << endl;

    cout << "��������������� �� �������� ������ b = ";
    Print(b, n);
    cout << endl;

    bool t;
    Min(a, n, mina);
    Max(b, n, maxb);

    if(mina > maxb)
    {
        t = true;
    }
    else
    {
        t = false;
    }

    cout << "���������� ������� ������� a = " << mina << " ;" << endl;
    cout << "���������� ������� ������� b = " << maxb << " ;" << endl;
    cout << " t = " << t;
}
