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
    int n ;  cin >> n; 
    string s ;
cin >> s  ;
bool flag  = false ; 
int f  =-1  , l =-1  ;
for (int i =0  ; i <n ; i++) 
{
    if (s[i] == 'B')
    {
        if (flag )
        {
            l =  i ;
        }
        else 
        {
            f =i  ;
            flag = true ; 
        }
    }
}
if (f == -1)  cout << 0 ;
else if (l == -1)
{
    cout << 1 ;
    
}
else{
    cout << (l-f) +1 ;
}
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