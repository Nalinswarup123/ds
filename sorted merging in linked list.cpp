#include<iostream>
using namespace std;
struct node
{
	int info;
	node *link;
};
node *head,*head1,*head2,*ptr,*p,*poin,*pt;
int c=1;
void create(int i)
{
	p=new node;
	p->link=NULL;
	p->info=i;
	if(c==1)
	{
		if(head1==NULL)	
		{
		head1=p;
		ptr=p;
		}
	    else
		{
		ptr->link=p;
		ptr=p;
		}
	}
	else
	{
		if(head2==NULL)	
		{
		head2=p;
		ptr=p;
		}
		else
		{
		ptr->link=p;
		ptr=p;
		}
		
	}
	
}
void display()
{
	ptr=head2;
	while(ptr!=NULL)
	{
		cout<<ptr->info<<ends;
		ptr=ptr->link;
	}
}
void menu()
{
	int n,v;
	cin>>n;
	cout<<"Enter elements in the linked list";
	for(int i=0;i<n;i++)
	{
		cin>>v;
		create(v);
	}
}
/*void sort()
{
	
}*/
main()
{
	int k,n1;
	cout<<"Enter size of first linked list";
 	menu();
	c++;
	cout<<"Enter size of second linked list";
	menu();
	ptr->link=head1;
	display();
	pt=head2;
	
	while(pt->link!=NULL)
	{
		poin=pt->link;
		while(poin!=NULL)
		{
			if((pt->info)>(poin->info))
		    {
			k=pt->info;
			pt->info=poin->info;
			poin->info=k;
		    }
		    poin=poin->link;
		}
		pt=pt->link;
	}
	cout<<endl<<"Sorted Linked list is"<<endl;
	display();
}
