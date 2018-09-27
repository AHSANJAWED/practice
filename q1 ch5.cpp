#include<stdio.h>
int main()
{
	int i=0,hr,paid;
	while(i<12)
	{
		printf("Enter the overtime of worker no=%d\n",i);
		scanf("%d",&hr);
		if(hr>40)
		{
			paid=hr*12;
		}
		printf("overtime amount=%d\n",paid);
		i++;
		paid=0;
		printf("\n");
	}
	return 0;
}
