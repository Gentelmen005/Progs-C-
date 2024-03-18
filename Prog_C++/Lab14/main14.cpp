#include <iostream>
#include <string>
#include <iomanip>
#include <Windows.h>

/*Программа должна обеспечивать:
! начальное формирование данных обо всех автобусах в парке в виде 
  односвязного списка;

! вывод всех автобусов;

! добавление автобуса в начало списка;

! добавление автобуса перед определенным автобусом;

! по запросу выдаются сведения об автобусах, находящихся в парке, или об 
  автобусах, находящихся на маршруте.

! при выезде каждого автобуса из парка вводится номер автобуса, и 
  программа удаляет данные об этом автобусе из списка автобусов, находящихся в парке, 
  и записывает эти данные в список автобусов, находящихся на маршруте;

! при въезде каждого автобуса в парк вводится номер автобуса, и программа 
  удаляет данные об этом автобусе из списка автобусов, находящихся на маршруте, и 
  записывает эти данные в список автобусов, находящихся в парке;
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
        cout << "Номер автобуса: ";
        cin >> a.number;
        cout << endl;


        cout << "Фамилия и инициалы водителя: ";
        cin >> a.FIO;
        cout << endl;


        cout << "Номер маршрута: ";
        cin >> a.route_number;
        cout << endl;

        return a;
    }

    void print() 
    {
        if (is_empty()) return;
        Node* p = first;
        size_t number = 0;

        cout << "Информация о книгах, находящихся в библиотеке имеет вид: " << endl;
        cout << "---------------------------------------------------------" << endl;
        cout << "  #   Номер        ФИО водителя         Номер маршрута   " << endl;

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
        cout << "\t\t\tАвтобусный парк \n";
        cout << "1 - Добавление автобуса в парк (ввод с клавиатуры) \n";
        cout << "2 - Вывод всех автобусов  \n";
        cout << "3 - Добавление автобуса в начало списка \n";
        cout << "4 - Добавление автобусов перед определенным автобусом \n";
        cout << "5 - Вывести автобусы находящиеся в парке \n";
        cout << "6 - Вывести автобусы находящиеся на маршруте \n";
        cout << "7 - Выезд автобуса из парка \n";
        cout << "8 - Въезд автобуса в парк \n";
        cout << "9 - Выход из программы \n";
        cout << "\tВЫБОР: ";
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
        cout << "\t\t\tАвтобусный парк \n";
        cout << "1 - Добавление автобуса в парк (ввод с клавиатуры) \n";
        cout << "2 - Вывод всех автобусов  \n";
        cout << "3 - Добавление автобуса в начало списка \n";
        cout << "4 - Добавление автобусов перед определенным автобусом \n";
        cout << "5 - Вывести автобусы находящиеся в парке \n";
        cout << "6 - Вывести автобусы находящиеся на маршруте \n";
        cout << "7 - Выезд автобуса из парка \n";
        cout << "8 - Въезд автобуса в парк \n";
        cout << "9 - Выход из программы \n";
        cout << "\tВЫБОР: ";
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