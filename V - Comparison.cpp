#include <iostream>
 
using namespace std;
 
int main()
{
    int x, y ;
    char  z ;
    cin >> x >> z >> y ;
 
    if (int(z)==62)
    {
        if (x > y)
        {
            cout << "Right";
        }
        else
        {
            cout << "Wrong" ;
 
        }
    }
 
    else if (int(z)==61)
    {
        if (x == y)
        {
            cout << "Right";
        }
        else
        {
            cout << "Wrong" ;
 
        }
    }
    else if (int(z)==60)
    {
        if (x < y)
        {
            cout << "Right";
        }
        else
        {
            cout << "Wrong" ;
 
        }
    }
    
    return 0;
}