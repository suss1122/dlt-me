#include <iostream>
using namespace std;

class employee
{
public:
    int id[100];
    int age;
    int salary;

    void fillid();
    void display();
};
void employee::fillid()
{
    for (int i = 0; i < 100; i++)
        cout << "enter employee id:";
    cin >> id[i];
}
void employee::display()
{
    cout << "employee id is:" << id[i];
}

int main()
{
    employee.fillid();
    employee.display();
    return 0;
}