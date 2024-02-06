#include<iostream>
using namespace std;
int main()
{
    int divident,divisor,remainder,quotient;
    cout<<"enter divident:";
    cin>>divident;
    cout<<"enter divisor:";
    cin>>divisor;
quotient=divident/divisor;
remainder=divident%divisor;
cout<<"remainder is :"<<remainder<<endl;
cout<<"quotient is:"<<quotient;
return 0;
}