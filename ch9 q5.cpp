#include<stdio.h>
#include<math.h>
void area(int *,int *,int *,int *);
int main()
{
	int a,b,c;
	int p;
	printf("Enter the sides of triangles\n");
	scanf("%d%d%d",&a,&b,&c);
	p=(a+b+c)/2;
	area(&a,&b,&c,&p);
}

void area(int *x,int *y,int *z,int *s)
{
//	float areaz;
	
		
	*s=(*s(*s-*x)(*s-*y)(*s-*z));
   printf("area=%f\n",*s);	
}

