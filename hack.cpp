#include<stdio.h>
#include<string.h>
main()
{
	char s[20];
	gets(s); 
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]=='r')
			printf("%d ",i);
	}
}
