include <iostream>
 
using namespace std;
 
int main()
{
    long long x,z, max1=0 ;
    cin >> x;
    for (int i =0 ; i<x ; i++)
    {
        cin >> z ;
        if (z>max1)
        {
            max1=z ;
        }
    }
    cout << max1 ;
    return 0;
}