#include<stdio.h>
#include<math.h>
int power (int,int);
int main()
{
	int a,b;
	printf("enter no\n");
	scanf("%d",&a);
	printf("Enter to be power number\n");
	scanf("%d",&b);
	int c=power(a,b);
	printf("%d to the power %d=%d\n",a,b,c);
}
int power(int x,int y)
{
	int d=pow(x,y);
	return d;
}

