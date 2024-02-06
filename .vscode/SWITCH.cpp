#include<iostream>
using namespace std;
int main()
{
    char button;
    cout<<"enter the character"<<endl;
    cin>>button;
    
switch(button)
{
    case 'a':
    cout<<"hello"<<endl;

    case 'b':
    cout<<"namaste"<<endl;

    default:
    cout<<"dont wanna greet."<<endl;
}
}
