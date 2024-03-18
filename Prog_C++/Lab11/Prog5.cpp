#include <iostream>
#include <iomanip>
#include <string.h>
#include <algorithm>
#include <Windows.h>
#include <sstream>
#include <math.h>
#include <vector>
#include <cmath>

const double Grad = 3.14/180;

using namespace std;
 
float func(int n) 
{
    if(n <= 1)
    {
       return cos(1 * Grad);
    }
    else
    {
        return cos(n*Grad + func(n - 1));   
    }
}
 
int main ()
{

    int n;  
    cin >> n;
    cout << func(n) << endl;
}