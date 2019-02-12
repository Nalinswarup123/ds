#include<iostream>
using namespace std;
struct queue
{
	int front,rear,capacity;
	int *array;
};
queue *q;
void create(int k)
{
	q=new queue;
	q->capacity=k;
	q->array=new int[k];
	q->front=q->rear=-1;
}
void enque()
{
	int k;
	if(((q->rear+1)%q->capacity)==q->front)
	cout<<"queue is full";
	else
	{
		cout<<"\nenter element in queue";
		cin>>k;
		q->rear=(q->rear+1)%q->capacity;
		q->array[q->rear]=k;
		if(q->front==-1)
		q->front=q->rear;
	}
}
void deque()
{
	int data;
	if(q->front==-1)
	cout<<"queue is empty";
	else
	{
		if(q->front==q->rear)
		{
			data=q->array[q->front];
			q->array[q->front]=q->array[q->rear]=NULL;
			q->front=q->rear=-1;
			cout<<"\ndeleted item="<<data;
		}
		else
		{
			data=q->array[q->front];
			q->array[q->front]=NULL;
			q->front=(q->front+1)%q->capacity;
			cout<<"\ndeleted item="<<data;
		}
	}
}
void display()
{
	cout<<endl;
	for(int i=0;i<q->capacity;i++)
	cout<<q->array[i]<<ends;
}
main()
{
	int n,v,a;
	cout<<"enter size of queue";
	cin>>n;
	create(n);
	for(int i=0;i<n;i++)
	{
		enque();
	}
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
