#include <iostream>
#include <iomanip>
#include <string>		
#include <algorithm>	
#include <Windows.h>
#include <sstream>
#include <math.h>

const double Rad = 3.14/180;

using namespace std;

double Get_square(double a, double b)
{
    return(((a * b) * cos(a * Rad)));

}

 int main()
{
    setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


    double a,b;
    cout << setprecision( 3 ) << fixed;

    cout << "ֿאנאככוכמדנאלל ¹1: " << endl;
    cout << "a:";
    cin >> a;
    cout << "b:";
    cin >> b;

    cout << "ֿכמשאהü gאנאככוכמדנאלל : " << fixed << Get_square( a,b ) << endl << endl;

    cout << "ֿאנאככוכמדנאלל ¹2: " << endl;
    cout << "a:";
    cin >> a;
    cout << "b:";
    cin >> b;

    cout << "ֿכמשאהü gאנאככוכמדנאלל : " << fixed << Get_square( a,b ) << endl << endl;

    return 0;
}
