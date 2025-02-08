#include <iostream>
 
using namespace std;
 
int main()
{
    int x , cunt ;
    cunt = 0;
    cin >> x ;
    for (int i =2 ; i<=x ; i++)
    {
        for (int z=1 ; z<=i ; z++)
        {
            if (i %z==0)
            {
                cunt++;
            }
            else
            {
 
            }
        }
        if (cunt ==2)
        {
            cout << i << " ";
 
            cunt = 0 ;
        }
        else
        {
         cunt=0;
        }
 
    }
    return 0;
}
