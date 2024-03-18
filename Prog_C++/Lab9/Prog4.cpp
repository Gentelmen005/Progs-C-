#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <Windows.h>
#include <sstream>
#include <cmath>

const double Rad = 3.14/180;

using namespace std;

void Cilindr(int x, int y, int z, int &p, int &f, int &z2)
{
    p = sqrt(x^2 +y^2);
    f = atan(y/x * Rad);
    z2 = z;
}

int main()
{
    setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    int x, y, z, x2, y2, z2, p, p2, f, f2, z2_1, z2_2;

    cout << "Ввод декартовых координат для 1 точки:" << endl;

    cout << "x = ";
    cin >> x;
    cout << endl;

    cout << "y = ";
    cin >> y;
    cout << endl;

    cout << "z = ";
    cin >> z;
    cout << endl;

    Cilindr(x, y, z, p, f, z2_1);

    cout << "p = " << p << endl;
    cout << "f = " << f << endl;
    cout << "z2 = " << z2 << endl;

    
    cout << "Ввод декартовых координат для 2 точки:" << endl;
    cout << "x2 = ";
    cin >> x2;
    cout << endl;
    
    cout << "y2 = ";
    cin >> y2;
    cout << endl;

    cout << "z2 = ";
    cin >> z2;
    cout << endl;

    Cilindr(x2, y2, z2, p2, f2, z2_2);

    cout << "p2 = " << p2 << endl;
    cout << "f2 = " << f2 << endl;
    cout << "z2 = " << z2 << endl;

    cout << "Сумма углов = ";
    int sum = f + f2;
    cin >> sum;
    cout << endl;

    cout << "Разность радиус векторов = ";
    int raz = p - p2;
    cin >> raz;
    cout << endl;
    
}