#include<iostream>
using namespace std;
int main()
{
  int a;
  cout<<"enter a number:";
  cin>>a;
  int *c=&a;
  cout<<"address of the value stored in a is:"<<c<<endl;
  cout<<"value stored at adsress is:"<<*c<<endl;
  return 0;
}