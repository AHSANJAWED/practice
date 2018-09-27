#include<stdio.h>
int main()
{
	int l,b,area,peri;
	
	printf("Enter length & breadth of a rectangle\n");
	scanf("%d\n%d",&l,&b);
	area=l*b;
	peri=2*(l+b);
	
	if(area>peri)
	{
		printf("area of rectangle is greater than its perimeter\n");
	}
	else
	{
		printf("area of rectangle is smaller\n");	
	}
	return 0;
}
