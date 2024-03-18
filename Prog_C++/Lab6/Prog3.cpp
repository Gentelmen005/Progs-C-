#include <iostream>
#include <iomanip>
#include <string>		
#include <algorithm>	
#include <Windows.h>
#include <sstream>

using namespace std;

typedef struct Address
{
	string street;
	string home;
	string flat;

}Address;

typedef struct FIO
{
	string last_name;
	string first_name;
	string patronymic;
}FIO;


typedef struct Anketa
{
	FIO fio;
	string city;
	Address address;

}Ank;



void Print(Ank* ankets, int count)
{
	cout << " �          �.�.�      �����                �����" << endl;
	for (int i = 0; i < count; i++)
	{
		cout << setw(2) << (i + 1);
		cout << setw(12) << ankets[i].fio.last_name << " " << ankets[i].fio.first_name << " " << ankets[i].fio.patronymic;
		cout << setw(11) << ankets[i].city;
		cout << setw(14) << ankets[i].address.street << " " << ankets[i].address.home << " " << ankets[i].address.flat;
		cout << endl;
	}

}


int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const size_t count = 2;
	Ank ankets[count];
	int k = 0;

	cout << "���� ������: " << endl;

	for (int i = 0; i < count; i++)
	{
		cout << "\t ������ ������ � " << (i + 1) << endl;

		cout << "\t\t - �.�.�: ";
		cin >> ankets[i].fio.last_name >> ankets[i].fio.first_name >> ankets[i].fio.patronymic;

		cout << "\t\t - �����: ";
		cin >> ankets[i].city;

		if(ankets[i].city == "������")
		{
			k++;
		}

		cout << "\t\t - �����(�����, ����, ��������):";
		cin >> ankets[i].address.street >> ankets[i].address.home >> ankets[i].address.flat;
	}
    
	cout << "�������� ������" << endl;
	Print(ankets, count);
    cout << endl;

	Ank ankets2[k];
	int t = 0;
	for (int i = 0; i < count; i++)
	{
		if(ankets[i].city == "������")
		{
			ankets2[t] = ankets[i];
			t++;
		}
	}

	cout << "������ � �������zvcfg ������ �� ������" << endl;	
	Print(ankets2, k);
	return 0;
}