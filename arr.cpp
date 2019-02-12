#include<stdio.h>
main()
{
	int a[10],i;
	int s=0;
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
		{
			s=s+a[i];
		}
	}
	if(s==0)
	printf("-1");
	else
	printf("%d",s);
}
