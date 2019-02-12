//samllest element in col of an array

#include<iostream>
using namespace std;
main()
{
	int i,j,k,p;
	int a[3][3];
	cout<<"enter array";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0,k=1;j<2,k<3;j++,k++)
		{
				if(a[i][j]>a[i][k])
				{
					p=j;
					int l=a[i][j];
					a[i][j]=a[i][k];
					a[i][k]=l;
				}
			
		}
		cout<<"smallest element in col "<<i+1<<"="<<a[i][p]<<endl;
	}
}
