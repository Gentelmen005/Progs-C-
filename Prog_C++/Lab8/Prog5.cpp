#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <Windows.h>
#include <sstream>
#include <math.h>

using namespace std;

int min(int a[], int n)
{
	int min = a[0];

	for (int i = 1; i < n; i++)
	{
		if (min > a[i])
		{

			min = a[i];

		}
	}

	return min;
}
int max(int a[], int n)
{
	int max = a[0];

	for (int i = 1; i < n; i++)
	{
		if (max < a[i])
		{

			max = a[i];

		}
	}

	return max;
}

int main()
{
    setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const size_t n = 20;

    int a[n], b[n], c[n], t;

	
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 100;
		b[i] = rand() % 100;
		c[i] = rand() % 100;

		cout << a[i] << setw(5) << b[i] << setw(5) << c[i] << endl;
	}

	if (min(a, n) < max(b, n))
	{
		t = min(b, n) * (max(a, n) + max(c, n));
	}
	else
	{
		if (min(a, n) == 0)
		{
			cout << "\n" << "Error";
			return 1;
		}

		t = ((min(b, n) + min(c, n)) / min(a, n)) + max(a, n);
	}

	cout << '\n' << " \n t = " << t;
	return 0;

}