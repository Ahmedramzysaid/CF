#include <iostream>
 
 
using namespace std;
 
int main()
{
 while (true)
 {
     int a , b, z=0 ;
     cin >> a >> b ;
     int s =max(a,b);
     int m = min(a,b);
     if (a<=0||b<=0)
     {
         break ;
     }
 
for (int i =m ; i <=s ;i++){
    cout << i << " ";
       z+=i ;
     }
     cout << "sum ="<< z<<endl ;
 
 }
    return 0;
}