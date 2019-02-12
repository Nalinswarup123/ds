#include<stdio.h>
struct student
{
	int roll,fees,d,m,y;
	char name[20];
}s;
main()
{
	printf("enter name:");
	gets(s.name);
	printf("enter roll no:");
	scanf("%d",&s.roll);
	printf("enter fees:");
	scanf("%d",&s.fees);
	printf("enter due date:");
	scanf("%d %d %d",&s.d,&s.m,&s.y);
	
	printf("name:");
	puts(s.name);
	printf("\nroll no:");
	printf("%d",s.roll);
	printf("\nfees:");
	printf("%d",s.fees);
	printf("\ndue date:");
	printf("%d %d %d",s.d,s.m,s.y);
}
