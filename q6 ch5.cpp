#include<stdio.h>
int main()
{
	int pick,i=1,com=0;
	while(i)
	{
		printf("Pick any matchstick between (1-21)\n");
	    scanf("%d",&pick);
	    com=pick-1;
	    if(com<pick)
	    printf("you lose you had picked last matchstick\n");
	    
	    printf("do you want to play again\n");
	    scanf("%d",&i);
		
	}
	
	return 0;
}
