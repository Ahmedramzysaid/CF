#include <iostream >
using namespace std ;
int main ()
{
    int x, y, z ;
    cin >> x >> y >> z ;
    if (x>=y && y>=z)
    {
        cout << z << " "<< x ;
    }
    else if (x>=z && z>=y)
    {
        cout << y <<" " << x ;
    }
 
    else if (z>=y && y>=x)
    {
 
        cout << x <<" " << z ;
    }
    else if (z>=x && x>=y)
    {
        cout << y <<" "<< z ;
    }
     else if (y>=z && z>=x)
    {
        cout << x <<" " << y ;
    }
 
 else if(y >=x && x>=z)
    {
          cout << z<< " " <<y ;
    }

    return 0 ;
}
