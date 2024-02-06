#include<iostream>
using namespace std;
static int a=1;
static int o = 5;
class queue
{
private:
	int x[5],b[10], front=0, rear=-1;
public:
	void insert(int g)
	{
		
		int t = rear;
		if (front != t--)
		{
			x[front] = g;
			front = (front + 1) % 5;
		}
	}
	int Delete()
	{
		int k;	
		if (rear == 4)
		{
			rear = -1;
		}
		rear=(rear+1)%5;
		
		k = x[rear];
		x[rear] = 0;
		return k;
	}
	int isfull()
	{
		if (x[front] == 0)
		{
			return 1;
		}
		else
			return 0;
	}
	int isempty()
	{
		if (front == 0 && rear == -1)
			return 1;
		return 0;
	}
	void booking(queue *j)
	{
		queue  *q=j;
		
		int bill = 0;
		
		char y, y1;

		do
		{
			if (a<=o)
			{

				cout << "WELCOME TO PIZZA PARLOR" << endl;
				cout << "Cusomer " << a << endl;
				cout << "OUR MENU IS" << endl;
				cout << " 1.A\t 500RS \n 2.B \t 500Rs\n 3.C\t 700Rs\n 4.D\t 700RS \n 5.E\t 700RS \n 6.F\t 1000RS \n 7.G\t 1000RS \n 8.A\t 1000RS \n";
				do
				{
					cout << q->front << endl;
					cout << "Please tell your order(1,2,3...etc)" << endl;
					int order;
					cin >> order;
					switch (order)
					{
					case (1):
					{
						bill += 500;
						break;
					}
					case (2):
					{
						bill += 500;
						break;
					}
					case (3):
					{
						bill += 700;
						break;
					}
					case (4):
					{
						bill += 700;
						break;
					}
					case (5):
					{
						bill += 700;
						break;
					}
					case (6):
					{
						bill += 1000;
						break;
					}
					case (7):
					{
						bill += 1000;
						break;
					}
					case (8):
					{
						bill += 1000;
						break;
					}
					default:
					{
						cout << "Please enter a valid choice" << endl;
						break;
					}
					}
					cout << "Do you want to add items in your order(y/n)" << endl;
					cin >> y;
				} while (toupper(y) == 'Y');
				b[a] = bill;
				bill = 0;
				cout << "Thank you for ordering please wait while your order is processed" << endl;
				cout<<"a=" << a<<endl;
				q->insert(a);
				a++;
				cout << "Press Y to change the custmer" << endl;
				cin >> y1;
			}
			else
			{
				cout << "Sorry we are no more taking any orders" << endl;
				y1 = 'N';
			}
			

		} while (toupper(y1) == 'Y');

		
	}
	void ready(queue *q)
	{
		int k, i = 0;
		k = q->Delete();
		cout << q->rear << endl;
		cout << "The order of customer " << k << " is ready " << endl;
		cout << "Your bill is " << b[k] << endl;
		i++;
		o++;
	}
};
int main()
{
	queue Q1;
	Q1.booking(&Q1);
	cout << "Booking has reopened" << endl;
	Q1.ready(&Q1);
	Q1.booking(&Q1);
	for (int i=0;i<4;i++)
	{
		Q1.ready(&Q1);
	}
	return 0;
}
