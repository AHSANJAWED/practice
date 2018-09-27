#include<stdio.h>
int main()
{
	int hdn,ts;
	float cc;
	printf("Enter serially hardness,carbon content and tensile strength of the steel\n");
	scanf("%d%f%d",&hdn,&cc,&ts);
	
	if(hdn>50 && cc<0.7 && ts>5600)
	{
		printf("Grade 10\n");
	}
	else if(hdn>50 && cc<0.7 || ts>5600)
	{
		printf("Grade 9\n");
	}
		else if(hdn>50 || cc<0.7 && ts>5600)
	{
		printf("Grade 8\n");
		
	}
		else if(hdn>50 && ts>5600||cc<0.7 )
	{
		printf("Grade 7\n");
	}
	else if(hdn>50 || cc<0.7 || ts>5600)
	{
		printf("Grade 6\n");
		
	}
	else
	{
		printf("Grade 5\n");
	}
	
	
	return 0;
}
