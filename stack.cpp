#include<iostream>
using namespace std;
/*struct stack
{
	int cap,top;
	int *array;
};
stack *s;*/

/*void create(int i)
{
	s=new stack;
	s->cap=i;
	s->top=-1;
	s->array=new int[i];
}*/
void push(int a)
{
	int v;
	if(s->top==s->cap-1)
	cout<<"overflow";
	else
	{
		for(int k=0;k<s->cap;k++)
		{
		cout<<"enter value";
		cin>>v;
		s->top=s->top+1;
		s->array[s->top]=v;
		}
	
	}
}
void pop()
{
	if(s->top==-1)
	cout<<"underflow";
	else
	{
		cout<<endl<<s->array[s->top];
		s->top=s->top-1;
	}
}
main()
{
//	int n;
	cout<<"enter size of stack";
	cin>>n;
	int stack[n];
//	create(n);
	push(stack);
	push();
	pop();
	pop();
	for(int i=0;i<n;i++)
	cout<<s->array[i];
}
