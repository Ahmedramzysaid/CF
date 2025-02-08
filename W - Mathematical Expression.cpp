#include <iostream>
 
using namespace std;
 
int main()
{
    int x, y, z ;
    char m, a ;
    cin >> x >> m >> y >> a >> z ;
    if (int(m)==43)
    {
        if (x+y==z)
        {
            cout << "Yes";
 
        }
        else
        {
            cout << x+y ;
        }
    }
    else if (int(m)==45)
    {
        if (x-y==z)
        {
            cout<<"Yes";
        }
        else
        {
            cout << x-y ;
        }
    }
    else if (int(m)==42)
    {
        if (x*y==z)
        {
            cout << "Yes";
 
        }
        else
        {
            cout << x*y ;
        }
    }
 
 
 
    return 0;
}