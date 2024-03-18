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

    ifstream fp;
    int n=0;
    double s=0; 
    float a; 
    fp.open("a1.txt"); 
    if (fp) 
    { 
        while (!fp.eof()) 
        { 
            fp >> a;
            if(a < 0)
            {
                n++;
            } 
            if(a > 0)
            {
                s++;
            }
        } 
        fp.close(); 
        cout<<"Кол-во отриц. чисел="<< n <<endl;
        cout<<"Кол-во положит. чисел="<< s <<endl;
    }
    return 0;
}
