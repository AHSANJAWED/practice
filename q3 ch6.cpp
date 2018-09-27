#include<stdio.h>
int main()
{
	float i,j,sum=0,fact=1;
	for(i=1,j=1;i<=7;i++,j++)
	{
		fact=fact*j;
		sum=sum+i/fact;
		printf("%f\n",sum);
	}
	
	return 0;
}
