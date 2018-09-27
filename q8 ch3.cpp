#include<stdio.h>
int main()
{
	int abs;
	printf("Enter any number\n");
	scanf("%d",&abs);
	if(abs<0)
	{
		abs=abs*(-1);
		printf("absolute value=%d",abs);
	}
	else
	{
			printf("absolute value=%d",abs);
	}
	return 0;
}
