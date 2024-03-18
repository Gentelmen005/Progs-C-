#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <Windows.h>
#include <sstream>
#include <math.h>

using namespace std;

size_t Get_count( const string input_string, const char search_char )
{
    size_t count = 0;

    for ( size_t i = 0; i < input_string.size(); i++ )
    {
        if ( input_string[ i ] == search_char )
        {
            count++;
        }
    }

    return count;
}


int main()
{
    setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

     string s1, s2; 
 
    
    cout << "������� ������ S1: ";
    getline( cin, s1 );
    cout << "������� ������ S2: ";
    getline( cin, s2 );
    
    
    const char STAR = '*';
    const char PLUS = '+';
    
    
    size_t star_count = Get_count( s1, STAR );
    cout << endl << "������ \'" << STAR << "\' ����������� � ������ S1: " << star_count << " ���.";
    
    
    size_t plus_count = Get_count( s2, PLUS );
    cout << endl << "������ \'" << PLUS << "\' ����������� � ������ S2: " << plus_count << " ���.";
    
    
    cout << endl;
    if ( star_count > plus_count )
    {
        cout << endl << "���������� ��������� ������� \'" << STAR << "\' ������.";
    }
    else if ( star_count < plus_count )
    {
        cout << endl << "���������� ��������� ������� \'" << PLUS << "\' ������.";
    }
    else
    {
    cout << endl << "���������� ��������� �������� \'" << STAR << "\' � \'" << PLUS << "\' ����������.";
    }
    
  
    cout << endl << endl;
    system( "pause" );
    return 0;
}