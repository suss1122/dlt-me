#include <iostream>
#include<math.h>
using namespace std;
class node
{
private:
	int num;
	node* next;
	node* previous;
public:
	node* head, * tail;
	node()	
	{
		next = NULL;
		previous = NULL;
		head = NULL;
		tail = NULL;
	}
	void insert(int el);
	int getsize();
	void display();
	int Delete();
	void binary();
	void ocma();
	void tcma();
	void addition(node* A, node* B);
	void decimal();
};
void node::insert(int el)
{
	node* temp, * temp1;
	temp = head;
	temp1 = head;
	temp = new node;
	temp->num = el;
	temp->next = NULL;
	temp->previous = NULL;
	if (head == NULL)
	{
		head = temp;
		tail = temp;
	}
	else
	{
		while (temp1->next != NULL)
		{
			temp1 = temp1->next;
		}
		temp1->next = temp;
		temp->previous = tail;
		temp->next = NULL;
		tail = temp;
	}
	tail = temp;
}
int node::getsize()
{
	int c = 1;
	node* temp;
	temp = head;
	while (temp->next != NULL)
	{
		c++;
		temp = temp->next;
	}
	return c;
}
void node::display()
{
	node* temp;
	temp = tail;
	int n = getsize();
	for (int i = 0; i < n; i++)
	{
		cout << temp->num << " ";
		temp = temp->previous;
	}
	cout << endl;
}
int node::Delete()
{
	node* temp = head;
	int k;
	k = temp->num;
	temp = temp->next;
	head = temp;
	return k;
}
void node::binary()
{
	int  n;
	cout << "Enter the decimal number" << endl;
	cin >> n;
	do
	{
		int a;
		a = n % 2;
		insert(a);
		n = n / 2;
	} while (n != 0);
	cout << "Its binary equivalent is = ";
	display();
}
void node::ocma()
{
	node* temp;
	int n = getsize();
	temp = head;
	for (int i = 0; i < n; i++)
	{
		if (temp->num == 0)
			temp->num = 1;
		else if (temp->num == 1)
			temp->num = 0;
		else
			abort();
		temp = temp->next;
	}
}
void node::tcma()
{
	node B;
	B.insert(1);
	addition(this, &B);
	cout << "The two's compliment equals to = ";
	display();
}
void node::addition(node* A, node* B)
{

	int n;
	n = A->getsize() - B->getsize();
	n = sqrt(n * n);
	if (A->getsize() > B->getsize())
		for (int i = 0; i < n; i++)
		{
			B->insert(0);
		}
	else if (A->getsize() < B->getsize())
		for (int i = 0; i < n; i++)
		{
			A->insert(0);
		}
	node* tempA, * tempB;
	tempA = A->head;
	tempB = B->head;
	int i, a, b, sum = 0, carry = 0;
	n = A->getsize();
	for (i = 1; i <= n; i++)
	{
		a = A->Delete();
		b = B->Delete();
		sum = a ^ b ^ carry;
		carry = (a & b) | (b & carry) | (a & carry);
		insert(sum);
	}
	if (carry == 1)
		insert(carry);
}
void node::decimal()
{
	int decimal = 0, temp, n, i = 0;;
	n = getsize();
	do
	{
		temp = Delete();
		temp = pow(2, i) * temp;
		i++;
		decimal = decimal + temp;
	} while (i < n);
	cout << "THE SUM IN DECIMAL FORM IS " << decimal << endl;
}
int main()
{
	node A, B, C, D;
	A.binary();
	cout << "The One's compliment equals to = ";
	A.ocma();
	A.display();
	A.tcma();
	cout << "Enter 2 numbers for binary addition " << endl;
	B.binary();
	C.binary();
	D.addition(&B, &C);
	cout << "The sum of two numbers in binary form is ";
	D.display();
	D.decimal();
	return 0;
}