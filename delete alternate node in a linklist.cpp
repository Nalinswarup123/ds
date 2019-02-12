#include<iostream>
using namespace std;
struct node
{
	int info;
	node *link;
};
node *head,*ptr,*p;
int n;
void insert()
{
	int v;
	p=new node;
	p->link=NULL;
	cout<<"enter value";
	cin>>v;
	p->info=v;
	if(head==NULL)
	{
		head=p;
		ptr=p;
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
	while(ptr!=NULL)
	{
		cout<<ptr->info<<ends;
		ptr=ptr->link;
	}
}
void del()
{
	int c=0;
	ptr=head;
	while(ptr!=NULL)
	{
		c++;
		if(c%2==0)
		p->link=ptr->link;
		p=ptr;
		ptr=ptr->link;
	}
	
	
	
}
void swap()
{
	int k,temp;
	p=ptr=head;
	cout<<"enter position of element to swap";
	cin>>k;
	for(int i=0;i<k-1;i++)
		ptr=ptr->link;
	for(int i=0;i<n-k;i++)
		p=p->link;
	temp=p->info;
	p->info=ptr->info;
	ptr->info=temp;
}
main()
{ 
	cout<<"enter size";
	cin>>n;
	for(int i=0;i<n;i++)
	insert();
	display();
	//del();
	swap();
	cout<<"\n";
	display();
}
