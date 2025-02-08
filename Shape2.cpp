#include <iostream>
 
using namespace std;
 
int main()
{
    int x,a  ;
    cin >> x ;
    a = x ;
    for (int i = 1;i<x*2;i=i+2)
    {
        for (int m = 1 ; m<a ; m++)
        {
            cout <<" " ;
        }
        a=a-1 ;
        for (int z = 1 ; i>=z; z++)
        {
            cout << "*";
 
        }
        cout << endl ;
    }
    return 0;
}