#include <iostream>
 
using namespace std;
 
int main()
{
    int x ;
    cin >> x ;
    double numbers[x] ;
    for (int i =0 ; i<x ; i++)
    {
        cin >> numbers[i];
    }
    for (int i = 0 ;i<x ;i++)
    {
        if (numbers[i]<=10)
        {
            cout << "A["<< i << "]" <<" "<< "="<<" " << numbers[i] ;
            cout << endl ;
 
        }
        else
        {
 
        }
    }
    return 0;
}