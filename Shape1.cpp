#include <iostream>
 
using namespace std;
 
int main()
{
    long long x ;
    cin >> x;
    for (int i =x ;i>0;i--){
        for(int z=0 ;z<i;z++)
    {
        cout <<"*";
    }
cout <<endl ;
    }
    return 0;
}