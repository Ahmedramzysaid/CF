#include <iostream>
 
using namespace std;
 
int main()
{
    long long  eye, mouse, body, counter ;
    cin >> eye >> mouse >> body ;
    counter = 0 ;
    if ((mouse>=eye&&mouse>=body)||(mouse>=eye &&mouse<=body)||(mouse<=eye&&mouse>=body))
    {
        counter=min(eye,body) ;
        if (eye > body )
        {
            body = 0 ;
        }
        else if (body >eye)
        {
            eye =0 ;
        }
        else
        {
            eye =0 ;
            body = 0;
        }
    }
    else if (eye>=mouse && mouse<=body)
    {
        counter = mouse ;
        eye = eye-mouse ;
        body = body - mouse ;
    }
    if (eye>=2&&body>=1)
    {
        counter = counter +min(eye/2,body) ;
    }
    cout <<  counter ;
    return 0;
}