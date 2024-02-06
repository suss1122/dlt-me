#include <iostream>
using namespace std;
class complex
{
  public:
    int x, y;
    complex()
    {
        x = 0;
        y = 0;
    }
    friend istream &operator>>(istream &i, complex &c);
    friend ostream &operator<<(ostream &o, complex &c);
    complex operator+(complex c)
    {
        complex c0;
        c0.x = x + c.x;
        c0.y = y + c.y;
        return c0;
    }
    complex operator-(complex c)
    {
        complex c0;
        c0.x = x - c.x;
        c0.y = y - c.y;
        return c0;
    }
    complex operator*(complex c)
    {
        complex c0;
        c0.x = x * c.x - y * c.y;
        c0.y = x * c.y + y * c.x;
        return c0;
    }
};
ostream &operator<<(ostream &o, complex &c)
{
    if (c.y < 0)
    {
        cout << c.x << c.y << "i" << endl;
    }
    else
    {
        cout << c.x << "+" << c.y << "i" << endl;
    }
    return o;
}
istream &operator>>(istream &i, complex &c)
{
    cout << "Enter your real part of complex number = ";
    cin >> c.x;
    cout << "Enter your imaginary part of complex number = ";
    cin >> c.y;
    return i;
}
int main()
{
    char sub;
    int op;
    complex c1, c2, c3;
    do
    {
        cout << "For first complex number : \n";
        cin >> c1;
        cout << "Your first complex number is " << c1 << endl;
        cout << "For second complex number : \n";
        cin >> c2;
        cout << "Your second complex number is " << c2 << endl;
        cout << "Select\n 1)Additon\n 2)Subtraction\n 3)Multipication\n";
        cin >> op;
        switch (op)
        {
             case 1:
            c3 = c1 + c2;
            cout << "Addition of two complex number is " << c3 << endl;
            break;
             case 2:
            c3 = c1 - c2;
            cout << "Subtraction of two complex number is " << c3 << endl;
            break;
             case 3:
            c3 = c1 * c2;
            cout << "Multiplication of two complex number is " << c3 << endl;
            break;
            default:
            cout << "Enter valid input.";
        }
        cout << "If you want to do more calculations?(y/n)\n";
        cin >> sub;
    } while (sub == 'y');
    cout << "Ended";
}