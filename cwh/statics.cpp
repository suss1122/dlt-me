#include<iostream>
using namespace std;

class ststic_mem
{
    static int count;
    public:
    void incre()
    {
        count++;
        cout<<"increment by:"<<count<<endl;
    }
};
int ststic_mem::count;

int main()
{
    ststic_mem a;
    a.incre();
    ststic_mem b;
    b.incre();
    return 0;
}