#include<stdio.h>
int main()
{
	float p=100000;
	float x;
	for(int i=10; i>=1; i--)
	{
		x=0.1*p;
		p=p-x;
		printf("Population in %d year=%f\n",i,p);
	}
	return 0;
}
