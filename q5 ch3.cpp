#include<stdio.h>
int main()
{
	int num,n,a1,a2,a3,a4,a5,rev;
	printf("enter 5 digit no\n");
	scanf("%d",&num);
	n=num;
	a1=n%10; n=n/10;
	a2=n%10; n=n/10;
	a3=n%10; n=n/10;
	a4=n%10; n=n/10;
	a5=n%10;
	rev=a1*10000+a2*1000+a3*100+a4*10+a5*1;
	if(rev==num)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
	
	
	return 0;
}
	
	

