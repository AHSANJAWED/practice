#include<stdio.h>
#include<math.h>
int main()
{
	float a,r,q;
	int n,p;
	for(int i=1; i<=10; i++)
	{
		printf("Enter principal,rate,year and compound set %d\n",i);
		scanf("%d%f%d%f",&p,&r,&n,&q);
		a=pow(p*(1+r/q),n*q);
		printf("Amount=%f\n",a);
	}
	return 0;
}
