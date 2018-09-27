#include<stdio.h>
int main()
{
	int yrs;
	printf("Enter year\n");
	scanf("%d",&yrs);
	
	if(yrs%4==0)
	{
		printf("this is leap year\n");
	}
	else
	printf("not leap year\n");
	return 0;
}
