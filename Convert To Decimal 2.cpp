#include<bits/stdc++.h>
using namespace std;
 
int main ()
{ 
int t ;
cin >> t;
while (t--)
{
int a; cin >> a;
int sum =0,cnt=0;
while(a)
{
    if(a%2 !=0)
    {
    sum += pow(2,cnt);
    cnt++;
    }
    a /=2;
}
cout << sum << '\n';
}
 
 
return 0;
}