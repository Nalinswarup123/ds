#include<iostream>
using namespace std;

int partition(int a[],int &low,int &high)
{
	int i=low-1;
	int pivot=a[high];
	int temp;
	for(int j=low;j<high;j++)
	{
		if(a[j]<=pivot)
		{
			i=i+1;
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			
		}
	}
	temp=a[i+1];
	a[i+1]=a[high];
	a[high]=temp;
    return i+1;
		
}

void quick(int a[],int &low,int &high)
{
	int pi,temp;
	if(low<high)
	{
	    pi=partition(a,low,high);
	   temp=pi-1;
		quick(a,low,(temp));
		temp=pi+1;
		quick(a,temp,high);
	}
}

main()
{
	int a[50],n,i,low,high,t;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
	t=n-1;
	low=0;
	quick(a,low,t);
	cout<<endl;
		for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
	return 0;
}


