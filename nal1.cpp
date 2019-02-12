#include<iostream>
using namespace std;
main()
{
	int n,i,j,c;
	int *p;
	cout<<"enter size of array";
	cin>>n;
	int a[n];
	p=a;
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n;i++)
	{
		c=0;
		for(j=0;j< n;j++)
		{
			if(*p==a[j])
			c++;
		}
		
		cout<<"\n element "<<*p<<" is "<<c<<" times";
		p++;
		
	}
}
