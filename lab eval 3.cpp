#include<iostream>
#include<math.h>
using namespace std;
int top;
int a[100];
void push(float a[])
{
	float v;
	cout<<"enter operand in the stack\n";
	cin>>v;
	top++;
	a[top]=v;
}
void operation(float a[])
{
	int x;
	double y;
	char ch;
	if(top==-1)
	cout<<"no operand in stack\n";
	else if(top==0)
	cout<<"insert one more operator\n";
	else
	{
		cout<<"enter operator\n";
		cin>>ch;
		switch(ch)
		{
			case '+':
				x=a[top]+a[top-1];
				top--;
				a[top]=x;
				break;
			case '-':
				x=a[top-1]-a[top];
				top--;
				a[top]=x;
				break;
			case '*':
				x=a[top]*a[top-1];
				top--;
				a[top]=x;
				break;
			case '/':
				x=a[top-1]/a[top];
				top--;
				a[top]=x;
				break;
			case '^':
				y=pow(a[top-1],a[top]);
				top--;
				a[top]=y;
				break;
			default:
				cout<<"enter valid choice\n";
		}
	}
}
void display(float a[])
{
	if(top==-1)
	cout<<"no element in stack";
	else
	{
		for(int i=0;i<=top;i++)
		cout<<a[i]<<ends;
	}
}
main()
{
	int n;
	float a[50];
	top=-1;
	cout<<"1)push\n2)operation\n3)displa\ny4)exit\n";
	while(1)
	{
		cout<<"enter your choice\n";
		cin>>n;
		switch(n)
		{
			case 1:
				push(a);
				break;
			case 2:
				operation(a);
				break;
			case 3:
				display(a);
				break;
			case 4:
				exit(0);
			default:
				cout<<"enter valid choice\n";
		}
	}
}

