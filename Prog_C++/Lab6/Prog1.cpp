#include <iostream>
#include <iomanip>
#include <string>		
#include <algorithm>	
#include <Windows.h>
#include <sstream>

#define count 3

using namespace std;

typedef struct Anketa_Child
{
	string name;
	bool sex;
	int height;

} AnkC;



void Print(AnkC* children)
{
	cout << "ï¿½\tï¿½ï¿½ï¿½\t¿½ï¿½\tï¿½ï¿½ïfdfdfdfdf ï¿½ï¿½" << endl;
	for (int i = 0; i < count; i++)
	{
		cout << (i + 1) << "\t";
		cout << children[i].name << "\t";
		cout << children[i].sex << "\t";
		cout << children[i].height << endl;
	}
}

double average(AnkC* children)
{
	double aver = 0;

	for (int i = 0; i < count; i++)
	{
		if(children[i].sex == 0 )
		{

			aver += children[i].height;

		}
	}

	return(aver / count * 1.0);
}



int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Rus");

	AnkC children[count];// ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½

	cout << "ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½" << endl;

	for (int i = 0; i < count; i++)
	{
		fflush(stdin);

		cout << "\t  ï¿½ " << (i + 1) << endl;
		cout << "\t - ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½: ";
		cin >> children[i].name;

		cout << "\t - ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½(0 - ï¿½, 1 - ï¿½): ";
		cin >> children[i].sex;

		cout << "\t - ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½: ";
		cin >> children[i].height;
		cout << endl;
		fflush(stdin);
	}

	Print(children);
	cout << "ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½: " << setprecision(2) << fixed << average(children) << endl;

	return 0;
}