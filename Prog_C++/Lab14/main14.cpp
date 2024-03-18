#include <iostream>
#include <string>
#include <iomanip>
#include <Windows.h>

/*��������� ������ ������������:
! ��������� ������������ ������ ��� ���� ��������� � ����� � ���� 
  ������������ ������;

! ����� ���� ���������;

! ���������� �������� � ������ ������;

! ���������� �������� ����� ������������ ���������;

! �� ������� �������� �������� �� ���������, ����������� � �����, ��� �� 
  ���������, ����������� �� ��������.

! ��� ������ ������� �������� �� ����� �������� ����� ��������, � 
  ��������� ������� ������ �� ���� �������� �� ������ ���������, ����������� � �����, 
  � ���������� ��� ������ � ������ ���������, ����������� �� ��������;

! ��� ������ ������� �������� � ���� �������� ����� ��������, � ��������� 
  ������� ������ �� ���� �������� �� ������ ���������, ����������� �� ��������, � 
  ���������� ��� ������ � ������ ���������, ����������� � �����;
*/
using namespace std;

struct Buses 
{
    int number;
    string FIO;
    int route_number;
};

struct Node 
{
    Buses Bus;
    Node* next;

    Node(Buses _Bus) : Bus(_Bus), next(nullptr) 
    {}
};

struct list
{
    Node* first;
    Node* last;

    int count = 0;
    list() : first(nullptr), last(nullptr) 
    {}

    bool is_empty() 
    {
        return first == nullptr;
    }

    void push_back(Buses _Bus) 
    {
        Node* p = new Node(_Bus);
        if (is_empty()) {
            first = p;
            last = p;
            return;
        }
        last->next = p;
        last = p;
        count++;
    }

    void push_head(Buses _Bus) 
    {
        Node* p = new Node(_Bus);
        if (is_empty()) {
            first = p;
            last = p;
            return;
        }
        p->next = first;
        first = p;
        count++;
    }


    Buses Add_Bus(Buses a)
    {
        
        cout << endl << endl;
        cout << "����� ��������: ";
        cin >> a.number;
        cout << endl;


        cout << "������� � �������� ��������: ";
        cin >> a.FIO;
        cout << endl;


        cout << "����� ��������: ";
        cin >> a.route_number;
        cout << endl;

        return a;
    }

    void print() 
    {
        if (is_empty()) return;
        Node* p = first;
        size_t number = 0;

        cout << "���������� � ������, ����������� � ���������� ����� ���: " << endl;
        cout << "---------------------------------------------------------" << endl;
        cout << "  #   �����        ��� ��������         ����� ��������   " << endl;

        while (p) 
        {
            cout << setw( 3 ) << ++number;
            cout << setw( 8 ) << p -> Bus.number;
            cout << setw( 20 ) << p -> Bus.FIO;
            cout << setw( 23 ) << p -> Bus.route_number;
            p = p->next;
        }
        cout << endl;

    }
};   

/*int Menu()
{
    int select;

    do
    {
        cout << "\t\t\t���������� ���� \n";
        cout << "1 - ���������� �������� � ���� (���� � ����������) \n";
        cout << "2 - ����� ���� ���������  \n";
        cout << "3 - ���������� �������� � ������ ������ \n";
        cout << "4 - ���������� ��������� ����� ������������ ��������� \n";
        cout << "5 - ������� �������� ����������� � ����� \n";
        cout << "6 - ������� �������� ����������� �� �������� \n";
        cout << "7 - ����� �������� �� ����� \n";
        cout << "8 - ����� �������� � ���� \n";
        cout << "9 - ����� �� ��������� \n";
        cout << "\t�����: ";
        cin >> select;
    }
    while ( ( select < 1 ) || ( select > 9 ) );
    
    return select;
} */


int main()
{
    setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    list l;
    Buses a, b;
    int select;
    do
    {   
        cout << "\t\t\t���������� ���� \n";
        cout << "1 - ���������� �������� � ���� (���� � ����������) \n";
        cout << "2 - ����� ���� ���������  \n";
        cout << "3 - ���������� �������� � ������ ������ \n";
        cout << "4 - ���������� ��������� ����� ������������ ��������� \n";
        cout << "5 - ������� �������� ����������� � ����� \n";
        cout << "6 - ������� �������� ����������� �� �������� \n";
        cout << "7 - ����� �������� �� ����� \n";
        cout << "8 - ����� �������� � ���� \n";
        cout << "9 - ����� �� ��������� \n";
        cout << "\t�����: ";
        cin >> select;

        switch (select)
        {
            case 1:
            {
                a = l.Add_Bus(a); 
                l.push_back(a);
                l.print();
                break;
            }

        }
        if ( select != 9 )
        {
            cout << endl << endl;
            system( "pause" );
        }
    }
    while( select != 9 );
 
    return EXIT_SUCCESS;  
}