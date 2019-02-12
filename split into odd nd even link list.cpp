#include<iostream>
using namespace std;
struct node
{
	int info;
	node *link;
};
node *head,*head2,*head3,*header,*header2,*header3,*ptr,*pt,*p,*po;
int e=0,o=0;
void create(int i)
{
	p=new node;
	p->info=i;
	p->link=NULL;
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
void split()
{
	ptr=head->link;
	while(ptr!=NULL)
	{
		p=new node;
		p->info=ptr->info;
		p->link=NULL;
		if(ptr->info%2==0)
		{
			e++;
			if(head2==NULL)
			{
				head2=p;
				pt=head2;
			}
			else
			{
				pt->link=p;
				pt=p;
			}
		}
		else
		{
			o++;
			if(head3==NULL)
			{
				head3=p;
				po=head3;
			}
			else
			{
				po->link=p;
				po=p;
			}
		}
		ptr=ptr->link;
	}
}

void display()
{
	ptr=head->link;
	if(ptr==NULL)
	cout<<"list is empty";
	else
	{
		while(ptr!=NULL)
		{
			cout<<ptr->info<<ends;
			ptr=ptr->link;
		}
	}
}
void display1()
{
	ptr=head2->link;
	if(ptr==NULL)
	cout<<"list is empty";
	else
	{
		while(ptr!=NULL)
		{
			cout<<ptr->info<<ends;
			ptr=ptr->link;
		}
	}
}
void display2()
{
	ptr=head3->link;
	if(ptr==NULL)
	cout<<"list is empty";
	else
	{
		while(ptr!=NULL)
		{
			cout<<ptr->info<<ends;
			ptr=ptr->link;
		}
	}
}
main()
{
	int n,v;
	header=new node;
	header2=new node;
	header3=new node;
	cout<<"\nenter size of link list";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"enter value";
		cin>>v;
		create(v);
	}
	header->link=head;
	head=header;
	header->info=n;
	
	split();
	header2->link=head2;
	head2=header2;
	
	
	header3->link=head3;
	head3=header3;
	
	
	cout<<"\nheader="<<header->info<<endl;
	display();
	
	header2->info=e;
	header3->info=o;
	cout<<"\nheader2="<<header2->info<<endl;
	display1();
	cout<<"\nheader3="<<header3->info<<endl;
	display2();
	
	
}
