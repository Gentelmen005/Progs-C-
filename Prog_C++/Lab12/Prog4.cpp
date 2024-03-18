#include <iostream>
#include <fstream>

using namespace std;
 
const int len = 1024;
 
int main() 
{
    ofstream  h("2.txt"), g("3.txt");
    ifstream f("1.txt");
 
    char str[len];
    for (int i = 0; f >> str; i++) 
    {
        if(i%2 == 0)
        { 
            h << str;
        }
        else
        { 
            g << str;
        }
    }
    
    
    return 0;
}