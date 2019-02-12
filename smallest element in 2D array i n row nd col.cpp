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
		b=a[i][0];
		for(j=0;j<m;j++)
		{
			if(b>a[i][j])
			b=a[i][j];
		}
		cout<<"Smallest element in row"<<i+1<<" = "<<b<<endl;
	}
	
	for(i=0;i<m;i++)
	{
		b=a[0][i];
		for(j=0;j<n;j++)
		{
			if(b>a[j][i])
			b=a[j][i];
		}
		cout<<"Smallest element in col"<<i+1<<" = "<<b<<endl;
	}
}
