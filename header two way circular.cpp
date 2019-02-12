#include<iostream>
using namespace std;
struct node
{
	int info;
	node *prev=NULL,*next=NULL;
};
node *head,*tail,*ptr,*p;
node *header=new node;
void insert()
{
	int data;
	cin>>data;
	p=new node;
	p->info=data;
	if(header->next==NULL)
	{
		header->next=p;
		head=header;
		ptr=p;
	}
	else
	{
		
		ptr->next=p;
		p->prev=ptr;
		ptr=p;
		p->next=header->next;
	}
}
void display()
{
	ptr=header->next;
	while(ptr->next!=header->next)
	{
		cout<<ptr->info<<ends;
		ptr=ptr->next;
	}
	cout<<ptr->info;
}
void del()
{
	int data;
	cout<<"enter element to delete";
	cin>>data;
	ptr=header->next;
	if(header->next->info==data)
	{
		while(ptr->next!=header->next)
		ptr=ptr->next;
		header->next=header->next->next;
		ptr->next=header->next;
	}
	else
	{
		while(ptr->info!=data)
		{
			ptr=ptr->next;
			if(ptr->next==header->next)
			{
				if(ptr->info==data)
				{
					ptr->prev->next=ptr->next;
					ptr->next->prev=ptr->prev;
				}
				else
				{
					cout<<"/nno such element found";
					return;
				}
				
			}
		}
		ptr->prev->next=ptr->next;
		ptr->next->prev=ptr->prev;
	}
}
main()
{
	int n;
	cout<<"enter size of linked list:";
	cin>>n;
	cout<<"\nenter data";
	for(int i=0;i<n;i++)
	insert();
	cout<<"\n";
	display();
	del();
	cout<<"\n";
	display();
	del();
	cout<<"\n";
	display();
}
