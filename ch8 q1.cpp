#include<stdio.h>
int facto(int);
int main()
{
	int n;
	printf("Enter the no\n");
	scanf("%d",&n);
	int ans=facto(n);
	printf("factorial=%d",ans);
	return 0;
}

int facto(int p)
{
	int fact=1;
	for(int i=1; i<=p; i++)
	{
		fact=fact*i;
	}
	return fact;
	
}
