#include <iostream>
#include <iomanip>
#include <string>		
#include <algorithm>	
#include <Windows.h>
#include <sstream>
#include <math.h>

using namespace std;

int Sign(double x)
{
    if (x < 0)
    {
        return -1;
    }
    else if(x = 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


    double A,B;
    cout << "¬вод данных: ";
    cin >> A;
    cin >> B;
    cout << endl;
    cout << Sign(A) + Sign(B);

    return 0;
}