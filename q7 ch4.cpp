#include<stdio.h>
int main()
{
	int R,G,B;
	float white,C,M,Y,K;
	printf("Enter R,G,B values(0=225)\n");
	scanf("%d%d%d",&R,&G,&B);
	int r=R/255; int g=G/255; int b=B/255;
	if(r>g && r>b)
	{
		white=r;
		C=(white-R/255)/white;
	M=(white-G/255)/white;
	Y=(white-G/255)/white;
	K=1-white;
	printf("C=%f\nM=%f\nY=%f\nk=%f\n",C,M,Y,K);
	}
	else if(g>r&& g>b)
	{
		white=g;
		C=(white-R/255)/white;
	M=(white-G/255)/white;
	Y=(white-G/255)/white;
	K=1-white;
	printf("C=%f\nM=%f\nY=%f\nk=%f\n",C,M,Y,K);
		
	}
	else if(b>r&& b>g)
	{
		white=b;
		C=(white-R/255)/white;
	M=(white-G/255)/white;
	Y=(white-G/255)/white;
	K=1-white;
	printf("C=%f\nM=%f\nY=%f\nk=%f\n",C,M,Y,K);
	}
	else
	{
		white=0; R=0;G=0;B=0,C=0,M=0,Y=0,K=1;
		 	printf("C=%f\nM=%f\nY=%f\nk=%f\n",C,M,Y,K);
	}
	
	
	return 0;
}
