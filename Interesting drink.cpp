#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int  n ; cin >> n ; 
    vector<long long> v(n) ;
    for(auto &it  : v) cin >> it ; 
    sort(v.begin(),v.end()) ;
    int q ; cin >> q  ;
    while (q--)
    {
          int a ;  cin >> a; 
          if(a > v[n-1]) cout << n ; 
          else
          {
              int pos  = lower_bound(v.begin() , v.end() ,a+1) -v.begin();
                cout << pos  ;
          }
          cout << '\n' ;


    }
    
}