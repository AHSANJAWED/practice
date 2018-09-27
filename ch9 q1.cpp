#include<stdio.h>
int sum(int *,int *,int *,int *,int *);
int main()
{
	int a,b,c,d,e,sm;
	printf("Enter all five numbers\n");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	sm=sum(&a,&b,&c,&d,&e);
	printf("The sum is=%d",sm);
	return 0;
}

int sum(int *a1,int *b1,int *c1,int *d1,int *e1)
{
	int st;
	st=*a1+*b1+*c1+*d1+*e1;
	return st;
}
