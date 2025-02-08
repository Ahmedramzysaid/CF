#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;  cin >> t ; 
    while (t--)
    {
    int n ;  cin >> n; 
    vector<int> v(n) ;
    for (auto &it : v) cin >> it  ; 
    for (int i = 0  ; i  < n ;i++)
    {
        int mx  = v[i] ;
        for (int j = i ;  j  <n ;j++)
        {
             mx =  max(mx,v[j]) ;
            cout << mx  << " " ;
        }
    }
    cout << '\n' ;
        
    }
    
     
}