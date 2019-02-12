#include<iostream>
using namespace std;
int c=0;
void tower(int n,char beg,char aux,char end)
{
     if(n==1)
     {
             cout<<beg<<"->"<<end<<endl;
			 c++;
             return;
     }
     else
     {
         tower(n-1,beg,end,aux);
         cout<<beg<<"->"<<end<<endl;
         c++;
         tower(n-1,aux,beg,end);
        
     }
}
int main()
{
    int n;
    cout<<"enter the value";
    cin>>n;
    tower(n,'a','b','c');
    cout<<"no of moves="<<c;
}
