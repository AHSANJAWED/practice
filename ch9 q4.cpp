#include<stdio.h>
void swap(int *,int *,int *);
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	printf("%d%d%d",a,b,c);
	swap(&a,&b,&c);
	printf("%d%d%d",a,b,c);
	return 0;
}

void swap(int *x,int *y,int *z)
{
	int temp=*x;
	*x=*y;
	*y=*z;
	*z=temp;
}
