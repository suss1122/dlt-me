//sum of n natural numbers using for loop.
#include<iostream>
using namespace std;

int main(){
       int n;
       cout<<"enter the number of terms to be added:\n";
       cin>>n;
    int sum=0;
    for(int num=1;num<=n;num++){
        sum=sum+num;
    }
    cout<<sum<<endl;
return 0;
}