#include<iostream>
#include<iomanip>
using namespace std;
int main(){
double r , Area  ;
cin >> r ;
Area = 3.141592653 *(r*r) ;
 
cout << fixed << setprecision(9) ;
 
cout << Area  ;
return 0 ;
}