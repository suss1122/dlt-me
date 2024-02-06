#include <iostream>
using namespace std;
class QUEUE
{
public:
	QUEUE();

	friend ostream& operator <<(ostream& qout, QUEUE& Q);
	friend istream& operator >>(istream& qin, QUEUE& Q);
	bool isempty();
	bool isfull();
	int getfront();
	~QUEUE();

private:
	char x[10][10];
	int rear = 0, front = 0;
};

QUEUE::QUEUE()
{
}
istream& operator >>(istream& qin, QUEUE& Q)
{
	qin >> Q.x[Q.front][Q.front];
	Q.front++;
	return(qin);
}
ostream& operator <<(ostream& qout, QUEUE& Q)
{
	qout << Q.x[Q.rear][Q.rear] << " ";
	Q.rear++;
}
int QUEUE:: getfront()
{
	return front;
}
bool QUEUE:: isfull()
{
	if (front == 10)
		return 0;
	return 1;
}
bool QUEUE:: isempty()
{
	if (rear == 0 && front == 0)
		return 1;
	return 0;
}


QUEUE::~QUEUE()
{
}

int main()
{
	int n, i;
	QUEUE queue, pq;
	cout << "Enter total number of jobs" << endl;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cout << "Enter job " << i << endl;
		if (queue.getfront() != 10)
			cin >> queue;
		else
		{
			cout << "The Queue is full" << endl;
			break;
		}
	}
	cout << "The jobs will be executed as follows" << endl;
	for (int j = 1; j < i; j++)
	{
		cout << queue;
	}
	return 0;
}