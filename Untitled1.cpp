#include<iostream>
using namespace std;
 main()
{
	int n[10];
	cout<<"enter the array";
	for(int i=0;i<10;i++)
	{
		cin>>n[i];
	}
	cout<<endl<<"even no are";
	for(int i=0;i<10;i++)
	{
		if((n[i]%2)==0)
		{
			cout<<n[i];
		}
	}
	}
