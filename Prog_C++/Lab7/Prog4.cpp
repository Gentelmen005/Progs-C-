#include <iostream>
#include <iomanip>
#include <string>		
#include <algorithm>	
#include <Windows.h>
#include <sstream>
#include <math.h>

using namespace std;

double Get_max(double a, double b)
{
    double max = a;

    if(max < b)
    {
        max = b;
    }
    return max;
}

float Get_form(float a, float b, float c)
{
    return (((Get_max(a, a + b) + Get_max(a, b + c)) / (1 + Get_max(a + b * c, b * 15))));
}

int main()
{
    setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


    float a,b,c;
    cout << setprecision( 3 ) << fixed;
    cout << " : ";
    cin >> a >> b >> c;
    cout << ": " << fixed << Get_form(a,b,c) << endl;
    
    return 0;
}