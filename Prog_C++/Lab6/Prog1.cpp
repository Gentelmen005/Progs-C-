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
	cout << "�\t���\t���\t���fdfdfdfdf ��" << endl;
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

	AnkC children[count];// ���������� � �����

	cout << "���� ���������� � �����" << endl;

	for (int i = 0; i < count; i++)
	{
		fflush(stdin);

		cout << "\t  � " << (i + 1) << endl;
		cout << "\t - ������� ���: ";
		cin >> children[i].name;

		cout << "\t - ������� ���(0 - �, 1 - �): ";
		cin >> children[i].sex;

		cout << "\t - ������� ����: ";
		cin >> children[i].height;
		cout << endl;
		fflush(stdin);
	}

	Print(children);
	cout << "������� ������� ��������� �����: " << setprecision(2) << fixed << average(children) << endl;

	return 0;
}