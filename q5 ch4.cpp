#include<stdio.h>
int main()
{
	int s1,s2,s3;
	printf("Enter the sides of the a triangle\n ");
	scanf("%d%d%d",&s1,&s2,&s3);
	if((s1==90 || s2==90|| s3==90 )&& (s1+s2+s3==180))
	{
		printf("this is right angled triangle\n");
	}
	else if((s1==s2 && s2==s3 )&& (s1+s2+s3==180))
	{
		printf("Equilateral triangle\n");
	}
	else if((s1==s2 || s2==s3|| s1==s3 )&& (s1+s2+s3==180))
	{
		printf("This is an isosceles triangle\n");
	}
	else if((s1!=s2 && s2!=s3 && s1!=s3 )&& (s1+s2+s3==180))
	{
		printf("this is a scalene triangle\n");
	}
	else
	{
		printf("Wrong input\n");
	}
	return 0;
}
