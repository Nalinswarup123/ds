#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
struct node
{
	int info;
	node *link;
};
struct node *p,*ptr,*start,*header,*prev=NULL;
int n;
void create();
void display();
int x=0;
int main()
{
	cout<<"Enter Number of nodes : ";
	header=new node();
	cin>>header->info;
	header->link=NULL;
	start=header;
	for(int i=0;i<header->info;i++)
	{
		if(header->link==NULL)
		{
			create();
			header->link=p;
			p->link=NULL;
		}
		else
		{
			create();
			p->link=header->link;
			header->link=p;
		}
	}
	display();
	ptr=header->link;
	while(ptr!=NULL)
	{
		//prev=ptr;
		if(prev==NULL && ptr->info%2!=0)
		{
			//prev=ptr;
			header->link=ptr->link;
			ptr->link=NULL;
			prev=header->link;
			ptr=prev->link;
		}
		if(ptr->info%2!=0)
		{
			//prev=ptr;
			prev->link=ptr->link;
			ptr->link=NULL;
			ptr=prev;
			x++;
		}
		else
		prev=ptr;
		ptr=ptr->link;
	}
	display();
}
void create()
{
	p=new node();
	cout<<"\nEnter Value : ";
	cin>>p->info;
	p->link=NULL;
}
void display()
{
	cout<<"\nValue inside header node : "<<header->info-x<<"\n";
	ptr=header->link;
	while(ptr!=NULL)
	{
		cout<<ptr->info<<" ";
		ptr=ptr->link;
	}
}
