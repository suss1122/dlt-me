#include <iostream>
using namespace std;

class shop
{
public:
    int itemid[50];
    int price[50];
    int count = 0;

    void id()
    {
        for (int i = 0; i <= 50; i++)
        {
            cout << "enter item id:" << endl;
            cin >> itemid[i];
            cout << "item id of" << i << "is" << itemid[i] << endl;
        }
    }
    void itemprice()
    {
        cout << "price of item is:" << price << endl;
    }
    void dispaly()
    {
        cout << "item id is:" << id() << endl;
        cout << "price is:" << itemprice() << endl;
    }
};

int main()
{
    shop groccery;
    groccery.itemid = 1;
    groccery.price = 1000;

    groccery.id();
    groccery.itemprice();
    // groccery.display();
    return 0;
}