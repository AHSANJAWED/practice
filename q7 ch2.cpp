#include<stdio.h>
#include<math.h>
int main()
{
	int value,cosv,sinv,tanv;
	printf("Enter the angle");
	scanf("%d",&value);
	cosv=cos(value);
	sinv=sin(value);
	tanv=tan(value);
	printf("cos=%d\n sin=%d\n tan=%d\n",cosv,sinv,tanv);
	return 0;
	
}
