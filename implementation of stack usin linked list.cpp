#include<iostream>
using namespace std;
struct node
{
	int info;
	node *link;
};
node *p,*ptr;
struct stack
{
	int cap;
	node *top;
};
stack *s;
void create(int i)
{
	s=new stack;
	s->top=new node;
	s->cap=i;
	s->top->info=0;
	s->top->link=NULL;
}
void push()
{
	int k;
	if(s->top->info==s->cap)
	cout<<"overflow\n";
	else
	{
		cout<<"enter value";
		cin>>k;
		p=new node;
		p->info=k;
		p->link=NULL;
		if(s->top->link==NULL)
		{
			s->top->info=s->top->info+1;
			s->top->link=p;
		}
		else
		{
			s->top->info+=1;
			p->link=s->top->link;
			s->top->link=p;
		}
	
	}
}
void display()
{
	if(s->top->info==0)
	cout<<"no element in stack";
	ptr=s->top->link;
	while(ptr!=NULL)
	{
		cout<<ptr->info<<ends;
		ptr=ptr->link;	
	}
}
void pop()
{
	int data;
	if(s->top->info==0)
	cout<<"underflow\n";
	else
	{
		cout<<"pop item="<<s->top->link->info<<endl;
		s->top->link=s->top->link->link;
		s->top->info-=1;
	}
}
main()
{
	int n,a;
	cout<<"enter capacity of stack\n";
	cin>>n;
	create(n);
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
