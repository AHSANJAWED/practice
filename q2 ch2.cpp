#include<stdio.h>
int main()
{
	int num,a1,a2,a3,a4,a5,rev;
	scanf("%d",&num);
	a1=num%10; num=num/10;
	a2=num%10; num=num/10;
	a3=num%10; num=num/10;
	a4=num%10; num=num/10;
	a5=num%10;
	rev=a1*10000+a2*1000+a3*100+a4*10+a5*1;
	printf("reverse=%d\n",rev);
	return 0;
}
