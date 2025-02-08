#include <iostream>
 
using namespace std;
 
int main()
{
    long long x ;
    cin >> x;
 
        if (x==1)
        {
            cout << "-1";
        }
    for (int i =2 ;i<=x ;i=i+2)
    {
        cout << i ;
        cout <<endl ;
 
    }
    return 0;
}