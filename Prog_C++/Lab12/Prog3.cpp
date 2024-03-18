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

    char ch;

    ofstream a1, a2; 
    ifstream b1, b2;

    b1.open("new1.txt"); 
    a2.open("new2.txt"); 

    while (b1 >> ch) 
    { 
        //b1 >> ch;         
        if (islower(ch))
        {
            ch = toupper(ch);
            
        }
        a2 << ch;
    }
    b1.close();
    a2.close(); 

    b2.open("new2.txt"); 

    while (b2 >> ch) 
    { 
        //b2 >> ch;
        putchar(ch); 
    }
    b2.close();

    getch();
}