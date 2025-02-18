#include <bits/stdc++.h>
using namespace  std ; 
 int main() {
int n ,m ;  cin >> n >> m ; 
vector<long long> v(n) ;
for(auto &it  : v) cin >> it  ;
vector<long long>pre(n) ;
pre[0] =  v[0] ;
for (int  i = 1 ;   i   < n; i++) pre[i] = pre[i-1]+v[i] ;
while(m--)
{
    long long a;  cin >> a; 
    int  pos =  lower_bound(pre.begin() , pre.end() , a)- pre.begin() ;
   if (pos == 0) 
   {
    cout << pos+1 << " " << a ;
   }
   else {
    cout << pos+1 << " "  << abs(a-pre[pos-1]) ;
   }
   cout << '\n' ;
}
    return 0;
}
