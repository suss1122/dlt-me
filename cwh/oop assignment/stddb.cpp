#include<iostream>
#include<string>
using namespace std;
class student
{
    public:
        int roll;
        string name, address, cla, dob,dlno;
        long int phno;
        static int cnt;
        void getdata();
        void display();
        int retroll() 
        {
        return roll;
        }
        void getname() 
        { 
            cin>>name;
        }
        void getaddress()
        {
            cin>>address;
        }
        void getclass()
        {
            cin>>cla;
        }
        void getdob() 
        { 
            cin>>dob;
        }
        void getdlno();
        void getphno();
};
int student::cnt=0;
inline void student::getdlno() 
{
    cin>>dlno;
}
inline void student::getphno()
{
    cin>>phno;
}

void student::getdata()
{
    cnt++;
    roll=cnt;
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter address: ";
    cin>>address;
    cout<<"Enter dob: ";
    cin>>dob;
    cout<<"Enter class";
    cin>>cla;
    cout<<"Enter dl number";
    cin>>dlno;
    cout<<"Enter phone number";
    cin>>phno;
}
void student::display()
{
cout<<"\n"<<roll<<"\t\t"<<name<<"\t\t"<<address<<"\t\t"<<dob<<"\t\t"<<cla<<"\t\t"<<dlno<<"\t\t"<<phno<<"\n";
}
int main()
{
    cout<<"Hello World"<<endl;
    student s[10];
    int i,n,ch,key,r,flag=0,op;
    cout<<"Enter how many records u want"<<endl;
    cin>>n;
    if(n==0)
    {
        exit(1);
    }
    for(i=0;i<n;i++)
    {
        s[i].getdata();
    }
    do
    {
    cout<<"\n Enter 1.Display 2.search 3.modify 4.Exit"<<endl;
    cin>>ch;
    switch(ch)
    {
    case 1: cout<<"\nRoll\t\tName\t\tAddress\t\tdob\t\tclass\t\tdlno\t\tphno\n";
    
            for(i=0;i<n;i++)
            {
                s[i].display();
            }
            break;
    case 2:
            flag=0;
            cout<<"\nEnter roll to search: ";
            cin>>key;
            for(i=0;i<n;i++)
            {
                r=s[i].retroll();
                if(r==key)
                    {
                        cout<<"Record found";
                        cout<<"\nRoll\tName<<\t\tAddress\t\tdob\t\tclass\t\tdlno\t\tphno\n";
                        s[i].display();
                        flag=1;
                    }
            }
            if(flag==0)
            {
                cout<<"\nRecord not found";
            }
            break;
    case 3: flag=0;
            cout<<"\nEnter roll whose record to modify";
            cin>>key;
            for(i=0;i<n;i++)
            {
                r=s[i].retroll();
                if(r==key)
                {
                    cout<<"Record found"<<endl;
                    flag=1;
                    cout<<"\nRoll\tName<<\t\tAddress\t\tdob\t\tclass\t\tdlno\t\tphno\n";
                    s[i].display();
                    cout<<"\n Want to modify 1. Name 2. Address 3.dob 4.class 5.dlno 6.phno";
                    cin>>op;
                switch(op)
                {
                    case 1: s[i].getname();
                            break;
                    case 2: s[i].getaddress();
                            break;
                    case 3: s[i].getdob();
                            break;
                    case 4: s[i].getclass();
                            break;
                    case 5: s[i].getdlno();
                            break;
                    case 6: s[i].getphno();
                            break;
                }
                }
            }
            if(flag==0)
            {
                cout<<"\nRecord not found";
            }
            break;
    case 4: break;
    default: cout<<"Wrong option";
    }
    }
    while(ch!=4);
    return 0;
}