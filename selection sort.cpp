#include<iostream>
using namespace std;
main()
{
	int i,j,n,min,temp;
	cout<<"enter the size of array";
	cin>>n;
	int a[n];
	cout<<"enter the array"<<endl;
	for(i=0;i<n;i++)
	cin>>a[i];
	
	for(i=0;i<(n-1);i++)
	{
		min=i;
		for(j=(i+1);j<n;j++)
		{
			if(a[min]>a[j])
			{
				min=j;
			}
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
		for(i=0;i<n;i++)
	cout<<a[i]<<endl;
	
	
	
}
