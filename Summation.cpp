#include <iostream>
 
using namespace std;
 
int main()
{
   int x ;
  cin >> x ;
  int numbers[x];
  long long int  sum = 0;
  for (int i =0 ; i<x ;i++)
  {
      cin >> numbers[i] ;
      sum =sum +numbers[i] ;
  }
  if (sum <0)
  {
      sum *=-1 ;
  }
  cout << sum ;
    return 0;
}