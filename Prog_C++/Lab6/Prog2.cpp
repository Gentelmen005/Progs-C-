#include <iostream>		
#include <iomanip>		
#include <Windows.h>

using namespace std;

typedef struct Center
{
	int x; 
	int y; 
} Center;


typedef struct Circle
{
	int r; 
	Center center; 
} Circle;


void Print( Circle*  circles,  int count)
{
	cout << " №    Радиус   Центр     " << endl;
	for (int i = 0; i < count; i++)
	{
		cout << setw(2) << (i + 1);
		cout << setw(7) << circles[i].r;
		cout << setw(7) << "{" << circles[i].center.x << "; " << circles[i].center.y << "}";
		cout << endl;
	}
	
}

int Index_circle( Circle*  circles, int count)
{
	int index_circle = 0;

	for (int i = 1; i < count; i++)
	{
		if (circles[i].r > circles[index_circle].r)
		{
			index_circle = i;
		}
	}
	return index_circle;
}


int main()
{
	setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const size_t count = 2;
	Circle circles[count];
	
	cout << "Ввод данных: " << endl;

	for (int i = 0; i < count; i++)
	{
		cout << "\t Окружность № " << (i + 1) << endl;

		cout << "\t\t - Радиус: ";
		cin >> circles[i].r;

		cout << "\t\t - Координаты центра x и y: ";
		cin >> circles[i].center.x >> circles[i].center.y;
		cout << endl;
	}

	Print(circles, count);
	int index_circle = Index_circle(circles, count);

	cout << endl << "Окружность №" << (index_circle + 1) << " с радиусом = " << circles[index_circle].r << " максимально удалена от начала координат." << endl;
	return 0;
}