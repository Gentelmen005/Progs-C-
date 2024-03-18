#include <iostream>
#include <iomanip>
#include <string>		
#include <algorithm>	
#include <Windows.h>
#include <sstream>

using namespace std;

typedef struct Mountain
{
    string name;
    int height;
}Mount;


void Print(Mount* mounts, int count)
{
	cout << " №       Название      Высота" << endl;
	for (int i = 0; i < count; i++)
	{
		cout << setw(2) << (i + 1);
		cout << setw(15) << mounts[i].name;
		cout << setw(11) << mounts[i].height;
		cout << endl;
	}

}

double Get_averable_height(Mount* mounts, int count)
{
    double average = 0;

    for( int i = 0; i < count; i++ )
    {
         average += mounts[ i ].height;
    }

    return ( average /  count  );
}

void Sort(Mount* mounts, int count)
{
    Mount k;

    for(int i = 0; i < count; i++)
    {
        for(int j = (i + 1); j < count; j++)
        {
            if(mounts[j].height < mounts[i].height)
            {
                k = mounts[i];
                mounts[i] = mounts[j];
                mounts[j] = k;
            }
        }
    }
}

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const size_t count = 3;

    Mount mounts[count];

     cout << "Ввод данных: " << endl;

    for (int i = 0; i < count; i++)
	{
		cout << "\t\t Горная вершина № " << (i + 1) << endl;

		cout << "\t\t - Название: ";
		cin >> mounts[i].name;

		cout << "\t\t - Высота: ";
		cin >> mounts[i].height;

        cout << endl;
	}

    Print(mounts, count);
    cout << endl;

    cout << "Средний значение высот: " << setprecision(3) << fixed << Get_averable_height( mounts, count ) << endl << endl;

    Sort(mounts, count);
    Print(mounts, count);
    cout << endl;

    return 0;
}
