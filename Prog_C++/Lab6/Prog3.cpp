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
	cout << " №          Ф.И.О      Город                Адрес" << endl;
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

	cout << "Ввод данных: " << endl;

	for (int i = 0; i < count; i++)
	{
		cout << "\t Анкета жителя № " << (i + 1) << endl;

		cout << "\t\t - Ф.И.О: ";
		cin >> ankets[i].fio.last_name >> ankets[i].fio.first_name >> ankets[i].fio.patronymic;

		cout << "\t\t - Город: ";
		cin >> ankets[i].city;

		if(ankets[i].city == "Москва")
		{
			k++;
		}

		cout << "\t\t - Адрес(улица, дома, квартира):";
		cin >> ankets[i].address.street >> ankets[i].address.home >> ankets[i].address.flat;
	}
    
	cout << "Исходный массив" << endl;
	Print(ankets, count);
    cout << endl;

	Ank ankets2[k];
	int t = 0;
	for (int i = 0; i < count; i++)
	{
		if(ankets[i].city == "Москва")
		{
			ankets2[t] = ankets[i];
			t++;
		}
	}

	cout << "Массив с жителямzvcfg только из Москвы" << endl;	
	Print(ankets2, k);
	return 0;
}