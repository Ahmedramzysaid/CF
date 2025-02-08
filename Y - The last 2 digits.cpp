#include <iostream>
 
using namespace std;
 
int main()
{
    int x, y,z,m ;
    cin >> x>> y>> z>>m ;
    int a =((x%100)*(y%100)*(z%100)*(m%100))%100 ;
    if(a==00)
    {
        cout<<"00" ;
    }
     else if  (a<=9)
    {
        cout << "0"<<a ;
    }
    else
    {
        cout << a ;
    }
    return 0;
}