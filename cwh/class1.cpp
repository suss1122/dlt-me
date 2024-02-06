// Online C++ compiler to run C++ program online
#include<iostream>
using namespace std;

class employee
{
     public:
        int emp_id;
        int age;
   
    void emp_info()
    {
        cin>>emp_id;
        cin>>age;
    }
    void display()
    {
        cout<<emp_id<<endl;
        cout<<age<<endl;
    }
};
int main()
{
    employee sushant;
    sushant.emp_info();
    sushant.display();
    sushant.emp_id=23; 
    cout<<sushant.emp_id;
    
  
    return 0;
}