#include<stdio.h>
int main()
{
	int i,sum=0,cube,num=0,neen=0,a;
	for(i=1; i<=500; i++)
	{
		neen=i;
		num=i;
		sum=0;
		while(num!=0)
		{
			//cube=0;
			a=num%10;
			num=num/10;
			//cube=a*a*a;
			
			sum=sum+(a*a*a);
		}
		if(neen==sum)
		printf("\n%d is amstrong no",neen);
	}
	return 0;
}
