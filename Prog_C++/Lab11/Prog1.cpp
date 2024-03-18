#include <iostream>
#include <iomanip>
#include <string.h>
#include <algorithm>
#include <Windows.h>
#include <sstream>
#include <math.h>
#include <vector>

using namespace std;

void Rec(int n, double m)
{
    if (n-1 == 0) 
    {
        cout << m << endl;
        return;
    }
    Rec(--n, m/10);
}

int main()
{ 
		setlocale(LC_ALL, "Russian");
		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);

        int n;
        double m;
        n = 0;

        cout << "¬ведите n(дл€ вычислени€ n-го члена р€да): ";
        cin >> n;
        cout << endl;
        cout << "¬ведите m: ";
        cin >> m;

        Rec(n, m);
}