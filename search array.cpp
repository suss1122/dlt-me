#include<iostream>
using namespace std;
int main()
{ 
    int n;
    cout<<"enter no of terms in array:";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    for(int i=0;i<n;i++)
    {
        if(array[i]==3)
        {
            cout<<"found";
            break;
        }
    }
}

