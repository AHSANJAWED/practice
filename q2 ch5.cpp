#include<stdio.h>
int main()
{
	int fact=1,no;
	printf("ENter the no\n");
	scanf("%d",&no);
	while(no>=1)
	{
		fact=fact*no;
		no--;
	}
	printf("Factorial of given no is%d\n",fact);
	
	return 0;
}
