#include<iostream>
#include<string.h>
using namespace std;	
class stack
{
	char data[50];
	int t = -1;
public:
	stack();
	void push(char x);
	void pop();
	char top();
	bool isempty();
};
stack::stack()
{

}
void stack::push(char x)
{
	t++;
	data[t] = x;
}
void stack::pop()
{
	t--;
}
char stack::top()
{
	return data[t];
}
bool stack::isempty()
{
	if (t == -1)
		return true;
	return false;
}
int main()
{
	int n, i = 0;
	stack s;
	char infix[15], postfix[15];
	cout << "Enter an infix expression " << endl;
	cin.getline(infix, 14);
	n = strlen(infix);
	postfix[i] = infix[i];
	int j = 1;
	for (i = 1; i < n; i++)
	{
		if (s.isempty())
		{
			if (infix[i] == '+' || infix[i] == '-' || infix[i] == '*' || infix[i] == '/')
			{
				s.push(infix[i]);
			}
		}
		else
		{
			if (infix[i] == '+' || infix[i] == '-' || infix[i] == '*' || infix[i] == '/')
			{
				char a, b;
				a = s.top();
				b = infix[i];
				//s.pop();
				if (a == '+' && b == '/' || a == '+' && b == '' || a == '-' && b == '' || a == '-' && b == '/')
				{
					s.push(b);
				}
				else if (b == '+' && a == '/' || b == '+' && a == '' || b == '-' && a == '' || b == '-' && a == '/'
					||b=='-' && a == '+' || b == '+' && a == '-' || b == '/' && a == '' || b == '' && a == '/')
				{
						postfix[j] = a;
						s.pop();
						s.push(b);
						j++;
					
				}
				else if (a == b)
				{
					s.push(b);
				}
				else
				{
					
					s.push(b);
					//s.push(a);
				}
			}
			else
			{
				postfix[j] = infix[i];
				j++;
			}
		}
	}
	while (j < n)
	{
		postfix[j] = s.top();
		s.pop();
		j++;
	}
	cout << "The converted postfix expression is " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << postfix[i];
	}
	cout << endl;
	cout << "The solution is " << endl;
	stack s2;
	int  op1, op2,ans=0;
	for (j = 0; j < n; j++)
	{
		char ch = postfix[j];
		if (ch != '+' && ch != '-' && ch != '*' && ch != '/')
			s2.push(ch);

		else
		{
			op2 = (int)(s2.top()-'0');
			s2.pop();
			op1 = (int)(s2.top()-'0') ;
			s2.pop();
			cout << op1 <<"  "<< op2 << endl;
			switch (ch)
			{
			case '+':
			{
				s2.push(op1 + op2+'0' );
				ans = op1 + op2;
				break;
			}
			case '-':
			{
				s2.push(op1 - op2 + '0');
				ans = op1 - op2 ;
				break;
			}
			case '*':
			{
				s2.push(op1 * op2 + '0');
				ans = op1 * op2 ;
				break;
			}
			case '/':
			{
				s2.push(op1 / op2 + '0');
				ans = op1 / op2 ;
				break;
			}
			}
		}

	}
	
	cout << "Answer=" << /s2.top()-'0'/ans << endl;
	s2.pop();
	cout << s2.isempty();
	return 0;
}