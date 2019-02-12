//samllest element in col of an array

#include<iostream>
using namespace std;
main()
{
	int i,j,k,p,q,r,l;
	cout<<"enter row nd column";
	cin>>q>>r;
	cout<<"enter array";
	int a[q][r];
	for(i=0;i<q;i++)
	{
		for(j=0;j<r;j++)
		{
			cin>>a[i][j];
		}
	}
	
	for(i=0;i<q;i++)
	{
		for(j=0,k=1;j<r-1,k<r;j++,k++)
		{
				if(a[i][j]>a[i][k])
				{
					p=j;
					l=a[i][j];
					a[i][j]=a[i][k];
					a[i][k]=l;
				}
			
		}
		cout<<"smallest element in col "<<i+1<<"="<<a[i][p]<<endl;
	}
}
