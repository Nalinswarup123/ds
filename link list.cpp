#include<iostream>
using namespace std;

struct node
{
	int info;
	node *link;
};
node *head,*ptr,*t,*p;

void create(int i)
{
	p=new node;
	p->info=i;
	p->link=NULL;
    if(head==NULL)
	{
	head=p;
    //ptr=head;
	}
	else
	{
		//ptr=p;
		p->link=head;
		head=p;
		//ptr->link=p;
		//ptr=p;
	}
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
			ptr=ptr->link;
		}
	}
}

void del()
{
	int n,c;
	ptr=head;
	cout<<"1)delete according to element\n2)delete according to position\nEnter your choice";
	cin>>c;
	
	if(c==1)
	{
		if(ptr==NULL)
		cout<<"\nlist is already empty\n";
		else
		{
			cout<<"\nenter the element to delete";
			cin>>n;
			if(ptr->link->info==n)
			{
				//t=ptr;
				//t=t->link;
				ptr=ptr->link;
				head=ptr;
			}
			else
			{
				while(ptr->link->info!=n)
			{
				t=ptr;
				ptr=ptr->link;
				if(ptr==NULL)
				{
					cout<<"no such element exists";
					return;
				}
			}
			t->link=ptr->link;
			}
			
		}
	}
	
	else
	{
		if(ptr==NULL)
		cout<<"\nlist is already empty\n";
		else
		{
			cout<<"Enter position of element to be deleted";
			cin>>n;
			if(n==1)
			head=head->link;
			else
			{
				for(int i=1;i<n-1;i++)
			    {
				ptr=ptr->link;
				}
			t=ptr->link;
			ptr->link=t->link;
			}
			
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
	del();
	display();
}

