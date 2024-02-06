#include<iostream>
using namespace std;
//for age<=18 print not eligible for voting
int main(){
int age,Age;
for(age=12;age<18;++age)
{
    Age=18-age;
    cout<<"\nnot eligible for voting for"<<Age<<"years";
}
return 0;
}