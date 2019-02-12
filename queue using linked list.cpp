#include<iostream>
using namespace std;
struct node
{
	int info;
	node *link;
};
node *p;
struct queue
{
	node *front,*rear;
	int capacity;
};
queue *q;
void create(int k)
{
	q=new queue;
	q->front=new node;
	q->rear=new node;
	q->capacity=k;
	q->front->info=q->rear->info=-1;
}
void enque()
{
	int k;
	if(((q->rear->info+1)%q->capacity)==q->front->info)
	cout<<"queue is full\n";
	else
	{
		cout<<"\nenter element in queue";
		cin>>k;
		p=new node;
		p->info=k;
		p->link=NULL;
		q->rear->info=(q->rear->info+1)%q->capacity;
		if(q->front->info==-1)
		{
			q->front->info=0;
			q->rear->link=p;
			q->front->link=p;
		}
		else
		{
			q->rear->link->link=p;
			q->rear->link=p;
		}
		
	}
}
void deque()
{
	int data;
	if(q->front->info==-1)
	cout<<"queue is empty";
	else
	{
		if(q->front->info==q->rear->info)
		{
			data=q->front->link->info;
			q->front->link=q->rear->link=NULL;
			q->front->info=q->rear->info=-1;
			cout<<"\ndeleted item="<<data;
		}
		else
		{
			data=q->front->link->info;
			q->front->link=q->front->link->link;
			q->front->info=(q->front->info+1)%q->capacity;
		}
	}
}
void display()
{
	if(q->front->info==-1)
	cout<<"underflow";
	else
	{
		p=q->front->link;
	while(p!=NULL)
	{
		cout<<p->info<<ends;
		p=p->link;
	}
	}
	
}
main()
{
	int n,a;
	cout<<"enter size of queue:";
	cin>>n;
	create(n);
	cout<<"\n1)enque\n2)deque\n3)display\n4)rear nd front\n5)exit\n";
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
				cout<<"front="<<q->front->info<<ends<<"rear="<<q->rear->info;
				break;
			case 5:
				exit(0);
			default:
				cout<<"\nenter valid choice";
		}
			
	}
}
