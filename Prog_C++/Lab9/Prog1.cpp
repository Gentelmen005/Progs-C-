#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <Windows.h>
#include <sstream>
#include <math.h>

using namespace std;

void Minut (int &a)
{
    a = a * 60;
}

int main()
{
    setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    bool c = 1;
    

    while(c == 1)
    {
        int a;

        cout << "Введите время(минуты) a: ";
        cin >> a;
        Minut(a);
        cout << "Время в секундах: " << a << endl;

        cout << "Если хотите продолжить введите 1, если закончить то 0: ";
        cin >> c; 
    }
}
