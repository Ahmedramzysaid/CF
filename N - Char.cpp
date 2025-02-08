#include <iostream>
 
using namespace std;
 
int main()
{
 
    char x ,y;
    cin >> x ;
    int z = int(x) ;
    if (z>=65 && z<=90)
    {
 
        y = z+32 ;
 
    }
    if (z>=97 &&z<=122)
    {
 
        y = z-32 ;
    }
    else
    {
 
    }
    cout <<  y ;
    return 0;
}