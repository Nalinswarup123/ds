#include<iostream>
using namespace std;
main()
{
	int n,m,i,j,b;
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
			if(a[i][j]>a[i][j+1])
			{
				int k=a[i][j];
				a[i][j]=a[i][j+1];
				a[i][j+1]=k;
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		cout<<a[i][j]<<ends;
		cout<<"\n";
		
	}
}
