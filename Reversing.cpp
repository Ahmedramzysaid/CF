#include <iostream>
 
using namespace std;
 
int main()
{
    int x ;
    cin >> x ;
    int numbers[x];
    for (int i=0 ; i<x;i++)
    {
        cin >> numbers[i];
 
    }
    for (int i=x-1 ; i>=0 ;i--)
    {
        cout << numbers[i] << " ";
    }
    return 0;
}