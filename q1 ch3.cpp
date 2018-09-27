#include<stdio.h>
int main()
{
int cp,sp,profit,loss;

printf("Enter cp and sp");
scanf("%d%d",&cp,&sp);

if(sp<=cp)
{
	loss=cp-sp;
	printf("loss=%d\n",loss);
}
else
{
	profit=sp-cp;
	printf("profit=%d\n",profit);
}
	return 0;
}
