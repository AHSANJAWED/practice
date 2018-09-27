#include<stdio.h>
int main()
{
	for(int i=1; i<=5; i++)
	{
		for(int j=1; j<=i; j++)
		{
			if(i==1)
			{
				printf("        %d",i);
				printf("\n");
			}
			if(i==2)
			{
				if(j==1)
				{
					printf("      %d    %d",j,j);
					printf("\n");
				}
			}
			if(i==3)
			{
				if(j==1)
				{
					printf("    %d",j);
				}
				else if(j==2)
				{
					printf("    %d",j);
					for(int k=1; k<=1; k++)
					{
						printf("    %d",k);
						
					}
					printf("\n");
				}
			}
			if(i==4)
			{
				if(j==1)
				{
					printf("  %d",j);
				}
				else if(j==3)
				{
					printf("    %d    %d",j,j);
					for(int l=1; l<=1; l++)
					{
						printf("    %d",l);
					}
					printf("\n");
				}
			
			}
			if(i==5)
			{
				if(j==1)
				{
					printf("%d",j);
				}
				else if(j==4)
				{
					printf("    %d",j);
					for(int n=6; n<=6; n++)
				     {
				     	printf("    %d",n);
					 }
					 printf("    %d",j);
					 for(int h=1; h<=1; h++)
					 {
					 	printf("    %d",h);
					 }
					 printf("\n");
				}
			}
		}
	
	}
	
	
	return 0;
}
