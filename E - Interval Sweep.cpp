#include <iostream>
 
using namespace std;
 
int main()
{
    int x ,  y ;
    cin >> x >> y ;
    if (x!=0)
    {
 
    
    if (x-y==1 ||y-x==1 ||y-x==0)
    {
        cout << "YES" ;
    }
    else
    {
        cout << "NO" ;
    }
    }
    else 
    {
        cout << "NO" ;
    }
    return 0;
}