#include<iostream>
using namespace std;
struct employee   //typedef struct employee(alternative) 
{
    int age;
    char divi;
    float per;
};                 //emp;
int main()
{
    struct employee sushant;    //emp sushant
    sushant.age=23;           
    sushant.divi='A';
    sushant.per=90.3;
    cout<<"Sushant's age is:"<<sushant.age<<endl;
    cout<<"Sushant's division is:"<<sushant.divi<<endl;
    cout<<"Sushant's percentage is:"<< int(sushant.per) <<endl;
    return 0;
} 