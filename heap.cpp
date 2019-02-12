#include<iostream>
using namespace std;
int n,s=-1;
void insert(int heap[])
{
	int data,par,temp,ptr;
	s++;
	if(s==n)
	cout<<"overflow";
	else
	{
		cout<<"\nenter the data";
		cin>>data;
		heap[s]=data;
		ptr=s;
		par=(s-1)/2;
		while(par>=0 & heap[ptr]>heap[par])
		{
			temp=heap[ptr];
			heap[ptr]=heap[par];
			heap[par]=temp;
			ptr=par;
			par=(par-1)/2;
		}
	}
}
void shiftdown(int heap[],int last)
{
	int flag,par,ptr=0;
	flag=false;
	while(flag==false)
	{
		par=ptr;
		if((2*par+1)<=last & heap[2*par+1]>heap[ptr])
		ptr=2*par+1;
		if((2*par+2)<=last & heap[2*par+2]>heap[ptr])
		ptr=2*par+2;
		if(ptr==par)
		flag=true;
		else
		{
			int temp;
			temp=heap[par];
			heap[par]=heap[ptr];
			heap[ptr]=temp;
		}
	}
	cout<<"\ndone with shiftdown\n";
}
int del(int heap[])
{
	int item;
	item=heap[0];
	heap[0]=heap[n-1];
	n--;
    shiftdown(heap,n-1);
	//cout<<item<<" is deleted";
	return item;	
}
main()
{
	int v;
	cout<<"enter size of heap";
	cin>>n;
	v=n;
	int heap[n],b[n];
	for(int i=0;i<n;i++)
	insert(heap);
	for(int i=0;i<n;i++)
	cout<<heap[i]<<ends;
	for(int i=0;i<v;i++)
	b[i]=del(heap);
	cout<<"\n";
	for(int i=0;i<v;i++)
	{
		//	cout<<heap[i]<<ends;
		cout<<b[i]<<ends;
	}

}
