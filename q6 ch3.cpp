#include<stdio.h>
int main()
{
	int r,s,a;
	printf("Enter the age of ram shym ajay\n");
	scanf("%d\n%d\n%d",&r,&s,&a);
	
	if(r<s && r<a)
	{
		printf("ram is youngest\n");
	}
	else
	{
		if(s<r && s<a)
		{
		printf("shym is youngest\n");	
		}
		else
		{
				printf("ajaj is youngest\n");
		}
	}
	
	return 0;
}
