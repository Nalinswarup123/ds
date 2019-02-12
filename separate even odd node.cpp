//wap to separate even no nodes from odd no of nodes and odd no must come after even nodes in a two way link list
#include<iostream>
using namespace std;

struct node
{
	int info;
	node *last;
	node *next;
};
node *head,*head2,*head3,*tail,*tail2,*tail3,*ptr,*p,*pt,*po;
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
	ptr=head;
	while(ptr!=NULL)
	{
		p=new node;
		p->info=ptr->info;
		p->next=NULL;
		p->last=NULL;
		if(ptr->info%2==0)
		{
			if(head2==NULL)
			{
			head2=p;
    		pt=head2;
			}	
			else
			{
			pt->next=p;
			p->last=pt;
			pt=p;
			}
			tail2=pt;	
		}
		else
		{
			if(head3==NULL)
			{
			head3=p;
    		po=head3;
			}	
			else
			{
			po->next=p;
			p->last=po;
			po=p;
			}
			tail3=po;
		}
		ptr=ptr->next;
	}
	pt->next=head3;
	
	/*ptr=head;
	while(ptr!=NULL)
	{
		if(ptr->info%2!=0)
		{
			p=new node;
			p->info=ptr->info;
			p->next=NULL;
			p->last=NULL;
			
			pt->next=p;
			p->last=pt;
			pt=p;
			tail2=pt;	
		}
		ptr=ptr->next;
	}*/
	cout<<endl;
	ptr=head2;
	while(ptr!=NULL)
	{
		
		cout<<ptr->info<<ends;
		ptr=ptr->next;
	}
	cout<<endl;
	
}

