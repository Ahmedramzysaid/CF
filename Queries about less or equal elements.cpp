#include <bits/stdc++.h>
using namespace  std ;
int  main() {
    int n  , m ;  cin >> n >> m; 
    vector<long long> v(n) ;
     vector<long long> v1(m) ;
     for(auto &it : v) cin >> it ; 
     for(auto &it : v1) cin >> it ;
     sort(v.begin() ,v.end()) ;
     for(int i = 0 ; i  <  m; i++)
     {
        if(v1[i] > v[n-1]  )cout << n  ;
        else cout << lower_bound(v.begin() , v.end() , v1[i]+1)-v.begin() ;
        cout <<   " " ;

     } 

    
    return 0;
}