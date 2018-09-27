#include<stdio.h>
int main()
{
	int no, octal;
	printf("Enter the integer no\n");
	scanf("%d",&no);
	int temp=no,c=no,p;
	while(temp!=0)
	{
		c=no%8;
		temp=temp/8;	
	}
	
	return 0;
}
