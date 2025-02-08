#include <iostream>
 
using namespace std;
 
int main()
{
    int x ;
    cin >> x;
    for (int i =1 ;i<=x ;i++)
    {
        for (int z =0 ;z<i;z++)
        {
            cout << "*";
        }
        cout <<endl ;
    }
    return 0;
}