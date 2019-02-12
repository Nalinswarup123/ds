#include<iostream>
using namespace std;
int cap,c=0,top=-1;
void push(int a[])
{
	int d;
	c++;
	if(c>cap)
	cout<<"overflow";
	else
	{
		top++;
		cin>>d;
		a[top]=d;
	}
}
void display(int a[])
{
	for(int i=0;i<=top;i++)
	cout<<a[i]<<ends;
}
main()
{
	int n;
	cout<<"enter capacity of stack";
	cin>>cap;
	int stack[cap];
	push(stack);
	push(stack);
	push(stack);
	display(stack);
}
