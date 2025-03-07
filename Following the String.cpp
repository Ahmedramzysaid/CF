#include <bits/stdc++.h>
using namespace std ;
#define  AR07___ramzy07 ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n' ;
#define  ll  long long ;
//  cout.precision(size);
//  size ----> this many number after  (,)
// and using fixed
//int fre[200001] ;
 
void solve ()
{ 
int t ;
cin >> t; 
while (t--)
{
     map <int , bool > m ;
 map <int ,int > fre ;
    int n ; 
    cin >> n ; 
    vector  <int> v(n) ;
    for (int i = 0  ; i < n ;i++)
    {
        cin >> v[i] ;
    }
    vector  <char> s  (n) ;
    for (int i =0  ; i < n ;i++)
    {
       if (m[v[i]])
       {
        
             s[i] =  'a' + fre[v[i]] ;
       }
       else {
        s[i] = 'a' ;
        
       }
       m[v[i]] = true;
       fre[v[i]] ++ ; 
    }
    for (auto it : s) cout << it  ;
    cout << endl ;
        }
 
} 
 
    
 
int main() {
     AR07___ramzy07 ;
      //std::srand(static_cast<unsigned int>(std::time(nullptr)));
   //  freopen("pairup.in", "r", stdin);
     // freopen("pairup.out", "w", stdout);
  solve() ;
 return  0 ; 
 }