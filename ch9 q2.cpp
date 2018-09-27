#include<stdio.h>
void exam(int,int,int,int *,float *);
int main()
{
	int sm1,sm2,sm3,avg;
	float percent;
	printf("Enter the marks of all the three subjects\n");
	scanf("%d%d%d",&sm1,&sm2,&sm3);
	exam(sm1,sm2,sm3,&avg,&percent);
	printf("Average=%d\n",avg);
	printf("Percenatage=%f\n",percent);
	return 0;
}

void exam(int s1,int s2,int s3,int *a,float *p)
{
	*a=(s1+s2+s3)/3;
	*p=*a*100;
	
	
}
