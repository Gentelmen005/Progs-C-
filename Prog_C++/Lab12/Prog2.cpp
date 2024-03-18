#include <iostream>
#include <iomanip>
#include <algorithm>
#include <Windows.h>
#include <sstream>
#include <math.h>
#include <stdio.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>
#include <fstream>

using namespace std;

int main() 
{
    setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    ifstream a1, a2;
    float s = 0; 
    float a; 
    a1.open("a1.txt");
    a2.open("a1.txt");
      
    if (a1 && a2) 
    { 
        while (!a1.eof() && !a2.eof()) 
        { 
            a1 >> a;
            if(a > 0)
            {
                s = s + a;
            }

            a2 >> a;
            if(a > 0)
            {
                s = s + a;
            }
        } 
        a1.close(); 
        a2.close(); 
    }
    cout << "Сумма положит. чисел = " << s <<endl;
    return 0;
}