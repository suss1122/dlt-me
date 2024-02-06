//To check whether the student is pass or not
#include<iostream>
using namespace std;
int main()
{
    int sub1,sub2;
    cout<<"enter the marks of sub1:";
    cin>>sub1;
    cout<<"enter marks of sub2:";
    cin>>sub2;
    int sum,avg;
    sum=sub1+sub2;
    avg=sum/2;
    
if (avg>35)
{
    cout<<"pass";
}
else if(avg>=75)
{
    cout<<"passed with distinction.";
}
else{
    cout<<"fail";
}
return 0;
}