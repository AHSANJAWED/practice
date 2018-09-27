#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter is value of the axis of the point\n ");
	scanf("%d\n%d",&x,&y);
	if(x!=0 && y==0)
	{
		printf("the point is on X axis\n");
		
	}
	else if(x==0 && y!=0)
	{
			printf("the point is on Y axis\n");
	}
	else if(x==0 && y==0)
	{
			printf("the point is on orgin\n");
	}
	else
	{
			printf("the point is on space\n");
	}
	return 0;
}
