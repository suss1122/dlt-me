#include <iostream>
using namespace std;
class publication
{
protected:
    string title;
    float price;

public:
    publication()
    {
        title = " ";
        price = 0.0;
    }
    virtual void getdata()
    {
        cout << "Enter Publication info:" << endl;
        cout << "Enter Title of Publication:";
        cin >> title;
        cout << "Enter Price of Publication:";
        cin >> price;
    }
    virtual void display()
    {
        cout << "Title of Publication:" << title << endl;
        cout << "Publication Price:" << price << endl;
    }
};
class book : public publication
{
    int pCount;

public:
    book()
    {
        pCount = 0;
    }
    void getdata()
    {

        cout << "Enter Page count:";
        cin >> pCount;

        try
        {
            if (pCount < 0)
            {
                throw pCount;
            }
        }
        catch (int pCount)
        {
            pCount = 0;
            cout << "Entered page count invalid" << endl;
        }
    }
    void display()
    {
        cout << endl;
        cout << "Page count:" << pCount << endl;

    }
};
class tape : public publication
{
    float time;

public:
    tape()
    {
        time = 0;
    }
    void getdata()
    {
        cout << "Enter play during of the tape:" << endl;
        cin >> time;
        try
        {

            if (time < 0)
            {
                throw time;
            }
        }
        catch (float time)
        {
            time = 0;
            cout << "Entered playing time is abnormal." << endl;
        }     
    }
    void display()
    {

        cout << endl;
        cout << "play time is:" << time << endl;
    }
};
int main()
{
    cout << "Enter book data:" << endl;
    publication *ptr = new publication;
    publication obj;
    ptr = &obj;
    ptr->getdata();
    ptr->display();
    book b;
    b.getdata();
    cout << "Book data:" << endl;
    b.display();
    cout << "Enter tape Data:" << endl;
    tape c;
    c.getdata();
    cout << "Tape Data:" << endl;
    c.display();
    cout << "Enter New Details Of Book :" << endl;
    ptr->getdata();
    ptr->display();
    b.getdata();
    c.getdata();
    cout << "New book data :" << endl;
    b.display();
    c.display();
    return 0;
}