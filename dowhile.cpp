#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter  number:";
    cin>>n;
do{
    cout<<n;
    cout<<"\nenter next number:";
    cin>>n;
}
while(n>0);
cout<<"number is negative";
return 0;
}