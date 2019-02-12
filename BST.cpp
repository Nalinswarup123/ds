#include<iostream>
using namespace std;
struct node
{
	int info;
	node *left,*right;
};
node *root,*ptr,*p;
node *create(int v)
{
	p=new node;
	p->info=v;
	p->left=p->right=NULL;
	return(p);
}
void insert(node *ptr,int v)
{
	cout<<"called\n";
	if(root==NULL)
	root=create(v);
	else if(v<ptr->info)
	{
		if(ptr->left==NULL)
		ptr->left=create(v);
		else
		insert(ptr->left,v);
	}
	else if(v>ptr->info)
	{
		if(ptr->right==NULL)
		ptr->right=create(v);
		else
		insert(ptr->right,v);
	}
}
void search(node *ptr,int v)
{
	if(ptr==NULL)
	cout<<"\nnot found\n";
	else 
	{
		if(ptr->info==v)
		cout<<"\nfound\n";
		else if(v<ptr->info)
		search(ptr->left,v);
		else
		search(ptr->right,v);

	}
		
	
}
main()
{
	int v;
	cout<<"enter\n";
	cin>>v;
	insert(root,v);
	cout<<"enter\n";
	cin>>v;
	insert(root,v);
	cout<<"enter\n";
	cin>>v;
	insert(root,v);
	cout<<"enter\n";
	cin>>v;
	insert(root,v);
	cout<<"enter\n";
	cin>>v;
	insert(root,v);
	cout<<"enter\n";
	cin>>v;
	insert(root,v);
	cout<<"enter\n";
	cin>>v;
	insert(root,v);
	cout<<"enter t search\n";
	cin>>v;
	search(root,v);
	cout<<"enter t search\n";
	cin>>v;
	search(root,v);
	cout<<"enter t search\n";
	cin>>v;
	search(root,v);
	cout<<"enter t search\n";
	cin>>v;
	search(root,v);
	cout<<"enter t search\n";
	cin>>v;
	search(root,v);
	cout<<"enter t search\n";
	cin>>v;
	search(root,v);
	cout<<"enter t search\n";
	cin>>v;
	search(root,v);
	cout<<"enter t search\n";
	cin>>v;
	search(root,v);
}

