#include<stdio.h>
int main()
{
	for(int t=0; t<=24; t++)
	{
		if(t<12)
		{
			printf("%d am\n",t);
			if(t>=0 && t<6)
			{
				printf("Midnight\n");
				printf("\n");
			}
			else if(t>=6 && t<12)
			{
				printf("Morning\n");
				printf("\n");
			}
		}
		else
		{
			printf("%d pm\n",t);
			if(t>=12 && t<16)
			{
				printf("noon\n");
				printf("\n");
			}
			else
			{
				printf("Evening\n");
				printf("\n");
			}
		}
	}
	return 0;
	
}
