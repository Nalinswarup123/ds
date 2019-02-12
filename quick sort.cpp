#include<iostream>
using namespace std;
int par(int [],int,int);
int quick(int [],int,int);
int main()
{
	int a[50];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	quick(a,0,n-1);
	for(int i=0;i<n;i++)
	cout<<a[i];
}
int quick(int a[],int beg,int end)
{
	if(beg<end)
	{
		int k=par(a,beg,end);
		quick(a,beg,k-1);
		quick(a,k+1,end);
	}
}
int par(int a[],int b,int e)
{
	int loc=b,beg=b,end=e,temp;
	while(a[loc]<=a[end] && loc!=end)
	end=end-1;
	if(loc==end)
	return loc;
	else if(a[loc]>a[end])
	{
		temp=a[loc];
		a[loc]=a[end];
		a[end]=temp;
		loc=end;
	}
	while (a[loc]>=a[beg] and loc!=beg)
	beg=beg+1;
	if(loc==beg)
	return loc;
	else if(a[loc]<a[beg])
	{
		temp=a[loc];
		a[loc]=a[beg];
		a[beg]=temp;
		loc=beg;
	}
}
