#include<stdio.h>
int main()
{
	int s1,s2,s3;
	printf("Enter the three sides of triangle\n");
	scanf("%d%d%d",&s1,&s2,&s3);
	if(s1+s2>s3 || s1+s3>s2 || s2+s3>s1)
	{
		 printf("triangle is valid\n");	
	}
	else
	{
		printf("not valid\n");
	}
    

	return 0;
}
