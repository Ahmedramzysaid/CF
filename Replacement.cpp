#include <iostream>
 
using namespace std;
 
int main()
{
   int x  ;
   cin >> x ;
   int numbers[x];
   for (int i =0 ; i<x ;i++ )
   {
       cin >> numbers[i] ;
 
   }
   for (int i =0 ; i<x ;i++)
   {
       if (numbers[i]>0)
       {
           cout << 1 ;
       }
       else if (numbers[i] <0 )
       {
           cout << 2 ;
       }
       else
       {
           cout << 0;
       }
       cout << " ";
   }
    return 0;
}