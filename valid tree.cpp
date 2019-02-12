#include<iostream>
using namespace std;
int tree[20],n;
int ptr,par;
void check(int b[])
{
	ptr=par=0;
	while(par!=n)
	{
		if(tree[2*par+1]<tree[par] & tree[2*par+2]>tree[par])
		par=par+1;
		else
		{
			cout<<"not valid";
			return;
		}
		if(2*par+2==n)
		cout<<"valid";
	
	}
	//if(par==n)
	//cout<<"valid";
}
main()
{
	
	cout<<"enter size of tree";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>tree[i];
	}
}
