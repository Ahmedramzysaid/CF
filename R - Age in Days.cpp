#include <iostream>
 
using namespace std;
 
int main()
{
    int x ;
    cin >> x ;
    int i = 0 ;
    int y = 0 ;
    int m = 0 ;
    while(x>=365)
    {
        if (x >= 365)
        {
 
            i = i +1;
            x = x-365 ;
        }
        else {}
    }
    cout << i << " "<< "years" <<"\n" ;
    while (x>=30)
    {
        if (x>=30)
        {
            y++ ;
            x=x-30 ;
        }
        else {}
    }
    cout << y<<" " <<"months" <<"\n";
    while(x>=1)
    {
        if(x>=1)
        {
            m++;
            x=x-1 ;
        }
        else {}
    }
    cout << m<<" " <<"days" <<"\n";
 
 
 
 
 
    return 0;
}