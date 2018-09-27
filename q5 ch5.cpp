#include<stdio.h>
int main()
{
	int no=1,temp1,temp2,temp3,a;
	printf("Armstrong numbers between (1-500)\n");
	while(no<=500)
	{
		a=no;
		
		temp1=a%10; a=a/10;
		 temp2=a%10; a=a/10;
		 temp3=a%10;
		int am=temp1*temp1*temp1+temp2*temp2*temp2+temp3*temp3*temp3;
		if(no==am)
		{
			printf("%d is amstrong no\n",no);
		}
		
		no++;
	}
	return 0;
}
