#include <iostream>
 
using namespace std;
 
int main()
{
 
   long long x ,y ,z ,m ;
   cin >> x>> y >> z >> m;
   if (x+(y*z)==m||z+(y*x)==m)
   {
       cout << "YES";
   }
   else if(x-(y*z)==m||(y*x)-z==m)
   {
       cout << "YES";
   }
 
   else if ((x+z)-y==m||(y+x)-z==m)
   {
       cout <<"YES";
 
   }
   else
   {
       cout <<"NO";
   }
   return 0 ;
}