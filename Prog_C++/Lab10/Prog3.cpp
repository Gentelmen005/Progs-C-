#include <iostream>
#include <iomanip>
#include <string.h>
#include <algorithm>
#include <Windows.h>
#include <sstream>
#include <math.h>
#include <vector>

using namespace std;

struct Train
{
    char Stanc_otr[40];
    char Stanc_prib[40];
    double time_prib;
    double time_path;

};

void Print(Train* trains,  int count)
{
	cout << " №    Станция отправления   Станция прибытия     Время прибытия(по часам)   Время в пути(в часах)" << endl;
	for (int i = 0; i < count; i++)
	{
		cout << setw(2) << (i + 1);
		cout << setw(23) << trains[i].Stanc_otr;
        cout << setw(19) << trains[i].Stanc_prib;
		cout << setw(29) << trains[i].time_prib;
        cout << setw(24) << trains[i].time_path;
		cout << endl;
	}
	
}

void In_Data(Train* trains, const int count)
{
    for (int i = 0; i < count; i++)
	{
		cout << "\t Расписание поезда/электрички № " << (i + 1) << endl;
        
		cout << "\t\t - Станция отправления: ";
		cin >> trains[i].Stanc_otr;
        cout << endl;

		cout << "\t\t - Станция прибытия: ";
		cin >> trains[i].Stanc_prib;
        cout << endl;

        cout << "\t\t - Время прибытия(по часам): ";
		cin >> trains[i].time_prib;
        cout << endl;

        cout << "\t\t - Время в пути(в часах): ";
		cin >> trains[i].time_path;
        cout << endl;
	}
}

void Sort(Train* trains, const int n )
{
   
    Train tmp;

    for (int i = 0; i <= n; i++)
    {
            for (int j = n - 1; j > i; j--)
            {
                if ( strcmp(trains[j].Stanc_otr, trains[j - 1].Stanc_otr) < 0)
                {
                    tmp = trains[j];
                    trains[j] = trains[j - 1];
                    trains[j - 1] = tmp;
                }
            }
    }

}

int main()
{
    srand(time(nullptr));
    setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    int count;
    cout << "Введите размер массива: ";
    cin >> count;
    cout << endl;

    Train trains[count];
    Train electric[count];

    cout << "Ввод данных для расписания движения поездов: " << endl;
    In_Data(trains, count);
    cout << "Ввод данных для расписания движения электричек: " << endl;
    In_Data(electric, count);
    cout << endl;

    cout << "Расписание движения поездов: " << endl;
    Print(trains, count);
    cout << endl;

    cout << "Расписание движения электричек: " << endl;
    Print(electric, count);
    cout << endl;

    Sort(trains, count);
    Sort(electric, count);

    cout << "Расписание движения поездов после сортировки: " << endl;
    Print(trains, count);
    cout << endl;

    cout << "Расписание движения электричек после сортировки: " << endl;
    Print(electric, count);
    cout << endl;
    
    
}