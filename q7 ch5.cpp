#include<stdio.h>
int main()
{
	int no,a=1,countp=0,countn=0,countz=0;
	while(a)
	{
		printf("Enter any number\n");
		scanf("%d",&no);
		if(no>0)
		{
			countp++;
		}
		else if(no<0)
		{
			countn++;
		}
		else if(no==0)
		{
			countz++;
		}
		printf("do you want to continue\n");
		scanf("%d",&a);
	}
	printf("positive no=%d\nnegative no=%d\nzeros entered=%d\n",countp,countn,countz);
	return 0;
}
