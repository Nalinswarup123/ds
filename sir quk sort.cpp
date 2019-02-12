#include<iostream>
using namespace std;
int par(int [],int,int,int);
int quick(int [],int,int,int);
int main()
{
	int a[50];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	quick(a,0,n-1,n-1);
	for(int i=0;i<n;i++)
	cout<<a[i];
}
int quick(int a[],int beg,int end,int ls)
{
	if(beg<end)
	{
		int k=par(a,beg,end,ls);
		quick(a,beg,k-1,ls);
		quick(a,k+1,end,ls);
	}
}
int par(int a[],int b,int e,int ls)
{
	int loc=b,beg=b,end=e,temp,l;
	l=ls;
	int c=0;
	while(a[loc]<=a[l] && loc!=l)
	l=l-1;
	if(loc==l)
	return loc;
	else if(a[loc]>a[l])
	{
		temp=a[loc];
		a[loc]=a[l];
		a[l]=temp;
		loc=l;
	}
	loc=e;
	while (a[loc]>=a[c] and loc!=c)
	c=c+1;
	if(loc==c)
	return loc;
	else if(a[loc]<a[c])
	{
		temp=a[loc];
		a[loc]=a[c];
		a[c]=temp;
		loc=beg;
	}
}
