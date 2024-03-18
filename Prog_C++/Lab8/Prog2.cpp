#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <Windows.h>
#include <sstream>
#include <math.h>

using namespace std;

int Get_sum(const int v[], const size_t size)
{
    double count ;
	
	for ( int i = 1; i < size; i = i + 2 )
	{
		count = count + v[i];
	}

	return count;
}

void Print( const int v[], const size_t size, const string message )// Вывод массива
{
 	cout << message;
 	for ( size_t i = 0; i < size; i++ )
	{
		cout << setw( 5 ) << v[ i ];
	}
	cout << endl;
}


void Rand( int v[], const size_t size )// Заполнение массива
{
 const int MIN_VALUE = -50;
 const int MAX_VALUE = +50;
 
 	for ( size_t i = 0; i < size; i++ )
 	{
		v[ i ] = MIN_VALUE + rand() % ( MAX_VALUE - MIN_VALUE + 1 );
	}
}


int main()
{
	const size_t size = 30;

	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand( time( NULL ) );

	int a[size], b[size], c[size];
	Rand( a, size );
	Rand( b, size );
	Rand( c, size );

	Print( a, size, "Массив a: " );
 	Print( b, size, "Массив b: " );
 	Print( c, size, "Массив c: " );

    int a_sum = Get_sum( a, size );
    int b_sum = Get_sum( b, size );
    int c_sum = Get_sum( c, size );

    cout << endl << "Сумма элементов на нечет. местах  в массиве a: " << a_sum;
    cout << endl << "Сумма элементов на нечет. местах  в массиве b: " << b_sum;
    cout << endl << "Сумма элементов на нечет. местах  в массиве c: " << c_sum;

    cout << endl << endl << "Произведение найденных элементов: " << (a_sum * b_sum * c_sum);

}