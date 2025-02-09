#include<bits/stdc++.h>
using namespace std; 
void call(int n )
{
    if(n <= 0) return ;
    cout << "I love Recursion\n" ;
    call(n-1) ;

}
int main()
{
    int n ;  cin >> n; 
    call(n) ;
    return 0  ;
}