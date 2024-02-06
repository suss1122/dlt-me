//program using for loop and break statement
#include<iostream>
using namespace std;
int main()
{
    int pocketmoney=3000;
    for(date=1;date<=30;date++)
    {
        if(date%2==0)
        {
            continue;
        }
        if(pocketmoney==0)
        {
            break;
        }
        cout<<"allowed to go"<<endl;
        pocketmoney=pocketmoney-300;
    }
}