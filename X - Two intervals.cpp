#include <iostream>
 
using namespace std;
 
int main()
{
    int x, y, z,m ;
    cin >> x >> y >> z >> m ;
    if (z>=x && z<=y && m>=y)
    {
        cout <<z <<" " << y ;
 
    }
    else if (z >= x && m >= x && z<= y &&m <= y)
    {
        cout << z << " " << m ;
 
    }
    else if (x>=z && m>=x && m<=y)
    {
        cout << x << " "<< m ;
    }
    else if (x<=m &&y <= m && x>= z &&y >=z )
    {
        cout << x << " " << y ;
 
    }
    else if (x>=z && m >= y)
    {
        cout << x << " "<< m ;
    }
    else
    {
        cout << "-1" ;
    }
    return 0;
}