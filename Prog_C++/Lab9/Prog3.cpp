#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <Windows.h>
#include <sstream>
#include <math.h>

using namespace std;

void POWERA3(float &A, float &B)
{
    B = A*A*A;
}

int main()
{
    setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    int c = 1;
    float A, B;

    while(c == 1)
    {
        cout << "������� ����� A:";
        cin >> A;

        POWERA3(A, B);
        cout << "����� � ������� 3 ����� = " << B << endl;

        cout << "���� ������ ���������� ������� 1, ���� ��������� �� 0: ";
        cin >> c; 
    }

}