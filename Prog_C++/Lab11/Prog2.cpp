#include <iostream>
#include <iomanip>
#include <string.h>
#include <algorithm>
#include <Windows.h>
#include <sstream>
#include <math.h>
#include <vector>



using namespace std;

double y(int i, float s)
{
    double lg = log10(i + 0.5);
    if (i == 10)
        return s = s * lg;
    else
        s = s * lg; 
        return y(i + 1,s);

}

int main()
{ 
    setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    float s;
    s = 1;
    int i = 1;
    std::cout << "Result: " << y(i,s);


}
