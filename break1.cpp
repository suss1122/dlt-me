#include<iostream>
using namespace std;
int main()
{
    for(int date=1;date<=30;date+=1)
    { 
        if(date%2==0)
    {
        continue;
    }
    if(date==11&13)
    {
        cout<<"dont go";
    }

    cout<<"out for date.";
    }
}