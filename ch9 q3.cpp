#include<stdio.h>
#include<math.h>
int facto(int *);
int main()
{
	int x;
	scanf("%d",&x);
	for(int i=3; i<=21;i=i+2)
	{
		
		x=x+(pow(x,i)/facto(&i));
	}
	printf("%u\n",x);
}

int facto(int *n)
{
	int fact=1;
	for(int i=1; i<=*n; i++ )
	{
		fact=fact*i;
	}
	printf("%d",fact);
	return fact;
}

