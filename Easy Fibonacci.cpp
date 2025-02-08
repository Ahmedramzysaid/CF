#include <iostream>
 
using namespace std;
 
int main()
{
long long int  x, y= 0 ,z =0 ; cin >>x ;
long long int cnt =0 ;
if (x== 1)
{
    cout << 0 ;
}
else if (x == 2)
{
    cout <<  0 << " " << 1 ;;
}
else{
        z= 0; y= 1;
cout << z << " " << y ;
    for (int i = 3 ; i<=x ;i++)
{
        cnt = y +z ;
    cout <<" " << cnt ;
    z = y ;
    y = cnt  ;
 
 
}
 
}
 
 
    return 0;
}