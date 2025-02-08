#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    double x , y , z, m ;
    cin >> x >> y >> z >> m ;
   double  result1 = y*log(x) ;
    double result2 = m*log(z) ;
if (result1>result2)
{
    cout <<"YES" ;
}
else
{
    cout << "NO" ;
}
    return 0;
}