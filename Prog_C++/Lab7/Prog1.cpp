#include <iostream>
#include <iomanip>
#include <string>		
#include <algorithm>	
#include <Windows.h>
#include <sstream>
 
 using namespace std;

double Get_min(double a, double b)
{
    double min = a;

    if(min > b)
    {
        min = b;
    }
    return min;
}


int main()
{
    setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    double a, b;

    cout << "Ввод двух чисел (через проблем)";
    cin >> a >> b;
    
    cout << "Минимальное число из двух данных: = ";
    cout << Get_min(a, b);

    cout << endl; 
    cout << "Ввод двух чисел (через проблем)";
    cin >> a >> b;
    
    cout << "Минимальное число из двух данных: = ";
    cout << Get_min(a, b);



    return 0;
}