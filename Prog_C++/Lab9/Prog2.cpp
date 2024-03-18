#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <Windows.h>
#include <sstream>
#include <math.h>

using namespace std;

const double Rad = 3.14/180;

void Paral(int &a, int &b, int &P, int &S)
{
    P = 2*(a + b);
    S = a * b * cos(a * Rad);
}


int main()
{
    setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    int c = 1;
    int a, b;
    int P, S;
    
    while(c == 1)
    {
        cout << "������� ������� ���������������:" << endl;
        cout << "a = ";
        cin >> a;
        cout << "b = ";
        cin >> b;

        Paral(a, b, P, S);
        cout << "��������:" << P << endl;
        cout << "�������:" << S << endl;

        cout << "���� ������ ���������� ������� 1, ���� ��������� �� 0: ";
        cin >> c; 
    }

}