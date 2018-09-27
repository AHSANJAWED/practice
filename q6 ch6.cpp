#include<stdio.h>
int main()
{
	int no,temp;
	printf("Enter the number \n");
	scanf("%d",&no);
	for(int i=1; i<=10; i++)
	{
		temp=no*i;
		printf("%d*%d=%d\n",no,i,temp);
	}
	return 0;
}
