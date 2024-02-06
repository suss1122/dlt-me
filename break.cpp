//program using for loop and break statement
#include<iostream>
using namespace std;
int main()
{
    int pocketmoney=3000;
    for(int date=1;date<=30;date++)
    {
        if(date%2==0)
        {
            continue;
        } 
        if(pocketmoney==0)
        {
            break;
        }
          date=date+1;
        cout<<"allowed to go on:"<<date<<endl;
      
        pocketmoney=pocketmoney-300;
    }
    cout<<"pocket money finished.";
}