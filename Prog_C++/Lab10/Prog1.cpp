#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <Windows.h>
#include <sstream>
#include <math.h>
#include <vector>

using namespace std;

void In_data(vector <int> &a, int n)
{
    const int MIN_VALUE = +8;
    const int MAX_VALUE = +15;

    for(int i = 0; i < n; i++)
    {
            a[i] = MIN_VALUE + rand() % ( MAX_VALUE - MIN_VALUE + 1 );
    }
}

void Print(vector <int> a, int n)
{
    for(int i = 0; i < n; i++)
    {
            cout << a[i] << " "; 
    }
}

void Min(vector <int> a, int n, int &nom, int &min)
{
    min = a[0];
    nom = 0;
    for(int i = 0; i < n - 1; i++)
    {
        if(min >= a[i + 1])
        {
            min = a[i + 1];
            nom = i + 1;
        }
    }
}

int main()
{
    srand(time(nullptr));
    setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    int n;
    cout << "Введите размер векторов: ";
    cin >> n;
    cout << endl;

    vector <int> x(n);
    int nomx, minx;
    In_data(x, n);
    cout << "Масиив x: " << endl;

    Print(x, n);
    cout << endl;
    Min(x, n, nomx, minx);
    cout << "Наименьший эл. = " << minx << endl << "Номер в массиве = " << nomx << endl << endl;
    

    vector <int> y(n);
    int nomy, miny;
    In_data(y, n);
    cout << "Масиив y: " << endl;
    Print(y, n);
    cout << endl;
    Min(y, n, nomy, miny);
    cout << "Наименьший эл. = " << miny << endl << "Номер в массиве = " << nomy << endl << endl;
    

    vector <int> z(n);
    int nomz, minz;
    In_data(z, n);
    cout << "Масиив z: " << endl;
    Print(z, n);
    cout << endl;
    Min(z, n, nomz, minz);
    cout << "Наименьший эл. = " << minz << endl << "Номер в массиве = " << nomz << endl << endl;
    

    if(minx >= 0 && nomx >= n/2 && minz == 8)
    {
        cout << "Условие выполненно ";
        for(int i = 0; i < nomy; i++)
        {
            y[i] = 1;
        }
        cout << "Вектор y: ";
        Print(y, n);
    }
    else
    {
        cout << "Не получилось :((";
    }
}