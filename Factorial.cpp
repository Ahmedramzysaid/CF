#include <iostream>
 
using namespace std;
 
int main()
{
    int x , y  ;
    long long m =1 ;
    cin >> x ;
    for (int i =1 ; i<=x ;i++)
    {
        cin >> y ;
 
    for (int z =1 ; z<=y ;z++ ){
 
    m=m*z ;
    }
    cout << m <<"\n";
    m=1 ;
    }
    return 0;
}