#include<iostream>
using namespace std;
int partition(int a[],int low,int high)
{
	int i,j,t,pivot;
	i=low-1;
	pivot=a[high];
	for(j=low;j<high;j++)
	{
		if(a[j]<=pivot)
		{
			i++;
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
		
	}
	t=a[i+1];
	a[i+1]=a[high];
	a[high]=t;
	return(i+1);
}
void quicksort(int a[],int low,int high)
{
	int pi;
	if(low<high)
	{
		pi=partition(a,low,high);
		quicksort(a,low,pi-1);
		quicksort(a,pi+1,high);
	}
}
main()
{
	int a[50];
	int n;
	cout<<"enter no of elements to be inserted";
	cin>>n;
	cout<<"enter elements";
	for(int i=0;i<n;i++)
	cin>>a[i];
	quicksort(a,0,n-1);
	for(int i=0;i<n;i++)
	cout<<a[i]<<ends;
}
