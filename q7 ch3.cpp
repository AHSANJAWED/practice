#include<stdio.h>
int main()
{
	int s1,s2,s3,sum;
	printf("Enter three sides of a triangle\n");
	scanf("%d\n%d\n%d",&s1,&s2,&s3);
	sum=s1+s2+s3;
	if(sum==180)
	{
		printf("this triangle is valid\n");
		
	}
	else
	{
		printf("this is not valid\n");
	}
	return 0;
}
