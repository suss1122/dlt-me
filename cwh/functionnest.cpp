#include<iostream>
using namespace std;

class num
{
    public:
    int n,m;
    void input()
    {
        cout<<"enter two numbers:"<<endl;
        cin>>m>>n;
    }
    void largest()
    {
        if(m>n)
        {
            cout<<"largest number is:"<<m<<endl;
        }
        else
        {
            cout<<"largest number is:"<<n<<endl;
        }
    }
    void display()
    {
        cout<<"largest number is:"<<largest()<<endl;
    }
};
6
int main()
{
    num positive;
    
    positive.input();
    positive.largest();
    return 0;
    
}