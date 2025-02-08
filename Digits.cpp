# include <iostream>
 
using namespace std;
 
int main()
{
    int x ;
 
    cin >> x ;
    for (int i =1 ;i<=x;i++)
    {
        string number ;
        cin >> number ;
        int size  =number.size() ;
        for (int z = size-1 ; z>=0 ; z--)
        {
            cout << number[z]<< " " ;
 
 
 
        }
        cout <<endl ;
 
    }
    return 0;
}