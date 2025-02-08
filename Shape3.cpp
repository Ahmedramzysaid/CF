#include <iostream>
 
using namespace std;
 
int main()
{
    int x ,a , b ;
    b=1 ;
    cin >> x ;
    a=x ;
 
    for (int i =1 ;i<x*2 ; i=i+2)
    {
 
        for (int z =1 ; z<a;z++)
        {
            cout << " ";
        }
        a=a-1 ;
        for (int m=1 ;m<=i ; m++)
        {
            cout << "*" ;
        }
        cout << endl ;
    }
    a=x-1;
    for (int i = (x*2)-1 ; i>0 ; i=i-2)
    {
         for (int m =1 ; m<=i ; m++)
        {
            cout << "*";
        }
        cout << endl ;
        for (int z=1 ;a<x && a>0 ; a++)
        {
            cout <<" ";
        }
        b++ ;
        a=a-(1*b) ;
 
    }
    return 0;
}