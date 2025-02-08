#include <iostream>
 
using namespace std;
 
int main()
{
double  x ,y , z  ;
cin >> x >> y >> z ;
double result = (y*x)/z ;
long long res = result ;
double my =result -res ;
if (my >0)
{
    cout <<"double";
 
}
else if (res<=2147483647)
{
    cout << "int";
}
else
{
    cout << "long long" ;
}
return 0 ;
}