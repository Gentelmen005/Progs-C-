#include <iostream>
#include <iomanip>
#include <string.h>
#include <algorithm>
#include <Windows.h>
#include <sstream>
#include <math.h>
#include <vector>
 
using namespace std;
 
double f(float x, int k, float m) 
{   
    if (k == 1) 
    {
        return x ;
        
    }
    x = x + (x / (m*m));
    return f(x, k - 1, m + 1);
}
 
int main() 
{
    setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    float x;
    int k;
    float m;
    m = 2;
    cout << "¬вод данных(х Ц вещественное и k Ц целое)" ;
    cin >> x >> k;
    cout << f(x, k, m) << "\n";

    return 0;

}