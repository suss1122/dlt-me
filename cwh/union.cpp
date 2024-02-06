#include<iostream>
using namespace std;

union sweets
{
    int choco;
    int laddu;
    int jalebi;
};

int main()
{
    union sweets bday;
    bday.choco=45;
    bday.laddu=34;
    bday.jalebi=78;
    
    cout<<bday.choco<<endl;
}