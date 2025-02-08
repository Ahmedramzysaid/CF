#include <iostream>
 
using namespace std;
 
int main()
{
    double x, y ;
    cin >> x ;
    y = x-int(x) ;
    if (y==0.000)
    {
        cout << "int"<< " "<< x ;
 
    }
    else
    {
        cout <<"float"<< " " << int(x) <<" " <<y ;
    }
    return 0;
}