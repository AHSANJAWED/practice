#include<stdio.h>
int main()
{
for(int num=3; num<=300; num++)
{
	for(int i=2; i<num;i++)
	{
		if(num%i==0)
		break;
		else
		{
			if(i==(num-1))
			printf("%d\n",num);
		
		}
		
}
}
return 0;
}
