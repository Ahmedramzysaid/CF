#include <bits/stdc++.h>
using namespace std ;
void call( int n )
{
    if(!n) return ;
    call(n/10) ;
    cout << n%10 << " " ;
     
   
}
int main()
{
    int t ;  cin >> t ;
    while(t--)
    {
        int n ; cin >> n; 
        call(n) ;
        cout <<'\n' ;
    }
    return 0 ;
}