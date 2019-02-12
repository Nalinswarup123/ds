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
	int cap,top=0;
	node *head;
};
stack *s;
void create(int i)
{
	s=new stack;
	s->cap=i;
}
void push(int k)
{
	int v;
	if(s->top==s->cap)
	cout<<"overflow";
	else
	{
		p=new node;
		p->info=k;
		if(s->head==NULL)
		{
			s->top+=1;
			s->head=p;
			p->link=NULL;
			//ptr=s->head;
		}
		else
		{
			s->top+=1;
			p->link=s->head;
			s->head=p;
		}
	}
}
void display()
{
	ptr=s->head;
/*	for(int i=0;i<s->cap;i++)
	{
		cout<<ptr->info<<ends;
		ptr=ptr->link;	
	}
	ptr->link=NULL;
	ptr=s->head;*/
	while(ptr!=NULL)
	{
		cout<<ptr->info<<ends;
		ptr=ptr->link;	
	}
}
main()
{
	int n,l;
	cout<<"enter capacity of stack\n";
	cin>>n;
	create(n);
	cout<<"enter value\n";
	for(int i=0;i<n;i++)
	{
		cin>>l;
		push(l);
	}
	display();
	
}
