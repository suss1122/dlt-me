#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of terms in array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n;i++)
    {
        cout<<"enter the terms:";
        cin>>arr[i];
    }
    // cout<<arr[2];

//pointers in array
int *p=arr;
cout<<"address of the element in the first index is:"<<p<<endl;
cout<<"address at p+1 pointer is:"<<p+1<<endl;
cout<<"value at addres is:"<<*p+1;
}
