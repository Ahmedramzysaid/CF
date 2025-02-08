#include <iostream>
 
using namespace std;
 
int main()
{
 
    double x,y ;
    cin >> x>> y;
    cout <<"floor"<<" " << x<< " "<<"/" <<" "<<y <<" " <<"=" <<" "<<int(x/y)<<"\n" ;
    if(x==y)
    {
        cout <<"ceil"<<" " << x<< " "<<"/" <<" "<<y <<" " <<"=" <<" "<<int(x/y)<<"\n" ;
 
    }
    else
    {
 
        cout <<"ceil"<<" " << x<< " "<<"/" <<" "<<y <<" " <<"=" <<" "<<int(x/y)+1<<"\n" ;
    }
    if(x/y>=int(x/y)+0.5)
    {
        cout<< "round"<<" " << x<< " "<<"/" <<" "<<y <<" " <<"=" <<" "<<int(x/y)+1<<"\n" ;
    }
    else
    {
        cout<< "round"<<" " << x<< " "<<"/" <<" "<<y <<" " <<"=" <<" "<<int(x/y)<<"\n" ;
    }
 
    return 0;
}