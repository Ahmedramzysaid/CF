#include <iostream>
 
using namespace std;
 
int main()
{
 
    int x, y ;
    char  z ;
    cin >>x>> z >>y ;
    if (int(z)==43)
    {
        cout << x +y ;
    }
    else if (int(z)==45)
    {
        cout << x -y ;
    }
    else if (int(z)==42)
    {
        cout << x *y ;
    }
    else if (int(z)==47)
    {
        cout << x /y ;
    }
    else
    {
 
    }
    return 0;
}