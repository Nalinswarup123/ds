#include<iostream>
using namespace std;
int i=0,c1=0,c2=0,ldepth=0,rdepth=0;
struct node
{
	int info;
	node *left,*right;
};
node *root,*ptr,*p;
void insert()
{
	int v;
	cout<<"enter data: ";
	cin>>v;
	p=new node;
	p->left=p->right=NULL;
	p->info=v;
	if(root==NULL)
	root=p;
	else 
	{
		ptr=root;
		while(ptr!=NULL)
		{
			if(v<ptr->info)
			{
				if(ptr->left==NULL)
				{
					ptr->left=p;
					ptr=NULL;
				}
				else
				ptr=ptr->left;
			}
			else if(v>ptr->info)
			{
				if(ptr->right==NULL)
				{
					ptr->right=p;
					ptr=NULL;
				}
				else
				ptr=ptr->right;
			}
		}
		
	}
	
}
void search(node *ptr,int v)
{
	if(ptr==NULL)
	cout<<"\nnot found\n";
	else if(v<ptr->info)
	{
		i++;
		search(ptr->left,v);
	}
	
	else if(v>ptr->info)
	{
		i++;
		search(ptr->right,v);
	}
		
}
void inorder(node *ptr)
{
	if(ptr!=NULL)
	{
		inorder(ptr->left);
		cout<<ptr->info<<ends;
		inorder(ptr->right);
	}
	
}
int maxlength(node *ptr)
{
	ldepth=maxlength(ptr->left);
	rdepth=maxlength(ptr->right);
	if(ldepth>rdepth)
	return (ldepth+1);
	else
	return (rdepth+1);
}
main()
{
	int n,a,b;
	cout<<"enter size of tree";
	cin>>n;
	while(n>0)
	{
	insert();
	n--;
	}
	cout<<"\n";
	inorder(root);
	cout<<"\nenter two elements";
	cin>>a>>b;
	search(root,a);
	c1=i;
	i=0;
	search(root,b);
	c2=i;
	if(c1==c2)
	cout<<"cousins";
	else
	cout<<"not cousins";
	cout<<c1;
//	cout<<maxlength(root);
}
