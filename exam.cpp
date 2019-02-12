#include <iostream>
using namespace std;
void display();
void calc();
void dis();
struct node
{
	int info;
	node *flink,*plink;
}*p,*head=NULL,*tail=NULL,*ptr=NULL,*pre=NULL,*avl,*pp;
int main()
{

	cout<<"How many numbers to enter?"<<endl;
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{

		p=new node;
		
		
		if(head==NULL)
		{
			head=p;//ASSINING FIRST NODE TO head 
		
		}
		else
		{
			ptr->flink=p;
		}
		pre=ptr;
		ptr=p;
		cin>>ptr->info;
		ptr->plink=pre;
		ptr->flink=NULL;
	}
	tail=ptr;//ASSINING LAST NODE TO TAIL 
	display();
	calc();
	dis();
}
void display()
{
	ptr=head;
	cout<<"from head"<<endl;
	while(ptr!=NULL)
	{
		cout<<ptr->info<<"  ";
		ptr=ptr->flink;
	}
	cout<<endl;
	ptr=tail;
	cout<<endl<<"from tail"<<endl;
	while(ptr!=NULL)
	{
		cout<<ptr->info<<"  ";
		ptr=ptr->plink;
	}
}
void calc()
{
	ptr=head;
	while(ptr->flink!=NULL)
	{
		if(ptr->info%2!=0)
		{
		if(ptr==head)
		{
			head=ptr->flink;
		}
		else
		{
			pre->flink=ptr->flink;
		}
		if(avl==NULL)
		{
			avl=ptr;
			avl->plink=NULL;
			pp=ptr;
		}
		else
		{
			pp->flink=ptr;
			pp=ptr;
			pp->flink=NULL;	
		}
		pre=head;
		ptr=head;
		continue;
		}
		pre=ptr;
		ptr=ptr->flink;
	}
	if(ptr->info%2!=0)
	{
		if(ptr==head)
		{
			head=ptr->flink;
			ptr->flink=NULL;
		}
		else
		{
			pre->flink=ptr->flink;
		}
		if(avl==NULL)
		{
			avl=ptr;
			avl->flink=NULL;
			pp=NULL;
		}
		else
		{
			pp->flink=ptr;
			pp=ptr;
			pp->flink=NULL;	
		}
	}
	}
	void dis()
	{
		pre=NULL;
		ptr=head;
		cout<<endl<<"After calculating";
		cout<<endl<<"from head"<<endl;
		while(ptr!=NULL)
		{
		cout<<ptr->info<<"  ";
		ptr->plink=pre;
		pre=ptr;
		ptr=ptr->flink;
		}
		ptr=avl;
		while(ptr!=NULL)
		{
		cout<<ptr->info<<"  ";
		ptr->plink=pre;
		pre=ptr;
		ptr=ptr->flink;
		}
		cout<<endl;
		tail=pre;
		cout<<"from tail"<<endl;
		while(pre!=NULL)
		{
			cout<<pre->info<<"  ";
			pre=pre->plink;
		}
		
	
	}
	
