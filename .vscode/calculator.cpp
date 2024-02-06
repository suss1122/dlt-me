#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter two numbers"<<endl;
    cin>>a>>b;

    char operator;
    cout<<"Enter character"<<endl;
    cin>>operator;
  

    switch(operator)
    {
        case '+':
        cout<<"addition"<<endl;
        cout<<a+b;
        break;

        case '-':
        cout<<"substraction"<<endl;
        cout<<a-b;
        break;
default:
cout<<"no such type of operator"<<endl;
      }
}