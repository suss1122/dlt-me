#include<iostream>
using namespace std;

int bin()
{
    int n;
    cin>>n;
     int temp=1;
    int ans=0;
    while(n>0)
    {
        int y=n%10;
        ans=ans+temp*y;
        temp*=2;
        n=n/10;
        
    }
    cout<<ans;
}

int main()
{
    bin();
    return 0;
}