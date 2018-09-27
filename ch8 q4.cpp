#include<stdio.h>
void prime(int);
int main()
{
	int p;
	printf("Enter the number\n");
	scanf("%d",&p);
	prime(p);
	return 0;
}

void prime(int n)
{
	for(int i=2,a=0; a==0;)
	{
		if(i%2!=0 || i==2)
		{
			if(n%i==0)
			{
				n=n/i;
				printf("%d\n",i);
			}
			else if(n%i!=0)
			{
				i++;
			}
			a=n%i;
		}
	}
}
