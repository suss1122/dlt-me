#include<iostream>
using namespace std;
int main()
{ 
    int n;
    cout<<"enter number of terms:";
    cin>>n;
    int suss[n];
    int sush[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter term:";
        cin>>suss[i];
    }
    for(int i=0;i<n;i++)
    {
        sush[i]=suss[n-i-1];
        cout<<sush[i];
    }
}