#include<iostream>
using namespace std;
 main()
{
	int n[10],c=0;
	cout<<"enter the real NUMBERS";
	for(int i=0;i<10;i++)
	{
		cin>>n[i];
	}
	float avgp=0,avgn=0;
	for(int i=0;i<10;i++)
	{
		if(n[i]>0)
		{
		 avgp=avgp+n[i];
	     c++;
		}
		else
		 avgn=avgn+n[i];
	}
	avgp=(avgp/c);
	avgn=(avgn/(10-c));
	cout<<"aveaage of +ve no's"<<avgp<<endl;
	cout<<"avg of -ve no's"<<avgn;
}

