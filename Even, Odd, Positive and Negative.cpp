#include <iostream>
 
using namespace std;
 
int main()
{
   int x ,y ;
   int counter=0,counter1=0,counter2=0,counter3=0;
   cin >> x ;
   for (int i =0 ;i<x;i++)
   {
       cin >> y ;
       if (y%2==0)
       {
           counter=counter+1;
       }
       else
       {
           counter1=counter1+1;
       }
       if (y>0)
       {
           counter2=counter2+1;
       }
       else if (y<0)
       {
           counter3=counter3+1;
       }
       else
       {
 
       }
   }
   cout << "Even:"<<" " <<counter<<"\n";
   cout << "Odd:"<<" " <<counter1<<"\n";
   cout << "Positive:"<<" " <<counter2<<"\n";
cout << "Negative:"<<" "<<counter3 <<"\n";
 
    return 0;
}