#include<iostream>
using namespace std;
int sus(int a,int b)  //declaraton
{
    return a+b;       //definition
}
int main()
{
    int sum;
    sum=sus(3,4);     //function callling
    cout<<"sum is:"<<sum<<endl;
    return 0;
}