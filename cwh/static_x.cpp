#include<iostream>
using namespace std;

class static_member
{
    int count=0;
    public:
    void incre()
    {
        count++;
        cout<<"increment to:"<<count<<endl;
    }
};

int main()
{
   
    static_member a;
    a.incre();
    static_member b;
    b.incre();
    static_member c;
    c.incre();
    return 0;
    
}