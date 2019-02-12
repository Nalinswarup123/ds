#include<iostream>
#include<math.h>
using namespace std;
int top;
void push(float a[])
{
	float v;
	cout<<"enter operand in the stack";
	cin>>v;
	top++;
	a[top]=v;
}
void operation(float a[])
{
	float x;
	double y;
	int ch;
	if(top==-1)
	cout<<"no operand in stack";
	else if(top==0)
	cout<<"push one more operand";
	else
	{
		cout<<"enter operator\n";
		
		cout<<"1 for +\n2 for -\n3 for *\n4 for /\n5 for ^";
		cin>>ch;
		switch(ch)
		{
			case 1:
				x=a[top]+a[top-1];
				top--;
				a[top]=x;
				break;
			case 2:
				x=a[top-1]-a[top];
				top--;
				a[top]=x;
				break;
			case 3:
				x=a[top]*a[top-1];
				top--;
				a[top]=x;
				break;
			case 4:
				x=a[top-1]/a[top];
				top--;
				a[top]=x;
				break;
			case 5:
				y=pow(a[top-1],a[top]);
				top--;
				a[top]=y;
				break;
			default:
				cout<<"\nenter valid choice";
		}
	}
}
void display(float a[])
{
	if(top==-1)
	cout<<"no element in stack";
	else
	{
		for(int i=top;i>=0;i--)
		cout<<a[i]<<ends;
	}
	
}
main()
{
	int n;
	float a[50];
	top=-1;
	cout<<"1)enter operand\n2)enter operator\n3)display\n4)exit";
	while(1)
	{
		cout<<"\nenter your choice";
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
			case  4:
				exit(0);
			default:
				cout<<"\nenter valid choice";
		}
	}
}
