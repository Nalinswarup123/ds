#include<iostream>
using namespace std;
main()
{
	int n,m,i,j,b,k,l;
	cout<<"enter size of array";
	cin>>n>>m;
	int a[n][m];
	cout<<"enter array";
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		cin>>a[i][j];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m-1;j++)
		{
			for(l=j;l<m;l++)
			{
				if(i%2==0)
				{
					if(a[i][j]>a[i][l])
			{
				k=a[i][j];
				a[i][j]=a[i][l];
				a[i][l]=k;
			}
				}
			}
		}
	}
/*	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		cout<<a[i][j]<<ends;
		cout<<"\n";	
	}*/
	for(i=0;i<m;i++)
	{
		for(j=0;j<n-1;j++)
		{
			for(l=j;l<n;l++)
			{
				if(i%2!=0)
				{
					if(a[j][i]<a[l][i])
			{
				k=a[j][i];
				a[j][i]=a[l][i];
				a[l][i]=k;
			}
				}	
			}
		}
	}
	cout<<"\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		cout<<a[i][j]<<ends;
		cout<<"\n";
	}	
}
