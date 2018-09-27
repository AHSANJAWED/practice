#include<stdio.h>
int main()
{
	float i,x;
	int y;
	for(y=1,x=5.5;x<=12.5; y++,x=x+0.5)
	{
		if(y<=6)
		{
			i=2+(y+0.5*x);
			printf("%f\n",i);
		}
		else
		{
			break;
		}
	}
	return 0;
}
