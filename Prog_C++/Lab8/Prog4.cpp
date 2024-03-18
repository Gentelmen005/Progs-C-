#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <Windows.h>
#include <sstream>
#include <math.h>

using namespace std;

struct Editions
{
    string Name;
    int Circulation;
    double Cost_year;
};

void In_data( Editions* edit, const size_t n, const size_t number_group )
{
    SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    cout << endl << "Ввод данных о " << n << " изданиях из группы №" << number_group << endl;

    for ( size_t i = 0; i < n; i++ )
    {
        cout << endl << "Ввод информации об издании №" << ( i + 1 ) << endl;
        
        cout << "\t - введите название издания: ";
        fflush( stdin );
        getline( cin, edit[ i ].Name );
        
        cout << "\t - введите тираж: ";
        cin >> edit[ i ].Circulation;
        
        cout << "\t - введите годовую стоимость: ";
        cin >> edit[ i ].Cost_year;
    }
}

void Print_data( const Editions* const edit, const size_t n, const string message )
{
    cout << message;
    cout << endl << "  №        Наименование       Тираж       Годовая стоимость";

    for ( size_t i = 0; i < n; i++ )
    {
        cout << endl << setw( 3 ) << ( i + 1 ) << 
        setw( 20 ) << edit[ i ].Name <<
        setw( 12 ) << edit[ i ].Circulation <<
        setw( 24 ) << edit[ i ].Cost_year;
    }
    cout << endl;
}

double Get_sum(const Editions* const edit, const size_t n)
{
    double sum = 0;

    for(size_t i = 0; i < n; i++)
    {
        sum = sum + edit[i].Circulation * edit[i].Cost_year;
    }

    return sum;
}

int main()
{
    setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    int n;
    cout << "Ввод кол-ва изданий ";
    cin >> n;

    Editions* edit1 = new Editions[n];
    In_data( edit1, n, 1 );
    Print_data( edit1, n, "\nИнформация о изданиях в группе №1" );
    cout << endl << "Сумма стоимостей изданий в 1 группе: " << Get_sum( edit1, n ) << endl;

    delete[] edit1;

    Editions* edit2 = new Editions[n];
    In_data( edit2, n, 2 );
    Print_data( edit2, n, "\nИнформация о изданиях в группе №2" );
    cout << endl << "Сумма стоимостей изданий в 2 группе: " << Get_sum( edit2, n ) << endl;

    delete[] edit2;

    cout << endl << endl;
    system( "pause" );
    return 0;
}