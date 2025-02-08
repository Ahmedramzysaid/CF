#include <iostream>
 
using namespace std;
 
int main()
{
    long long  x , y  , z ;
    cin >> x >> y >> z ;
    if (x%z==0 && y%z==0)
    {
        cout << "Both" ;
    }
    else if (x%z==0 && y%z!=0)
    {
        cout << "Memo" ;
    }
    else if (x%z!=0 && y%z==0)
    {
        cout << "Momo" ;
    }
    else
    {
        cout << "No One" ;
    }
    return 0;
}