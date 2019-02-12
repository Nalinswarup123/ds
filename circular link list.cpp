#include<iostream>
using namespace std;
struct node
{
	int info;
	node *link;
};
node *ptr,*head,*p,*t;
void create(int i)
{
	p=new node;
	p->info=i;
	p->link=head;
	if(head==NULL)
	{
		head=p;
		ptr=head;
	}
	else
	{
		ptr->link=p;
		ptr=p;
	}
	
}

void display()
{
	ptr=head;
	while(ptr->link!=head)
	{
		cout<<ptr->info<<ends;
		ptr=ptr->link;
	}
	cout<<ptr->info;
}

void del()
{
	int data;
	cout<<"data";
	cin>>data;
	ptr=head;
	//element
	if(head->info==data)
	{
		ptr=head;
		while(ptr->link!=head)
		ptr=ptr->link;
		head=head->link;
		ptr->link=head;
	}
	else
	{
		while(ptr->info!=data)
	{
		t=ptr;
		ptr=ptr->link;
		if(ptr->link==head)
		{
			if(ptr->info==data)
			{
				t->link=ptr->link;
			}
			else
			{
				cout<<"no such element found";
				return;
			}
			
		}
		
	}
	t->link=ptr->link;
	}
	
}
main()
{
	int n,v;
	cout<<"\nenter size of link list";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"enter value";
		cin>>v;
		create(v);
	}
	display();
	del();
	display();
}
