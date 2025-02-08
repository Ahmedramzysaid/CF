#include<bits/stdc++.h>
using namespace  std ; 
int main() 
{
 int n  , m;cin >> n>>  m ; 
   vector<long long>v(n); 
   for(auto &it : v) cin >> it ; 
   vector<long long>pre(n) ;
   pre[0] =  v[0] ;
   for (int i = 1;  i  <  n;i++) 
   {
         pre[i] =  v[i]+pre[i-1] ; 
   }
   while (m--)
   {
          int l , r;  cin >> l >> r ;
          if (l  == 1) cout << pre[r-1] ;
          else cout << pre[r-1]-pre[l-2] ;
          cout << '\n' ;
   }
   


}