#include <bits/stdc++.h>
using namespace std ;
void call(int i  , int n )
{
   if (i > n) return  ;
   cout << i <<'\n' ;
   call(i+1 ,n) ;
}
int main()
{
    int n ;  cin >> n; 
    call(1,n) ;
    return 0 ;
}