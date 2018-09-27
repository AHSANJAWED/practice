#include<stdio.h>
int main()
{
	for(int i=1; i<=7;i++)
	{
	//	int j=65;
		for(int j=65; j<=71; j++)
		{
			if(i==1)
			{
				if(j==71)
				{
					printf("%c",j);
					for(int k=70; k>=65; k--)
					{
						printf("%c",k);
					}
					printf("\n");
				}
				else
				{
					printf("%c",j);
				}
			}
			
			//2nd row
		else if(i==2)
			{
				//printf("\n");
				if(j==70)
				{
					printf("%c",j);
					printf(" ");
					for(int ka=70; ka>=65; ka--)
					{
						printf("%c",ka);
					}
					printf("\n");
					break;
				}
				else
				{
					printf("%c",j);
				}
			}
			//3rd row
			else if(i==3)
			{
				//printf("\n");
				if(j==69)
				{
					printf("%c",j);
					printf("   ");
					
					for(int kaa=69; kaa>=65; kaa--)
					{
						printf("%c",kaa);
					}
					printf("\n");
					break;
				}
				else
				{
					printf("%c",j);
				}
			}
			//4th row
			else if(i==4)
			{
				//printf("\n");
				if(j==68)
				{
					printf("%c",j);
					printf("     ");
					for(int kaaa=68; kaaa>=65; kaaa--)
					{
						printf("%c",kaaa);
					}
					printf("\n");
					break;
				}
				else
				{
					printf("%c",j);
				}
			}
			//5th
			else if(i==5)
			{
				//printf("\n");
				if(j==67)
				{
					printf("%c",j);
					printf("       ");
					for(int kaaaa=67; kaaaa>=65; kaaaa--)
					{
						printf("%c",kaaaa);
					}
					printf("\n");
					break;
				}
				else
				{
					printf("%c",j);
				}
			}	
			//6th
			else if(i==6)
			{
				//printf("\n");
				if(j==66)
				{
					printf("%c",j);
					printf("         ");
					for(int kaaaaa=66; kaaaaa>=65; kaaaaa--)
					{
						printf("%c",kaaaaa);
					}
					printf("\n");
					break;
				}
				else
				{
					printf("%c",j);
					
				}
			}
			//7th
			else if(i==7)
			{
				//printf("\n");
				if(j==65)
				{
					printf("%c",j);
					printf("           ");
					for(int kaaaaaa=65; kaaaaaa>=65; kaaaaaa--)
					{
						printf("%c",kaaaaaa);
					}
					printf("\n");
					break;
				}
				else
				{
					printf("%c",j);
					
				}
			}		
		}
		
			
	
	}
	return 0;
}
