#include <iostream>
#include <cmath>
 
using namespace std;
 
int main()
{
    int x ,y ;
    cin >> x ;
    y = 0 ;
    int z = x-1+1 ;
 
    for (int i =1 ; x>=i ;  )
    {
        y = y*10 +x%10 ;
        x=x/10 ;
 
 
 
    }
    if (y==z)
    {
        cout << y << "\n";
        cout << "YES";
    }
    else
    {
        cout << y <<"\n";
        cout << "NO";
 
    }
    return 0;
}