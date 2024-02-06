//greatest of 3 numbers
#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
       cout<<"enter 1st number:";
       cin>>a;
       
       cout<<"enter 2nd number:";
       cin>>b;
    
       cout<<"enter 3rd numbre:";
       cin>>c;
if(a>b)
{
    if(a>c)
      {
          cout<<"maximum term is:"<<a;
      }
     else
      {
          cout<<"maximum term is:"<<c;
      }
}
else
{
    if(b>c)
    {
        cout<<"maximum term is:"<<b;
    }
    else
    {
        cout<<"maximum term is:"<<c;
    }
}
return 0;
}