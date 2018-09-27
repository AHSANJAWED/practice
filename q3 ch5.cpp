#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,z,x=1;
	
	while(x)
	{
		printf("Enter the two number\n");
	scanf("%d%d",&a,&b);
		z=pow(a,b);
		printf("value of 1st no to the power pf 2nd=%d\n",z);
		printf("do you want to continue\n");
		scanf("%d",&x);
	}
	return 0;
}
