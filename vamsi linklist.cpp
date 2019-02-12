#include<iostream>
using namespace std;
int c1=0,c2=0;
struct node
{
	int info;
	node *left,*right;
};
node *root,*ptr,*p,*t;
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
	else if(ptr->info==v)
	cout<<"\nfound\n";
	else if(v<ptr->info)
	search(ptr->left,v);
	else if(v>ptr->info)
	search(ptr->right,v);	
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
void postorder(node *ptr)
{
	if(ptr!=NULL)
	{
		postorder(ptr->left);
		postorder(ptr->right);
		cout<<ptr->info<<ends;
	}
	
}
void preorder(node *ptr)
{
	if(ptr!=NULL)
	{
		cout<<ptr->info<<ends;
		preorder(ptr->left);
		preorder(ptr->right);
	}

}
node *max(node *ptr)
{
	while(ptr->right!=NULL)
	{
		ptr=ptr->right;
	}
	return ptr;
}
node *del(node *ptr,int data)
{
	if(ptr==NULL)
	 cout<<"Tree doesnt exxist";
	else if(data<ptr->info)
	 ptr->left=del(ptr->left,data);
	else if(data>ptr->info)
	 ptr->right=del(ptr->right,data);
	else
	{
		if(ptr->left!=NULL && ptr->right!=NULL)
		{
			t=max(ptr->left);
			ptr->info=t->info;
			ptr->left=del(ptr->left,t->info);
		}
		else if(ptr->left==NULL && ptr->right==NULL)
		{
			delete(ptr);
			ptr=NULL;
		}
		else
		{
			if(ptr->left==NULL)
			{
				p=ptr;
				ptr=ptr->right;
				delete(p);
			}
			else
			{
				p=ptr;
				ptr=ptr->left;
				delete(p);
			}
		}
	}
	return(ptr);
}
main()
{
	int v,n;
	cout<<"1)insert\n2)search\n3)display\n4)delete\n5)exit\n";
	while(1)
	{
		cout<<"enter your choice:";
		cin>>v;
		switch(v)
		{
			case 1:
				cout<<"enter size of tree";
				cin>>n;
				while(n>0)
				{
					insert();
					n--;
				}
				break;
			case 2:
				cout<<"enter data to search";
				cin>>n;
				search(root,n);
				break;
			case 3:
				cout<<"1)inorder\n2)preorder\n3)postorder\n";
				cin>>n;
				if(n==1)
				inorder(root);
				else if(n==2)
				preorder(root);
				else
				postorder(root);
				break;
			case 4:
				cout<<"enter data to delete";
				cin>>n;
				del(root,n);
				break;
			case 5:
				exit(0);
			default:
				cout<<"enter valid choice\n";
		}
	}
}

