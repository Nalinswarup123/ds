#include<iostream>
using namespace std;

struct node
{
	int info;
	node *last;
	node *next;
};
node *head,*ptr,*t,*p,*tail,*pt,*ct;
int c=0;
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
		while(ptr!=NULL)
		{
			cout<<ptr->info<<ends;
			ptr=ptr->next;
		}
	}
}

main()
{
	int n,v,k;
	cout<<"\nenter size of link list";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"enter value";
		cin>>v;
		create(v);
	}
	display();
	ptr=head->next;
	pt=head;
	ct=head;
	while(ptr!=NULL)
	{
		if(ptr->info%2==0)
		{
			pt=ptr;
			ct->next=pt;
			pt->next=ct->next;
			pt->last=ct;
			ct=pt;
		}
		ptr=ptr->next;
		/*else
		{
			k=ptr->info;
			ptr->info=pt->info;
			pt->info=k;
			ptr=ptr->next;
		}*/
	}
	ptr=head;
	while(ptr!=NULL)
	{
		cout<<ptr->info;
		ptr=ptr->next;
	}
}
