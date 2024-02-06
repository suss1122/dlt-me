#include<iostream>
using namespace std;
int main()
{
int array[4];
int array1[4];
cout<<"enter terms"<<endl;
for(int i=0;i<4;i++)
{
    cin>>array[i];
    cout<<array[i]<<endl;
}

for(int i=0;i<4;i++)
{
  array1[i]=array[i];
  cout<<array1[i];
}
}