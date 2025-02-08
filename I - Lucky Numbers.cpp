#include <iostream>
 
using namespace std;
 
int main()
{
    int x ,y ;
    cin >> x ;
    y = x /10 ;
    x = x-(y*10) ;
    if (x%y==0||y%x==0)
    {
         cout <<"YES" ;
    }
    else
    {
        cout << "NO" ;
    }
    return 0;
}