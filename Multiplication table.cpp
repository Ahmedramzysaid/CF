#include <iostream>
using namespace std ;
int main ()
{
    long long x ;
    cin >> x ;
    for (int i=1 ; i<=12 ;i++)
    {
        cout << x << " "<<"*"<<" "<<i <<" " <<"="<<" " <<x*i;
        cout << endl ;
    }
    return 0 ;
}