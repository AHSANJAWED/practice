#include<stdio.h>
#include<math.h>
int main()
{

	int a,b,b1,b2,b3,b4,b5;
	printf("Enter 5 digit no");
	scanf("%d",&a);
	b1=a%10;
	a=a/10;
	b2=a%10;
	a=a/10;
	b3=a%10;
	a=a/10;
	b4=a%10;
	a=a/10;
	b5=a%10;
	//a=a/10;
	b=b1+b2+b3+b4+b5;
	printf("sum=%d\n",b);
	
	
	return 0;
	
}
