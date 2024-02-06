#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number to be checked:";
    cin >>n;
    bool flag;
    flag=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {  
            cout<<"non prime";
            flag=1;
            break;
        }
    //   else 
    // {
    //     cout<<" prime";

    // }
}
if(flag==0)
{
   cout<<"prime";
}
}