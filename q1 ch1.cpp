#include<stdio.h>
int main()
{
	int sal;
	float gross;
	printf("Enter the ramesh basic salary");
	scanf("%d",&sal);
	float d=sal*0.4;
	float h=sal*0.2;
	gross=sal+d+h;
	printf("Gross salary is%f\n",gross);
	return 0;
}
