#include <iostream>
 
using namespace std;
 
int main()
{
    int n , a, b, s =0 ,z=0 ;
    cin >> n >> a>> b;
    long long cnt =0 ;
    for (int i  =0 ; i<=n ;i++)
    {
        z =i ;
        while(z)
        {
            s = s+(z%10) ;
            z =z /10 ;
        }
        if (s>= a && s <= b)
        {
            cnt+=i ;
        }
        s =0 ;
    }
    cout << cnt ;
    return 0;
}