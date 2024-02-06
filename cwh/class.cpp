#include <iostream>
using namespace std;

class shop
{
public:
    int itemid;
    int price;

    void id()
    {
        cout << "item id is:" << itemid << endl;
    }
    void itemprice()
    {
        cout << "price of item is:" << price << endl;
    }
};

int main()
{
    shop groccery;
    groccery.itemid = 1;
    groccery.price = 1000;

    groccery.id();
    groccery.itemprice();
    return 0;
}