#include<iostream>
using namespace std;
struct node
{
	int info;
	node *link;
};
node *p,*front,*rear;
int c=0,n;
void enque()
{
	int k;
	if(c==n)
	cout<<"overflow";
	else
	{
		cout<<"enter element";
		cin>>k;
		p=new node;
		p->info=k;
		p->link=NULL;
		if(front==NULL)
		{
			front=rear=p;
			c++;
		}
		else
		{
			rear->link=p;
			rear=p;
			c++;
		}
	}
		
		
}
void deque()
{
	int data;
	if(front==NULL)
	cout<<"underflow";
	else
	{
		if(front==rear)
		{
			data=front->info;
			front=rear=NULL;
			cout<<"\ndeleted item="<<data;
			c--;
		}
		else
		{
			data=front->info;
			front=front->link;
			cout<<"\ndeleted item="<<data;
			c--;
		}
	}
}
void display()
{
	if(front==NULL)
	cout<<"queue is empty";
	else
	{
		p=front;
		while(p!=NULL)
		{
			cout<<p->info<<ends;
			p=p->link;
		}
	}
	
}
main()
{
	int a;
	cout<<"enter size of queue:";
	cin>>n;
	cout<<"\n1)enque\n2)deque\n3)display\n4)exit\n";
	while(1)
	{
		cout<<"\nenter your choice";
		cin>>a;
		switch(a)
		{
			case 1:
				enque();
				break;
			case 2:
				deque();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
			default:
				cout<<"\nenter valid choice";
		}
			
	}
}
