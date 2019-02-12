#include<iostream>
using namespace std;
int top1,top2,a[20],b[20];
void push()
{
	int v;
	cout<<"\nenter value";
	cin>>v;
	top1++;
	a[top1]=v;
}
int pop()
{
	int data;
	if(top1==-1)
	cout<<"\nstack is empty";
	else
	{
		data=a[top1];
		cout<<"\npop item="<<data;
		top1--;
	}
}
void enque()
{
	push();
}
void deque()
{
	if(top1==-1)
	{
		if(top2==-1)
		cout<<"\nno item in queue";
		else
		{
			cout<<"\ndeleted item="<<b[top2];
			top2--;
		}
	}
	else
	{
		if(top2==-1)
		{
			for(int i=top1;i>=0;i--)
			{
				top2++;
				b[top2]=a[i];
				
			}
			top1=-1;
			cout<<"\ndeleted item="<<b[top2];
			top2--;
		}
		else
		{
			cout<<"\ndeleted item="<<b[top2];
			top2--;
		}
	}
}
void display()
{
	if(top1==-1 &&  top2==-1)
	cout<<"no element in stack";
	else if(top1==-1 && top2!=-1)
	{
		for(int i=0;i<=top2;i++)
		{
			cout<<b[i]<<ends;
		}
	}
	else if(top1!=-1 && top2==-1)
	{
		for(int i=top1;i>=0;i--)
		{
			cout<<a[i]<<ends;
		}
	}
	else
	{
		for(int i=top1;i>=0;i--)
	{
		cout<<a[i]<<ends;
	}
	for(int i=0;i<=top2;i++)
	{
		cout<<b[i]<<ends;
	}
	}
	
}
main()
{
	int n;
	top1=top2=-1;
	cout<<"1)push\n2)pop\n3)enque\n4)deque\n5)display\n6)exit";
	while(1)
	{
		cout<<"\nenter your choice";
		cin>>n;
		switch(n)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				enque();
				break;
			case  4:
				deque();
				break;
			case 5:
				display();
				break;
			case 6:
				exit(0);
			default:
				cout<<"\nenter valid choice";
		}
	}
}
