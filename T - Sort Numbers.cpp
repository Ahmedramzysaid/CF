#include <iostream>
 
using namespace std;
 
int main()
{
    int x, y,z ;
    cin >> x >> y>> z ;
    if(x>=y&&y>=z)
    {
        cout << z<< "\n";
        cout << y<< "\n";
        cout << x<< "\n";
      
        cout << "\n" ;
        cout << x << "\n" ;
        cout << y <<"\n";
        cout<<z<<"\n";
    }
    else if (x>=z&&z>=y)
    {
        cout << y<< "\n";
        cout << z<< "\n";
        cout << x<< "\n";
     
        cout << "\n" ;
        cout << x << "\n" ;
        cout << y <<"\n";
        cout<<z<<"\n";
    }
    else if (z>=y&&y>=x)
    {
        cout << x<< "\n";
        cout << y<< "\n";
        cout << z<< "\n";
        
        cout << "\n" ;
        cout << x << "\n" ;
        cout << y <<"\n";
        cout<<z<<"\n";
    }
    else if (z>=x&&x>=y)
    {
        cout << y<< "\n";
        cout << x<< "\n";
        cout << z<< "\n";
        
        cout << "\n" ;
        cout << x << "\n" ;
        cout << y <<"\n";
        cout<<z<<"\n";
    }
    else if (y>=x&&x>=z)
    {
        cout << z<< "\n";
        cout << x<< "\n";
        cout << y<< "\n";
        
        cout << "\n" ;
        cout << x << "\n" ;
        cout << y <<"\n";
        cout<<z<<"\n";
    }
    else if (y>=z&&z>=x)
    {
        cout << x<< "\n";
        cout << z<< "\n";
        cout << y<< "\n";
        
        cout << "\n" ;
        cout << x << "\n" ;
        cout << y <<"\n";
        cout<<z<<"\n";
    }
    return 0;
}