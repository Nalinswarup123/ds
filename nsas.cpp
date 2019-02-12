#include<iostream>
using namespace std;
main()
{
	int n,i,j,c;
	cout<<"enter size of array";
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	
	for(i=0;i<n;i++)
	{
		c=0;
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j])
			c++;
		}
		int k=a[i];
		
		cout<<"\nelement"<<a[i]<<" is "<<c<<"times";
	}
}
