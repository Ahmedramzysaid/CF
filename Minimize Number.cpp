#include <bits/stdc++.h>
using namespace std ;
int main()
{
      int n ;  cin >> n; 
      int arr[n] ;
      for(auto &it  : arr)  cin >> it; 
      int ans  = 1e9 ;
      for(int i = 0 ;  i  <   n ;i++)
      {
        int cnt = 0 ;
           while(arr[i]%2 == 0)
           {
                    cnt++ ;
                    arr[i]/=2 ;
           }
           ans =  min(ans, cnt) ;
      } 
      cout << ans  ;

}