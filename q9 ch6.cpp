#include<stdio.h>
#include<math.h>
int main()
{
	float x,sum=0.0;
	
	printf("ENter the number to find is natural lagorithm\n");
	scanf("%d",&x);
	for(int i=1; i<=7;i++)
	{
		sum=sum+pow(((x-1)/x),i);
	}
	printf("sum=%f\n",sum);
	return 0;
}
