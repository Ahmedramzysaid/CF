#include <iostream>
 
using namespace std;
 
int main()
{
    long long x ,y,cunt ;
    cunt =0 ;
    cin >> x ;
    long long  numbers[x];
    for (int i =0 ; i<x ; i++)
    {
        cin >> numbers[i];
    }
    cin >> y ;
    for (int i =0 ;i<x ;i++)
    {
        if (y==numbers[i])
        {
            cout << i ;
 
            cunt ++ ;
            break ;
        }
 
 
    }
    if (cunt==0)
    {
        cout << -1 ;
    }
 
 
 
    return 0;
}
