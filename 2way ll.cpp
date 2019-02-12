#include<iostream>
using namespace std;

struct node
{
	int info;
	node *last;
	node *next;
};
node *head,*ptr,*t,*p,*tail;

void create(int i)
{
	p=new node;
	p->info=i;
	p->last=NULL;
	p->next=NULL;
    if(head==NULL)
	{
	head=p;
    ptr=head;
	}
	else
	{
		ptr->next=p;
		p->last=ptr;
		ptr=p;
	}
	tail=ptr;
}

void display()
{
	ptr=head;
	if(ptr==NULL)
	cout<<"list is empty";
	else
	{
		cout<<"fom head";
		while(ptr!=NULL)
		{
			cout<<ptr->info<<ends;
			ptr=ptr->next;
		}
		cout<<"from tail";
		ptr=tail;
		while(ptr!=NULL)
		{
			cout<<ptr->info<<ends;
			ptr=ptr->last;
		}
	}
}

main()
{
	int n,v;
	//display();
	//del();
	cout<<"\nenter size of link list";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"enter value";
		cin>>v;
		create(v);
	}
	display();
	//del();
	//display();
}

