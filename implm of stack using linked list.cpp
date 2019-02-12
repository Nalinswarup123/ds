#include<iostream>
using namespace std;
struct node
{
	int info;
	node *link;
};
node *p,*ptr,*top;
int c,n;
void push()
{
	int k;
	if(c==n)
	cout<<"overflow\n";
	else
	{
		cout<<"enter value";
		cin>>k;
		p=new node;
		p->info=k;
		p->link=NULL;
		if(top==NULL)
		{
			top=p;
			c++;
		}
		else
		{
			p->link=top;
			top=p;
			c++;
		}
	
	}
}
void display()
{
	if(top==NULL)
	cout<<"no element in stack";
	ptr=top;
	while(ptr!=NULL)
	{
		cout<<ptr->info<<ends;
		ptr=ptr->link;	
	}
}
void pop()
{
	if(top==NULL)
	cout<<"underflow\n";
	else
	{
		cout<<"pop item="<<top->info<<endl;
		top=top->link;
		c--;
	}
}
main()
{
	int a;
	cout<<"enter capacity of stack\n";
	cin>>n;
	cout<<"\n1)push\n2)pop\n3)display\n4)exit\n";
	while(1)
	{
		cout<<"\nenter your choice";
		cin>>a;
		switch(a)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
			default:
				cout<<"\nenter valid choice";
		}
			
	}
}
