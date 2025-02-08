#include <iostream>
using namespace std ;
int main ()
{
    int x ,i ;
    x= 1999 ;
    cin >> i ;
while (i>=999&&i<=9999){
        if (i==x)
        {
            cout << "Correct";
        break ;
        }
        else
        {
            cout << "Wrong"<<"\n" ;
            cin >> i ;
 
        }
 
}
 
    return 0 ;
}